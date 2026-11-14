
void FUN_017ac9b0(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long local_50;
  char local_47;
  
  FUN_0071c8d0(&local_50,param_1 + 0x10,param_2,0);
  if ((local_47 != '\0') && (local_50 != 0)) {
    if ((param_4 & 1) != 0) {
      *(byte *)(param_1 + 0x18) = (byte)param_3 & 1;
      *(undefined1 *)(param_1 + 0x19) = 1;
      if (((*(char *)(param_1 + 0x1b) != '\0') && (*(long *)(local_50 + 0x60) != 0)) &&
         (*(long *)(*(long *)(local_50 + 0x60) + 0x1138) != 0)) {
        uVar11 = 0x3f800000;
        if ((param_3 & 1) == 0) {
          uVar11 = 0;
        }
        FUN_03850760(uVar11);
      }
    }
    if (((param_5 & 1) != 0) && (*(char *)(param_1 + 0x1a) != '\0')) {
      puVar1 = (uint *)(local_50 + 0x248);
      if ((param_3 & 1) == 0) {
        if ((((*(uint *)(local_50 + 0x248) >> 9 & 1) == 0) && ((*puVar1 >> 1 & 1) == 0)) &&
           ((*puVar1 >> 8 & 1) == 0)) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 & 0xfffffdff | 0x200;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar7 = local_50 + 0xa8;
          if (*(long *)(local_50 + 0xb0) != lVar7) {
            lVar10 = (long)*(int *)(local_50 + 0xbc);
            plVar8 = (long *)(*(long *)(local_50 + 0xb0) - lVar10);
            do {
              (**(code **)(*plVar8 + 0xb0))(plVar8);
              plVar8 = (long *)(*(long *)((long)plVar8 + lVar10 + 8) - lVar10);
            } while (plVar8 != (long *)(lVar7 - lVar10));
          }
        }
      }
      else if ((((*(uint *)(local_50 + 0x248) >> 10 & 1) == 0) && ((*puVar1 >> 1 & 1) == 0)) &&
              (((*puVar1 >> 9 & 1) != 0 || ((*puVar1 >> 8 & 1) != 0)))) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 & 0xfffffbff | 0x400;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar7 = local_50 + 0xa8;
        if (*(long *)(local_50 + 0xb0) != lVar7) {
          lVar10 = (long)*(int *)(local_50 + 0xbc);
          plVar8 = (long *)(*(long *)(local_50 + 0xb0) - lVar10);
          do {
            (**(code **)(*plVar8 + 0xb8))(plVar8);
            plVar8 = (long *)(*(long *)((long)plVar8 + lVar10 + 8) - lVar10);
          } while (plVar8 != (long *)(lVar7 - lVar10));
        }
      }
    }
    plVar8 = *(long **)(local_50 + 0x60);
    if (plVar8 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar8 + 0xe0))(plVar8);
      if (1 < iVar4) {
        plVar9 = *(long **)(local_50 + 0x60);
        if (((*PTR_DAT_04bb36c0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb36c0), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb36b8 = PTR_DAT_04bb36c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb36c0);
        }
        if ((plVar9 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bb36b8), (uVar6 & 1) != 0)) {
          iVar4 = (**(code **)(*plVar9 + 0xe0))(plVar9);
          if (iVar4 < 1) {
            return;
          }
          iVar4 = 0;
          do {
            lVar7 = (**(code **)(*plVar9 + 0xe8))(plVar9,iVar4);
            iVar4 = iVar4 + 1;
            *(uint *)(lVar7 + 0x11a0) = *(uint *)(lVar7 + 0x11a0) & 0xfffffffe | param_4 & 1;
            iVar5 = (**(code **)(*plVar9 + 0xe0))(plVar9);
          } while (iVar4 < iVar5);
          return;
        }
      }
      if ((param_4 & 1) != 0) {
        *(uint *)(plVar8 + 0x234) = *(uint *)(plVar8 + 0x234) & 0xfffffffe | param_3 & 1;
      }
    }
  }
  return;
}

