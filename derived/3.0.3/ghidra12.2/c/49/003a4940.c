
void FUN_003a4940(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *(long *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x28);
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) & 0xfffe;
  FUN_003a9768(param_1,*(undefined4 *)(param_2 + 0x40),*(uint *)(param_2 + 4) >> 2 & 1);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 0x4c);
  iVar1 = *(int *)(param_2 + 0x44);
  *(int *)(param_1 + 0x3c) = iVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)PTR_DAT_04bd09b0;
  if ((0 < iVar1) && (iVar1 <= *(int *)(param_1 + 0x38))) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar2) = 0x7f800000;
      lVar2 = lVar2 + 0xc;
    } while (lVar3 < *(int *)(param_1 + 0x3c));
  }
  return;
}

