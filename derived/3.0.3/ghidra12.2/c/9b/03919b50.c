
void FUN_03919b50(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long local_98;
  byte *local_90;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x890));
  if (*(long *)(param_1 + 0x230) != param_1 + 0x228) {
    lVar12 = (long)*(int *)(param_1 + 0x23c);
    lVar11 = *(long *)(param_1 + 0x230) - lVar12;
    lVar10 = lVar11 + lVar12;
    do {
      plVar14 = (long *)(lVar11 + *(int *)(param_1 + 0x23c));
      lVar10 = *(long *)(lVar10 + 8);
      if (*plVar14 != 0) {
        *(long *)(*plVar14 + 8) = plVar14[1];
      }
      if ((long *)plVar14[1] != (long *)0x0) {
        *(long *)plVar14[1] = *plVar14;
      }
      *plVar14 = 0;
      plVar14[1] = 0;
      *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
      lVar11 = lVar10 - lVar12;
    } while (lVar11 != (param_1 + 0x228) - lVar12);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x890));
  if (*(int *)(param_1 + 0x2a0) == 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x8d0));
    lVar10 = *(long *)(param_1 + 0x218);
    if (lVar10 != param_1 + 0x210) {
      iVar13 = *(int *)(param_1 + 0x224);
      do {
        lVar10 = *(long *)(lVar10 + 8);
        FUN_0391873c(param_1);
      } while (lVar10 - iVar13 != (param_1 + 0x210) - (long)iVar13);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x8d0));
    uVar5 = *(uint *)(param_1 + 0x2a4);
  }
  else {
    if (*(int *)(param_1 + 0x2a4) == 0) {
      return;
    }
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      if (*(uint *)(param_1 + 0x200) <= uVar6) {
        uVar5 = 0;
      }
      plVar14 = (long *)(*(long *)(param_1 + 0x208) + (long)(int)uVar5 * 0x2a70);
      if (((char)plVar14[0x54b] != '\0') != (plVar14[0x2b] != 0 || plVar14[0x2a] != 0)) {
        if ((char)plVar14[0x54b] == '\0') {
          FUN_0391873c(param_1,plVar14);
        }
        else {
          nn::os::LockMutex((MutexType *)(param_1 + 0x8d0));
          plVar1 = (long *)((long)*(int *)(param_1 + 0x224) + (long)plVar14);
          lVar10 = *(long *)(param_1 + 0x210);
          *(long **)(param_1 + 0x210) = plVar1;
          *plVar1 = lVar10;
          plVar1[1] = param_1 + 0x210;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 8) = plVar1;
          }
          *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
          *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + 1;
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x8d0));
          (**(code **)(*plVar14 + 0x30))
                    (plVar14,*(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2a0),
                     *(undefined4 *)(param_1 + 700));
        }
      }
      uVar5 = *(uint *)(param_1 + 0x2a4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  if (uVar5 != 0) {
    uVar5 = 0;
    plVar14 = (long *)(param_1 + 0x18);
    do {
      uVar6 = uVar5;
      if (*(uint *)(param_1 + 0x200) <= uVar5) {
        uVar6 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x208) + (long)(int)uVar6 * 0x2a70 + 0xfc) = 0xffffffff;
      uVar6 = uVar5;
      if (*(uint *)(param_1 + 0x200) <= uVar5) {
        uVar6 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x208) + (long)(int)uVar6 * 0x2a70 + 0x100) = 0xffffffff;
      lVar10 = *(long *)(param_1 + 0x18);
      uVar6 = uVar5;
      if (*(uint *)(param_1 + 0x200) <= uVar5) {
        uVar6 = 0;
      }
      if (lVar10 != 0) {
        lVar11 = *(long *)(param_1 + 0x208) + (long)(int)uVar6 * 0x2a70;
        if (lVar10 == lVar11 + 0x108) {
          lVar12 = 0;
        }
        else {
          do {
            lVar12 = lVar10;
            lVar10 = *(long *)(lVar12 + 0x30);
            if (lVar10 == 0) goto LAB_03919d64;
          } while (lVar10 != lVar11 + 0x108);
        }
        plVar1 = plVar14;
        if (lVar12 != 0) {
          plVar1 = (long *)(lVar12 + 0x30);
        }
        *plVar1 = *(long *)(lVar11 + 0x138);
        if (*(long *)(lVar11 + 0x138) == 0) {
          *(long *)(param_1 + 0x20) = lVar12;
        }
        *(undefined8 *)(lVar11 + 0x138) = 0;
      }
LAB_03919d64:
      puVar3 = PTR_DAT_04bd1140;
      uVar6 = *(uint *)(param_1 + 0x2a4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    lVar12 = (long)*(int *)(param_1 + 0x224);
    lVar11 = *(long *)(param_1 + 0x218) - lVar12;
    lVar10 = (param_1 - lVar12) + 0x210;
    if ((*(byte *)(param_1 + 0x452) & 1) == 0) {
      if (lVar11 == lVar10) {
        iVar13 = 0;
        plVar1 = (long *)PTR_DAT_04bd1140;
      }
      else {
        iVar13 = 0;
        do {
          *(int *)(lVar11 + 0xfc) = iVar13;
          *(undefined4 *)(lVar11 + 0x100) = 0;
          FUN_006d8678(&local_98,"cubemap_unit_%d",iVar13);
          uVar4 = 0;
          if (*(long *)puVar3 != 0) {
            uVar4 = FUN_03954f70(*(long *)puVar3,&local_98);
          }
          *(undefined8 *)(lVar11 + 0x148) = uVar4;
          (**(code **)(local_98 + 0x18))(&local_98);
          uVar6 = (uint)*local_90;
          uVar5 = 0;
          if (*local_90 != 0) {
            uVar5 = 0xffffffff;
            pbVar8 = local_90;
            do {
              pbVar8 = pbVar8 + 1;
              uVar5 = crc32b(uVar5,uVar6,0x4c11db7);
              uVar6 = (uint)*pbVar8;
            } while (uVar6 != 0);
            uVar5 = ~uVar5;
          }
          *(uint *)(lVar11 + 0x130) = uVar5;
          iVar13 = iVar13 + 1;
          plVar1 = plVar14;
          if (*(long *)(param_1 + 0x20) != 0) {
            plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
          }
          *plVar1 = lVar11 + 0x108;
          *(long *)(param_1 + 0x20) = lVar11 + 0x108;
          *(long *)(lVar11 + 0x140) = param_1;
          lVar11 = *(long *)(lVar11 + lVar12 + 8) + -lVar12;
        } while (lVar11 != lVar10);
        uVar6 = *(uint *)(param_1 + 0x2a4);
        plVar1 = (long *)PTR_DAT_04bd1140;
      }
      PTR_DAT_04bd1140 = (undefined *)plVar1;
      if (uVar6 != 0) {
        uVar5 = 0;
        do {
          uVar7 = uVar5;
          if (*(uint *)(param_1 + 0x200) <= uVar5) {
            uVar7 = 0;
          }
          piVar9 = (int *)(*(long *)(param_1 + 0x208) + (long)(int)uVar7 * 0x2a70 + 0xfc);
          if (*piVar9 == -1) {
            *piVar9 = iVar13;
            uVar6 = uVar5;
            if (*(uint *)(param_1 + 0x200) <= uVar5) {
              uVar6 = 0;
            }
            *(undefined4 *)(*(long *)(param_1 + 0x208) + (long)(int)uVar6 * 0x2a70 + 0x100) = 0;
            uVar6 = uVar5;
            if (*(uint *)(param_1 + 0x200) <= uVar5) {
              uVar6 = 0;
            }
            lVar10 = *(long *)(param_1 + 0x208) + (long)(int)uVar6 * 0x2a70;
            FUN_006d8678(&local_98,"cubemap_unit_%d",*(undefined4 *)(lVar10 + 0xfc));
            uVar4 = 0;
            if (*plVar1 != 0) {
              uVar4 = FUN_03954f70(*plVar1,&local_98);
            }
            *(undefined8 *)(lVar10 + 0x148) = uVar4;
            (**(code **)(local_98 + 0x18))(&local_98);
            uVar7 = (uint)*local_90;
            uVar6 = 0;
            if (*local_90 != 0) {
              uVar6 = 0xffffffff;
              pbVar8 = local_90;
              do {
                pbVar8 = pbVar8 + 1;
                uVar6 = crc32b(uVar6,uVar7,0x4c11db7);
                uVar7 = (uint)*pbVar8;
              } while (uVar7 != 0);
              uVar6 = ~uVar6;
            }
            *(uint *)(lVar10 + 0x130) = uVar6;
            iVar13 = iVar13 + 1;
            plVar2 = plVar14;
            if (*(long *)(param_1 + 0x20) != 0) {
              plVar2 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
            }
            *plVar2 = lVar10 + 0x108;
            *(long *)(param_1 + 0x20) = lVar10 + 0x108;
            *(long *)(lVar10 + 0x140) = param_1;
            uVar6 = *(uint *)(param_1 + 0x2a4);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
    }
    else {
      if (lVar11 == lVar10) {
        iVar13 = 0;
      }
      else {
        iVar13 = 0;
        do {
          *(int *)(lVar11 + 0xfc) = iVar13;
          *(int *)(lVar11 + 0x100) = iVar13;
          FUN_006d8678(&local_98,"cubemap_unit_%d",iVar13);
          uVar4 = 0;
          if (DAT_05ae90f0 != 0) {
            uVar4 = FUN_03954f70(DAT_05ae90f0,&local_98);
          }
          *(undefined8 *)(lVar11 + 0x148) = uVar4;
          (**(code **)(local_98 + 0x18))(&local_98);
          uVar6 = (uint)*local_90;
          uVar5 = 0;
          if (*local_90 != 0) {
            uVar5 = 0xffffffff;
            pbVar8 = local_90;
            do {
              pbVar8 = pbVar8 + 1;
              uVar5 = crc32b(uVar5,uVar6,0x4c11db7);
              uVar6 = (uint)*pbVar8;
            } while (uVar6 != 0);
            uVar5 = ~uVar5;
          }
          *(uint *)(lVar11 + 0x130) = uVar5;
          iVar13 = iVar13 + 1;
          plVar1 = plVar14;
          if (*(long *)(param_1 + 0x20) != 0) {
            plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
          }
          *plVar1 = lVar11 + 0x108;
          *(long *)(param_1 + 0x20) = lVar11 + 0x108;
          *(long *)(lVar11 + 0x140) = param_1;
          lVar11 = *(long *)(lVar11 + lVar12 + 8) + -lVar12;
        } while (lVar11 != lVar10);
        uVar6 = *(uint *)(param_1 + 0x2a4);
      }
      if (uVar6 != 0) {
        uVar5 = 0;
        do {
          uVar7 = uVar5;
          if (*(uint *)(param_1 + 0x200) <= uVar5) {
            uVar7 = 0;
          }
          piVar9 = (int *)(*(long *)(param_1 + 0x208) + (long)(int)uVar7 * 0x2a70 + 0xfc);
          if (*piVar9 == -1) {
            *piVar9 = iVar13;
            uVar6 = uVar5;
            if (*(uint *)(param_1 + 0x200) <= uVar5) {
              uVar6 = 0;
            }
            *(int *)(*(long *)(param_1 + 0x208) + (long)(int)uVar6 * 0x2a70 + 0x100) = iVar13;
            uVar6 = uVar5;
            if (*(uint *)(param_1 + 0x200) <= uVar5) {
              uVar6 = 0;
            }
            lVar10 = *(long *)(param_1 + 0x208) + (long)(int)uVar6 * 0x2a70;
            FUN_006d8678(&local_98,"cubemap_unit_%d",*(undefined4 *)(lVar10 + 0xfc));
            uVar4 = 0;
            if (DAT_05ae90f0 != 0) {
              uVar4 = FUN_03954f70(DAT_05ae90f0,&local_98);
            }
            *(undefined8 *)(lVar10 + 0x148) = uVar4;
            (**(code **)(local_98 + 0x18))(&local_98);
            uVar7 = (uint)*local_90;
            uVar6 = 0;
            if (*local_90 != 0) {
              uVar6 = 0xffffffff;
              pbVar8 = local_90;
              do {
                pbVar8 = pbVar8 + 1;
                uVar6 = crc32b(uVar6,uVar7,0x4c11db7);
                uVar7 = (uint)*pbVar8;
              } while (uVar7 != 0);
              uVar6 = ~uVar6;
            }
            *(uint *)(lVar10 + 0x130) = uVar6;
            iVar13 = iVar13 + 1;
            plVar1 = plVar14;
            if (*(long *)(param_1 + 0x20) != 0) {
              plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
            }
            *plVar1 = lVar10 + 0x108;
            *(long *)(param_1 + 0x20) = lVar10 + 0x108;
            *(long *)(lVar10 + 0x140) = param_1;
            uVar6 = *(uint *)(param_1 + 0x2a4);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
    }
  }
  return;
}

