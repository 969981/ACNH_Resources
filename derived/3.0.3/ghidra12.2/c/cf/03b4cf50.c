
bool FUN_03b4cf50(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  if (param_2 == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    uVar2 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x20);
      if (*(int *)(lVar4 + 0x60) < 1) {
LAB_03b4d034:
        uVar3 = *(uint *)(param_1 + 0x28);
        if (0 < (int)uVar3) {
          uVar2 = 0;
          do {
            if ((uVar2 < uVar3) &&
               (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + uVar2 * 8), lVar4 != 0)) {
              lVar7 = *(long *)(param_1 + 0x20);
              plVar6 = *(long **)(lVar7 + 0x70);
              if (plVar6 != (long *)(lVar7 + 0x68)) {
                plVar8 = (long *)(*(int *)(lVar7 + 0x7c) + lVar4);
                do {
                  if (plVar6 == plVar8) {
                    if (*plVar8 != 0) {
                      *(long *)(*plVar8 + 8) = plVar8[1];
                    }
                    if ((long *)plVar8[1] != (long *)0x0) {
                      *(long *)plVar8[1] = *plVar8;
                    }
                    *plVar8 = 0;
                    plVar8[1] = 0;
                    plVar8 = (long *)(lVar7 + 0x50);
                    lVar5 = *plVar8;
                    *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + -1;
                    plVar6 = (long *)(*(int *)(lVar7 + 100) + lVar4);
                    *plVar8 = (long)plVar6;
                    *plVar6 = lVar5;
                    plVar6[1] = (long)plVar8;
                    if (lVar5 != 0) {
                      *(long **)(lVar5 + 8) = plVar6;
                    }
                    *(int *)(lVar7 + 0x60) = *(int *)(lVar7 + 0x60) + 1;
                    uVar3 = *(uint *)(param_1 + 0x28);
                    break;
                  }
                  plVar6 = (long *)plVar6[1];
                } while (plVar6 != (long *)(lVar7 + 0x68));
              }
            }
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)(int)uVar3);
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
        return bVar1;
      }
      plVar6 = *(long **)(lVar4 + 0x58);
      if (*plVar6 != 0) {
        *(long *)(*plVar6 + 8) = plVar6[1];
      }
      if ((long *)plVar6[1] != (long *)0x0) {
        *(long *)plVar6[1] = *plVar6;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + -1;
      if ((plVar6 == (long *)0x0) ||
         (lVar7 = (long)plVar6 - (long)*(int *)(lVar4 + 100), lVar7 == 0)) goto LAB_03b4d034;
      plVar8 = (long *)(lVar4 + 0x68);
      lVar5 = *plVar8;
      plVar6 = (long *)(lVar7 + *(int *)(lVar4 + 0x7c));
      *plVar8 = (long)plVar6;
      *plVar6 = lVar5;
      plVar6[1] = (long)plVar8;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar6;
      }
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + 1;
      if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
        *(long *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = lVar7;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      uVar2 = uVar2 + 1;
      bVar1 = param_2 <= uVar2;
    } while (param_2 != uVar2);
  }
  return bVar1;
}

