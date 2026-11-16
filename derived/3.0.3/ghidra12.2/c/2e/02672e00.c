
int FUN_02672e00(byte *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte local_24 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
       ((lVar3 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar3 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar3 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar3 + (ulong)uVar2 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_24[0] = *param_1;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar3 = FUN_025830c0(DAT_055021a0,local_24,1);
    if (lVar3 != 0) {
      lVar7 = lVar3 + 0x194b0;
      if (*(long *)(lVar3 + 0x194b8) == 0) {
        lVar7 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar7 + 0x98) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x98), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      lVar3 = *(long *)(lVar7 + 0x80) + *(long *)(lVar7 + 0x78);
      uVar5 = *(uint *)(lVar3 + 0x158);
      uVar6 = *(uint *)(lVar3 + 0xa0);
      if (0x13 < uVar5) {
        uVar5 = 0x14;
      }
      if (0x13 < uVar6) {
        uVar6 = 0x14;
      }
      iVar1 = uVar6 + uVar5;
      if ((uVar2 & 1) != 0) {
        return iVar1;
      }
      if (*(long *)(lVar7 + 0x98) == 0) {
        return iVar1;
      }
      puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x98) + 8);
      if (puVar4 == (undefined8 *)0x0) {
        return iVar1;
      }
      (**(code **)*puVar4)();
      return iVar1;
    }
  }
  return 0;
}

