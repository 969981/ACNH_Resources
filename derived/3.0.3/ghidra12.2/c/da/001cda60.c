
void FUN_001cda60(long param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  code *pcVar18;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((param_3 & 1) == 0) {
    uVar11 = *param_2;
    if (*(long *)(param_1 + 0xd8) == 0) {
      *(ulong *)(param_1 + 0xd8) = uVar11;
      return;
    }
    if ((long)(uVar11 - *(long *)(param_1 + 0xd8)) < 0x65) {
      return;
    }
  }
  else {
    uVar11 = *param_2;
  }
  plVar1 = (long *)(param_1 + 0xb0);
  *(ulong *)(param_1 + 0xd8) = uVar11;
  if (*(long **)(param_1 + 0xb8) != plVar1) {
    plVar2 = (long *)(param_1 + 0x158);
    plVar16 = *(long **)(param_1 + 0xb8);
    do {
      while ((plVar17 = (long *)plVar16[2], (param_3 & 1) != 0 ||
             (((ulong)plVar17[0x95] <= *param_2 && ((char)plVar17[0x16] == '\0'))))) {
        iVar8 = FUN_001b8fa0(plVar17 + 2,&DAT_0410a6c4,0xffffffff);
        if (iVar8 == -1) {
          uVar5 = *(uint *)(param_1 + 8);
          if (*PTR_DAT_04bcb908 == '\0') {
LAB_001cdc14:
            iVar8 = *(int *)(PTR_DAT_04bcbb78 + (ulong)uVar5 * 0x2a8 + 0x158);
          }
          else {
            puVar10 = (uint *)FUN_03876070(DAT_04c58c60);
            if (*puVar10 == 0) goto LAB_001cdc14;
            iVar8 = *(int *)(*(long *)(PTR_DAT_04bcbb78 + (ulong)uVar5 * 0x2a8 + 0x10) +
                             (ulong)*puVar10 * 0x148 + 0x140);
          }
          if (iVar8 == 0) goto LAB_001cdb30;
LAB_001cdc30:
          plVar9 = *(long **)(param_1 + 0x18);
          lVar4 = plVar17[0x18];
          if ((char)plVar17[0xf] == '\0') {
            FUN_001b8590(plVar17 + 2);
          }
          (**(code **)(*plVar9 + 0x38))(plVar9,iVar8,(short)lVar4,plVar17[3]);
          plVar9 = (long *)*plVar2;
        }
        else {
          if (iVar8 != 0) goto LAB_001cdc30;
LAB_001cdb30:
          plVar9 = (long *)*plVar2;
        }
        if (plVar9 != (long *)0x0) {
          plVar12 = plVar9;
          plVar15 = plVar2;
          do {
            plVar3 = plVar12;
            if ((long *)plVar12[4] < plVar17) {
              plVar3 = plVar15;
              plVar12 = plVar12 + 1;
            }
            plVar12 = (long *)*plVar12;
            plVar15 = plVar3;
          } while (plVar12 != (long *)0x0);
          if ((plVar3 != plVar2) && ((long *)plVar3[4] <= plVar17)) {
            plVar12 = (long *)plVar3[1];
            if ((long *)plVar3[1] == (long *)0x0) {
              do {
                plVar13 = (long *)plVar15[2];
                bVar7 = (long *)*plVar13 != plVar15;
                plVar15 = plVar13;
              } while (bVar7);
            }
            else {
              do {
                plVar13 = plVar12;
                plVar12 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
            if (*(long **)(param_1 + 0x150) == plVar3) {
              *(long **)(param_1 + 0x150) = plVar13;
            }
            *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + -1;
            FUN_00192390(plVar9,plVar3);
            FUN_00187e4c(plVar3);
          }
        }
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))(plVar17);
        }
        lVar4 = *plVar16;
        plVar17 = (long *)plVar16[1];
        *(long **)(lVar4 + 8) = plVar17;
        *(long *)plVar16[1] = lVar4;
        *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
        FUN_00187e4c(plVar16);
        plVar16 = plVar17;
        if (plVar17 == plVar1) {
          return;
        }
      }
      local_ac = 0x80050007;
      FUN_0018aa70(&local_a8,&local_ac);
      pcVar18 = (code *)plVar17[0x61];
      if (pcVar18 != (code *)0x0) {
        plVar9 = (long *)plVar17[0x60];
        local_90 = local_a8;
        uStack_88 = uStack_a0;
        local_80 = local_98;
        if (plVar9 != (long *)0x0) {
          plVar12 = plVar9 + 1;
          iVar8 = (int)*plVar12;
          iVar14 = (int)*plVar12 + -1;
          if (iVar8 != (int)*plVar12) {
            ClearExclusiveLocal();
LAB_001cddb4:
            do {
              lVar4 = *plVar12;
              iVar14 = iVar8 + -1;
              if ((int)lVar4 == iVar8) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar7) {
                  *(int *)plVar12 = iVar14;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_001cdd24;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar8 = (int)lVar4;
            } while( true );
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *(int *)plVar12 = iVar14;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_001cddb4;
LAB_001cdd24:
          if ((iVar14 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
            *(undefined1 *)((long)plVar9 + 0xc) = 1;
            (**(code **)(*plVar9 + 8))();
          }
        }
        plVar17[0x60] = 0;
        plVar17[0x5f] = 0;
        plVar17[0x61] = 0;
        local_78 = local_90;
        uStack_70 = uStack_88;
        local_68 = local_80;
        (*pcVar18)(plVar17,&local_78,plVar17 + 0x62);
        plVar9 = (long *)plVar17[0x60];
        if (plVar9 != (long *)0x0) {
          plVar12 = plVar9 + 1;
          iVar8 = (int)*plVar12;
          iVar14 = (int)*plVar12 + -1;
          if (iVar8 != (int)*plVar12) {
            ClearExclusiveLocal();
LAB_001cde40:
            do {
              lVar4 = *plVar12;
              iVar14 = iVar8 + -1;
              if ((int)lVar4 == iVar8) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar7) {
                  *(int *)plVar12 = iVar14;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_001cdde8;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar8 = (int)lVar4;
            } while( true );
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *(int *)plVar12 = iVar14;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_001cde40;
LAB_001cdde8:
          if ((iVar14 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
            *(undefined1 *)((long)plVar9 + 0xc) = 1;
            (**(code **)(*plVar9 + 8))();
          }
        }
        plVar17[0x60] = 0;
        plVar17[0x5f] = 0;
        plVar17[0x61] = 0;
      }
      plVar16 = (long *)plVar16[1];
    } while (plVar16 != plVar1);
  }
  return;
}

