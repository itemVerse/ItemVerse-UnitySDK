using SASEULAPI;

namespace ITEM_NET
{
    public class ItemNet
    {
        // SASEUL Request API
        public GetNFT GetNFT = GetNFT.Instance;
        public GetNFTCBalance GetNFTCBalance = GetNFTCBalance.Instance;
        public ListNFT ListNFT = ListNFT.Instance;
        public NFTCount NFTCount = NFTCount.Instance;

        // SASEUL Transaction API
        public CreateNFT CreateNFT = CreateNFT.Instance;
        public CreateNFTC CreateNFTC = CreateNFTC.Instance;
        public FaucetNFTC FaucetNFTC = FaucetNFTC.Instance;

        // SASEUL API
        public SendRequest SendRequest = SendRequest.Instance;
        public SendTransaction SendTransaction = SendTransaction.Instance;
        public SendRawTransaction SendRawTransaction = SendRawTransaction.Instance;
    }
}