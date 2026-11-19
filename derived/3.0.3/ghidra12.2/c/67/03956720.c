
void FUN_03956720(float param_1,long *param_2,ulong param_3,long param_4,long param_5,long *param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  int *piVar9;
  
  uVar2 = (**(code **)(*param_2 + 0x20))();
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar7 = (long *)param_2[1];
  if (plVar7 != (long *)0x0) {
    if ((param_3 & 1) == 0) {
      if (param_6 == (long *)0x0) {
        do {
          if ((param_4 != 0) && (uVar1 = *(uint *)(param_4 + 4), 0xffff < uVar1)) {
            uVar2 = (ulong)(uVar1 >> 0x10);
            lVar6 = 0xffffffff;
            piVar8 = (int *)(param_4 + ((ulong)uVar1 & 0xffff) * 4);
            piVar9 = piVar8;
            do {
              if (*piVar9 == (int)plVar7[1]) {
                if (lVar6 != 0) {
                  FUN_0394fbd0(plVar7,piVar8);
                }
                break;
              }
              lVar6 = lVar6 + -1;
              piVar8 = piVar8 + 2;
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar2 != 0);
          }
          plVar7 = (long *)plVar7[2];
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          if ((param_4 != 0) && (uVar1 = *(uint *)(param_4 + 4), 0xffff < uVar1)) {
            uVar2 = (ulong)(uVar1 >> 0x10);
            lVar6 = 0xffffffff;
            piVar8 = (int *)(param_4 + ((ulong)uVar1 & 0xffff) * 4);
            piVar9 = piVar8;
            do {
              if (*piVar9 == (int)plVar7[1]) {
                if (lVar6 != 0) {
                  FUN_0394fbd0(plVar7,piVar8);
                  goto LAB_03956994;
                }
                break;
              }
              lVar6 = lVar6 + -1;
              piVar8 = piVar8 + 2;
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar2 != 0);
          }
          (**(code **)(*param_6 + 0x38))(param_6,param_2,plVar7,param_4);
          plVar3 = (long *)param_6[7];
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,param_2,plVar7,param_4);
          }
LAB_03956994:
          plVar7 = (long *)plVar7[2];
        } while (plVar7 != (long *)0x0);
      }
    }
    else {
      do {
        lVar6 = plVar7[1];
        if ((param_4 != 0) && (uVar1 = *(uint *)(param_4 + 4), 0xffff < uVar1)) {
          uVar2 = (ulong)(uVar1 >> 0x10);
          piVar8 = (int *)(param_4 + ((ulong)uVar1 & 0xffff) * 4);
          lVar5 = 0xffffffff;
          do {
            if (*piVar8 == (int)lVar6) {
              if (lVar5 != 0) goto LAB_03956804;
              break;
            }
            lVar5 = lVar5 + -1;
            piVar8 = piVar8 + 2;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        piVar8 = (int *)0x0;
LAB_03956804:
        uVar1 = (**(code **)(*plVar7 + 0x38))(plVar7);
        if (uVar1 < 0x11 && (1 << (ulong)(uVar1 & 0x1f) & 0x1007aU) != 0) {
          if ((param_5 != 0) && (uVar1 = *(uint *)(param_5 + 4), 0xffff < uVar1)) {
            uVar2 = (ulong)(uVar1 >> 0x10);
            lVar5 = 0xffffffff;
            piVar9 = (int *)(param_5 + ((ulong)uVar1 & 0xffff) * 4);
            piVar4 = piVar9;
            do {
              if (*piVar4 == (int)lVar6) {
                if (lVar5 != 0) {
                  if (piVar8 == (int *)0x0) goto LAB_039568b4;
                  FUN_039514b4(plVar7);
                  FUN_0394fed0(1.0 - param_1,plVar7,piVar8);
                  FUN_0394fed0(param_1,plVar7,piVar9);
                  goto LAB_039567a0;
                }
                break;
              }
              lVar5 = lVar5 + -1;
              piVar9 = piVar9 + 2;
              uVar2 = uVar2 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar2 != 0);
          }
          piVar9 = (int *)0x0;
LAB_039568b4:
          if (param_6 != (long *)0x0) {
            (**(code **)(*param_6 + 0x40))
                      (param_1,param_6,param_2,plVar7,param_4,param_5,piVar8,piVar9);
            plVar3 = (long *)param_6[7];
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x40))
                        (param_1,plVar3,param_2,plVar7,param_4,param_5,piVar8,piVar9);
            }
          }
        }
        else if (piVar8 == (int *)0x0) {
          if (param_6 != (long *)0x0) {
            (**(code **)(*param_6 + 0x38))(param_6,param_2,plVar7,param_4);
            plVar3 = (long *)param_6[7];
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,param_2,plVar7,param_4);
            }
          }
        }
        else {
          FUN_0394fbd0(plVar7,piVar8);
        }
LAB_039567a0:
        plVar7 = (long *)plVar7[2];
      } while (plVar7 != (long *)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03956ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2);
  return;
}

