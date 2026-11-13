
undefined8 FUN_0102598c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar3 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if (uVar2 < *(uint *)(lVar3 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
        return 1;
      }
      **(undefined1 **)(param_1 + 8) = 1;
      return 0;
    }
  }
  return 1;
}

