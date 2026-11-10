
void FUN_00207f10(undefined8 param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  long *plVar16;
  long *plVar17;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar5 = PTR_DAT_04bcb900;
  plVar16 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (DAT_04c58c68 != '\0') {
    puVar7 = (uint *)FUN_03876070(DAT_04c58c60);
    uVar3 = *puVar7;
    if (uVar3 != 0) {
      lVar11 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar16 = (long *)(*(long *)(lVar11 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar16 == 0) || (lVar11 = *(long *)(*plVar16 + 0x10), lVar11 == 0)) {
    plVar16 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar11 = *(long *)(param_2 + 0x100);
    if (lVar11 != 0) goto LAB_00207fdc;
LAB_00207fe8:
    if ((*(long *)(param_2 + 0xf8) != 0) && (*(int *)(*(long *)(param_2 + 0xf8) + 0x40) == 5)) {
      lVar11 = *(long *)(param_2 + 0xc0);
      if (lVar11 == 0) {
LAB_002081bc:
        uVar6 = 4;
      }
      else {
        if (((*(long *)(lVar11 + 0x78) != 0) &&
            (lVar12 = *(long *)(*(long *)(lVar11 + 0x78) + 0x20), lVar12 != 0)) &&
           (plVar17 = *(long **)(lVar12 + 0x50), plVar17 != (long *)0x0)) {
          (**(code **)(*plVar17 + 0x40))(plVar17,lVar11);
          plVar8 = (long *)plVar17[2];
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            lVar12 = *plVar1;
            iVar13 = (int)*plVar1 + -1;
            if ((int)lVar12 == (int)*plVar1) {
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar15) {
                *(int *)plVar1 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_00208094;
              bVar15 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00208094:
              bVar15 = false;
            }
            iVar14 = (int)lVar12;
            if (!bVar15) {
              do {
                lVar12 = *plVar1;
                iVar13 = iVar14 + -1;
                if ((int)lVar12 == iVar14) {
                  cVar4 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar15) {
                    *(int *)plVar1 = iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar14 = (int)lVar12;
              } while( true );
            }
            if ((iVar13 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
              *(undefined1 *)((long)plVar8 + 0xc) = 1;
              (**(code **)(*plVar8 + 8))();
            }
          }
          plVar17[2] = lVar11;
          piVar2 = (int *)(lVar11 + 8);
          iVar13 = *piVar2;
          if (iVar13 == *piVar2) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar15) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_00208124;
            bVar15 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00208124:
            bVar15 = false;
          }
          if (!bVar15) {
            do {
              iVar14 = *piVar2;
              if (iVar14 == iVar13) {
                cVar4 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar15) {
                  *piVar2 = iVar13 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar13 = iVar14;
            } while( true );
          }
          uVar9 = (**(code **)(*plVar17 + 0x28))(plVar17);
          if ((((uVar9 & 1) != 0) &&
              (uVar9 = (**(code **)(*plVar17 + 0x30))(plVar17), (uVar9 & 1) == 0)) &&
             (*(long *)(plVar17[2] + 0x10) != 0)) {
            puVar10 = &local_3c;
            local_3c = 0x10001;
            goto LAB_00208084;
          }
        }
        if (*(long *)(param_2 + 0xc0) == 0) goto LAB_002081bc;
        uVar6 = *(undefined4 *)(*(long *)(param_2 + 0xc0) + 0x90);
      }
      FUN_001a70c4(param_1,uVar6);
      goto LAB_002081c8;
    }
    local_38 = 0x800300d2;
    puVar10 = &local_38;
  }
  else {
    plVar16 = (long *)(*(long *)(lVar11 + 0x10) + 0x78);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar11 = *(long *)(param_2 + 0x100);
    if (lVar11 == 0) goto LAB_00207fe8;
LAB_00207fdc:
    if (*(int *)(lVar11 + 0x40) == 5) goto LAB_00207fe8;
    local_34 = 0x800300d2;
    puVar10 = &local_34;
  }
LAB_00208084:
  FUN_0018aa70(param_1,puVar10);
LAB_002081c8:
  (**(code **)(*plVar16 + 0x20))(plVar16);
  return;
}

