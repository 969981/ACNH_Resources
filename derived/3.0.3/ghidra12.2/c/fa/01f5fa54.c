
void FUN_01f5fa54(long param_1)

{
  float *pfVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_50;
  char *pcStack_48;
  
  uVar3 = FUN_01f5f898();
  if ((uVar3 & 1) == 0) {
    pfVar1 = (float *)(param_1 + 0x56ec);
    if (((*pfVar1 != 0.0) || (*(float *)(param_1 + 0x56f0) != 0.0)) ||
       (*(float *)(param_1 + 0x56f4) != 0.0)) {
      FUN_020d1018(param_1 + 0x8998);
      if ((*(byte *)(param_1 + 0xaa44) >> 2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0xaa44) >> 5 & 1) == 0) {
          return;
        }
        pfVar1[0] = 0.0;
        pfVar1[1] = 0.0;
        *(undefined4 *)(param_1 + 0x56f4) = 0;
      }
    }
    iVar2 = *(int *)(param_1 + 0x77b4);
    if ((0 < *(int *)(param_1 + 0x787c)) && (*(int *)(param_1 + 0x787c) <= iVar2)) {
      FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
      return;
    }
    FUN_01e6648c(param_1,99,param_1 + 0x7800,*(undefined1 *)(param_1 + 0x7b41));
    if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "ApproachUpdateStop";
      FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_50,1);
    }
    if (*(char *)(param_1 + 0x13716) != '\0') {
      *(undefined1 *)(param_1 + 0x13716) = 0;
    }
    *(int *)(param_1 + 0x77b4) = iVar2;
    *(undefined4 *)(param_1 + 0x1367c) = 0xffffffff;
  }
  return;
}

