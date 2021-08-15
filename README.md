"# aether-miner" <br />
##Aether ERC20 Token Miner<br />
##Solves proof of work to mine supported ERC20 tokens.<br />

Commands :
"account new"            - Create a new account and local keystore (.0xbitcoin)<br />
"account list"           - List accounts (local keystore in .0xbitcoin or specified address)<br />
"account select 0x####"  - Select the active mining account by address<br />
"contract list"          - List the selected token contract to mine<br />
"contract select 0x####" - Select a PoW token contract to mine<br />

"config list"            - Show your current configuration<br />
"config gasprice #"      - Set the gasprice used to submit PoW in solo mining<br />
"config chain_id #"      - Set the chainid for different networks<br />
"config cpu_threads #"   - Set the number of CPU cores to use for mining<br />
"config web3provider http://----:####" - Set the web3 provider to submit PoW<br />

"pool mine"              - Begin mining into a pool using CPU<br />
"pool mine cuda"        - Begin mining into a pool using CUDA GPU<br />
"pool list"              - List the selected mining pool<br />
"pool select http://####.com:####" - Select a pool to mine into<br />

"mine"                   - Begin solo mining using CPU<br />
"mine cuda"              - Begin solo mining using CUDA GPU<br />

##Official Releases Downloads<br />
https://github.com/snappyswap/aether-miner/releases<br />

### Getting Started
1. Build a new mining account with 'account new'
2. View the private key with 'account list'
3. Write down these credentials
4. Select the contract you want with 'contract select 0x###'
5. Mine tokens with the command 'mine'

Note that IF SOLO MINING it is necessary to fill the mining account (if it is on the Ethereum network) with a small amount of ether.  Typically 0.005 eth is good enough to get started.  The ether is used for gas to make function calls to the token smart contract when your miner finds a solution to the Proof of Work.  When the gas is spent that means that you have found a solution! If you were the first to find it, you will be rewarded with the block reward.  (See the block explorer for typical gas prices at the current moment.)



### Pool Mining
- You can mine into a pool with the command 'pool mine'  
- When mining into a pool, your gasprice does not matter and you will pay NO GAS FEES  
- Every pool is different so consult each pool owner.  Typically, pools will offer a token withdraw mechanism or automatically send tokens to your address on a periodic basis or when a limit is reached



### Vault Datafiles

(requires 'show hidden files and folders')

Stored at:

- Windows
    '/Users/{user}/Appdata/Roaming/.0xbitcoin'
