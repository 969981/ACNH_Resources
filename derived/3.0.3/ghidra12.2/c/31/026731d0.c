
int FUN_026731d0(byte *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  short *psVar10;
  long lVar11;
  byte local_24 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar3 = FUN_02582d8c(param_1,1), uVar3 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar3 = FUN_02582d8c(param_1,1), uVar3 < 8)) &&
       ((lVar4 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar4 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar4 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar4 + (ulong)uVar3 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_24[0] = *param_1;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar4 = FUN_025830c0(DAT_055021a0,local_24,1);
    if (lVar4 != 0) {
      lVar11 = lVar4 + 0x194b0;
      if (*(long *)(lVar4 + 0x194b8) == 0) {
        lVar11 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar11 + 0x98) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar11 + 0x98), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      lVar4 = *(long *)(lVar11 + 0x80) + *(long *)(lVar11 + 0x78);
      uVar7 = *(uint *)(lVar4 + 0x158);
      if (0x13 < uVar7) {
        uVar7 = 0x14;
      }
      if (uVar7 == 0) {
        iVar6 = 0;
      }
      else {
        if (uVar7 == 1) {
          uVar9 = 0;
          iVar6 = 0;
        }
        else {
          uVar9 = 0;
          iVar6 = 0;
          psVar10 = (short *)(lVar4 + 0xc0);
          do {
            psVar1 = psVar10 + -4;
            uVar9 = uVar9 + 2;
            sVar2 = *psVar10;
            psVar10 = psVar10 + 8;
            if (*psVar1 == -2) {
              iVar6 = iVar6 + 1;
            }
            if (sVar2 == -2) {
              iVar6 = iVar6 + 1;
            }
          } while (((ulong)uVar7 & 0x1e) != uVar9);
        }
        if (((uVar7 & 1) != 0) && (*(short *)(lVar4 + 0xb8 + uVar9 * 8) == -2)) {
          iVar6 = iVar6 + 1;
        }
      }
      uVar7 = *(uint *)(lVar4 + 0xa0);
      if (0x13 < uVar7) {
        uVar7 = 0x14;
      }
      if (uVar7 == 0) {
        iVar8 = 0;
      }
      else {
        if (uVar7 == 1) {
          uVar9 = 0;
          iVar8 = 0;
        }
        else {
          uVar9 = 0;
          iVar8 = 0;
          psVar10 = (short *)(lVar4 + 8);
          do {
            psVar1 = psVar10 + -4;
            uVar9 = uVar9 + 2;
            sVar2 = *psVar10;
            psVar10 = psVar10 + 8;
            if (*psVar1 == -2) {
              iVar8 = iVar8 + 1;
            }
            if (sVar2 == -2) {
              iVar8 = iVar8 + 1;
            }
          } while (((ulong)uVar7 & 0x1e) != uVar9);
        }
        if (((uVar7 & 1) != 0) && (*(short *)(lVar4 + uVar9 * 8) == -2)) {
          iVar8 = iVar8 + 1;
        }
      }
      iVar8 = iVar8 + iVar6;
      if ((uVar3 & 1) != 0) {
        return iVar8;
      }
      if (*(long *)(lVar11 + 0x98) == 0) {
        return iVar8;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar11 + 0x98) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return iVar8;
      }
      (**(code **)*puVar5)();
      return iVar8;
    }
  }
  return 0;
}

