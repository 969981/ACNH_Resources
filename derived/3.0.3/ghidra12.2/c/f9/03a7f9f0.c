
void FUN_03a7f9f0(long param_1,long param_2,long param_3,int param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  pMVar1 = (MutexType *)(param_1 + 0x48);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x18) == 0) {
LAB_03a7fbf4:
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  plVar4 = *(long **)(param_1 + 0x20);
  plVar6 = plVar4 + *(int *)(param_1 + 0x18);
LAB_03a7fa4c:
  do {
    lVar7 = *plVar4;
    if (*(long *)(lVar7 + 0x358) == param_2) {
      lVar9 = *(long *)(*(long *)(param_3 + 0x38) + (long)param_4 * 8);
      lVar8 = *(long *)(lVar9 + 0x28);
      if (lVar8 != lVar9 + 0x20) {
        do {
          if (lVar8 == lVar7 + *(int *)(lVar9 + 0x34) + 0x330) {
            plVar6 = (long *)(*(int *)(param_2 + 0x274) + lVar7);
            if (*plVar6 != 0) {
              *(long *)(*plVar6 + 8) = plVar6[1];
            }
            if ((long *)plVar6[1] != (long *)0x0) {
              *(long *)plVar6[1] = *plVar6;
            }
            *plVar6 = 0;
            plVar6[1] = 0;
            *(int *)(param_2 + 0x270) = *(int *)(param_2 + 0x270) + -1;
            lVar8 = *(long *)(*(long *)(param_3 + 0x38) + (long)param_4 * 8);
            lVar7 = *plVar4 + (long)*(int *)(lVar8 + 0x34);
            if (*(long *)(lVar7 + 0x330) != 0) {
              *(undefined8 *)(*(long *)(lVar7 + 0x330) + 8) = *(undefined8 *)(lVar7 + 0x338);
            }
            if (*(undefined8 **)(lVar7 + 0x338) != (undefined8 *)0x0) {
              **(undefined8 **)(lVar7 + 0x338) = *(undefined8 *)(lVar7 + 0x330);
            }
            *(undefined8 *)(lVar7 + 0x330) = 0;
            *(undefined8 *)(lVar7 + 0x338) = 0;
            *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + -1;
            lVar7 = *plVar4;
            nn::os::LockMutex(pMVar1);
            if (*(char *)(lVar7 + 0x58) != '\0') {
              *(undefined1 *)(lVar7 + 0x58) = 0;
              *(uint *)(*(long *)(lVar7 + 0x38) + 0x260) =
                   *(uint *)(*(long *)(lVar7 + 0x38) + 0x260) | 1;
            }
            iVar3 = *(int *)(param_1 + 0x18);
            if (iVar3 == 0) goto LAB_03a7fbdc;
            plVar4 = *(long **)(param_1 + 0x20);
            lVar8 = (long)iVar3 << 3;
            iVar5 = 1;
            goto LAB_03a7fb60;
          }
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != lVar9 + 0x20);
      }
    }
    plVar4 = plVar4 + 1;
  } while (plVar4 != plVar6);
  goto LAB_03a7fbf4;
  while( true ) {
    plVar4 = plVar4 + 1;
    iVar5 = iVar5 + 1;
    lVar8 = lVar8 + -8;
    if (lVar8 == 0) break;
LAB_03a7fb60:
    if (*plVar4 == lVar7) {
      if (iVar5 + -1 < iVar3) {
        uVar2 = iVar3 - iVar5;
        if (uVar2 != 0 && iVar5 <= iVar3) {
          memmove(plVar4,plVar4 + 1,-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3
                 );
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 + -1;
      }
      *(undefined2 *)(lVar7 + 0x360) = 0xffff;
      *(undefined4 *)(lVar7 + 0x36c) = 0xffff;
      *(undefined4 *)(lVar7 + 0x364) = 0;
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
        *(long *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = lVar7;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      break;
    }
  }
LAB_03a7fbdc:
  nn::os::UnlockMutex(pMVar1);
  plVar4 = *(long **)(param_1 + 0x20);
  plVar6 = plVar4 + *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_03a7fbf4;
  goto LAB_03a7fa4c;
}

