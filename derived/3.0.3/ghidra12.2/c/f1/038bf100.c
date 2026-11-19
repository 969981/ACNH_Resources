
void FUN_038bf100(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  uVar4 = nn::os::TryLockMutex(pMVar1);
  if ((uVar4 & 1) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x110) + 0x10);
    if (iVar2 != 0) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x110) + 8);
      if (iVar2 < 1) {
        plVar5 = (long *)0x0;
      }
      plVar14 = plVar5 + -0x1c;
      if (plVar5 != (long *)0x0 && plVar14 != (long *)0x0) {
        plVar13 = (long *)*plVar14;
        if (plVar13 == (long *)0x0) {
          local_58 = 0;
          FUN_038be2e0(param_1,auStack_78,plVar5 + -0x1b);
          lVar6 = FUN_038be914(param_1,plVar5 + -0x1b,auStack_78);
          uVar3 = *(uint *)PTR_DAT_04bd0ca0;
          if (0 < (int)uVar3) {
            if (uVar3 == 1) {
              uVar4 = 0;
            }
            else {
              uVar4 = 0;
              do {
                lVar7 = lVar6 + uVar4 * 8;
                lVar12 = *(long *)(lVar7 + 0x88);
                if (lVar12 != 0) {
                  *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar6 + 0x50);
                }
                lVar7 = *(long *)(lVar7 + 0x90);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar6 + 0x50);
                }
                uVar4 = uVar4 + 2;
              } while (((ulong)uVar3 & 0xfffffffe) != uVar4);
            }
            if (((uVar3 & 1) != 0) && (lVar7 = *(long *)(lVar6 + 0x88 + uVar4 * 8), lVar7 != 0)) {
              *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar6 + 0x50);
            }
          }
          if ((code *)plVar5[-5] != (code *)0x0) {
            (*(code *)plVar5[-5])(lVar6);
          }
          *plVar14 = lVar6;
          nn::os::LockMutex(pMVar1);
          if (*(int *)(lVar6 + 0xb8) == 0) {
            *(undefined4 *)(lVar6 + 0xb8) = 1;
            FUN_038beda0(param_1,param_1 + 0x58,lVar6);
            plVar5 = *(long **)(param_1 + 0x48);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x18))(plVar5,1,1);
            }
          }
          nn::os::UnlockMutex(pMVar1);
        }
        else if ((int)plVar13[0x17] == 2) {
          nn::os::LockMutex(pMVar1);
          if ((int)plVar13[0x17] != 4) {
            *(undefined4 *)(plVar13 + 0x17) = 4;
            lVar6 = plVar13[0x10];
            if (lVar6 != 0) {
              plVar8 = plVar13 + 0xd;
              plVar13[0x10] = 0;
              if (*plVar8 != 0) {
                *(long *)(*plVar8 + 8) = plVar13[0xe];
              }
              if ((long *)plVar13[0xe] != (long *)0x0) {
                *(long *)plVar13[0xe] = *plVar8;
              }
              *plVar8 = 0;
              plVar13[0xe] = 0;
              *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
            }
            FUN_038beda0(param_1,param_1 + 0x88,plVar13);
            (**(code **)(*plVar13 + 0x58))(plVar13);
          }
          nn::os::UnlockMutex(pMVar1);
          if ((undefined8 *)plVar5[-8] != (undefined8 *)0x0) {
            *(undefined8 *)plVar5[-8] = plVar13;
          }
          plVar8 = (long *)plVar5[-2];
          while (plVar8 != plVar5 + -3) {
            plVar9 = (long *)plVar8[1];
            (*(code *)**(undefined8 **)(plVar8[2] + 0x40))((undefined8 *)(plVar8[2] + 0x40),plVar13)
            ;
            plVar8 = plVar9;
          }
          lVar6 = *(long *)(param_1 + 0x110);
          if (*plVar5 != 0) {
            *(long *)(*plVar5 + 8) = plVar5[1];
          }
          if ((long *)plVar5[1] != (long *)0x0) {
            *(long *)plVar5[1] = *plVar5;
          }
          *plVar5 = 0;
          plVar5[1] = 0;
          *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
          plVar5[-4] = (long)&PTR_LAB_04b63ca8;
          plVar13 = (long *)plVar5[-2];
          while (plVar13 != plVar5 + -3) {
            plVar8 = (long *)plVar13[1];
            lVar7 = plVar13[2];
            plVar11 = *(long **)(lVar7 + 0x28);
            plVar9 = (long *)(lVar7 + 0x20);
            lVar12 = *plVar9;
            plVar13 = plVar8;
            if ((plVar11 != (long *)0x0 || lVar12 != 0) &&
               (lVar10 = *(long *)(lVar7 + 0x38), lVar10 != 0)) {
              *(undefined8 *)(lVar7 + 0x38) = 0;
              if (lVar12 != 0) {
                *(long **)(lVar12 + 8) = plVar11;
                plVar11 = *(long **)(lVar7 + 0x28);
              }
              if (plVar11 != (long *)0x0) {
                *plVar11 = *plVar9;
              }
              *plVar9 = 0;
              *(undefined8 *)(lVar7 + 0x28) = 0;
              *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
            }
          }
          *plVar14 = *(long *)(lVar6 + 0x18);
          *(long **)(lVar6 + 0x18) = plVar14;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return;
}

