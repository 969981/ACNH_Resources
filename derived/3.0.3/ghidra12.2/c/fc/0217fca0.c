
undefined8 FUN_0217fca0(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  long *plVar9;
  
  if (*(char *)(param_1 + 0xb60) == '\0') {
    return 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = param_2[1];
  (**(code **)(*(long *)(param_1 + 0x9a0) + 0x18))(param_1 + 0x9a0);
  if (lVar8 == *(long *)(param_1 + 0x9a8)) {
LAB_0217fd68:
    lVar8 = 0;
  }
  else {
    uVar5 = 0;
    bVar3 = true;
    do {
      if (*(char *)(param_2[1] + uVar5) != *(char *)(*(long *)(param_1 + 0x9a8) + uVar5)) break;
      if (*(char *)(param_2[1] + uVar5) == '\0') {
        if (bVar3) goto LAB_0217fd68;
        break;
      }
      bVar3 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    (**(code **)(*(long *)(param_1 + 0x9d8) + 0x18))(param_1 + 0x9d8);
    if (lVar8 == *(long *)(param_1 + 0x9e0)) {
LAB_0217fdf0:
      lVar8 = 1;
    }
    else {
      uVar5 = 0;
      bVar3 = true;
      do {
        if (*(char *)(param_2[1] + uVar5) != *(char *)(*(long *)(param_1 + 0x9e0) + uVar5)) break;
        if (*(char *)(param_2[1] + uVar5) == '\0') {
          if (bVar3) goto LAB_0217fdf0;
          break;
        }
        bVar3 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = param_2[1];
      (**(code **)(*(long *)(param_1 + 0xa10) + 0x18))(param_1 + 0xa10);
      if (lVar8 == *(long *)(param_1 + 0xa18)) {
LAB_0217fe80:
        lVar8 = 2;
      }
      else {
        uVar5 = 0;
        bVar3 = true;
        do {
          if (*(char *)(param_2[1] + uVar5) != *(char *)(*(long *)(param_1 + 0xa18) + uVar5)) break;
          if (*(char *)(param_2[1] + uVar5) == '\0') {
            if (bVar3) goto LAB_0217fe80;
            break;
          }
          bVar3 = uVar5 < 0x80000;
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0x80001);
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = param_2[1];
        (**(code **)(*(long *)(param_1 + 0xa48) + 0x18))(param_1 + 0xa48);
        if (lVar8 == *(long *)(param_1 + 0xa50)) {
LAB_0217ff10:
          lVar8 = 3;
        }
        else {
          uVar5 = 0;
          bVar3 = true;
          do {
            if (*(char *)(param_2[1] + uVar5) != *(char *)(*(long *)(param_1 + 0xa50) + uVar5))
            break;
            if (*(char *)(param_2[1] + uVar5) == '\0') {
              if (bVar3) goto LAB_0217ff10;
              break;
            }
            bVar3 = uVar5 < 0x80000;
            uVar5 = uVar5 + 1;
          } while (uVar5 != 0x80001);
          (**(code **)(*param_2 + 0x18))(param_2);
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar8 = param_2[1];
          (**(code **)(*(long *)(param_1 + 0xa80) + 0x18))(param_1 + 0xa80);
          if (lVar8 == *(long *)(param_1 + 0xa88)) {
LAB_0217ffa0:
            lVar8 = 4;
          }
          else {
            uVar5 = 0;
            bVar3 = true;
            do {
              if (*(char *)(param_2[1] + uVar5) != *(char *)(*(long *)(param_1 + 0xa88) + uVar5))
              break;
              if (*(char *)(param_2[1] + uVar5) == '\0') {
                if (bVar3) goto LAB_0217ffa0;
                break;
              }
              bVar3 = uVar5 < 0x80000;
              uVar5 = uVar5 + 1;
            } while (uVar5 != 0x80001);
            (**(code **)(*param_2 + 0x18))(param_2);
            (**(code **)(*param_2 + 0x18))(param_2);
            lVar8 = param_2[1];
            (**(code **)(*(long *)(param_1 + 0xab8) + 0x18))(param_1 + 0xab8);
            if (lVar8 == *(long *)(param_1 + 0xac0)) {
LAB_02180028:
              lVar8 = 5;
            }
            else {
              uVar5 = 0;
              bVar3 = true;
              do {
                if (*(char *)(param_2[1] + uVar5) != *(char *)(*(long *)(param_1 + 0xac0) + uVar5))
                break;
                if (*(char *)(param_2[1] + uVar5) == '\0') {
                  if (bVar3) goto LAB_02180028;
                  break;
                }
                bVar3 = uVar5 < 0x80000;
                uVar5 = uVar5 + 1;
              } while (uVar5 != 0x80001);
              (**(code **)(*param_2 + 0x18))(param_2);
              (**(code **)(*param_2 + 0x18))(param_2);
              lVar8 = param_2[1];
              (**(code **)(*(long *)(param_1 + 0xaf0) + 0x18))(param_1 + 0xaf0);
              if (lVar8 == *(long *)(param_1 + 0xaf8)) {
LAB_021800b0:
                lVar8 = 6;
              }
              else {
                uVar5 = 0;
                bVar3 = true;
                do {
                  if (*(char *)(param_2[1] + uVar5) != *(char *)(*(long *)(param_1 + 0xaf8) + uVar5)
                     ) break;
                  if (*(char *)(param_2[1] + uVar5) == '\0') {
                    if (bVar3) goto LAB_021800b0;
                    break;
                  }
                  bVar3 = uVar5 < 0x80000;
                  uVar5 = uVar5 + 1;
                } while (uVar5 != 0x80001);
                (**(code **)(*param_2 + 0x18))(param_2);
                (**(code **)(*param_2 + 0x18))(param_2);
                lVar8 = param_2[1];
                (**(code **)(*(long *)(param_1 + 0xb28) + 0x18))(param_1 + 0xb28);
                if (lVar8 != *(long *)(param_1 + 0xb30)) {
                  uVar5 = 0;
                  bVar3 = true;
                  while( true ) {
                    if (*(char *)(param_2[1] + uVar5) !=
                        *(char *)(*(long *)(param_1 + 0xb30) + uVar5)) {
                      return 0;
                    }
                    if (*(char *)(param_2[1] + uVar5) == '\0') break;
                    bVar3 = uVar5 < 0x80000;
                    uVar5 = uVar5 + 1;
                    if (uVar5 == 0x80001) {
                      return 0;
                    }
                  }
                  if (!bVar3) {
                    return 0;
                  }
                }
                lVar8 = 7;
              }
            }
          }
        }
      }
    }
  }
  pvVar6 = *(void **)(param_3 + 8);
  plVar9 = (long *)(param_1 + 0x620 + lVar8 * 0x38);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar7 = (void *)plVar9[1];
  if (pvVar6 != pvVar7) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar4 = 0;
    do {
      if (*(char *)(plVar9[1] + lVar4) == '\0') goto LAB_021801c0;
      lVar1 = plVar9[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_021801c0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_021801c0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_021801c0:
    iVar2 = (int)lVar4;
    if (*(int *)(param_3 + 0x10) <= (int)lVar4) {
      iVar2 = *(int *)(param_3 + 0x10) + -1;
    }
    memcpy(pvVar6,pvVar7,(long)iVar2);
    *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
  }
  param_1 = param_1 + lVar8 * 0x38;
  pvVar6 = *(void **)(param_4 + 8);
  plVar9 = (long *)(param_1 + 0x7e0);
  (**(code **)(*(long *)(param_1 + 0x7e0) + 0x18))(plVar9);
  pvVar7 = *(void **)(param_1 + 0x7e8);
  if (pvVar6 != pvVar7) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x7e8) + lVar8) == '\0') goto LAB_0218026c;
      lVar4 = *(long *)(param_1 + 0x7e8) + lVar8;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0218026c;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0218026c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0218026c:
    iVar2 = (int)lVar8;
    if (*(int *)(param_4 + 0x10) <= (int)lVar8) {
      iVar2 = *(int *)(param_4 + 0x10) + -1;
    }
    memcpy(pvVar6,pvVar7,(long)iVar2);
    *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
  }
  return 1;
}

