
void FUN_001c7680(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  long local_38;
  
  puVar5 = PTR_DAT_04bcb900;
  plVar19 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar7;
    if (uVar3 != 0) {
      lVar9 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar19 = (long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar19 == 0) || (lVar9 = *(long *)(*plVar19 + 0x10), lVar9 == 0)) {
    plVar19 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    cVar4 = *(char *)(param_1 + 0x38);
  }
  else {
    plVar19 = (long *)(*(long *)(lVar9 + 0x10) + 0x78);
    (**(code **)(*plVar19 + 0x10))(plVar19);
    cVar4 = *(char *)(param_1 + 0x38);
  }
  if (((cVar4 != '\0') && ((*(ushort *)(param_2 + 0xc) & 0xf) < 4)) &&
     ((*(ushort *)(param_2 + 0xc) & 0xf) != 2)) {
    lVar9 = param_2[0x3e];
    *(undefined4 *)(lVar9 + 8) = 1;
    *(undefined8 *)(lVar9 + 0x18) = 1;
  }
  lVar9 = param_2[0x3e];
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_38);
  }
  else {
    FUN_0018c9b0(&local_38,0);
  }
  plVar1 = param_2 + 1;
  *(long *)PTR_DAT_04bcbcb0 = local_38;
  uVar3 = *(uint *)(lVar9 + 8);
  uVar10 = (ulong)uVar3;
  if ((int)uVar3 < 0) {
    uVar10 = -(ulong)-uVar3;
  }
  *(ulong *)(lVar9 + 0x10) = uVar10 + local_38;
  iVar8 = (int)*plVar1;
  if (iVar8 != (int)*plVar1) {
    ClearExclusiveLocal();
    iVar14 = iVar8;
    goto LAB_001c7870;
  }
  cVar4 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *(int *)plVar1 = (int)*plVar1 + 1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  while (iVar14 = iVar8, cVar4 != '\0') {
LAB_001c7870:
    while (iVar8 = (int)*plVar1, iVar8 != iVar14) {
      ClearExclusiveLocal();
      iVar14 = iVar8;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar14 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  }
  puVar20 = (undefined8 *)(param_1 + 0x10);
  puVar15 = (undefined8 *)*puVar20;
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = puVar20;
  }
  else {
    puVar13 = puVar20;
    do {
      puVar12 = puVar15;
      if ((long *)puVar15[4] < param_2) {
        puVar12 = puVar13;
        puVar15 = puVar15 + 1;
      }
      puVar15 = (undefined8 *)*puVar15;
      puVar13 = puVar12;
    } while (puVar15 != (undefined8 *)0x0);
    if ((puVar12 != puVar20) && ((long *)puVar12[4] <= param_2)) {
      plVar11 = *(long **)(param_1 + 0x20);
      if (plVar11 != (long *)(param_1 + 0x28)) {
        plVar18 = plVar11;
LAB_001c78ac:
        plVar17 = (long *)plVar18[1];
        if ((long *)plVar18[5] != param_2) goto code_r0x001c78bc;
        if (plVar17 == (long *)0x0) {
          plVar17 = plVar18;
          do {
            plVar16 = (long *)plVar17[2];
            bVar6 = (long *)*plVar16 != plVar17;
            plVar17 = plVar16;
          } while (bVar6);
        }
        else {
          do {
            plVar16 = plVar17;
            plVar17 = (long *)*plVar16;
          } while ((long *)*plVar16 != (long *)0x0);
        }
        if (plVar11 == plVar18) {
          *(long **)(param_1 + 0x20) = plVar16;
        }
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
        FUN_00192390(*(undefined8 *)(param_1 + 0x28),plVar18);
        FUN_00187e4c(plVar18);
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        if (puVar15 != (undefined8 *)0x0) {
          puVar13 = puVar15;
          puVar12 = puVar20;
          do {
            puVar2 = puVar13;
            if ((long *)puVar13[4] < param_2) {
              puVar2 = puVar12;
              puVar13 = puVar13 + 1;
            }
            puVar13 = (undefined8 *)*puVar13;
            puVar12 = puVar2;
          } while (puVar13 != (undefined8 *)0x0);
          if ((puVar2 != puVar20) && ((long *)puVar2[4] <= param_2)) {
            puVar13 = (undefined8 *)puVar2[1];
            if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
              puVar13 = puVar2;
              do {
                puVar12 = (undefined8 *)puVar13[2];
                bVar6 = (undefined8 *)*puVar12 != puVar13;
                puVar13 = puVar12;
              } while (bVar6);
            }
            else {
              do {
                puVar12 = puVar13;
                puVar13 = (undefined8 *)*puVar12;
              } while ((undefined8 *)*puVar12 != (undefined8 *)0x0);
            }
            if (*(undefined8 **)(param_1 + 8) == puVar2) {
              *(undefined8 **)(param_1 + 8) = puVar12;
            }
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
            FUN_00192390(puVar15,puVar2);
            FUN_00187e4c(puVar2);
          }
        }
        iVar8 = (int)*plVar1 + -1;
        lVar9 = *plVar1;
        if ((int)lVar9 == (int)*plVar1) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_001c7a1c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001c7a1c:
          bVar6 = false;
        }
        iVar14 = (int)lVar9;
        if (!bVar6) {
          do {
            lVar9 = *plVar1;
            iVar8 = iVar14 + -1;
            if ((int)lVar9 == iVar14) {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar14 = (int)lVar9;
          } while( true );
        }
        if ((iVar8 == 0) && (*(char *)((long)param_2 + 0xc) == '\0')) {
          *(undefined1 *)((long)param_2 + 0xc) = 1;
          (**(code **)(*param_2 + 8))(param_2);
        }
      }
    }
LAB_001c7a48:
    puVar13 = (undefined8 *)*puVar20;
    while( true ) {
      puVar15 = puVar20;
      if (puVar13 == (undefined8 *)0x0) break;
      while( true ) {
        puVar20 = puVar13;
        if (param_2 < (long *)puVar20[4]) break;
        if (param_2 <= (long *)puVar20[4]) goto LAB_001c7b10;
        puVar13 = (undefined8 *)puVar20[1];
        if ((undefined8 *)puVar20[1] == (undefined8 *)0x0) {
          puVar15 = puVar20 + 1;
          goto LAB_001c7a8c;
        }
      }
      puVar13 = (undefined8 *)*puVar20;
    }
  }
LAB_001c7a8c:
  puVar13 = (undefined8 *)FUN_00187df4(0x28);
  puVar13[4] = param_2;
  puVar13[2] = puVar20;
  *puVar13 = 0;
  puVar13[1] = 0;
  *puVar15 = puVar13;
  if (**(long **)(param_1 + 8) != 0) {
    *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
    puVar13 = (undefined8 *)*puVar15;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x10),puVar13);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_001c7b10:
  uVar10 = *(ulong *)(param_2[0x3e] + 0x10);
  puVar13 = (undefined8 *)FUN_00187df4(0x30);
  puVar13[4] = uVar10;
  puVar13[5] = param_2;
  puVar15 = (undefined8 *)(param_1 + 0x28);
  puVar20 = (undefined8 *)*puVar15;
  if ((undefined8 *)*puVar15 == (undefined8 *)0x0) {
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = puVar15;
    *puVar15 = puVar13;
    lVar9 = **(long **)(param_1 + 0x20);
  }
  else {
    do {
      while (puVar12 = puVar20, uVar10 < (ulong)puVar12[4]) {
        puVar20 = (undefined8 *)*puVar12;
        if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = puVar12;
          *puVar12 = puVar13;
          lVar9 = **(long **)(param_1 + 0x20);
          puVar15 = puVar12;
          goto joined_r0x001c7b8c;
        }
      }
      puVar20 = (undefined8 *)puVar12[1];
    } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
    puVar15 = puVar12 + 1;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = puVar12;
    *puVar15 = puVar13;
    lVar9 = **(long **)(param_1 + 0x20);
  }
joined_r0x001c7b8c:
  if (lVar9 != 0) {
    *(long *)(param_1 + 0x20) = lVar9;
    puVar13 = (undefined8 *)*puVar15;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x28),puVar13);
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  (**(code **)(*plVar19 + 0x20))(plVar19);
  return;
code_r0x001c78bc:
  plVar16 = plVar18;
  if (plVar17 == (long *)0x0) {
    do {
      plVar18 = (long *)plVar16[2];
      bVar6 = (long *)*plVar18 != plVar16;
      plVar16 = plVar18;
    } while (bVar6);
  }
  else {
    do {
      plVar18 = plVar17;
      plVar17 = (long *)*plVar18;
    } while ((long *)*plVar18 != (long *)0x0);
  }
  if (plVar18 == (long *)(param_1 + 0x28)) goto LAB_001c7a48;
  goto LAB_001c78ac;
}

