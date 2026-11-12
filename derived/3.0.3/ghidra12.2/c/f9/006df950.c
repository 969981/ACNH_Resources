
/* WARNING: Removing unreachable block (ram,0x006dfa88) */

void FUN_006df950(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined4 local_738 [2];
  undefined1 auStack_730 [1720];
  long *local_78;
  undefined1 local_70;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb21c8 + 0x110) + 0xd0);
    pMVar1 = (MutexType *)(lVar9 + 0x68);
    nn::os::LockMutex(pMVar1);
    iVar5 = *(int *)(lVar9 + 0x40);
    if (iVar5 != 0) {
      plVar2 = (long *)(param_1 + 0x20);
      do {
        lVar6 = *(long *)(lVar9 + 0x38);
        if (iVar5 < 1) {
          lVar6 = 0;
        }
        if (lVar6 == 0) break;
        iVar5 = *(int *)(lVar9 + 0x44);
        plVar10 = (long *)(lVar6 - iVar5);
        nn::os::UnlockMutex(pMVar1);
        if (lVar6 == iVar5) {
          return;
        }
        bVar3 = *(long *)(param_1 + 0x48) == param_1 + 0x40;
        lVar6 = (long)*(int *)(param_1 + 0x54);
        plVar8 = (long *)(*(long *)(param_1 + 0x48) - lVar6);
        if ((!bVar3) && (plVar8 + 0xe0 != plVar10)) {
          lVar7 = (long)plVar8 + lVar6;
          do {
            lVar7 = *(long *)(lVar7 + 8);
            plVar8 = (long *)(lVar7 - lVar6);
            bVar3 = plVar8 == (long *)((param_1 + 0x40) - lVar6);
          } while (!bVar3 && plVar8 + 0xe0 != plVar10);
        }
        if (bVar3) {
          return;
        }
        if (plVar8 == (long *)0x0) {
          return;
        }
        uVar4 = (**(code **)(*plVar2 + 8))(plVar2);
        if ((uVar4 & 1) != 0) {
          local_64 = 0;
          local_738[0] = (undefined4)plVar8[3];
          memcpy(auStack_730,plVar8 + 4,0x6b8);
          local_78 = plVar8 + 0xdb;
          local_70 = *(undefined1 *)(plVar8[0xdf] + 0x58);
          (**(code **)*plVar2)(plVar2,local_738);
        }
        nn::os::LockMutex(pMVar1);
        if (0 < *(int *)(lVar9 + 0x40)) {
          plVar10 = *(long **)(lVar9 + 0x38);
          if (*plVar10 != 0) {
            *(long *)(*plVar10 + 8) = plVar10[1];
          }
          if ((long *)plVar10[1] != (long *)0x0) {
            *(long *)plVar10[1] = *plVar10;
          }
          *plVar10 = 0;
          plVar10[1] = 0;
          *(int *)(lVar9 + 0x40) = *(int *)(lVar9 + 0x40) + -1;
        }
        nn::os::UnlockMutex(pMVar1);
        plVar10 = (long *)((long)*(int *)(param_1 + 0x54) + (long)plVar8);
        if (*plVar10 != 0) {
          *(long *)(*plVar10 + 8) = plVar10[1];
        }
        if ((long *)plVar10[1] != (long *)0x0) {
          *(long *)plVar10[1] = *plVar10;
        }
        *plVar10 = 0;
        plVar10[1] = 0;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        (**(code **)(*plVar8 + 8))(plVar8);
        nn::os::LockMutex(pMVar1);
        iVar5 = *(int *)(lVar9 + 0x40);
      } while (iVar5 != 0);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return;
}

