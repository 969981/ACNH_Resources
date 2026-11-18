
undefined8 FUN_034239e0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar5 = *(long *)puVar1;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      iVar3 = FUN_0277d6c4(param_1);
      if (iVar3 == 0x347f) {
        if ((param_2 & 1) == 0) {
          return 1;
        }
        uVar4 = FUN_03423b10(param_3);
        return uVar4;
      }
      lVar5 = *(long *)puVar1;
    }
  }
  uVar2 = FUN_0277d6c4(param_1);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      iVar3 = FUN_0277d6c4(param_1);
      if (iVar3 != 0x39e4) {
        return 0;
      }
      if ((param_2 & 1) == 0) {
        return 1;
      }
      uVar4 = FUN_03423be0(param_3);
      return uVar4;
    }
  }
  return 0;
}

