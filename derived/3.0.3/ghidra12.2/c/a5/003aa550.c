
void FUN_003aa550(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  *(long *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x28);
  *(uint *)(param_1 + 0x74) = (uint)*(ushort *)(param_2 + 0x5a);
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) & 0xfffe;
  FUN_003a9768(param_1,*(undefined4 *)(param_2 + 0x50),*(ushort *)(param_2 + 4) >> 2 & 1);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 0x58);
  uVar1 = *(ushort *)(param_2 + 0x5a);
  uVar4 = *(undefined4 *)PTR_DAT_04bd09b0;
  *(uint *)(param_1 + 0x3c) = (uint)uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  if ((uVar1 != 0) && ((int)(uint)uVar1 <= *(int *)(param_1 + 0x38))) {
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

