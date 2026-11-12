
void FUN_00a77b40(byte *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_14 [4];
  
  lVar1 = DAT_04da4ab8;
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    piVar3 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  else {
    piVar3 = &DAT_04c9a0c8;
  }
  if (*piVar3 == 0) {
    local_14[0] = 0xff;
    if (**(char **)(PTR_DAT_04bc39e0 + 8) == '\0') {
      FUN_00a76460(DAT_04da4ab8,local_14,param_2,0x10,0x13,5);
    }
  }
  else if ((DAT_04da4ab8 != 0) && (*DAT_055c10d8 == '\0')) {
    iVar2 = FUN_00a74b78(param_1);
    FUN_00a76460(lVar1,param_1,param_2,iVar2 == 1,3,5);
    return;
  }
  return;
}

