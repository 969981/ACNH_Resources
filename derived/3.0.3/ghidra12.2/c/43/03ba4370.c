
void FUN_03ba4370(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 8) != '\0') {
    lVar1 = param_1 + 0x20;
    if (*(long *)(param_1 + 0x28) != lVar1) {
      lVar3 = (long)*(int *)(param_1 + 0x34);
      lVar4 = *(long *)(param_1 + 0x28) - lVar3;
      do {
        if (*(long *)(lVar4 + 0x88) != 0) {
          FUN_03ba69f0();
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != lVar1 - lVar3);
      if (*(long *)(param_1 + 0x28) != lVar1) {
        lVar3 = (long)*(int *)(param_1 + 0x34);
        lVar4 = *(long *)(param_1 + 0x28) - lVar3;
        do {
          if (*(int *)(lVar4 + 0x178) != 0 || *(int *)(lVar4 + 0x17c) != 0) {
            if ((*(long *)(lVar4 + 0x58) != 0) &&
               (lVar2 = *(long *)(*(long *)(lVar4 + 0x58) + 0x20), lVar2 != 0)) {
              if (*(int *)(lVar4 + 0x150) == 1) {
                fVar5 = *(float *)(lVar4 + 0x148);
                if (*(float *)(lVar2 + 0x148) <= *(float *)(lVar4 + 0x148)) {
                  fVar5 = *(float *)(lVar2 + 0x148);
                }
              }
              else {
                if (*(int *)(lVar4 + 0x150) != 0) goto LAB_03ba440c;
                fVar5 = *(float *)(lVar2 + 0x148) * *(float *)(lVar4 + 0x148);
              }
              *(float *)(lVar4 + 0x148) = fVar5;
            }
LAB_03ba440c:
            fVar5 = *(float *)(lVar4 + 0x14c);
            if (*(float *)(lVar4 + 0x14c) <= *(float *)(lVar4 + 0x148)) {
              fVar5 = *(float *)(lVar4 + 0x148);
            }
            *(float *)(lVar4 + 0x148) = fVar5;
          }
          lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
        } while (lVar1 - lVar3 != lVar4);
        if (*(long *)(param_1 + 0x28) != lVar1) {
          lVar3 = (long)*(int *)(param_1 + 0x34);
          lVar4 = *(long *)(param_1 + 0x28) - lVar3;
          do {
            if (*(long **)(lVar4 + 0x90) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + 0x90) + 0x28))();
            }
            lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
          } while (lVar1 - lVar3 != lVar4);
        }
      }
    }
  }
  return;
}

