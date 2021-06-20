# ItemNet Unity SDK

### SDK 소개

블록체인 게임개발을 위한 통합 블록체인 sdk입니다. 게임 내 재화 관리, 게임 아이템 및 유저의 정보 저장등 게임에 사용되는 모든데이터들을 블록체인으로 안전하게 관리할 수 있습니다. 이더리움 및 사슬 블록체인을 지원합니다.

#### Ethereum

이더리움의 이더와 erc20 토큰을 사용하여 게임 내 재화를 대신 할 수 있고, erc721(NFT) 토큰을 사용하여 게임 내 오브젝트들을 관리 할 수 있습니다. 하지만 이더리움을 게임에 사용하는건 적합하지 않습니다. 이더리움을 게임에 사용할때 아래와 같은 문제점이 있으니 꼭 고려하시기 바랍니다.

1. 이더리움 송금, 토큰 생성, 토큰 전송, 데이터 저장등 모든 작업에 이더리움 수수료가 발생하여 큰 부담이 됩니다.
2. 이더리움에 데이터가 저장되는 시간은 기본적으로 1분이상이 소요되어 게임과 같은 플랫폼에서는 적합하지 않습니다.
3. 이더리움 네트워크 상태에 따라 송금, 데이터 업로드등의 작업들이 자주 실패할때가 있습니다.
4. 이미지 데이터와 같이 용량이 큰 데이터는 저장할 수 없습니다.

#### Saseul

사슬은 이전 블록체인들의 고질적인 문제를 해결한 3세대 블록체인 엔진입니다. 이전 블록체인과 아래와같은 차이점이 있으며 사슬에 대해 더 자세히 알아보고싶다면 www.saseul.com을 방문하시길 바랍니다.

1. 토큰 생성, 토큰 송금, 데이터 저장등 모든 기능들이 수수료없이 무료
2. erc20, erc721(NFT)등 기존의 블록체인 기능들 모두 사용 가능
3. 1초 미만에 데이터 업로드 소요시간
4. 최대 20mb까지 데이터 저장 가능
5. 안정적인 네트워크와 지속적인 업데이트 및 관리

------

### 사양

- Unity
  - 2019.4(LTS)
  - 2020.3(LTS)
  - 2021.1
- Platform
  - Android
  - IOS
  - MacOs
  - Windows
- Etc
  - .NET 4.X

------

### 설치

1. ItemNet 유니티 패키지를 설치합니다.

2. 유니티 프로젝트를 열고 ItemNet 유니티 패키지를 임포트합니다.
   - 2020.3(LTS), 2021.1 버전에서는 Plugins 폴더의 Newtonsoft.Json.dll을 제외합니다. 이 버전들에서는 기본적으로 collab-proxy(유니티 콜라보레이터) 패키지가 설치되는데 이 패키지가 Newtonsoft.Json.dll을 포함하고 있어 플러그인 충돌문제가 발생하기 때문입니다.
   
     <img src="https://user-images.githubusercontent.com/49587288/122674994-7b037300-d212-11eb-8dd0-c88775f9107a.png"/>
   
3. Scenes 폴더에서 "Demo" Scene을 열어줍니다.

4. ItemNetStatus, ItemNetExample, IEthereumStatus, IEthereumExample 오브젝트의 Inspector 뷰에서 네트워크 및 테스트 데이터 설정을 할 수 있습니다.

   - 이더리움 설정
     - 이더리움 네트워크 설정

       <img src="https://user-images.githubusercontent.com/49587288/122644965-c22a2f00-d152-11eb-87a4-421d16ede7cf.png"/>

       위에 이미지와 같이 "IEthereumStatus" 오브젝트를 선택하면 Inspector 뷰에 이더리움 네트워크 설정값이 나옵니다. 아래의 옵션 설명을 참고하여 설정해주세요.

       옵션
       - NetType: "ropsten", "main", "etc" 셋중 하나의 값을 입력해주시면됩니다.
         - ropsten: 이더리움의 Ropsten 테스트 네트워크입니다.
         - main: 이더리움의 메인 네트워크입니다.
         - etc: 사용자의 커스텀 네트워크입니다.
       - Main Infura Url, Ropsten Infura Url
         - Infura(www.infura.io)에 가입하여 각 네트워크의 rpc url을 입력해주세요.
     - 이더리움 테스트 데이터 설정

       ![스크린샷 2021-06-19 오후 8.14.03](https://user-images.githubusercontent.com/49587288/122644978-d3733b80-d152-11eb-80e0-1eaeee18d347.png)

       위에 이미지와 같이 "IEthereumExample" 오브젝트를 선택하면 Inspector 뷰에 이더리움 테스트 데이터 설정값이 나옵니다. 아래의 옵션 설명을 참고하여 설정해주세요.

       옵션
       - PrivateKey: 내 이더리움 계정의 개인키입니다.
       - Address: 내 이더리움 계정의 주소입니다.
       - To Address: 상대 이더리움 계정의 주소입니다.
       - Token Amount: ERC20 토큰의 송금 양입니다.
       - ERC721 Token Id: ERC721 토큰 ID 입니다.
       - ERC721 Token Index: ERC721 토큰 인덱스 검색에 사용되는 인덱스 값입니다.
       - Block Number: 블럭을 숫자로 검색할때 사용되는 값입니다.
       - Transaction Hash: 트랜잭션을 조회할때 사용되는 값입니다.
       - ERC20 ContractAddress: ERC20 토큰의 컨트랙트 어드레스입니다.
       - ERC721 ContractAddress: ERC721 토큰의 컨트랙트 어드레스입니다.
   - 사슬 설정
     - 사슬 네트워크 설정

       ![스크린샷 2021-06-19 오후 9.29.23](https://user-images.githubusercontent.com/49587288/122645014-f998db80-d152-11eb-9b64-a80952f6fbd7.png)

       위에 이미지와 같이 "ItemNetStatus" 오브젝트를 선택하면 Inspector 뷰에 사슬 네트워크 설정값이 나옵니다. 아래의 옵션 설명을 참고하여 설정해주세요.

       옵션
       - NetType: "main", "etc" 둘중 하나의 값을 입력해주시면됩니다.
         - main: 사슬의 메인 네트워크입니다.
         - etc: 추가로 사슬 네트워크를 등록하고싶을때 사용하시면됩니다.
       - Main Url, Etc Url
         - ItemNet Explorer(http://explorer.itemverse.io/)에 접속하여 각 네트워크의 url을 입력해주세요.
       - Version
         - 사용하고싶은 사슬의 버전을 입력하시면됩니다. 버전정보는 ItemNet Explorer(http://explorer.itemverse.io/) 또는 ItemNet 공식 깃허브에서 확인하실 수 있습니다.
     - 사슬 테스트 데이터 설정

       ![스크린샷 2021-06-19 오후 9.29.29](https://user-images.githubusercontent.com/49587288/122645035-1a613100-d153-11eb-9821-c653e78b455e.png)

       위에 이미지와 같이 "ITemNetExample" 오브젝트를 선택하면 Inspector 뷰에 사슬 테스트 데이터 설정값이 나옵니다. 아래의 옵션 설명을 참고하여 옵션을 설정해주세요.

       옵션
       - PrivateKey: 내 사슬 계정의 개인키입니다.
       - PublicKey: 내 사슬 계정의 공개키입니다.
       - Address: 내 사슬 계정의 주소입니다.
       - NFTUUID: ERC721(NFT) 토큰의 아이디입니다.
       - Page: LIstNFT 기능에 사용되는 옵션입니다. 출력 페이지를 지정합니다.
       - Count: LIstNFT 기능에 사용되는 옵션입니다. 출력 개수를 지정합니다.
       - Sort: LIstNFT 기능에 사용되는 옵션입니다. 정렬 타입을 지정합니다.
         - "1": 오름차순
         - "-1": 내림차순
       - NFT Class: ERC721(NFT) 토큰 생성에 사용됩니다. 토큰의 그룹명입니다.
       - NFT Name: ERC721(NFT) 토큰 생성에 사용됩니다. 토큰의 이름입니다.
       - NFT Thumbnail: ERC721(NFT) 토큰 생성에 사용됩니다. 토큰의 썸네일입니다.
       - NFT Description: ERC721(NFT) 토큰 생성에 사용됩니다. 토큰 설명입니다.
       - NFT Image: ERC721(NFT) 토큰 생성에 사용됩니다. 토큰의 이미지입니다.

5. Game 탭에서 화면 크기를 1024 x 768 사이즈로 맞춰주고 실행합니다.

   ![스크린샷 2021-06-19 오후 9.56.51](https://user-images.githubusercontent.com/49587288/122645047-2baa3d80-d153-11eb-8233-a47a686a501e.png)

6. 버튼들을 클릭하여 Ethereum, Saseul 블록체인 기능들을 테스트해보세요. Change 버튼을 눌러서 테스트할 블록체인을 변경할 수 있으며 Copy 버튼을 눌러서 전체 결과를 복사할 수 있습니다.

   ![스크린샷 2021-06-19 오후 9.58.01](https://user-images.githubusercontent.com/49587288/122645058-3a90f000-d153-11eb-8717-1ecdb239ecfa.png)

7. 이더리움 테스트에 유용한 사이트입니다.
   1. 테스트 이더리움 발급: https://faucet.ropsten.be/
   2. 테스트 이더리움 토큰 발급: https://af.faucet.api.itemverse.io/fauceterc20.html
   3. 테스트 이더리움 익스플로러: https://ropsten.etherscan.io/

8. 사슬 테스트에 유용한 사이트입니다.
   1. 사슬 익스플로러: https://explorer.itemverse.io/
   2. 사슬 공식 사이트: https://saseul.com/#/
   3. 개발사 사이트: https://artifriends.com/
   4. SDK 공식 소개 사이트: https://itemverse.io/

------

### FUNCTION API

#### 이더리움

- **예제:**  Script/IEthereumExample.cs
- **이더리움**
  - 작성중
- **ERC20**
  - 작성중
- **ERC721**
  - 작성중

#### 사슬

 - **예제:** Script/ItemNetExample.cs

 - **SendRequest**

    - Description

       - 사슬 api를 호출합니다.

   - Query Parameters

     - | Field       | Type   | Description     | Default Value |
       | ----------- | ------ | --------------- | ------------- |
       | requestData | string | api 호출 데이터 |               |

   - Response

     - | Field  | Type   | Description    | Default Value |
       | ------ | ------ | -------------- | ------------- |
       | result | string | api 호출 결과  |               |
       | status | bool   | 요청 성공 여부 |               |

 - **SendTransaction**

    - Description

       - 사슬에 트랜잭션을 전송합니다.

   - Query Parameters

     - | Field           | Type   | Description              | Default Value |
       | --------------- | ------ | ------------------------ | ------------- |
       | privateKey      | string | 트랜잭션을 사인할 개인키 |               |
       | transactionData | string | 트랜잭션 데이터          |               |

   - Response

     - | Field  | Type   | Description        | Default Value |
       | ------ | ------ | ------------------ | ------------- |
       | result | string | 트랜잭션 전송 결과 |               |
       | status | bool   | 요청 성공 여부     |               |

 - **SendRawTransaction**

    - Description

       - 사슬에 사인된 트랜잭션을 전송합니다.

   - Query Parameters

     - | Field       | Type   | Description     | Default Value |
       | ----------- | ------ | --------------- | ------------- |
       | transaction | string | 사인된 트랜잭션 |               |
       | thash       | string | 트랜잭션 해쉬   |               |
       | publicKey   | string | 공유키          |               |
       | signature   | string | 사인            |               |

   - Response

     - | Field  | Type   | Description             | Default Value |
       | ------ | ------ | ----------------------- | ------------- |
       | result | string | 사인 트랜잭션 전송 결과 |               |
       | status | bool   | 요청 성공 여부          |               |
