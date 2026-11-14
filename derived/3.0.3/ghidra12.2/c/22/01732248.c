
undefined2 * FUN_01732248(long param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04bb43c0;
  if ((*(char *)(param_1 + 0x1d5) != '\0') && ((param_2 & 1) != 0)) {
    puVar1 = (undefined2 *)(param_1 + 0xcc);
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(puVar1);
    if (*(long *)puVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        return puVar1;
      }
    }
    iVar4 = FUN_0277d6c4(puVar1);
    if (iVar4 == 0xfffd) {
      return &DAT_05586008;
    }
  }
  return (undefined2 *)(param_1 + 0xd4);
}

