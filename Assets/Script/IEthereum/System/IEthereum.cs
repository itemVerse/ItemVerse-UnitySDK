using IEthereumAPI;

namespace ITEM_NET
{
    public class IEthereum
    {
        // Ethereum API
        public GetBalance GetBalance = GetBalance.Instance;
        public GetBlockByNumber GetBlockByNumber = GetBlockByNumber.Instance;
        public GetLatestBlockNumber GetLatestBlockNumber = GetLatestBlockNumber.Instance;
        public GetTransactionByHash GetTransactionByHash = GetTransactionByHash.Instance;
        public GetTransactionReceipt GetTransactionReceipt = GetTransactionReceipt.Instance;
        public SendRawTransaction SendRawTransaction = SendRawTransaction.Instance;
        public Transfer Transfer = Transfer.Instance;

        // ERC20 API
        public ERC20_GetBalance ERC20_GetBalance = ERC20_GetBalance.Instance;
        public ERC20_Name ERC20_Name = ERC20_Name.Instance;
        public ERC20_Symbol ERC20_Symbol = ERC20_Symbol.Instance;
        public ERC20_TotalSupply ERC20_TotalSupply = ERC20_TotalSupply.Instance;
        public ERC20_Transfer ERC20_Transfer = ERC20_Transfer.Instance;

        // ERC721 API
        public ERC721_GetBalance ERC721_GetBalance = ERC721_GetBalance.Instance;
        public ERC721_Name ERC721_Name = ERC721_Name.Instance;
        public ERC721_OwnerOf ERC721_OwnerOf = ERC721_OwnerOf.Instance;
        public ERC721_Symbol ERC721_Symbol = ERC721_Symbol.Instance;
        public ERC721_TokenOfOwnerByIndex ERC721_TokenOfOwnerByIndex = ERC721_TokenOfOwnerByIndex.Instance;
        public ERC721_TokenURI ERC721_TokenURI = ERC721_TokenURI.Instance;
        public ERC721_TotalSupply ERC721_TotalSupply = ERC721_TotalSupply.Instance;
        public ERC721_Transfer ERC721_Transfer = ERC721_Transfer.Instance;
    }
}
