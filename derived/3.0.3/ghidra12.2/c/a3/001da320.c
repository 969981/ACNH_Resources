
void FUN_001da320(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  bool bVar19;
  long *plVar20;
  long *local_78;
  long *local_70;
  long *local_68;
  
  puVar13 = PTR_DAT_04bcc7f8;
  puVar12 = PTR_DAT_04bcc7f0;
  puVar11 = PTR_DAT_04bcc658;
  puVar10 = PTR_DAT_04bcc640;
  puVar9 = PTR_DAT_04bcc638;
  puVar8 = PTR_DAT_04bcc628;
  plVar20 = (long *)param_2[2];
  if (plVar20 != (long *)param_2[4]) {
    do {
      if (((*puVar8 == '\0') ||
          (uVar6 = *(ushort *)(plVar20 + 0xc),
          (uVar6 & 0xf) != 2 || *(char *)((long)plVar20 + 0x42) != '\x01')) ||
         (((uVar6 & 0x30) == 0 && (*puVar9 == '\0')))) {
LAB_001da3e0:
        local_70 = plVar20;
        (**(code **)(*param_2 + 0x28))(&local_68,param_2,&local_70);
        plVar14 = local_68;
      }
      else {
        if (((((uVar6 & 0x30) != 0) && ((uVar6 & 0x10) != 0 || *puVar10 == '\0')) ||
            (((uVar6 >> 0xb & 1) == 0 && (*puVar12 == '\0')))) ||
           (*(char *)((long)plVar20 + 0x211) != '\0')) goto LAB_001da3e0;
        plVar1 = plVar20 + 1;
        iVar16 = (int)*plVar1;
        if (iVar16 != (int)*plVar1) {
          ClearExclusiveLocal();
LAB_001da540:
          do {
            lVar3 = *plVar1;
            if ((int)lVar3 == iVar16) {
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar19) {
                *(int *)plVar1 = iVar16 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_001da44c;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = (int)lVar3;
          } while( true );
        }
        cVar7 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar19) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_001da540;
LAB_001da44c:
        local_78 = plVar20;
        (**(code **)(*param_2 + 0x28))(&local_68,param_2,&local_78);
        plVar14 = local_68;
        if ((int)plVar20[0x44] != 2) {
          *(undefined4 *)(plVar20 + 0x44) = 0;
        }
        FUN_00187810(&local_68);
        uVar5 = *(uint *)puVar13;
        uVar17 = (ulong)uVar5;
        if ((int)uVar5 < 0) {
          uVar17 = -(ulong)-uVar5;
        }
        plVar20[0x45] = uVar17 + (long)local_68;
        FUN_001d9790(param_1,plVar20);
        uVar17 = *(ulong *)(param_1 + 0x20);
        if (*(ulong *)puVar11 < uVar17) {
          plVar15 = *(long **)(param_1 + 0x10);
          lVar3 = plVar15[6];
          lVar4 = plVar15[7];
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x30) = lVar3;
          }
          plVar15[7] = 0;
          if (lVar3 != 0) {
            *(long *)(lVar3 + 0x38) = lVar4;
          }
          plVar15[6] = 0;
          if (*(long **)(param_1 + 8) == plVar15) {
            *(long *)(param_1 + 8) = lVar3;
          }
          if (*(long **)(param_1 + 0x10) == plVar15) {
            *(long *)(param_1 + 0x10) = lVar4;
          }
          *(ulong *)(param_1 + 0x20) = uVar17 - 1;
          plVar2 = plVar15 + 1;
          lVar3 = *plVar2;
          iVar16 = (int)*plVar2 + -1;
          if ((int)lVar3 == (int)*plVar2) {
            cVar7 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar19) {
              *(int *)plVar2 = iVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_001da56c;
            bVar19 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_001da56c:
            bVar19 = false;
          }
          iVar18 = (int)lVar3;
          if (!bVar19) {
            do {
              lVar3 = *plVar2;
              iVar16 = iVar18 + -1;
              if ((int)lVar3 == iVar18) {
                cVar7 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar19) {
                  *(int *)plVar2 = iVar16;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar18 = (int)lVar3;
            } while( true );
          }
          if ((iVar16 == 0) && (*(char *)((long)plVar15 + 0xc) == '\0')) {
            *(undefined1 *)((long)plVar15 + 0xc) = 1;
            (**(code **)(*plVar15 + 8))();
          }
        }
        iVar18 = (int)*plVar1 + -1;
        iVar16 = (int)*plVar1;
        if (iVar16 != (int)*plVar1) {
          ClearExclusiveLocal();
LAB_001da640:
          do {
            lVar3 = *plVar1;
            iVar18 = iVar16 + -1;
            if ((int)lVar3 == iVar16) {
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar19) {
                *(int *)plVar1 = iVar18;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_001da604;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = (int)lVar3;
          } while( true );
        }
        cVar7 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar19) {
          *(int *)plVar1 = iVar18;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_001da640;
LAB_001da604:
        if ((iVar18 == 0) && (*(char *)((long)plVar20 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar20 + 0xc) = 1;
          (**(code **)(*plVar20 + 8))(plVar20);
        }
      }
      plVar20 = plVar14;
    } while (plVar20 != (long *)param_2[4]);
  }
  return;
}

