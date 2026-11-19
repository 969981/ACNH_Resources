
void FUN_03ba3f50(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 8) != '\0') {
    iVar2 = *(int *)(param_1 + 0x34);
    plVar1 = (long *)(param_1 + 0x20);
    lVar5 = (long)iVar2;
    lVar6 = -lVar5;
    plVar4 = (long *)((long)plVar1 - lVar5);
    if (*(long **)(param_1 + 0x28) != plVar1) {
      plVar7 = (long *)((long)*(long **)(param_1 + 0x28) - lVar5);
      do {
        if ((long *)plVar7[0x12] != (long *)0x0) {
          (**(code **)(*(long *)plVar7[0x12] + 0x20))();
        }
        plVar7 = (long *)(*(long *)((long)plVar7 + lVar5 + 8) + lVar6);
      } while (plVar7 != plVar4);
      iVar2 = *(int *)(param_1 + 0x34);
      lVar5 = (long)iVar2;
      lVar6 = -lVar5;
      plVar4 = (long *)((long)*(long **)(param_1 + 0x28) - lVar5);
      if (*(long **)(param_1 + 0x28) != plVar1) {
        do {
          if (*(long **)(plVar4[0x2c] + 0x28) != (long *)0x0) {
            (**(code **)(**(long **)(plVar4[0x2c] + 0x28) + 0x18))();
          }
          plVar4[0x2e] = 0;
          plVar4[0x2f] = 0;
          plVar4[0x2d] = 0;
          plVar4 = (long *)(lVar6 + *(long *)((long)plVar4 + lVar5 + 8));
        } while ((long *)((long)plVar1 - lVar5) != plVar4);
        iVar2 = *(int *)(param_1 + 0x34);
        lVar6 = -(long)iVar2;
        plVar4 = (long *)((long)plVar1 - (long)iVar2);
      }
    }
    plVar7 = (long *)(lVar6 + *plVar1);
    if (plVar4 != plVar7) {
      do {
        (**(code **)(*plVar7 + 0x60))(plVar7);
        plVar7 = (long *)(lVar6 + *(long *)((long)plVar7 + (long)iVar2));
      } while (plVar4 != plVar7);
      iVar2 = *(int *)(param_1 + 0x34);
      lVar5 = (long)iVar2;
      lVar6 = -lVar5;
      plVar4 = (long *)((long)*(long **)(param_1 + 0x20) - lVar5);
      if (*(long **)(param_1 + 0x20) != plVar1) {
        do {
          (**(code **)(*plVar4 + 0x58))(plVar4);
          plVar4 = (long *)(lVar6 + *(long *)((long)plVar4 + lVar5));
        } while ((long *)((long)plVar1 - lVar5) != plVar4);
        iVar2 = *(int *)(param_1 + 0x34);
        lVar5 = (long)iVar2;
        lVar6 = -lVar5;
        plVar4 = (long *)((long)*(long **)(param_1 + 0x20) - lVar5);
        if (*(long **)(param_1 + 0x20) != plVar1) {
          do {
            (**(code **)(*plVar4 + 0x68))(plVar4);
            plVar4 = (long *)(lVar6 + *(long *)((long)plVar4 + lVar5));
          } while ((long *)((long)plVar1 - lVar5) != plVar4);
          iVar2 = *(int *)(param_1 + 0x34);
          lVar6 = -(long)iVar2;
          plVar4 = (long *)((long)plVar1 - (long)iVar2);
        }
      }
    }
    plVar7 = (long *)(lVar6 + *(long *)(param_1 + 0x28));
    if (plVar4 != plVar7) {
      do {
        *(int *)(plVar7 + 0x2f) =
             (int)plVar7[0x2e] + (int)plVar7[0x2d] + *(int *)((long)plVar7 + 0x174);
        FUN_03ba2310(plVar7);
        if (plVar7[0x11] != 0) {
          FUN_03ba69f0();
        }
        plVar7 = (long *)(lVar6 + *(long *)((long)plVar7 + (long)iVar2 + 8));
      } while (plVar4 != plVar7);
      if (*(long **)(param_1 + 0x28) != plVar1) {
        lVar6 = (long)*(int *)(param_1 + 0x34);
        lVar5 = (long)*(long **)(param_1 + 0x28) - lVar6;
        do {
          if (*(int *)(lVar5 + 0x178) != 0 || *(int *)(lVar5 + 0x17c) != 0) {
            if ((*(long *)(lVar5 + 0x58) != 0) &&
               (lVar3 = *(long *)(*(long *)(lVar5 + 0x58) + 0x20), lVar3 != 0)) {
              if (*(int *)(lVar5 + 0x150) == 1) {
                fVar8 = *(float *)(lVar5 + 0x148);
                if (*(float *)(lVar3 + 0x148) <= *(float *)(lVar5 + 0x148)) {
                  fVar8 = *(float *)(lVar3 + 0x148);
                }
              }
              else {
                if (*(int *)(lVar5 + 0x150) != 0) goto LAB_03ba418c;
                fVar8 = *(float *)(lVar3 + 0x148) * *(float *)(lVar5 + 0x148);
              }
              *(float *)(lVar5 + 0x148) = fVar8;
            }
LAB_03ba418c:
            fVar8 = *(float *)(lVar5 + 0x14c);
            if (*(float *)(lVar5 + 0x14c) <= *(float *)(lVar5 + 0x148)) {
              fVar8 = *(float *)(lVar5 + 0x148);
            }
            *(float *)(lVar5 + 0x148) = fVar8;
          }
          lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
        } while ((long)plVar1 - lVar6 != lVar5);
        if (*(long **)(param_1 + 0x28) != plVar1) {
          lVar6 = (long)*(int *)(param_1 + 0x34);
          lVar5 = (long)*(long **)(param_1 + 0x28) - lVar6;
          do {
            if (*(long **)(lVar5 + 0x90) != (long *)0x0) {
              (**(code **)(**(long **)(lVar5 + 0x90) + 0x28))();
            }
            lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
          } while ((long)plVar1 - lVar6 != lVar5);
        }
      }
    }
  }
  return;
}

