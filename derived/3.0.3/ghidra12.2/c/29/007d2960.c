
void FUN_007d2960(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 ulong param_5,bool param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint5 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  AesImpl<16ul> aAStack_168 [176];
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  AesImpl<16ul> *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  
  local_b8 = 0;
  local_80 = 0;
  local_68 = 0;
  nn::crypto::detail::AesImpl<16ul>::Initialize(aAStack_168,param_5,param_6);
  local_ac = 0;
  local_b4 = 0;
  nn::crypto::detail::AesImpl<16ul>::EncryptBlock
            (aAStack_168,(ulong)&local_b4,&DAT_00000010,(ulong)&local_b4);
  uVar11 = local_ac;
  uVar10 = local_b4;
  iVar12 = (int)(char)local_b4;
  uVar2 = CONCAT11(local_b4._1_1_,local_b4._2_1_);
  uVar9 = CONCAT41(iVar12,local_b4._1_1_);
  uVar3 = CONCAT11(local_b4._2_1_,local_b4._3_1_);
  local_b4._5_1_ = SUB81(uVar10,5);
  uVar4 = CONCAT11(local_b4._3_1_,local_b4._4_1_);
  uVar5 = CONCAT11(local_b4._4_1_,local_b4._5_1_);
  local_b4._6_1_ = SUB81(uVar10,6);
  uVar6 = CONCAT11(local_b4._5_1_,local_b4._6_1_);
  local_b4._7_1_ = SUB81(uVar10,7);
  uVar7 = CONCAT11(local_b4._6_1_,local_b4._7_1_);
  local_b4 = CONCAT17((char)(CONCAT11(local_b4._7_1_,(undefined1)local_ac) >> 7),
                      CONCAT16((char)(uVar7 >> 7),
                               CONCAT15((char)(uVar6 >> 7),
                                        CONCAT14((char)(uVar5 >> 7),
                                                 CONCAT13((char)(uVar4 >> 7),
                                                          CONCAT12((char)(uVar3 >> 7),
                                                                   CONCAT11((char)(uVar2 >> 7),
                                                                            (char)(uVar9 >> 7)))))))
                     );
  uVar2 = CONCAT11((undefined1)local_ac,local_ac._1_1_);
  uVar3 = CONCAT11(local_ac._1_1_,local_ac._2_1_);
  local_ac._3_1_ = SUB81(uVar11,3);
  uVar4 = CONCAT11(local_ac._2_1_,local_ac._3_1_);
  local_ac._4_1_ = SUB81(uVar11,4);
  uVar5 = CONCAT11(local_ac._3_1_,local_ac._4_1_);
  local_ac._5_1_ = SUB81(uVar11,5);
  uVar6 = CONCAT11(local_ac._4_1_,local_ac._5_1_);
  local_ac._6_1_ = SUB81(uVar11,6);
  uVar7 = CONCAT11(local_ac._5_1_,local_ac._6_1_);
  local_ac._7_1_ = SUB81(uVar11,7);
  uVar8 = CONCAT11(local_ac._6_1_,local_ac._7_1_);
  bVar1 = local_ac._7_1_ << 1 ^ 0x87;
  if (-1 < iVar12) {
    bVar1 = local_ac._7_1_ << 1;
  }
  local_ac = CONCAT17(bVar1,CONCAT16((char)(uVar8 >> 7),
                                     CONCAT15((char)(uVar7 >> 7),
                                              CONCAT14((char)(uVar6 >> 7),
                                                       CONCAT13((char)(uVar5 >> 7),
                                                                CONCAT12((char)(uVar4 >> 7),
                                                                         CONCAT11((char)(uVar3 >> 7)
                                                                                  ,(char)(uVar2 >> 7
                                                                                         ))))))));
  local_80 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_68 = 1;
  local_b8 = 1;
  puStack_70 = &LAB_007d2b64;
  local_78 = aAStack_168;
  nn::crypto::detail::CbcMacImpl::Update<nn::crypto::AesEncryptor<16ul>>
            ((CbcMacImpl *)&local_a0,param_3);
  FUN_007d2b7c(&local_b8,param_1,param_2);
  nn::crypto::detail::ClearMemory(&local_b8,0x58);
  nn::crypto::detail::CbcMacImpl::~CbcMacImpl((CbcMacImpl *)&local_a0);
  nn::crypto::detail::AesImpl<16ul>::~AesImpl(aAStack_168);
  return;
}

