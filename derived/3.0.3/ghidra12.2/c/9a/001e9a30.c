
void FUN_001e9a30(long param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  plVar10 = (long *)(param_2 + 0xb8);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  plVar11 = (long *)(param_2 + 0x10);
  plVar6 = (long *)*plVar11;
  if (plVar6 != (long *)0x0) {
    lVar4 = *(long *)(param_3 + 8);
    if (lVar4 == 0) {
      do {
        plVar13 = plVar6;
        plVar6 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
    else {
      plVar12 = plVar11;
      do {
        uVar9 = 0;
        if (plVar6[5] != 0) {
          uVar9 = *(ulong *)(plVar6[5] + 0x10);
        }
        plVar13 = plVar6;
        if (uVar9 < *(ulong *)(lVar4 + 0x10)) {
          plVar13 = plVar12;
          plVar6 = plVar6 + 1;
        }
        plVar6 = (long *)*plVar6;
        plVar12 = plVar13;
      } while (plVar6 != (long *)0x0);
    }
    if (plVar13 != plVar11) {
      uVar9 = 0;
      if (lVar4 != 0) {
        uVar9 = *(ulong *)(lVar4 + 0x10);
      }
      uVar7 = 0;
      if (plVar13[5] != 0) {
        uVar7 = *(ulong *)(plVar13[5] + 0x10);
      }
      if (uVar7 <= uVar9) {
        FUN_001e1564(param_1 + 8,plVar13 + 7);
        *(undefined ***)(param_1 + 0x98) = &PTR_LAB_0483cd28;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        lVar4 = plVar13[0x1a];
        if (lVar4 != 0) {
          *(long *)(param_1 + 0xa0) = lVar4;
          piVar1 = (int *)(lVar4 + 8);
          if (*piVar1 != 0) {
            iVar5 = *piVar1;
            if (iVar5 == *piVar1) {
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_001e9b74;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_001e9b74:
              bVar8 = false;
            }
            if (!bVar8) {
              do {
                iVar2 = *piVar1;
                if (iVar2 == iVar5) {
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar5 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar5 = iVar2;
              } while( true );
            }
          }
        }
        *(char *)(param_1 + 0xa8) = (char)plVar13[0x1b];
        goto LAB_001e9afc;
      }
    }
  }
  FUN_001e1500(param_1 + 8);
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined ***)(param_1 + 0x98) = &PTR_LAB_0483cd28;
  *(undefined8 *)(param_1 + 0xa0) = 0;
LAB_001e9afc:
                    /* WARNING: Could not recover jumptable at 0x001e9b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return;
}

