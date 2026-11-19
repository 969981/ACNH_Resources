
/* WARNING: Removing unreachable block (ram,0x0386ad04) */
/* WARNING: Removing unreachable block (ram,0x0386adec) */

void FUN_0386acb0(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  uVar3 = FUN_03869ae0(param_2,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)(param_1 + 0x70);
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 != plVar4) {
      do {
        if (plVar5 == (long *)(param_2 + 0xb0 + (long)*(int *)(param_1 + 0x84))) goto LAB_0386adbc;
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != plVar4);
    }
    iVar2 = *(int *)(param_2 + 0x15c);
    *(int *)(param_2 + 0xe0) = iVar2;
    *(int *)(param_2 + 0xe4) = *(int *)(param_2 + 0x158);
    lVar6 = (long)*(int *)(param_1 + 0x84);
    if (*(long **)(param_1 + 0x78) != plVar4) {
      lVar7 = (long)*(long **)(param_1 + 0x78) - lVar6;
      do {
        bVar1 = *(int *)(param_2 + 0x158) < *(int *)(lVar7 + 0x34);
        if (*(int *)(lVar7 + 0x30) != iVar2) {
          bVar1 = iVar2 < *(int *)(lVar7 + 0x30);
        }
        if (bVar1) {
          plVar4 = (long *)(lVar7 + lVar6);
          break;
        }
        lVar7 = ((long *)(lVar7 + lVar6))[1] - lVar6;
      } while (lVar7 != (long)plVar4 - lVar6);
    }
    plVar5 = (long *)(lVar6 + param_2 + 0xb0);
    lVar6 = *plVar4;
    *plVar4 = (long)plVar5;
    *plVar5 = lVar6;
    plVar5[1] = (long)plVar4;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
    }
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
LAB_0386adbc:
  uVar3 = FUN_03869ae0(param_2,1);
  if ((uVar3 & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x90);
    plVar4 = (long *)(param_1 + 0x88);
    if (plVar5 != plVar4) {
      do {
        if (plVar5 == (long *)(param_2 + 0xe8 + (long)*(int *)(param_1 + 0x9c))) goto LAB_0386ae9c;
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != plVar4);
    }
    iVar2 = *(int *)(param_2 + 0x15c);
    *(int *)(param_2 + 0x118) = iVar2;
    *(int *)(param_2 + 0x11c) = *(int *)(param_2 + 0x158);
    lVar6 = (long)*(int *)(param_1 + 0x9c);
    if (*(long **)(param_1 + 0x90) != plVar4) {
      lVar7 = (long)*(long **)(param_1 + 0x90) - lVar6;
      do {
        bVar1 = *(int *)(param_2 + 0x158) < *(int *)(lVar7 + 0x34);
        if (*(int *)(lVar7 + 0x30) != iVar2) {
          bVar1 = iVar2 < *(int *)(lVar7 + 0x30);
        }
        if (bVar1) {
          plVar4 = (long *)(lVar7 + lVar6);
          break;
        }
        lVar7 = ((long *)(lVar7 + lVar6))[1] - lVar6;
      } while (lVar7 != (long)plVar4 - lVar6);
    }
    plVar5 = (long *)(lVar6 + param_2 + 0xe8);
    lVar6 = *plVar4;
    *plVar4 = (long)plVar5;
    *plVar5 = lVar6;
    plVar5[1] = (long)plVar4;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
LAB_0386ae9c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  return;
}

