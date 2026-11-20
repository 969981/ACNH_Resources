
undefined1  [16] FUN_03f1ee70(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined *local_80;
  char *local_78;
  
  puVar9 = (undefined8 *)PTR_DAT_04bc3db0;
  if (*(long *)(param_1 + 200) != param_1 + 0xc0) {
    lVar15 = (long)*(int *)(param_1 + 0xd4);
    lVar14 = *(long *)(param_1 + 200) - lVar15;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
LAB_03f1eef4:
    plVar5 = *(long **)(lVar14 + 0x158);
    if (plVar5 == (long *)0x0) {
      lVar6 = *(long *)(lVar14 + 0x148);
      if (lVar6 != 0) {
        if (*(int *)(lVar14 + 0x150) == *(int *)(lVar6 + 0x10)) {
          lVar10 = *(long *)(*(long *)(lVar6 + 0x120) + 8);
          lVar8 = *(long *)(lVar10 + 0x38);
          if ((DAT_05aebc00 != '\0') || (lVar8 != 0)) {
            lVar10 = lVar10 + 0x70;
            lVar11 = lVar8;
            if (DAT_05aebc00 != '\0') {
              lVar11 = lVar10;
            }
            lVar11 = *(long *)(lVar11 + 8);
            if (((lVar11 != 0) && (*(uint *)(lVar11 + 0x18) != 0)) &&
               (*(long *)((ulong)*(uint *)(lVar11 + 0x18) + lVar11) == 0x101feff464e494d)) {
              if (DAT_05aebc00 == '\0') {
                lVar10 = lVar8;
              }
              plVar5 = (long *)((ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18) +
                               *(long *)(lVar10 + 8));
              if (*plVar5 != 0x101feff464e494d) {
                plVar5 = (long *)0x0;
              }
              fVar16 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar5 + 0x1c));
              fVar17 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar5 + 0x14));
              if (1.0 <= fVar16 / fVar17) goto LAB_03f1f170;
            }
          }
        }
        if (*(int *)(lVar14 + 0x150) == *(int *)(lVar6 + 0x10)) {
          lVar10 = *(long *)(*(long *)(lVar6 + 0x120) + 8);
          lVar6 = *(long *)(lVar10 + 0x38);
          if ((DAT_05aebc00 != '\0') || (lVar6 != 0)) {
            if (DAT_05aebc00 != '\0') {
              lVar6 = lVar10 + 0x70;
            }
            lVar6 = *(long *)(lVar6 + 8);
            if (((lVar6 != 0) && (*(uint *)(lVar6 + 0x18) != 0)) &&
               (plVar5 = (long *)((ulong)*(uint *)(lVar6 + 0x18) + lVar6),
               *plVar5 == 0x101feff464e494d)) goto LAB_03f1ef18;
          }
        }
      }
      puVar13 = PTR_DAT_04c4b988;
LAB_03f1f06c:
      lVar6 = 0;
      local_78 = "Dummy";
      do {
        if (puVar13[lVar6] == '\0') {
LAB_03f1f0b0:
          iVar4 = (int)lVar6;
joined_r0x03f1f0b4:
          if (4 < iVar4) {
            uVar12 = 0;
            local_80 = puVar1;
            goto LAB_03f1f0e0;
          }
          break;
        }
        if (puVar13[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_03f1f0b0;
        }
        if (puVar13[lVar6 + 2] == '\0') {
          iVar4 = (int)lVar6 + 2;
          goto joined_r0x03f1f0b4;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
    }
    else {
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar5 + 0x1c));
      fVar17 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar5 + 0x14));
      if (fVar16 / fVar17 < 1.0) {
LAB_03f1ef18:
        uVar3 = *(uint *)((long)plVar5 + 0xc);
        puVar13 = (undefined *)0x0;
        if (uVar3 != 0) {
          puVar13 = (undefined *)((ulong)uVar3 + (long)plVar5 + 0xc);
        }
        goto LAB_03f1f06c;
      }
    }
    goto LAB_03f1f170;
  }
LAB_03f1f19c:
  puVar7 = puVar9 + 1;
LAB_03f1f1a0:
  auVar18._0_8_ = *puVar9;
  auVar18._8_8_ = *puVar7;
  return auVar18;
  while (uVar12 = uVar12 + 1, iVar4 - 4 != uVar12) {
LAB_03f1f0e0:
    pcVar2 = puVar13 + uVar12;
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
      if ((int)uVar12 != -1) goto LAB_03f1eee0;
      break;
    }
  }
LAB_03f1f170:
  if ((*(long *)(lVar14 + 0x20) != 0) &&
     (*(int *)(lVar14 + 0x28) == *(int *)(*(long *)(lVar14 + 0x20) + 0x10))) {
    puVar9 = (undefined8 *)(lVar14 + 0x20);
    puVar7 = (undefined8 *)(lVar14 + 0x28);
    goto LAB_03f1f1a0;
  }
LAB_03f1eee0:
  lVar14 = *(long *)(lVar14 + lVar15 + 8) - lVar15;
  if (lVar14 == (param_1 + 0xc0) - lVar15) goto LAB_03f1f194;
  goto LAB_03f1eef4;
LAB_03f1f194:
  puVar9 = &DAT_041e0200;
  goto LAB_03f1f19c;
}

