
void FUN_03ba6d50(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float __x;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    if (*(float *)(param_1 + 0x40) < *(float *)(param_1 + 0xc)) {
      return;
    }
    if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
      lVar3 = (long)*(int *)(param_1 + 0x3c);
      lVar4 = *(long *)(param_1 + 0x30) - lVar3;
      do {
        *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x14);
        FUN_03b773d4(*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0xc),lVar4 + 0x18);
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != (param_1 + 0x28) - lVar3);
    }
    uVar6 = 2;
    goto LAB_03ba7018;
  default:
    goto switchD_03ba6d94_caseD_2;
  case 3:
    if (*(float *)(param_1 + 0x40) < *(float *)(param_1 + 0x10)) {
      return;
    }
    if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
      lVar3 = (long)*(int *)(param_1 + 0x3c);
      lVar4 = *(long *)(param_1 + 0x30) - lVar3;
      do {
        *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x14);
        FUN_03b773d4(0x3f800000,*(undefined4 *)(lVar4 + 0x10),lVar4 + 0x18);
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != (param_1 + 0x28) - lVar3);
    }
    uVar6 = 4;
    goto LAB_03ba7018;
  case 4:
    if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
      lVar3 = (long)*(int *)(param_1 + 0x3c);
      lVar4 = *(long *)(param_1 + 0x30) - lVar3;
      do {
        if (*(float *)(lVar4 + 0x20) != *(float *)(lVar4 + 0x24)) {
          return;
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != (param_1 + 0x28) - lVar3);
    }
    break;
  case 5:
    if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
      lVar3 = (long)*(int *)(param_1 + 0x3c);
      lVar4 = *(long *)(param_1 + 0x30) - lVar3;
      do {
        if (*(float *)(lVar4 + 0x20) != *(float *)(lVar4 + 0x24)) {
          return;
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != (param_1 + 0x28) - lVar3);
    }
    if ((*(long **)(param_1 + 0x20) != (long *)0x0) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(), (uVar2 & 1) != 0)) {
      return;
    }
    break;
  case 6:
    if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
      lVar4 = (long)*(int *)(param_1 + 0x3c);
      plVar5 = (long *)(*(long *)(param_1 + 0x30) - lVar4);
      do {
        fVar7 = 1.0;
        if ((int)plVar5[7] != 0) {
          fVar8 = *(float *)((long)plVar5 + 0x3c);
          fVar7 = 1.0;
          if (fVar8 != 0.0) {
            iVar1 = (int)plVar5[7];
            __x = 1.0;
            if (1.0 / fVar8 <= 1.0) {
              __x = 1.0 / fVar8;
            }
            if (iVar1 == 3) {
              fVar8 = asinf(__x);
              fVar8 = fVar8 / 1.5707964;
              fVar7 = *(float *)((long)plVar5 + 0x3c);
LAB_03ba6fc4:
              fVar7 = fVar7 * fVar8;
            }
            else if (iVar1 == 2) {
              fVar7 = fVar8 * __x * __x;
            }
            else {
              fVar7 = 1.0;
              if (iVar1 == 1) {
                fVar7 = SQRT(__x);
                if (NAN(fVar7)) {
                  fVar7 = sqrtf(__x);
                }
                fVar8 = *(float *)((long)plVar5 + 0x3c);
                goto LAB_03ba6fc4;
              }
            }
          }
        }
        lVar3 = *plVar5;
        plVar5[4] = (long)&DAT_3f8000003f800000;
        *(float *)(plVar5 + 5) = fVar7;
        *(float *)((long)plVar5 + 0x2c) = fVar7;
        *(float *)(plVar5 + 6) = fVar7;
        *(undefined4 *)((long)plVar5 + 0x34) = 0;
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x150) == 1)) {
          uVar6 = NEON_fminnm(*(undefined4 *)(lVar3 + 0x148),0x3f800000);
          *(undefined4 *)(lVar3 + 0x148) = uVar6;
        }
        plVar5 = (long *)(*(long *)((long)plVar5 + lVar4 + 8) - lVar4);
      } while (plVar5 != (long *)((param_1 + 0x28) - lVar4));
    }
  }
  uVar6 = 0;
LAB_03ba7018:
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
switchD_03ba6d94_caseD_2:
  return;
}

