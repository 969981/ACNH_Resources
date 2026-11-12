
/* WARNING: Removing unreachable block (ram,0x006e7598) */

void FUN_006e7460(long param_1)

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
  undefined4 local_1028 [2];
  undefined1 auStack_1020 [4008];
  long *local_78;
  undefined1 local_70;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb21c8 + 0x110) + 0xd0);
    pMVar1 = (MutexType *)(lVar9 + 0x68);
    nn::os::LockMutex(pMVar1);
    iVar5 = *(int *)(lVar9 + 0x40);
    if (iVar5 != 0) {
      plVar2 = (long *)(param_1 + 0x38);
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
        bVar3 = *(long *)(param_1 + 0x60) == param_1 + 0x58;
        lVar6 = (long)*(int *)(param_1 + 0x6c);
        plVar8 = (long *)(*(long *)(param_1 + 0x60) - lVar6);
        if ((!bVar3) && (plVar8 + 0x1fe != plVar10)) {
          lVar7 = (long)plVar8 + lVar6;
          do {
            lVar7 = *(long *)(lVar7 + 8);
            plVar8 = (long *)(lVar7 - lVar6);
            bVar3 = plVar8 == (long *)((param_1 + 0x58) - lVar6);
          } while (!bVar3 && plVar8 + 0x1fe != plVar10);
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
          local_1028[0] = (undefined4)plVar8[3];
          memcpy(auStack_1020,plVar8 + 4,0xfa8);
          local_78 = plVar8 + 0x1f9;
          local_70 = *(undefined1 *)(plVar8[0x1fd] + 0x58);
          (**(code **)*plVar2)(plVar2,local_1028);
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
        plVar10 = (long *)((long)*(int *)(param_1 + 0x6c) + (long)plVar8);
        if (*plVar10 != 0) {
          *(long *)(*plVar10 + 8) = plVar10[1];
        }
        if ((long *)plVar10[1] != (long *)0x0) {
          *(long *)plVar10[1] = *plVar10;
        }
        *plVar10 = 0;
        plVar10[1] = 0;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
        (**(code **)(*plVar8 + 8))(plVar8);
        nn::os::LockMutex(pMVar1);
        iVar5 = *(int *)(lVar9 + 0x40);
      } while (iVar5 != 0);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return;
}

