
undefined * FUN_03f1e960(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined *local_80;
  char *local_78;
  
  if (*(long *)(param_1 + 200) == param_1 + 0xc0) {
    return &DAT_04c56b68;
  }
  lVar11 = (long)*(int *)(param_1 + 0xd4);
  lVar13 = *(long *)(param_1 + 200) - lVar11;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
LAB_03f1e9dc:
  plVar5 = *(long **)(lVar13 + 0x158);
  if (plVar5 == (long *)0x0) {
    lVar6 = *(long *)(lVar13 + 0x148);
    if (lVar6 != 0) {
      if (*(int *)(lVar13 + 0x150) == *(int *)(lVar6 + 0x10)) {
        lVar8 = *(long *)(*(long *)(lVar6 + 0x120) + 8);
        lVar7 = *(long *)(lVar8 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar7 != 0)) {
          lVar8 = lVar8 + 0x70;
          lVar9 = lVar7;
          if (DAT_05aebc00 != '\0') {
            lVar9 = lVar8;
          }
          lVar9 = *(long *)(lVar9 + 8);
          if (((lVar9 != 0) && (*(uint *)(lVar9 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar9 + 0x18) + lVar9) == 0x101feff464e494d)) {
            if (DAT_05aebc00 == '\0') {
              lVar8 = lVar7;
            }
            plVar5 = (long *)((ulong)*(uint *)(*(long *)(lVar8 + 8) + 0x18) + *(long *)(lVar8 + 8));
            if (*plVar5 != 0x101feff464e494d) {
              plVar5 = (long *)0x0;
            }
            fVar14 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar5 + 0x1c));
            fVar15 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar5 + 0x14));
            if (1.0 <= fVar14 / fVar15) goto LAB_03f1e9c0;
          }
        }
      }
      if (*(int *)(lVar13 + 0x150) == *(int *)(lVar6 + 0x10)) {
        lVar8 = *(long *)(*(long *)(lVar6 + 0x120) + 8);
        lVar6 = *(long *)(lVar8 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar6 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar6 = lVar8 + 0x70;
          }
          lVar6 = *(long *)(lVar6 + 8);
          if (((lVar6 != 0) && (*(uint *)(lVar6 + 0x18) != 0)) &&
             (plVar5 = (long *)((ulong)*(uint *)(lVar6 + 0x18) + lVar6),
             *plVar5 == 0x101feff464e494d)) goto LAB_03f1ea00;
        }
      }
    }
    puVar10 = PTR_DAT_04c4b988;
LAB_03f1eb4c:
    lVar6 = 0;
    local_78 = "Dummy";
    do {
      if (puVar10[lVar6] == '\0') {
LAB_03f1ec0c:
        iVar4 = (int)lVar6;
joined_r0x03f1ec10:
        if (4 < iVar4) {
          uVar12 = 0;
          local_80 = puVar1;
          goto LAB_03f1ec3c;
        }
        break;
      }
      if (puVar10[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03f1ec0c;
      }
      if (puVar10[lVar6 + 2] == '\0') {
        iVar4 = (int)lVar6 + 2;
        goto joined_r0x03f1ec10;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
  }
  else {
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar5 + 0x1c));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar5 + 0x14));
    if (fVar14 / fVar15 < 1.0) {
LAB_03f1ea00:
      uVar3 = *(uint *)((long)plVar5 + 0xc);
      puVar10 = (undefined *)0x0;
      if (uVar3 != 0) {
        puVar10 = (undefined *)((ulong)uVar3 + (long)plVar5 + 0xc);
      }
      goto LAB_03f1eb4c;
    }
  }
  goto LAB_03f1e9c0;
  while (uVar12 = uVar12 + 1, iVar4 - 4 != uVar12) {
LAB_03f1ec3c:
    pcVar2 = puVar10 + uVar12;
    (**(code **)(local_80 + 0x18))(&local_80);
    if ((pcVar2 == local_78) ||
       ((*pcVar2 == *local_78 &&
        ((*pcVar2 == '\0' ||
         ((pcVar2[1] == local_78[1] &&
          ((pcVar2[1] == '\0' ||
           ((pcVar2[2] == local_78[2] &&
            ((pcVar2[2] == '\0' ||
             ((pcVar2[3] == local_78[3] && ((pcVar2[3] == '\0' || (pcVar2[4] == local_78[4])))))))))
           ))))))))) {
      if ((int)uVar12 != -1) goto LAB_03f1e9c8;
      break;
    }
  }
LAB_03f1e9c0:
  if (*(char *)(lVar13 + 0x160) == '\0') {
    if (*(long *)(lVar13 + 0x158) != 0) {
LAB_03f1ece0:
      return (undefined *)(lVar13 + 0x140);
    }
    lVar6 = *(long *)(lVar13 + 0x148);
    if ((lVar6 != 0) && (*(int *)(lVar13 + 0x150) == *(int *)(lVar6 + 0x10))) {
      lVar8 = *(long *)(*(long *)(lVar6 + 0x120) + 8);
      lVar6 = *(long *)(lVar8 + 0x38);
      if ((DAT_05aebc00 != '\0') || (lVar6 != 0)) {
        if (DAT_05aebc00 != '\0') {
          lVar6 = lVar8 + 0x70;
        }
        lVar6 = *(long *)(lVar6 + 8);
        if (((lVar6 != 0) && (*(uint *)(lVar6 + 0x18) != 0)) &&
           (*(long *)((ulong)*(uint *)(lVar6 + 0x18) + lVar6) == 0x101feff464e494d))
        goto LAB_03f1ece0;
      }
    }
  }
LAB_03f1e9c8:
  lVar13 = *(long *)(lVar13 + lVar11 + 8) - lVar11;
  if (lVar13 == (param_1 + 0xc0) - lVar11) {
    return &DAT_04c56b68;
  }
  goto LAB_03f1e9dc;
}

