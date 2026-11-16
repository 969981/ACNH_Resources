
undefined8 FUN_026b7d00(long param_1,undefined8 param_2,int *param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      iVar4 = 0;
      param_1 = param_1 + 0x112ec;
      do {
        uVar3 = FUN_0277d7b4(param_1 + (long)iVar4 * 0x4c,param_2);
        if ((((uVar3 & 1) != 0) && (*(int *)(param_1 + (long)iVar4 * 0x4c + 0x24) == *param_3)) &&
           (lVar5 = param_1 + (long)iVar4 * 0x4c,
           (*(long *)(param_3 + 1) == *(long *)(lVar5 + 0x28) &&
           *(long *)(param_3 + 3) == *(long *)(lVar5 + 0x30)) &&
           param_3[5] == *(int *)(lVar5 + 0x38))) {
          return 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x40);
    }
  }
  return 0;
}

