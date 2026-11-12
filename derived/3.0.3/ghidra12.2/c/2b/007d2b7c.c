
void FUN_007d2b7c(int *param_1,ulong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  
  if (*param_1 == 1) {
    if (*(long *)(param_1 + 0xe) != 0x10) {
      nn::crypto::detail::CbcMacImpl::Update<nn::crypto::AesEncryptor<16ul>>
                (param_1 + 6,(ulong)PTR_DAT_04bb4af0);
      iVar5 = param_1[2];
      uVar2 = *(undefined1 *)((long)param_1 + 7);
      uVar3 = *(undefined1 *)((long)param_1 + 6);
      uVar4 = *(undefined1 *)((long)param_1 + 5);
      iVar6 = param_1[1];
      *(char *)(param_1 + 2) = (char)(CONCAT11((char)iVar5,*(undefined1 *)((long)param_1 + 9)) >> 7)
      ;
      *(char *)((long)param_1 + 7) = (char)(CONCAT11(uVar2,(char)iVar5) >> 7);
      *(char *)((long)param_1 + 6) = (char)(CONCAT11(uVar3,uVar2) >> 7);
      *(char *)((long)param_1 + 5) = (char)(CONCAT11(uVar4,uVar3) >> 7);
      *(char *)(param_1 + 1) = (char)(CONCAT41((int)(char)iVar6,uVar4) >> 7);
      *(char *)((long)param_1 + 9) =
           (char)(CONCAT11(*(undefined1 *)((long)param_1 + 9),*(undefined1 *)((long)param_1 + 10))
                 >> 7);
      *(char *)((long)param_1 + 10) =
           (char)(CONCAT11(*(undefined1 *)((long)param_1 + 10),*(undefined1 *)((long)param_1 + 0xb))
                 >> 7);
      *(char *)((long)param_1 + 0xb) =
           (char)(CONCAT11(*(undefined1 *)((long)param_1 + 0xb),(char)param_1[3]) >> 7);
      *(char *)(param_1 + 3) =
           (char)(CONCAT11((char)param_1[3],*(undefined1 *)((long)param_1 + 0xd)) >> 7);
      *(char *)((long)param_1 + 0xd) =
           (char)(CONCAT11(*(undefined1 *)((long)param_1 + 0xd),*(undefined1 *)((long)param_1 + 0xe)
                          ) >> 7);
      *(char *)((long)param_1 + 0xe) =
           (char)(CONCAT11(*(undefined1 *)((long)param_1 + 0xe),*(undefined1 *)((long)param_1 + 0xf)
                          ) >> 7);
      *(char *)((long)param_1 + 0xf) =
           (char)(CONCAT11(*(undefined1 *)((long)param_1 + 0xf),(char)param_1[4]) >> 7);
      *(char *)(param_1 + 4) =
           (char)(CONCAT11((char)param_1[4],*(undefined1 *)((long)param_1 + 0x11)) >> 7);
      *(char *)((long)param_1 + 0x11) =
           (char)(CONCAT11(*(undefined1 *)((long)param_1 + 0x11),
                           *(undefined1 *)((long)param_1 + 0x12)) >> 7);
      *(char *)((long)param_1 + 0x12) =
           (char)(CONCAT11(*(undefined1 *)((long)param_1 + 0x12),*(char *)((long)param_1 + 0x13)) >>
                 7);
      bVar7 = *(char *)((long)param_1 + 0x13) << 1;
      bVar1 = bVar7 ^ 0x87;
      if (-1 < (char)iVar6) {
        bVar1 = bVar7;
      }
      *(byte *)((long)param_1 + 0x13) = bVar1;
    }
    nn::crypto::detail::CbcMacImpl::MaskBufferedData(param_1 + 6,(ulong)(param_1 + 1));
    *param_1 = 2;
  }
  nn::crypto::detail::CbcMacImpl::GetMac(param_1 + 6,param_2);
  return;
}

