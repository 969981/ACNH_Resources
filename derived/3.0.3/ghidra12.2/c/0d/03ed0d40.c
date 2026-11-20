
void FUN_03ed0d40(float param_1,long param_2,long param_3,long param_4,byte *param_5,
                 undefined2 param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = (ulong)*(byte *)(param_7 + 0x12);
  if (uVar2 != 0) {
    lVar1 = 0;
    piVar3 = (int *)(param_7 + (ulong)*(byte *)(param_7 + 0x13) * 4 + 0x14);
    do {
      lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x40) +
                       (long)*(short *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + (long)*piVar3) *
                       8);
      if (*(short *)(lVar4 + 8) != 0xc) {
        lVar4 = lVar1;
      }
      uVar2 = uVar2 - 1;
      lVar1 = lVar4;
      piVar3 = piVar3 + 1;
    } while (uVar2 != 0);
    if (lVar4 != 0) {
      fVar5 = (float)FUN_03ebf3f0(*(undefined8 *)(param_3 + 8),*(long *)(lVar4 + 0x18) + 0x14,
                                  *(undefined8 *)(param_4 + 0x70),1,0,0);
      *(undefined2 *)(param_5 + 0x30) = param_6;
      if (((((*param_5 >> 1 & 1) != 0) && (fVar6 = *(float *)(param_5 + 0x28), fVar6 < 0.0)) &&
          (fVar7 = *(float *)(param_5 + 0x14), fVar7 < fVar6)) && (0.0 < fVar6 / fVar7)) {
        *(float *)(param_5 + 0x28) = fVar7 * (fVar6 / fVar7);
      }
      if (0.0 <= fVar5) {
        param_1 = fVar5;
      }
      goto LAB_03ed0e40;
    }
  }
  *(undefined2 *)(param_5 + 0x30) = param_6;
  if ((((*param_5 >> 1 & 1) != 0) && (fVar5 = *(float *)(param_5 + 0x28), fVar5 < 0.0)) &&
     ((fVar6 = *(float *)(param_5 + 0x14), fVar6 < fVar5 && (0.0 < fVar5 / fVar6)))) {
    *(float *)(param_5 + 0x28) = fVar6 * (fVar5 / fVar6);
  }
LAB_03ed0e40:
  *(float *)(param_5 + 0x14) = param_1;
  return;
}

