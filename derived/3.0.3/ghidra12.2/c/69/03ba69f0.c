
void FUN_03ba69f0(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_03ba6b10();
    FUN_03ba6d50(param_1);
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
        lVar3 = (long)*(int *)(param_1 + 0x3c);
        plVar4 = (long *)(*(long *)(param_1 + 0x30) - lVar3);
        do {
          FUN_03b77298(plVar4 + 3);
          lVar2 = *plVar4;
          if (lVar2 != 0) {
            fVar6 = *(float *)(plVar4 + 4);
            if (*(int *)(lVar2 + 0x150) == 1) {
              fVar5 = *(float *)(lVar2 + 0x148);
              if (fVar6 <= *(float *)(lVar2 + 0x148)) {
                fVar5 = fVar6;
              }
            }
            else {
              if (*(int *)(lVar2 + 0x150) != 0) goto LAB_03ba6a60;
              fVar5 = fVar6 * *(float *)(lVar2 + 0x148);
            }
            *(float *)(lVar2 + 0x148) = fVar5;
          }
LAB_03ba6a60:
          plVar4 = (long *)(*(long *)((long)plVar4 + lVar3 + 8) - lVar3);
        } while (plVar4 != (long *)((param_1 + 0x28) - lVar3));
      }
      if ((DAT_05aebb78 != 0) && (lVar3 = *(long *)(DAT_05aebb78 + 0x10), lVar3 != 0)) {
        *(float *)(param_1 + 0x40) = *(float *)(lVar3 + 0x1c) + *(float *)(param_1 + 0x40);
        *(float *)(param_1 + 0x44) = *(float *)(lVar3 + 0x1c) + *(float *)(param_1 + 0x44);
      }
    }
    bVar1 = 0;
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      bVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    }
    *(byte *)(param_1 + 0x48) = bVar1 & 1;
  }
  return;
}

