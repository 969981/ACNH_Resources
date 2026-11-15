
undefined8 FUN_01febce4(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_01fa6dd8();
  if (((((uVar2 & 1) == 0) && (4 < (int)param_1[0xef6] - 3U)) &&
      ((*(ushort *)(param_1 + 0x15a5) >> 8 & 1) == 0)) &&
     ((*(ushort *)((long)param_1 + 0xad2a) >> 8 & 1) == 0)) {
    uVar2 = (**(code **)(*param_1 + 0x5c0))(param_1);
    if ((uVar2 & 1) == 0) {
      if ((int)param_1[0x15f1] == 0) {
        return 0;
      }
    }
    else {
      if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4) {
          return 0;
        }
        if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5) {
          return 0;
        }
      }
      if (((byte)(&DAT_00001230)[*(long *)PTR_DAT_04bb4e28] >> 3 & 1) != 0) {
        return 0;
      }
    }
    if ((*(short *)((long)param_1 + 0xae84) != -2) &&
       (uVar2 = FUN_01fec550(param_1), (uVar2 & 1) == 0)) {
      iVar1 = FUN_0220f3c4(param_1[1] + 0x3e0,0);
      if (iVar1 == 3) {
        FUN_0220fa90(param_1 + 0x15a6);
        FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
        return 1;
      }
      uVar3 = FUN_01e9eef0(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}

