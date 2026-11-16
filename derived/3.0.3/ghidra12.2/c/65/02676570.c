
int FUN_02676570(byte *param_1)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  short *psVar13;
  
  if (*param_1 < 8) {
    uVar5 = FUN_02582d8c(param_1,1);
    puVar4 = PTR_DAT_04bb4fb8;
    if ((((uVar5 < 8) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) &&
       ((uVar5 = FUN_02582d8c(param_1,1), uVar5 < 8 &&
        (*(char *)(*(long *)puVar4 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')))) {
      lVar7 = *(long *)puVar4 + (ulong)uVar5 * 0x13f0;
      if ((*(long **)(lVar7 + 0x12e8) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar7 + 0x12e8), puVar6 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar6)();
        uVar5 = uVar5 ^ 1;
      }
      lVar2 = *(long *)(lVar7 + 0x12d0) + *(long *)(lVar7 + 0x12c8);
      uVar9 = *(uint *)(lVar2 + 0x158);
      if (0x13 < uVar9) {
        uVar9 = 0x14;
      }
      if (uVar9 == 0) {
        iVar8 = 0;
      }
      else {
        if (uVar9 == 1) {
          uVar12 = 0;
          iVar8 = 0;
        }
        else {
          uVar12 = 0;
          iVar8 = 0;
          psVar13 = (short *)(lVar2 + 0xc0);
          do {
            psVar1 = psVar13 + -4;
            uVar12 = uVar12 + 2;
            sVar3 = *psVar13;
            psVar13 = psVar13 + 8;
            if (*psVar1 == -2) {
              iVar8 = iVar8 + 1;
            }
            if (sVar3 == -2) {
              iVar8 = iVar8 + 1;
            }
          } while (((ulong)uVar9 & 0x1e) != uVar12);
        }
        if (((uVar9 & 1) != 0) && (*(short *)(lVar2 + 0xb8 + uVar12 * 8) == -2)) {
          iVar8 = iVar8 + 1;
        }
      }
      uVar10 = *(uint *)(lVar2 + 0xa0);
      if (0x13 < uVar10) {
        uVar10 = 0x14;
      }
      if (uVar10 == 0) {
        iVar11 = 0;
      }
      else {
        if (uVar10 == 1) {
          uVar12 = 0;
          iVar11 = 0;
        }
        else {
          uVar12 = 0;
          iVar11 = 0;
          psVar13 = (short *)(lVar2 + 8);
          do {
            psVar1 = psVar13 + -4;
            uVar12 = uVar12 + 2;
            sVar3 = *psVar13;
            psVar13 = psVar13 + 8;
            if (*psVar1 == -2) {
              iVar11 = iVar11 + 1;
            }
            if (sVar3 == -2) {
              iVar11 = iVar11 + 1;
            }
          } while (((ulong)uVar10 & 0x1e) != uVar12);
        }
        if (((uVar10 & 1) != 0) && (*(short *)(lVar2 + uVar12 * 8) == -2)) {
          iVar11 = iVar11 + 1;
        }
      }
      iVar11 = ((uVar9 + uVar10) - iVar8) - iVar11;
      if ((uVar5 & 1) != 0) {
        return iVar11;
      }
      if (*(long *)(lVar7 + 0x12e8) == 0) {
        return iVar11;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x12e8) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return iVar11;
      }
      (**(code **)*puVar6)();
      return iVar11;
    }
  }
  return 0;
}

