
void FUN_03a53530(long param_1)

{
  uint *puVar1;
  MutexType *pMVar2;
  long lVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  size_t sVar14;
  uint *puVar15;
  long lVar16;
  long *plVar17;
  void *pvVar18;
  long lVar19;
  void *__ptr;
  uint uVar20;
  
  uVar9 = *(uint *)(param_1 + 0x7c8);
  if (0 < (int)uVar9) {
    uVar20 = 0;
    do {
      lVar19 = *(long *)(param_1 + 2000);
      uVar4 = uVar20;
      if (uVar9 <= uVar20) {
        uVar4 = 0;
      }
      lVar16 = lVar19 + (ulong)uVar4 * 0x600;
      FUN_03a57430(param_1,lVar16,*(undefined1 *)(param_1 + 0x770));
      uVar9 = *(uint *)(lVar16 + 0x230);
      if (uVar9 != 0) {
        lVar12 = lVar19 + (ulong)uVar4 * 0x600;
        puVar15 = (uint *)(lVar12 + 0x98);
        do {
          while (uVar6 = uVar9 - 1, 0 < (int)uVar9) {
            lVar10 = *(long *)(lVar12 + 0x238);
            *(uint *)(lVar16 + 0x230) = uVar6;
            plVar17 = *(long **)(lVar10 + (ulong)uVar6 * 8);
            uVar9 = *puVar15;
            if ((int)uVar9 < 1) {
              if (plVar17 == (long *)0x0) {
                uVar9 = uVar6;
                break;
              }
            }
            else {
              plVar8 = *(long **)(lVar12 + 0xa0);
              uVar13 = 0;
              sVar14 = (long)(int)uVar9 * 8;
              do {
                sVar14 = sVar14 - 8;
                if ((int)plVar17[2] == *(int *)(*plVar8 + 0x10)) {
                  iVar11 = (int)uVar13;
                  if ((-1 < iVar11) && (iVar11 < (int)uVar9)) {
                    if (iVar11 + 1 < (int)uVar9) {
                      memmove(plVar8,plVar8 + 1,sVar14);
                      uVar9 = *puVar15;
                    }
                    *puVar15 = uVar9 - 1;
                  }
                  break;
                }
                uVar13 = uVar13 + 1;
                plVar8 = plVar8 + 1;
              } while (uVar9 != uVar13);
            }
            (**(code **)(*plVar17 + 0xa8))(plVar17);
            uVar9 = *(uint *)(lVar16 + 0x230);
            if (uVar9 == 0) goto LAB_03a5369c;
          }
        } while (uVar9 != 0);
      }
LAB_03a5369c:
      lVar16 = lVar19 + (ulong)uVar4 * 0x600;
      uVar9 = *(uint *)(lVar16 + 0x260);
      if (uVar9 != 0) {
        puVar15 = (uint *)(lVar16 + 0x260);
        lVar16 = lVar19 + (ulong)uVar4 * 0x600;
        puVar1 = (uint *)(lVar16 + 0x98);
        do {
          while (uVar6 = uVar9 - 1, 0 < (int)uVar9) {
            lVar12 = *(long *)(lVar16 + 0x268);
            *puVar15 = uVar6;
            plVar17 = *(long **)(lVar12 + (ulong)uVar6 * 8);
            uVar9 = *puVar1;
            if ((int)uVar9 < 1) {
              if (plVar17 == (long *)0x0) {
                uVar9 = uVar6;
                break;
              }
            }
            else {
              plVar8 = *(long **)(lVar16 + 0xa0);
              uVar13 = 0;
              sVar14 = (long)(int)uVar9 * 8;
              do {
                sVar14 = sVar14 - 8;
                if ((int)plVar17[2] == *(int *)(*plVar8 + 0x10)) {
                  iVar11 = (int)uVar13;
                  if ((-1 < iVar11) && (iVar11 < (int)uVar9)) {
                    if (iVar11 + 1 < (int)uVar9) {
                      memmove(plVar8,plVar8 + 1,sVar14);
                      uVar9 = *puVar1;
                    }
                    *puVar1 = uVar9 - 1;
                  }
                  break;
                }
                uVar13 = uVar13 + 1;
                plVar8 = plVar8 + 1;
              } while (uVar9 != uVar13);
            }
            (**(code **)(*plVar17 + 0xa8))(plVar17);
            uVar9 = *puVar15;
            if (uVar9 == 0) goto LAB_03a5377c;
          }
        } while (uVar9 != 0);
      }
LAB_03a5377c:
      puVar15 = (uint *)(lVar19 + (ulong)uVar4 * 0x600 + 0x98);
      uVar9 = *puVar15;
      if (uVar9 != 0) {
        do {
          uVar6 = uVar9 - 1;
          if (0 < (int)uVar9) {
            lVar16 = *(long *)(lVar19 + (ulong)uVar4 * 0x600 + 0xa0);
            *puVar15 = uVar6;
            plVar17 = *(long **)(lVar16 + (ulong)uVar6 * 8);
            if (plVar17 == (long *)0x0) {
              uVar9 = uVar6;
            }
            else {
              (**(code **)(*plVar17 + 0xa8))();
              uVar9 = *puVar15;
            }
          }
        } while (uVar9 != 0);
      }
      lVar12 = lVar19 + (ulong)uVar4 * 0x600;
      lVar16 = *(long *)(lVar12 + 0x450);
      if (lVar16 != 0) {
        pvVar18 = (void *)(lVar16 + -8);
        if (DAT_05ae7600 == 0) {
          free(pvVar18);
        }
        else {
          plVar17 = (long *)FUN_038cb610(DAT_05ae7600,pvVar18);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x38))(plVar17,pvVar18);
          }
        }
        *(undefined8 *)(lVar12 + 0x450) = 0;
        *(undefined4 *)(lVar19 + (ulong)uVar4 * 0x600 + 0x448) = 0;
      }
      lVar16 = lVar19 + (ulong)uVar4 * 0x600;
      pvVar18 = *(void **)(lVar16 + 0x460);
      if (pvVar18 != (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          free(pvVar18);
        }
        else {
          plVar17 = (long *)FUN_038cb610(DAT_05ae7600,pvVar18);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x38))(plVar17,pvVar18);
          }
        }
        *(undefined8 *)(lVar16 + 0x460) = 0;
        *(undefined4 *)(lVar19 + (ulong)uVar4 * 0x600 + 0x458) = 0;
      }
      lVar12 = lVar19 + (ulong)uVar4 * 0x600;
      lVar16 = *(long *)(lVar12 + 0x428);
      if (lVar16 != 0) {
        pvVar18 = (void *)(lVar16 + -8);
        if (DAT_05ae7600 == 0) {
          free(pvVar18);
        }
        else {
          plVar17 = (long *)FUN_038cb610(DAT_05ae7600,pvVar18);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x38))(plVar17,pvVar18);
          }
        }
        *(undefined8 *)(lVar12 + 0x428) = 0;
        *(undefined4 *)(lVar19 + (ulong)uVar4 * 0x600 + 0x420) = 0;
      }
      lVar19 = lVar19 + (ulong)uVar4 * 0x600;
      lVar16 = *(long *)(lVar19 + 0x438);
      if (lVar16 != 0) {
        plVar17 = (long *)(lVar16 + -8);
        if (*plVar17 != 0) {
          lVar12 = *plVar17 * 0xe0;
          do {
            lVar7 = DAT_05ae78f0;
            lVar10 = lVar16 + lVar12;
            if (*(short *)(lVar10 + -6) != -1) {
              pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x580);
              nn::os::LockMutex(pMVar2);
              uVar9 = (int)*(short *)(lVar10 + -6) - (uint)*(ushort *)(lVar7 + 0x5c0);
              if (*(uint *)(lVar7 + 0x5a0) <= uVar9) {
                uVar9 = 0;
              }
              lVar3 = *(long *)(lVar7 + 0x5a8) + (long)(int)uVar9 * 0x80;
              sVar5 = *(short *)(lVar3 + 0x76) + -1;
              *(short *)(lVar3 + 0x76) = sVar5;
              if (sVar5 == 0) {
                *(short *)(lVar7 + 0x5c4) = *(short *)(lVar7 + 0x5c4) + -1;
              }
              nn::os::UnlockMutex(pMVar2);
              *(undefined2 *)(lVar10 + -6) = 0xffff;
            }
            FUN_038fd0e0(lVar10 + -0x90);
            lVar12 = lVar12 + -0xe0;
          } while (lVar12 != 0);
        }
        if (DAT_05ae7600 == 0) {
          free(plVar17);
        }
        else {
          plVar8 = (long *)FUN_038cb610(DAT_05ae7600,plVar17);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x38))(plVar8,plVar17);
          }
        }
        *(undefined8 *)(lVar19 + 0x438) = 0;
        *(undefined4 *)(lVar19 + 0x430) = 0;
      }
      uVar20 = uVar20 + 1;
      uVar9 = *(uint *)(param_1 + 0x7c8);
    } while ((int)uVar20 < (int)uVar9);
  }
  if (*(long *)(param_1 + 2000) != 0) {
    pvVar18 = (void *)(*(long *)(param_1 + 2000) + -8);
    if (DAT_05ae7600 == 0) {
      free(pvVar18);
    }
    else {
      plVar17 = (long *)FUN_038cb610(DAT_05ae7600,pvVar18);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x38))(plVar17,pvVar18);
      }
    }
    *(undefined8 *)(param_1 + 2000) = 0;
    *(undefined4 *)(param_1 + 0x7c8) = 0;
  }
  pvVar18 = *(void **)(param_1 + 0x7e0);
  if (pvVar18 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar18);
    }
    else {
      plVar17 = (long *)FUN_038cb610(DAT_05ae7600,pvVar18);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x38))(plVar17,pvVar18);
      }
    }
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    *(undefined4 *)(param_1 + 0x7d8) = 0;
  }
  __ptr = *(void **)(param_1 + 0x778);
  pvVar18 = *(void **)(param_1 + 0x7a0);
  if (__ptr != (void *)0x0 || pvVar18 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x790) = 0;
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar17 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x38))(plVar17,__ptr);
        }
      }
      pvVar18 = *(void **)(param_1 + 0x7a0);
    }
    if (pvVar18 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar18);
      }
      else {
        plVar17 = (long *)FUN_038cb610(DAT_05ae7600,pvVar18);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x38))(plVar17,pvVar18);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x778) = 0;
    *(undefined8 *)(param_1 + 0x7a0) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
    *(undefined4 *)(param_1 + 0x7a8) = 0;
    *(undefined4 *)(param_1 + 0x798) = 0;
    *(undefined4 *)(param_1 + 0x7c0) = 0;
  }
  return;
}

