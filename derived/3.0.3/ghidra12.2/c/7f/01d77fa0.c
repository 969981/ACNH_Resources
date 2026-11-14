
undefined1 FUN_01d77fa0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  uVar4 = FUN_01d77c78();
  if ((((uVar4 & 1) != 0) &&
      (uVar4 = FUN_01d77c78(param_1), puVar2 = PTR_DAT_04bb7bc0, (uVar4 & 1) != 0)) &&
     (*(char *)(param_1 + 0xc) == '\0')) {
    bVar3 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
    *(byte *)(param_1 + 0xc) = bVar3 & 1;
    if ((bVar3 & 1) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 8) == 3) {
      return 0;
    }
    lVar5 = FUN_01dff648(*(undefined8 *)puVar2,param_1);
    if (lVar5 == 0) {
      return 0;
    }
    lVar7 = *(long *)(*(long *)puVar2 + 0x270);
    if (lVar7 != 0) {
      uVar4 = (ulong)*(uint *)(lVar7 + 0x10);
      uVar6 = 0;
      if (1 < *(uint *)(lVar7 + 0x10)) {
        uVar4 = 0;
      }
      lVar7 = *(long *)(lVar7 + uVar4 * 8);
      do {
        if ((*(uint *)(lVar7 + 0x28) & ((int)*(uint *)(lVar7 + 0x28) >> 0x1f ^ 0xffffffffU)) ==
            uVar6) {
          return 0;
        }
        uVar1 = uVar6;
        if (*(uint *)(lVar7 + 0x10) <= uVar6) {
          uVar1 = 0;
        }
        uVar6 = uVar6 + 1;
      } while (*(long *)(*(long *)(lVar7 + 0x18) + (ulong)uVar1 * 0x58) != *(long *)(lVar5 + 8));
      return 1;
    }
  }
  return 0;
}

