
void FUN_03ba71d0(long *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  if ((int)param_1[1] < 0) {
    if (*(long *)(param_2 + 8) != param_2) {
      lVar5 = (long)*(int *)(param_2 + 0x14);
      lVar7 = *(long *)(param_2 + 8) - lVar5;
      do {
        if ((*(int *)(lVar7 + 0xc) < 6) || (7 < *(int *)(lVar7 + 0xc))) {
          bVar2 = *(byte *)(lVar7 + 0x16);
          uVar1 = (uint)bVar2 & (1 << (ulong)(*(uint *)(param_1 + 2) & 0x1f) ^ 0xffffffffU);
          *(char *)(lVar7 + 0x16) = (char)uVar1;
          if ((bVar2 != 0) && (uVar1 == 0)) {
            lVar4 = *(long *)(lVar7 + 0x120);
            nn::os::LockMutex((MutexType *)(lVar4 + 0x48));
            if (*(int *)(lVar4 + 0x10) == 3) {
              if (*(int *)(lVar4 + 0x14) == 2) {
                *(undefined4 *)(lVar4 + 0x24) = 0;
              }
              *(undefined4 *)(lVar4 + 0x10) = 4;
            }
            nn::os::UnlockMutex((MutexType *)(lVar4 + 0x48));
          }
        }
        lVar7 = *(long *)(lVar7 + lVar5 + 8) - lVar5;
      } while (lVar7 != param_2 - lVar5);
    }
  }
  else if ((int)param_1[1] == 0) {
    if (*(long *)(param_2 + 8) != param_2) {
      lVar4 = (long)*(int *)(param_2 + 0x14);
      lVar5 = *(long *)(param_2 + 8) - lVar4;
      lVar7 = lVar5 + lVar4;
      do {
        lVar7 = *(long *)(lVar7 + 8);
        if (((*(ushort *)(lVar5 + 0x1d0) >> 1 & 1) == 0) &&
           (*(int *)(*(long *)(lVar5 + 0x120) + 0x14) != 0)) {
          if (*(char *)((long)param_1 + 0xc) == '\0') {
            FUN_03b43dac(lVar5,(int)param_1[2],0x20000);
          }
          else {
            FUN_03b45ec0(0,0);
          }
        }
        lVar5 = lVar7 - lVar4;
      } while (lVar5 != param_2 - lVar4);
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if (*(long *)(param_2 + 8) != param_2) {
      lVar4 = (long)*(int *)(param_2 + 0x14);
      iVar6 = 0;
      lVar5 = *(long *)(param_2 + 8) - lVar4;
      lVar7 = lVar5 + lVar4;
      do {
        lVar7 = *(long *)(lVar7 + 8);
        if ((*(ushort *)(lVar5 + 0x1d0) >> 1 & 1) == 0) {
          if (iVar6 < (int)param_1[1]) {
            if ((*(int *)(lVar5 + 0xc) < 6) || (7 < *(int *)(lVar5 + 0xc))) {
              bVar2 = *(byte *)(lVar5 + 0x16);
              uVar1 = (uint)bVar2 & (1 << (ulong)(*(uint *)(param_1 + 2) & 0x1f) ^ 0xffffffffU);
              *(char *)(lVar5 + 0x16) = (char)uVar1;
              if ((bVar2 != 0) && (uVar1 == 0)) {
                lVar5 = *(long *)(lVar5 + 0x120);
                nn::os::LockMutex((MutexType *)(lVar5 + 0x48));
                if (*(int *)(lVar5 + 0x10) == 3) {
                  if (*(int *)(lVar5 + 0x14) == 2) {
                    *(undefined4 *)(lVar5 + 0x24) = 0;
                  }
                  *(undefined4 *)(lVar5 + 0x10) = 4;
                }
                nn::os::UnlockMutex((MutexType *)(lVar5 + 0x48));
              }
            }
          }
          else {
            uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
            if ((*(int *)(*(long *)(lVar5 + 0x120) + 0x14) != 0) &&
               ((*(ushort *)(lVar5 + 0x1d0) >> 1 & 1) == 0)) {
              if (*(char *)((long)param_1 + 0xc) == '\0') {
                FUN_03b43dac(lVar5,(int)param_1[2],uVar3);
              }
              else {
                FUN_03b45ec0(0,0,lVar5);
              }
            }
          }
          iVar6 = iVar6 + 1;
        }
        lVar5 = lVar7 - lVar4;
      } while (lVar5 != param_2 - lVar4);
    }
  }
  return;
}

