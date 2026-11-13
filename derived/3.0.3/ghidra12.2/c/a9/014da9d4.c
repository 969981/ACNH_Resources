
void FUN_014da9d4(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)PTR_DAT_04bb27f0;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x43c) = *(uint *)(lVar2 + 0x43c) | 0x10;
  }
  if (*(int *)(param_4 + 0x738) != 0) {
    FUN_014e8e50(param_4 + 0x720);
  }
  lVar2 = param_4 + 0x720;
  uVar3 = FUN_014e8b30(lVar2);
  *(undefined4 *)(param_4 + 0xa3c) = uVar3;
  FUN_014e8b30(lVar2);
  *(undefined4 *)(param_4 + 0xa44) = param_3;
  if ((*(int *)(param_4 + 0x738) == 0) || (uVar1 = FUN_014e92f0(lVar2), (uVar1 & 1) != 0)) {
    FUN_014f2040(param_4 + 0x700);
    if (*(int *)(param_4 + 0x3c0) != 0) {
      FUN_03ebb160(param_4 + 0x3b8);
    }
  }
  return;
}

