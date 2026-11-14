
void FUN_015f01b0(long param_1,long param_2)

{
  MutexType *pMVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long local_70;
  long local_68;
  
  pMVar1 = (MutexType *)(param_1 + 0x7a5428);
  nn::os::LockMutex(pMVar1);
  uVar4 = *(uint *)(&LAB_007a5448 + param_1);
  if (0 < (int)uVar4) {
    uVar17 = 0;
    puVar2 = (uint *)(&LAB_007a6498 + param_1);
    do {
      nn::os::LockMutex(pMVar1);
      if (uVar17 < *(uint *)(&LAB_007a5448 + param_1)) {
        lVar14 = *(long *)(*(long *)(&LAB_007a5450 + param_1) + uVar17 * 8);
      }
      else {
        lVar14 = 0;
      }
      nn::os::UnlockMutex(pMVar1);
      if ((*(byte *)(lVar14 + 0x38) >> 2 & 1) == 0) {
        lVar8 = (**(code **)(*(long *)(*(long *)(lVar14 + 0x10) + 0x2e8) + 0xf0))
                          (*(long *)(lVar14 + 0x10) + 0x2e8);
        lVar11 = *(long *)(lVar14 + 0x10);
        if (**(char **)(lVar8 + 8) == '\0') {
          uVar10 = (**(code **)(*(long *)(lVar11 + 0x430) + 0xf0))(lVar11 + 0x430);
          if (*(int *)(param_2 + 0x30) != 0) {
            lVar15 = *(long *)(param_2 + 0x38);
            lVar8 = 0;
            lVar11 = (long)*(int *)(param_2 + 0x30) << 3;
            do {
              plVar9 = (long *)**(undefined8 **)(lVar15 + lVar8 * 8);
              uVar7 = (**(code **)(*plVar9 + 0x38))(plVar9,uVar10);
              if (uVar7 != 0xffffffff) {
                uVar13 = (uint)lVar8 & 0xffff;
                uVar7 = uVar7 & 0xffff;
                goto LAB_015f0470;
              }
              lVar8 = lVar8 + 1;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
          uVar13 = 0xffffffff;
          uVar7 = 0xffff;
LAB_015f0470:
          if (((uVar13 & 0xffff) != 0xffff) && ((uVar7 & 0xffff) != 0xffff)) {
            uVar7 = uVar13 & 0xffff | uVar7 << 0x10;
            if (0 < (int)*puVar2) {
              uVar12 = 0;
              do {
                nn::os::LockMutex((MutexType *)(param_1 + 0x7a6478));
                if (uVar12 < *puVar2) {
                  lVar8 = *(long *)(*(long *)(&LAB_007a64a0 + param_1) + uVar12 * 8);
                }
                else {
                  lVar8 = 0;
                }
                nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a6478));
                if (((*(long *)(lVar8 + 0x28) == param_2) && (*(uint *)(lVar8 + 0x30) == uVar7)) &&
                   (*(long *)(lVar8 + 0x20) == lVar14)) goto LAB_015f0240;
                uVar12 = uVar12 + 1;
              } while ((long)uVar12 < (long)(int)*puVar2);
            }
            FUN_015ef730(param_1,lVar14,param_2,uVar7,0);
          }
        }
        else {
          plVar9 = (long *)(**(code **)(*(long *)(lVar11 + 0x2e8) + 0xf0))(lVar11 + 0x2e8);
          if (*(int *)(param_2 + 0x30) != 0) {
            puVar16 = *(undefined8 **)(param_2 + 0x38);
            uVar13 = 0;
            puVar3 = puVar16 + *(int *)(param_2 + 0x30);
            do {
              (**(code **)(**(long **)*puVar16 + 0x28))(&local_70);
              (**(code **)(*plVar9 + 0x18))(plVar9);
              (**(code **)(*plVar9 + 0x18))(plVar9);
              lVar8 = plVar9[1];
              (**(code **)(local_70 + 0x18))(&local_70);
              if (lVar8 == local_68) {
LAB_015f042c:
                plVar9 = (long *)**(undefined8 **)(*(long *)(param_2 + 0x38) + (ulong)uVar13 * 8);
                uVar10 = (**(code **)(*(long *)(*(long *)(lVar14 + 0x10) + 0x430) + 0xf0))
                                   (*(long *)(lVar14 + 0x10) + 0x430);
                uVar7 = (**(code **)(*plVar9 + 0x38))(plVar9,uVar10);
                if (-1 < (int)uVar7) goto LAB_015f0470;
                break;
              }
              uVar12 = 0;
              bVar6 = true;
              do {
                lVar8 = plVar9[1] + 1 + uVar12;
                lVar11 = local_68 + 1 + uVar12;
                cVar5 = *(char *)(lVar8 + -1);
                if (cVar5 != *(char *)(lVar11 + -1)) break;
                if (cVar5 == '\0') {
                  if (bVar6) goto LAB_015f042c;
                  break;
                }
                cVar5 = *(char *)(plVar9[1] + 1 + uVar12);
                if (cVar5 != *(char *)(local_68 + 1 + uVar12)) break;
                if (cVar5 == '\0') goto LAB_015f042c;
                cVar5 = *(char *)(lVar8 + 1);
                if (cVar5 != *(char *)(lVar11 + 1)) break;
                if (cVar5 == '\0') goto LAB_015f042c;
                bVar6 = uVar12 < 0x7fffe;
                uVar12 = uVar12 + 3;
              } while (uVar12 != 0x80001);
              puVar16 = puVar16 + 1;
              uVar13 = uVar13 + 1;
            } while (puVar16 != puVar3);
          }
        }
      }
LAB_015f0240:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar4);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

