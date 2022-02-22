### The Motivation Behind using Hamming Code in the First Place 

The Basic Intuition behind using Hamming Codes is to correct and detect the Errors while transmitting Data Bits from Sender to the Receiver over
a Network.

Let's assume that there are two Parties A and B. A wants to send a stream of Data Bits to User B.

A makes the transfer to User B but due to some noise/disturbance in the Network, the Data Bits gets tweaked and as a result, the Receiver B receives a different 
stream of Data Bits which was different from what was transferred by User A.

Here, Hamming Code/Hamming Bits comes to the Rescue. Hamming Bits is basically a set of redundant bits that we send along our original data stream 
which helps us in verifying whether the Data that is received at the Receiver's end is correct or not.


### Why I chose this Topic and made Use Of Enarx Here ? 

Hypothetically, let’s assume that User A makes the transfer of the data bits to User B along with the redundant hamming bits embedded into it.
Now at the time when User A makes the transfer, User B is not available at that time on his system and thus the stream of data along with the redundant bits starts to get processed by his System's CPU.

Now, it can happen that while User B is not available on his System, someone from the external world can tamper into his System and thus can make amendments or can steal that stream of data.
Here, is where Enarx comes into the Picture


# Environment Setup 

To compile this Demo, you must install the following:

#### Rust

Go to [rust-lang.org](https://www.rust-lang.org/tools/install) and follow the instructions using rustup.

#### WebAssembly System Interface (WASI)

Install Wasmtime

```bash
curl https://wasmtime.dev/install.sh -sSf | bash
```

#### Wasmer 

 [Wasmer](https://docs.wasmer.io/) is an open-source runtime for executing WebAssembly on the Server.
 
#### Wasienv

[Wasienv](https://github.com/wasienv/wasienv) is a tool to compile different programming languages to WebAssembly, so you can run your programs on the
Browser, or in the Server.


#### Code 

```
 git clone https://github.com/Deepansharora27/HammingCodeGeneration.git
 cd HammingCodeGeneration
```

Since the Code has been written in C++, we need to figure out a way to generate a WebAssembly Binary which then we can deploy to an Enarx Keep.
That's why we will be using `wasienv` in order to generate a `.wasm` binary from this `cpp` file.

When you have your `cpp` file created, you can execute `wasic++`

```
 wasic++ HammingSourceCode -o Hamming.wasm
```

Now, you will have a new `Hamming.wasm` file ready in your Directory and thus now you can successfully deploy it in an Enarx Keep.
