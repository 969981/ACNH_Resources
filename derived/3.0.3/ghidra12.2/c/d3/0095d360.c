
void FUN_0095d360(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_04bb2110;
  plVar8 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bb2110 + 0x10);
  nn::os::LockMutex((MutexType *)(plVar8 + 0x4d));
  (**(code **)(*plVar8 + 0x38))(plVar8,param_1 + 0x468);
  nn::os::UnlockMutex((MutexType *)(plVar8 + 0x4d));
  if (*(int *)(*(long *)puVar3 + 8) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)**(undefined8 **)(*(long *)puVar3 + 0x10);
  }
  uVar6 = *(uint *)(param_1 + 0x518);
  if (0 < (int)uVar6) {
    uVar10 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x520);
      uVar2 = uVar10;
      if (uVar6 <= uVar10) {
        uVar2 = 0;
      }
      nn::os::LockMutex((MutexType *)(plVar8 + 0x4d));
      (**(code **)(*plVar8 + 0x38))(plVar8,lVar7 + (ulong)uVar2 * 0xe8);
      nn::os::UnlockMutex((MutexType *)(plVar8 + 0x4d));
      uVar6 = uVar10;
      if (*(uint *)(param_1 + 0x518) <= uVar10) {
        uVar6 = 0;
      }
      uVar10 = uVar10 + 1;
      **(undefined1 **)(*(long *)(param_1 + 0x520) + (ulong)uVar6 * 0xe8 + 0x58) = 0;
      uVar6 = *(uint *)(param_1 + 0x518);
    } while ((int)uVar10 < (int)uVar6);
  }
  if (*(char *)(param_1 + 0x540) != '\0') {
    lVar7 = *(long *)puVar3;
    *(undefined1 *)(param_1 + 0x540) = 0;
    if (((*(int *)(lVar7 + 8) != 0) &&
        (plVar8 = (long *)**(undefined8 **)(lVar7 + 0x10), plVar8 != (long *)0x0)) &&
       (uVar6 = *(uint *)(param_1 + 0x530), 0 < (int)uVar6)) {
      uVar10 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x538);
        uVar2 = uVar10;
        if (uVar6 <= uVar10) {
          uVar2 = 0;
        }
        nn::os::LockMutex((MutexType *)(plVar8 + 0x4d));
        (**(code **)(*plVar8 + 0x38))(plVar8,lVar7 + (ulong)uVar2 * 0xe8);
        nn::os::UnlockMutex((MutexType *)(plVar8 + 0x4d));
        uVar6 = uVar10;
        if (*(uint *)(param_1 + 0x530) <= uVar10) {
          uVar6 = 0;
        }
        uVar10 = uVar10 + 1;
        **(undefined1 **)(*(long *)(param_1 + 0x538) + (ulong)uVar6 * 0xe8 + 0x58) = 0;
        uVar6 = *(uint *)(param_1 + 0x530);
      } while ((int)uVar10 < (int)uVar6);
    }
    puVar4 = PTR_DAT_04bb49b8;
    lVar7 = *(long *)(param_1 + 0x538);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + -8);
      if (*plVar8 != 0) {
        lVar11 = *plVar8 * 0xe8;
        lVar9 = 0;
        do {
          lVar1 = lVar7 + lVar11;
          if ((*(byte *)(lVar1 + -0xd0) >> 1 & 1) != 0) {
            *(byte *)(lVar1 + -0xd0) = *(byte *)(lVar1 + -0xd0) & 0xf8 | 4;
            if (*(long *)(lVar1 + -0xb0) == 0) {
              if (*(long *)(lVar1 + -200) != 0) goto LAB_0095d578;
            }
            else {
              FUN_03f45838(lVar1 + -0xc0);
              if (*(long *)(lVar1 + -200) == 0) {
                *(undefined4 *)(lVar1 + -0xcc) = 0xe;
              }
              else {
LAB_0095d578:
                if (*(long *)puVar4 != 0) {
                  FUN_03f350f4(*(long *)puVar4,lVar1 + -0xd8);
                }
              }
            }
          }
          FUN_03f457c4(lVar1 + -0xc0);
          lVar9 = lVar9 + 0xe8;
          lVar7 = lVar7 + -0xe8;
        } while (lVar11 != lVar9);
      }
      if (DAT_05ae7600 == 0) {
        free(plVar8);
      }
      else {
        plVar5 = (long *)FUN_038cb610(DAT_05ae7600,plVar8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,plVar8);
        }
      }
      *(undefined8 *)(param_1 + 0x538) = 0;
      *(undefined4 *)(param_1 + 0x530) = 0;
    }
    if (*(long **)(param_1 + 0x528) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x528) + 0x20))();
      *(undefined8 *)(param_1 + 0x528) = 0;
    }
  }
  if (*(char *)(param_1 + 0x4b8) == '\0') {
    if (*(char *)(param_1 + 0x4b9) != '\0') {
      if (*(int *)(*(long *)puVar3 + 8) == 0) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = (long *)**(undefined8 **)(*(long *)puVar3 + 0x10);
      }
      uVar6 = *(uint *)(param_1 + 0x4d0);
      if (0 < (int)uVar6) {
        uVar10 = 0;
        do {
          lVar7 = *(long *)(param_1 + 0x4d8);
          uVar2 = uVar10;
          if (uVar6 <= uVar10) {
            uVar2 = 0;
          }
          nn::os::LockMutex((MutexType *)(plVar8 + 0x4d));
          (**(code **)(*plVar8 + 0x38))(plVar8,lVar7 + (ulong)uVar2 * 0x50);
          nn::os::UnlockMutex((MutexType *)(plVar8 + 0x4d));
          uVar6 = *(uint *)(param_1 + 0x4d0);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar6);
      }
      puVar3 = PTR_DAT_04bb49b8;
      lVar7 = *(long *)(param_1 + 0x4d8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + -8);
        if (*plVar8 != 0) {
          lVar9 = 0;
          lVar11 = *plVar8 * 0x50;
          do {
            lVar1 = lVar7 + lVar11;
            if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
              *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
              if (*(long *)(lVar1 + -0x18) == 0) {
                if (*(long *)(lVar1 + -0x30) != 0) goto LAB_0095d8d4;
              }
              else {
                FUN_03f45838(lVar1 + -0x28);
                if (*(long *)(lVar1 + -0x30) == 0) {
                  *(undefined4 *)(lVar1 + -0x34) = 0xe;
                }
                else {
LAB_0095d8d4:
                  if (*(long *)puVar3 != 0) {
                    FUN_03f350f4(*(long *)puVar3,lVar1 + -0x40);
                  }
                }
              }
            }
            FUN_03f457c4(lVar1 + -0x28);
            lVar9 = lVar9 + 0x50;
            lVar7 = lVar7 + -0x50;
          } while (lVar11 != lVar9);
        }
        if (DAT_05ae7600 == 0) {
          free(plVar8);
        }
        else {
          plVar5 = (long *)FUN_038cb610(DAT_05ae7600,plVar8);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,plVar8);
          }
        }
        *(undefined8 *)(param_1 + 0x4d8) = 0;
        *(undefined4 *)(param_1 + 0x4d0) = 0;
      }
      if (*(long **)(param_1 + 0x4e0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x4e0) + 0x20))();
        *(undefined8 *)(param_1 + 0x4e0) = 0;
      }
      *(undefined1 *)(param_1 + 0x4b9) = 0;
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 8) == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)**(undefined8 **)(*(long *)puVar3 + 0x10);
    }
    uVar6 = *(uint *)(param_1 + 0xda8);
    if (0 < (int)uVar6) {
      uVar10 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0xdb0);
        uVar2 = uVar10;
        if (uVar6 <= uVar10) {
          uVar2 = 0;
        }
        nn::os::LockMutex((MutexType *)(plVar8 + 0x4d));
        (**(code **)(*plVar8 + 0x38))(plVar8,lVar7 + (ulong)uVar2 * 0x50);
        nn::os::UnlockMutex((MutexType *)(plVar8 + 0x4d));
        uVar6 = *(uint *)(param_1 + 0xda8);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar6);
    }
    uVar6 = *(uint *)(param_1 + 0x4c0);
    if (0 < (int)uVar6) {
      uVar10 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x4c8);
        uVar2 = uVar10;
        if (uVar6 <= uVar10) {
          uVar2 = 0;
        }
        nn::os::LockMutex((MutexType *)(plVar8 + 0x4d));
        (**(code **)(*plVar8 + 0x38))(plVar8,lVar7 + (ulong)uVar2 * 0x50);
        nn::os::UnlockMutex((MutexType *)(plVar8 + 0x4d));
        uVar6 = *(uint *)(param_1 + 0x4c0);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar6);
    }
    puVar3 = PTR_DAT_04bb49b8;
    lVar7 = *(long *)(param_1 + 0x4c8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + -8);
      if (*plVar8 != 0) {
        lVar9 = 0;
        lVar11 = *plVar8 * 0x50;
        do {
          lVar1 = lVar7 + lVar11;
          if ((*(byte *)(lVar1 + -0x38) >> 1 & 1) != 0) {
            *(byte *)(lVar1 + -0x38) = *(byte *)(lVar1 + -0x38) & 0xf8 | 4;
            if (*(long *)(lVar1 + -0x18) == 0) {
              if (*(long *)(lVar1 + -0x30) != 0) goto LAB_0095d774;
            }
            else {
              FUN_03f45838(lVar1 + -0x28);
              if (*(long *)(lVar1 + -0x30) == 0) {
                *(undefined4 *)(lVar1 + -0x34) = 0xe;
              }
              else {
LAB_0095d774:
                if (*(long *)puVar3 != 0) {
                  FUN_03f350f4(*(long *)puVar3,lVar1 + -0x40);
                }
              }
            }
          }
          FUN_03f457c4(lVar1 + -0x28);
          lVar9 = lVar9 + 0x50;
          lVar7 = lVar7 + -0x50;
        } while (lVar11 != lVar9);
      }
      if (DAT_05ae7600 == 0) {
        free(plVar8);
      }
      else {
        plVar5 = (long *)FUN_038cb610(DAT_05ae7600,plVar8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,plVar8);
        }
      }
      *(undefined8 *)(param_1 + 0x4c8) = 0;
      *(undefined4 *)(param_1 + 0x4c0) = 0;
    }
    if (*(long **)(param_1 + 0x4e0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x4e0) + 0x20))();
      *(undefined8 *)(param_1 + 0x4e0) = 0;
    }
    *(undefined1 *)(param_1 + 0x4b8) = 0;
  }
  return;
}

