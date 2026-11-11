
void FUN_003aaf10(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  *(long *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x28);
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) & 0xfffe;
  FUN_003a9768(param_1,*(undefined4 *)(param_2 + 0x58),*(ushort *)(param_2 + 4) >> 2 & 1);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 0x62);
  uVar1 = *(ushort *)(param_2 + 100);
  uVar5 = *(undefined4 *)PTR_DAT_04bd09b0;
  *(uint *)(param_1 + 0x3c) = (uint)uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  if ((uVar1 != 0) && ((int)(uint)uVar1 <= *(int *)(param_1 + 0x38))) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar2) = 0x7f800000;
      lVar2 = lVar2 + 0xc;
    } while (lVar3 < *(int *)(param_1 + 0x3c));
  }
  uVar4 = (ulong)*(ushort *)(*(long *)(param_1 + 0x68) + 0x6c);
  if (uVar4 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar3) =
           *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x30) + lVar3);
      *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar3) =
           *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x50) + lVar3);
      lVar3 = lVar3 + 8;
    } while (uVar4 * 8 != lVar3);
  }
  return;
}

