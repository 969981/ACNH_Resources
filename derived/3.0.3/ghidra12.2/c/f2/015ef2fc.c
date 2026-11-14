
/* WARNING: Removing unreachable block (ram,0x015ef404) */

long * FUN_015ef2fc(long param_1,long param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_48;
  undefined4 local_44;
  
  pMVar1 = (MutexType *)(param_1 + 0x7a3388);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(param_1 + 0x7a33a8);
  if ((int)uVar3 < 1) {
    nn::os::UnlockMutex(pMVar1);
    return (long *)0x0;
  }
  uVar3 = uVar3 - 1;
  *(uint *)(param_1 + 0x7a33a8) = uVar3;
  plVar7 = *(long **)(*(long *)(param_1 + 0x7a33b0) + (ulong)uVar3 * 8);
  nn::os::UnlockMutex(pMVar1);
  if (plVar7 == (long *)0x0) {
    return (long *)0x0;
  }
  piVar2 = (int *)(&LAB_007a1308 + param_1);
  if (param_2 == 0) goto LAB_015ef3b0;
  plVar4 = (long *)plVar7[2];
  if (plVar4 == (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,0);
    plVar4 = (long *)plVar7[2];
    if (plVar4 != (long *)0x0) goto LAB_015ef38c;
    lVar6 = 0;
  }
  else {
LAB_015ef38c:
    (**(code **)(*plVar4 + 0x98))(plVar4,param_2);
    lVar6 = plVar7[2];
  }
  (**(code **)(*(long *)(lVar6 + 0x188) + 0xf0))(lVar6 + 0x188);
LAB_015ef3b0:
  local_48 = 1;
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 8);
  uVar5 = (**(code **)(*(long *)(lVar6 + 0x1c8) + 0x118))(lVar6 + 0x1c8,&local_48);
  if (((uVar5 & 1) != 0) && (plVar7[3] == 0)) {
    local_44 = 0;
    lVar6 = *(long *)(*(long *)(*(long *)(DAT_05231900 + 0x58) + 0xe88) + 0x4b18);
    if (lVar6 == 0) {
      lVar8 = 0;
    }
    else {
      nn::os::LockMutex((MutexType *)(lVar6 + 0x48));
      uVar3 = *(int *)(lVar6 + 8) - 1;
      if (*(int *)(lVar6 + 8) < 1) {
        lVar8 = 0;
      }
      else {
        *(uint *)(lVar6 + 8) = uVar3;
        lVar8 = *(long *)(*(long *)(lVar6 + 0x10) + (ulong)uVar3 * 8);
        if (lVar8 != 0) {
          if (*(int *)(lVar6 + 0x18) < *(int *)(lVar6 + 0x1c)) {
            *(long *)(*(long *)(lVar6 + 0x20) + (long)*(int *)(lVar6 + 0x18) * 8) = lVar8;
            *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
          }
          *(undefined8 *)(lVar8 + 0x328) = 0;
          if (*(char *)(lVar8 + 0x58) == '\0') {
            *(undefined1 *)(lVar8 + 0x58) = 1;
            *(uint *)(*(long *)(lVar8 + 0x38) + 0x260) =
                 *(uint *)(*(long *)(lVar8 + 0x38) + 0x260) | 1;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x48));
    }
    plVar7[3] = lVar8;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x7a12e8));
  if (*piVar2 < *(int *)(&LAB_007a130c + param_1)) {
    *(long **)(*(long *)(&LAB_007a1310 + param_1) + (long)*piVar2 * 8) = plVar7;
    *piVar2 = *piVar2 + 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a12e8));
  return plVar7;
}

