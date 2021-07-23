using SASEULAPI;

namespace ITEM_NET
{
    public class ItemNet
    {
        // SASEUL Example API
        public GetNFT GetNFT = GetNFT.Instance;
        public GetNFTCBalance GetNFTCBalance = GetNFTCBalance.Instance;
        public ListNFT ListNFT = ListNFT.Instance;
        public NFTCount NFTCount = NFTCount.Instance;
        public CreateNFT CreateNFT = CreateNFT.Instance;
        public FaucetNFTC FaucetNFTC = FaucetNFTC.Instance;

        // SASEUL API
        public SendRequest SendRequest = SendRequest.Instance;
        public SendTransaction SendTransaction = SendTransaction.Instance;
        public SendRawTransaction SendRawTransaction = SendRawTransaction.Instance;
    }
}