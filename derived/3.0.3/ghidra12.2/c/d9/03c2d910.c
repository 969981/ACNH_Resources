
/* WARNING: Removing unreachable block (ram,0x03c2d9d8) */

void FUN_03c2d910(long param_1,uint param_2,long *param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2400));
  if (*(char *)param_3[1] == '\0') {
    if (param_2 == 2) {
      lVar14 = 0;
      do {
        lVar6 = param_1 + 0x1608 + lVar14 * 0x18;
        lVar15 = *(long *)(lVar6 + 8);
        if (0 < *(int *)(lVar6 + 0x10) && lVar15 != 0) {
          do {
            (**(code **)(**(long **)(*(long *)(lVar15 + 0x10) + 0x1b0) + 0x20))();
            if (*(int *)(lVar6 + 0x10) < 1) break;
            lVar15 = *(long *)(lVar6 + 8);
          } while (lVar15 != 0);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 100);
    }
    else {
      lVar14 = 0;
      do {
        lVar15 = param_1 + 0x348 + (ulong)param_2 * 0x960;
        if (2 < param_2) {
          lVar15 = param_1 + 0x348;
        }
        lVar15 = lVar15 + lVar14 * 0x18;
        iVar5 = *(int *)(lVar15 + 0x10);
        lVar6 = *(long *)(lVar15 + 8);
        if (0 < iVar5 && lVar6 != 0) {
          do {
            if (*(long **)(lVar6 + 0x10) != (long *)0x0) {
              (**(code **)(**(long **)(lVar6 + 0x10) + 8))();
              iVar5 = *(int *)(lVar15 + 0x10);
              lVar6 = *(long *)(lVar15 + 8);
            }
          } while ((0 < iVar5) && (lVar6 != 0));
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 100);
    }
  }
  else {
    (**(code **)(*param_3 + 0x18))(param_3);
    pbVar9 = (byte *)param_3[1];
    uVar4 = (uint)*pbVar9;
    if (*pbVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0xffffffff;
      do {
        pbVar9 = pbVar9 + 1;
        uVar8 = crc32b(uVar8,uVar4,0x4c11db7);
        uVar4 = (uint)*pbVar9;
      } while (uVar4 != 0);
      uVar8 = ~uVar8;
    }
    lVar14 = param_1 + 0x348 + (ulong)param_2 * 0x960;
    if (2 < param_2) {
      lVar14 = param_1 + 0x348;
    }
    lVar14 = lVar14 + (ulong)(uVar8 % 100) * 0x18;
    lVar15 = *(long *)(lVar14 + 8);
    if (lVar15 != lVar14) {
      lVar6 = *(long *)(lVar15 + 8);
      if (param_2 == 2) {
        do {
          lVar7 = lVar6;
          lVar6 = *(long *)(lVar15 + 0x10);
          if (*(uint *)(lVar6 + 0x20) == uVar8) {
            plVar11 = (long *)(lVar6 + 0x60);
            (**(code **)(*plVar11 + 0x18))(plVar11);
            (**(code **)(*plVar11 + 0x18))(plVar11);
            lVar12 = *(long *)(lVar6 + 0x68);
            (**(code **)(*param_3 + 0x18))(param_3);
            if (lVar12 == param_3[1]) {
LAB_03c2db74:
              if ((param_4 == (long *)0x0) ||
                 (uVar10 = (**(code **)(*param_4 + 0x88))(param_4,lVar15), (uVar10 & 1) != 0)) {
                (**(code **)(**(long **)(*(long *)(lVar15 + 0x10) + 0x1b0) + 0x20))();
              }
            }
            else {
              uVar10 = 0;
              lVar12 = param_3[1] + 1;
              bVar3 = true;
              lVar6 = *(long *)(lVar6 + 0x68) + 1;
              do {
                lVar13 = lVar6 + uVar10;
                lVar1 = lVar12 + uVar10;
                cVar2 = *(char *)(lVar13 + -1);
                if (cVar2 != *(char *)(lVar1 + -1)) break;
                if (cVar2 == '\0') {
                  if (bVar3) goto LAB_03c2db74;
                  break;
                }
                cVar2 = *(char *)(lVar6 + uVar10);
                if (cVar2 != *(char *)(lVar12 + uVar10)) break;
                if (cVar2 == '\0') goto LAB_03c2db74;
                cVar2 = *(char *)(lVar13 + 1);
                if (cVar2 != *(char *)(lVar1 + 1)) break;
                if (cVar2 == '\0') goto LAB_03c2db74;
                bVar3 = uVar10 < 0x7fffe;
                uVar10 = uVar10 + 3;
              } while (uVar10 != 0x80001);
            }
          }
          lVar6 = *(long *)(lVar7 + 8);
          lVar15 = lVar7;
        } while (lVar7 != lVar14);
      }
      else if (param_4 == (long *)0x0) {
        do {
          lVar7 = lVar6;
          lVar6 = *(long *)(lVar15 + 0x10);
          if (*(uint *)(lVar6 + 0x20) == uVar8) {
            plVar11 = (long *)(lVar6 + 0x60);
            (**(code **)(*plVar11 + 0x18))(plVar11);
            (**(code **)(*plVar11 + 0x18))(plVar11);
            lVar12 = *(long *)(lVar6 + 0x68);
            (**(code **)(*param_3 + 0x18))(param_3);
            if (lVar12 == param_3[1]) {
LAB_03c2de10:
              if (*(long **)(lVar15 + 0x10) != (long *)0x0) {
                (**(code **)(**(long **)(lVar15 + 0x10) + 8))();
              }
            }
            else {
              uVar10 = 0;
              lVar12 = param_3[1] + 1;
              bVar3 = true;
              lVar6 = *(long *)(lVar6 + 0x68) + 1;
              do {
                lVar13 = lVar6 + uVar10;
                lVar1 = lVar12 + uVar10;
                cVar2 = *(char *)(lVar13 + -1);
                if (cVar2 != *(char *)(lVar1 + -1)) break;
                if (cVar2 == '\0') {
                  if (bVar3) goto LAB_03c2de10;
                  break;
                }
                cVar2 = *(char *)(lVar6 + uVar10);
                if (cVar2 != *(char *)(lVar12 + uVar10)) break;
                if (cVar2 == '\0') goto LAB_03c2de10;
                cVar2 = *(char *)(lVar13 + 1);
                if (cVar2 != *(char *)(lVar1 + 1)) break;
                if (cVar2 == '\0') goto LAB_03c2de10;
                bVar3 = uVar10 < 0x7fffe;
                uVar10 = uVar10 + 3;
              } while (uVar10 != 0x80001);
            }
          }
          lVar6 = *(long *)(lVar7 + 8);
          lVar15 = lVar7;
        } while (lVar7 != lVar14);
      }
      else {
        do {
          lVar7 = lVar6;
          lVar6 = *(long *)(lVar15 + 0x10);
          if (*(uint *)(lVar6 + 0x20) == uVar8) {
            plVar11 = (long *)(lVar6 + 0x60);
            (**(code **)(*plVar11 + 0x18))(plVar11);
            (**(code **)(*plVar11 + 0x18))(plVar11);
            lVar13 = *(long *)(lVar6 + 0x68);
            (**(code **)(*param_3 + 0x18))(param_3);
            lVar12 = param_3[1];
            if (lVar13 == lVar12) {
LAB_03c2dc80:
              uVar10 = (**(code **)(*param_4 + 0x88))(param_4,lVar15);
              if (((uVar10 & 1) != 0) && (*(long **)(lVar15 + 0x10) != (long *)0x0)) {
                (**(code **)(**(long **)(lVar15 + 0x10) + 8))();
              }
            }
            else {
              uVar10 = 0;
              bVar3 = true;
              lVar6 = *(long *)(lVar6 + 0x68) + 2;
              do {
                lVar13 = lVar6 + uVar10;
                cVar2 = *(char *)(lVar13 + -2);
                if (cVar2 != *(char *)(lVar12 + uVar10)) break;
                if (cVar2 == '\0') {
                  if (bVar3) goto LAB_03c2dc80;
                  break;
                }
                cVar2 = *(char *)(lVar13 + -1);
                if (cVar2 != *(char *)(lVar12 + uVar10 + 1)) break;
                if (cVar2 == '\0') goto LAB_03c2dc80;
                cVar2 = *(char *)(lVar6 + uVar10);
                if (cVar2 != *(char *)(lVar12 + uVar10 + 2)) break;
                if (cVar2 == '\0') goto LAB_03c2dc80;
                bVar3 = uVar10 < 0x7fffe;
                uVar10 = uVar10 + 3;
              } while (uVar10 != 0x80001);
            }
          }
          lVar6 = *(long *)(lVar7 + 8);
          lVar15 = lVar7;
        } while (lVar7 != lVar14);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2400));
  return;
}

