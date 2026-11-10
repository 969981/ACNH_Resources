
undefined8 FUN_001c5a20(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar7 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar6 == 0) || (lVar7 = *(long *)(*plVar6 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar15 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 == (long *)0x0) {
LAB_001c5b74:
    uVar16 = 0;
LAB_001c5b78:
    (**(code **)(*plVar15 + 0x20))(plVar15);
    return uVar16;
  }
  uVar10 = *(ulong *)(param_2[0x3e] + 0x10);
  plVar8 = (long *)(param_1 + 0x28);
  plVar12 = plVar6;
LAB_001c5af0:
  do {
    if (uVar10 < (ulong)plVar12[4]) goto LAB_001c5ae4;
    if (uVar10 <= (ulong)plVar12[4]) {
      plVar14 = (long *)*plVar12;
      plVar13 = plVar12;
      if (plVar14 != (long *)0x0) {
        plVar17 = plVar12;
        do {
          plVar13 = plVar14;
          if ((ulong)plVar14[4] < uVar10) {
            plVar13 = plVar17;
            plVar14 = plVar14 + 1;
          }
          plVar14 = (long *)*plVar14;
          plVar17 = plVar13;
        } while (plVar14 != (long *)0x0);
      }
      for (plVar12 = (long *)plVar12[1]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        plVar14 = plVar12;
        if ((ulong)plVar12[4] <= uVar10) {
          plVar14 = plVar8;
          plVar12 = plVar12 + 1;
        }
        plVar8 = plVar14;
      }
      while (plVar13 != plVar8) {
        plVar12 = (long *)plVar13[1];
        if ((long *)plVar13[5] == param_2) {
          if (plVar12 == (long *)0x0) {
            plVar8 = plVar13;
            do {
              plVar14 = (long *)plVar8[2];
              bVar4 = (long *)*plVar14 != plVar8;
              plVar8 = plVar14;
            } while (bVar4);
          }
          else {
            do {
              plVar14 = plVar12;
              plVar12 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
          if (*(long **)(param_1 + 0x20) == plVar13) {
            *(long **)(param_1 + 0x20) = plVar14;
          }
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
          FUN_00192390(plVar6,plVar13);
          FUN_00187e4c(plVar13);
          plVar8 = (long *)(param_1 + 0x10);
          plVar6 = (long *)*plVar8;
          if (plVar6 != (long *)0x0) {
            plVar12 = plVar6;
            plVar13 = plVar8;
            do {
              plVar14 = plVar12;
              if ((long *)plVar12[4] < param_2) {
                plVar14 = plVar13;
                plVar12 = plVar12 + 1;
              }
              plVar12 = (long *)*plVar12;
              plVar13 = plVar14;
            } while (plVar12 != (long *)0x0);
            if ((plVar14 != plVar8) && ((long *)plVar14[4] <= param_2)) {
              plVar8 = (long *)plVar14[1];
              if ((long *)plVar14[1] == (long *)0x0) {
                plVar8 = plVar14;
                do {
                  plVar12 = (long *)plVar8[2];
                  bVar4 = (long *)*plVar12 != plVar8;
                  plVar8 = plVar12;
                } while (bVar4);
              }
              else {
                do {
                  plVar12 = plVar8;
                  plVar8 = (long *)*plVar12;
                } while ((long *)*plVar12 != (long *)0x0);
              }
              if (*(long **)(param_1 + 8) == plVar14) {
                *(long **)(param_1 + 8) = plVar12;
              }
              *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
              FUN_00192390(plVar6,plVar14);
              FUN_00187e4c(plVar14);
            }
          }
          plVar6 = param_2 + 1;
          lVar7 = *plVar6;
          iVar9 = (int)*plVar6 + -1;
          if ((int)lVar7 == (int)*plVar6) {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *(int *)plVar6 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_001c5d20;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_001c5d20:
            bVar4 = false;
          }
          iVar11 = (int)lVar7;
          if (!bVar4) {
            do {
              lVar7 = *plVar6;
              iVar9 = iVar11 + -1;
              if ((int)lVar7 == iVar11) {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *(int *)plVar6 = iVar9;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = (int)lVar7;
            } while( true );
          }
          if (iVar9 == 0) {
            uVar16 = 1;
            if (*(char *)((long)param_2 + 0xc) == '\0') {
              *(undefined1 *)((long)param_2 + 0xc) = 1;
              (**(code **)(*param_2 + 8))(param_2);
            }
          }
          else {
            uVar16 = 1;
          }
          goto LAB_001c5b78;
        }
        plVar14 = plVar13;
        if (plVar12 == (long *)0x0) {
          do {
            plVar13 = (long *)plVar14[2];
            bVar4 = (long *)*plVar13 != plVar14;
            plVar14 = plVar13;
          } while (bVar4);
        }
        else {
          do {
            plVar13 = plVar12;
            plVar12 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
      }
      break;
    }
    plVar13 = plVar12 + 1;
    plVar12 = (long *)*plVar13;
  } while ((long *)*plVar13 != (long *)0x0);
  goto LAB_001c5b74;
LAB_001c5ae4:
  plVar13 = (long *)*plVar12;
  plVar8 = plVar12;
  plVar12 = plVar13;
  if (plVar13 == (long *)0x0) goto LAB_001c5b74;
  goto LAB_001c5af0;
}

