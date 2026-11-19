
uint FUN_03bfaa50(long param_1)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long *plVar16;
  int local_60 [8];
  
  lVar6 = DAT_04c60f48;
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 == 2) {
    if ((*(byte *)(*(long *)(DAT_05ae6a60 + 0x40) + 0x250) >> 1 & 1) != 0) {
LAB_03bfac38:
      return (uint)(DAT_04c60f48 != 0);
    }
  }
  else if (iVar9 == 1) {
    if ((*(ushort *)(*(long *)(DAT_05ae6a60 + 0x48) + 0x48) & 1) != 0) goto LAB_03bfac38;
  }
  else {
    if (iVar9 != 0) {
      return 0;
    }
    if ((*(byte *)(*(long *)(DAT_05ae6a60 + 0x38) + 0x280) >> 1 & 1) == 0) {
      return 0;
    }
    if (DAT_04c60f48 == 0) {
      return 0;
    }
    if (*(char *)(*(long *)(DAT_05ae6a60 + 0x38) + 0x2ac) == '\0') {
      return 1;
    }
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 0;
    lVar11 = *(long *)(*(long *)(DAT_05ae6a60 + 0x68) + 0xf8);
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    iVar9 = *(int *)(lVar11 + 0x28);
    if (iVar9 != 0) {
      plVar16 = *(long **)(lVar11 + 0x30);
      uVar15 = 0;
      plVar1 = plVar16 + iVar9;
      do {
        if ((*(int *)(*plVar16 + 8) != 3) &&
           (iVar9 = FUN_0029cb30(lVar6,*(undefined8 *)(*plVar16 + 0x10)), iVar9 != 0)) {
          uVar10 = (ulong)uVar15;
          if (0 < (int)uVar15) {
            if (uVar15 < 4) {
              uVar12 = 0;
              bVar7 = true;
            }
            else {
              uVar12 = 0;
              bVar7 = true;
              piVar14 = local_60;
              do {
                piVar5 = piVar14;
                if (7 < uVar12) {
                  piVar5 = local_60;
                }
                piVar2 = piVar14 + 1;
                if (7 < uVar12 + 1) {
                  piVar2 = local_60;
                }
                piVar3 = piVar14 + 2;
                if (7 < uVar12 + 2) {
                  piVar3 = local_60;
                }
                piVar4 = piVar14 + 3;
                if (7 < uVar12 + 3) {
                  piVar4 = local_60;
                }
                uVar12 = uVar12 + 4;
                piVar14 = piVar14 + 4;
                bVar7 = (bool)((((*piVar4 != iVar9 && *piVar3 != iVar9) && *piVar2 != iVar9) &&
                               *piVar5 != iVar9) & bVar7);
              } while (uVar12 != (uVar10 & 0xfffffffc));
            }
            uVar13 = uVar10 & 3;
            if ((uVar15 & 3) != 0) {
              piVar14 = local_60 + uVar12;
              do {
                bVar8 = 7 < uVar12;
                uVar12 = uVar12 + 1;
                piVar5 = piVar14;
                if (bVar8) {
                  piVar5 = local_60;
                }
                piVar14 = piVar14 + 1;
                uVar13 = uVar13 - 1;
                bVar7 = (bool)(*piVar5 != iVar9 & bVar7);
              } while (uVar13 != 0);
            }
            if (!bVar7) goto LAB_03bfaaf0;
          }
          bVar7 = 7 < uVar15;
          uVar15 = uVar15 + 1;
          if (bVar7) {
            uVar10 = 0;
          }
          local_60[uVar10] = iVar9;
        }
LAB_03bfaaf0:
        plVar16 = plVar16 + 1;
        if (plVar16 == plVar1) {
          return uVar15;
        }
      } while( true );
    }
  }
  return 0;
}

