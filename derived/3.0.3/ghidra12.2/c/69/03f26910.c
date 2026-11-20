
/* WARNING: Removing unreachable block (ram,0x03f26dec) */

void FUN_03f26910(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar1 = (uint *)(param_1 + 0xb0);
  if ((*(uint *)(param_1 + 0xb0) >> 2 & 1) != 0) {
    if ((*puVar1 >> 5 & 1) != 0) {
      uVar3 = *(uint *)(param_1 + 0x10);
      lVar6 = nn::os::GetSystemTick();
      lVar6 = lVar6 - *(long *)(param_1 + 0x18);
      if (lVar6 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar10 = 0;
        if (*(long *)PTR_DAT_04bb29d0 != 0) {
          lVar10 = (lVar6 * 1000) / *(long *)PTR_DAT_04bb29d0;
        }
      }
      else {
        lVar10 = 0;
        if (DAT_05ae7888 != 0) {
          lVar10 = lVar6 / DAT_05ae7888;
        }
        lVar10 = lVar10 * 1000;
      }
      if ((-1 < (int)uVar3) && ((long)(ulong)uVar3 < lVar10)) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 & 0xffffffdf;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    if (((*puVar1 >> 4 & 1) == 0) && ((*puVar1 >> 5 & 1) == 0)) {
      DAT_05b05620 = DAT_05b05620 + 1;
      if (*(int *)(param_1 + 0x40) != 0) {
        lVar6 = (long)*(int *)(param_1 + 0x40) << 3;
        puVar11 = *(undefined8 **)(param_1 + 0x48);
        do {
          (**(code **)(**(long **)*puVar11 + 0x38))(*(long **)*puVar11,param_2);
          lVar6 = lVar6 + -8;
          puVar11 = puVar11 + 1;
        } while (lVar6 != 0);
      }
      puVar2 = (uint *)(param_1 + 0x58);
      do {
        uVar3 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar3 & 0xfffffffe;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x40) != 0)) {
        puVar11 = *(undefined8 **)(param_1 + 0x48);
        lVar6 = (long)*(int *)(param_1 + 0x40) << 3;
        do {
          if ((*(int *)(param_1 + 0x5c) != -0x35249a7f) ||
             ((*(uint *)((undefined8 *)*puVar11 + 1) & 1) != 0)) {
            plVar7 = *(long **)*puVar11;
            (**(code **)(*plVar7 + 0x40))(plVar7,(int *)(param_1 + 0x5c));
          }
          puVar11 = puVar11 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      if (*(int *)(param_1 + 0x68) != 0) {
        lVar6 = (long)*(int *)(param_1 + 0x68) << 3;
        puVar11 = *(undefined8 **)(param_1 + 0x70);
        do {
          (**(code **)(**(long **)*puVar11 + 0x38))(*(long **)*puVar11,param_2);
          lVar6 = lVar6 + -8;
          puVar11 = puVar11 + 1;
        } while (lVar6 != 0);
      }
      puVar2 = (uint *)(param_1 + 0x80);
      do {
        uVar3 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar3 & 0xfffffffe;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x68) != 0)) {
        puVar11 = *(undefined8 **)(param_1 + 0x70);
        lVar6 = (long)*(int *)(param_1 + 0x68) << 3;
        do {
          if ((*(int *)(param_1 + 0x84) != -0x35249a7f) ||
             ((*(uint *)((undefined8 *)*puVar11 + 1) & 1) != 0)) {
            plVar7 = *(long **)*puVar11;
            (**(code **)(*plVar7 + 0x40))(plVar7,(int *)(param_1 + 0x84));
          }
          puVar11 = puVar11 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      if (*(int *)(param_1 + 0x90) != 0) {
        lVar6 = (long)*(int *)(param_1 + 0x90) << 3;
        puVar11 = *(undefined8 **)(param_1 + 0x98);
        do {
          (**(code **)(**(long **)*puVar11 + 0x38))(*(long **)*puVar11,param_2);
          lVar6 = lVar6 + -8;
          puVar11 = puVar11 + 1;
        } while (lVar6 != 0);
      }
      puVar2 = (uint *)(param_1 + 0xa8);
      do {
        uVar3 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar3 & 0xfffffffe;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x90) != 0)) {
        puVar11 = *(undefined8 **)(param_1 + 0x98);
        lVar6 = (long)*(int *)(param_1 + 0x90) << 3;
        do {
          if ((*(int *)(param_1 + 0xac) != -0x35249a7f) ||
             ((*(uint *)((undefined8 *)*puVar11 + 1) & 1) != 0)) {
            plVar7 = *(long **)*puVar11;
            (**(code **)(*plVar7 + 0x40))(plVar7,(int *)(param_1 + 0xac));
          }
          puVar11 = puVar11 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      uVar3 = *(int *)(param_1 + 0x20) - 1;
      if (uVar3 < 3) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(&DAT_04130be4 + (long)(int)uVar3 * 4);
      }
    }
    if ((*puVar1 >> 7 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),0x696d7472,1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 & 0xffffff7f;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* WARNING: Could not recover jumptable at 0x03f26ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),0x73617665,1);
    return;
  }
  if ((*puVar1 >> 1 & 1) != 0) {
    iVar8 = *(int *)(param_1 + 0x20);
    if (iVar8 - 1U < 3) {
      iVar8 = *(int *)(&DAT_04130be4 + (long)(int)(iVar8 - 1U) * 4);
      *(int *)(param_1 + 0x20) = iVar8;
    }
    if (iVar8 == 0) {
      uVar3 = *puVar1;
      do {
        uVar9 = *puVar1;
        if (uVar9 != uVar3) {
          ClearExclusiveLocal();
          do {
            while (*puVar1 == uVar9) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar9 & 0xfffffff9 | 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                return;
              }
            }
            ClearExclusiveLocal();
            uVar9 = *puVar1;
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar3 & 0xfffffff9 | 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  return;
}

