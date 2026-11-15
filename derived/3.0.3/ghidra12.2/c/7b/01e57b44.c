
undefined2 * FUN_01e57b44(long param_1)

{
  undefined2 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb43c0;
  if ((*(int *)(param_1 + 0x360) == 0xc) && (*(int *)(*(long *)(param_1 + 0x370) + 8) != 0)) {
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_1 + 0x5f8);
    if (*(long *)puVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        puVar1 = (undefined2 *)(param_1 + 0x600);
        if (*(undefined2 **)(param_1 + 0x5a8) != (undefined2 *)0x0) {
          puVar1 = *(undefined2 **)(param_1 + 0x5a8);
        }
        return puVar1;
      }
    }
  }
  puVar2 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x340) + 0x1480);
  if (*(char *)(lVar5 + 0x1d5) != '\0') {
    puVar1 = (undefined2 *)(lVar5 + 0xcc);
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(puVar1);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        return puVar1;
      }
    }
    iVar4 = FUN_0277d6c4(puVar1);
    if (iVar4 == 0xfffd) {
      return &DAT_05586008;
    }
  }
  return (undefined2 *)(lVar5 + 0xd4);
}

