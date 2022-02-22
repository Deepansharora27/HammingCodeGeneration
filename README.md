### The Motivation Behind using Hamming Code in the First Place 

The Basic Intuition behind using Hamming Codes is to correct and detect the Errors while transmitting Data Bits from Sender to the Receiver over
a Network.

Let's assume that there are two Parties A and B. A wants to send a stream of Data Bits to User B.

A makes the transfer to User B but due to some noise/disturbance in the Network, the Data Bits gets tweaked and as a result, the Receiver B receives a different 
stream of Data Bits which was different from what was transferred by User A.

Here, Hamming Code/Hamming Bits comes to the Rescue. Hamming Bits is basically a set of redundant bits that we send along our original data stream 
which helps us in verifying whether the Data that is received at the Receiver's end is correct or not.


