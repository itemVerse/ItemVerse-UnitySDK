using System;

namespace SASEULAPI
{
    public class SaseulUtil
    {
        private static SaseulUtil _instance = null;
        public static SaseulUtil Instance
        {
            get
            {
                if (_instance == null) { _instance = new SaseulUtil(); }
                return _instance;
            }
        }

        public void SetNetwork(ItemNetStatus.NetType netType)
        {
            ItemNetStatus.Instance.netType = netType;

            switch (netType)
            {
                case ItemNetStatus.NetType.main:
                    ItemNetStatus.Instance._url = ItemNetStatus.Instance.mainUrl;
                    break;
                case ItemNetStatus.NetType.etc:
                    ItemNetStatus.Instance._url = ItemNetStatus.Instance.etcUrl;
                    break;
            }
        }

        public void CheckEnterValue(string value)
        {
            try
            {
                // check value length
                if (value.Length < 1) throw new Exception("don't entered value");
            }
            catch (Exception e)
            {
                throw e;
            }
        }

        public void CheckPrivateKey(string privateKey)
        {
            try
            {
                // check privateKey length
                if (privateKey.Length != 64) throw new Exception("invalid privateKey length, must be privateKey length 64");
            }
            catch (Exception e)
            {
                throw e;
            }
        }

        public void CheckPublickey(string publicKey)
        {
            try
            {
                // check publicKey length
                if (publicKey.Length != 64) throw new Exception("invalid publicKey length, must be publicKey length 64");
            }
            catch (Exception e)
            {
                throw e;
            }
        }

        public void CheckAddress(string address)
        {
            try
            {
                // check address length
                if (address.Length != 48) throw new Exception("invalid address length, must be address length 48");
                // check address 0x
                if (address.Substring(0, 2) != "0x") throw new Exception("address does not started with 0x");
            }
            catch (Exception e)
            {
                throw e;
            }
        }

        public void CheckNFTUUID(string nftuuid)
        {
            try
            {
                // check nftuuid length
                if (nftuuid.Length < 1) throw new Exception("invalid nftuuid length");
                // check nftuuid 0x
                if (nftuuid.Substring(0, 2) != "0x") throw new Exception("nftuuid does not started with 0x");
            } catch(Exception e)
            {
                throw e;
            }
        }
    }
}
