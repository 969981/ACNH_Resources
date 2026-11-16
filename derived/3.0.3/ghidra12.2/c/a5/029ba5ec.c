
undefined4 FUN_029ba5ec(undefined1 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  
  *param_1 = 0;
  uVar5 = *(uint *)(&DAT_0417da20 + (ulong)(param_2 - 0x61) * 4);
  uVar2 = uVar5 - 0xd;
  if (uVar2 == 0 || (int)uVar5 < 0xd) {
    bVar4 = uVar5 < (uint)DAT_055e9020 && DAT_055e9020._4_4_ != 0;
  }
  else {
    if ((param_3 - 0x7bU < 0xffffffe6) ||
       (uVar1 = *(uint *)(&DAT_0417da20 + (ulong)(param_3 - 0x61) * 4), 0xd < (int)uVar1)) {
      bVar4 = (uint)DAT_055e9020 != 0 && uVar2 <= DAT_055e9020._4_4_;
      bVar3 = (uint)DAT_055e9020 != 0 && DAT_055e9020._4_4_ == uVar2;
      uVar5 = (uint)DAT_055e9020 * uVar2;
    }
    else {
      *param_1 = 1;
      uVar5 = uVar1 + (uint)DAT_055e9020 * uVar2;
      bVar4 = uVar1 < (uint)DAT_055e9020 && uVar2 <= DAT_055e9020._4_4_;
      bVar3 = uVar1 < (uint)DAT_055e9020 && DAT_055e9020._4_4_ == uVar2;
    }
    bVar4 = bVar4 && !bVar3;
  }
  lVar6 = (long)(int)uVar5;
  if (!bVar4) {
    lVar6 = 0;
  }
  return *(undefined4 *)(DAT_055e9028 + lVar6 * 4);
}

