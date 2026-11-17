
void FUN_02ff7784(long param_1,short *param_2,uint param_3,float *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_170a [2];
  undefined1 auStack_1708 [5796];
  uint local_64;
  
  if ((param_3 < 0xf) && (*param_2 != DAT_04cb6038)) {
    fVar3 = *param_4;
    fVar4 = param_4[1];
    fVar6 = 255.0;
    if (fVar3 <= 1.0) {
      fVar6 = fVar3 * 255.0;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar3) {
      fVar7 = fVar6;
    }
    fVar6 = 255.0;
    if (fVar4 <= 1.0) {
      fVar6 = fVar4 * 255.0;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar4) {
      fVar3 = fVar6;
    }
    fVar4 = param_4[2];
    fVar8 = param_4[3];
    fVar6 = 255.0;
    if (fVar4 <= 1.0) {
      fVar6 = fVar4 * 255.0;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar6;
    }
    fVar6 = 255.0;
    if (fVar8 <= 1.0) {
      fVar6 = fVar8 * 255.0;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar8) {
      fVar4 = fVar6;
    }
    FUN_007ef010(auStack_170a);
    FUN_007e4920(auStack_1708,auStack_170a);
    fVar6 = 255.0;
    if ((float)(uint)(int)fVar7 / 255.0 <= 1.0) {
      fVar6 = ((float)(uint)(int)fVar7 / 255.0) * 255.0;
    }
    fVar7 = 255.0;
    if ((float)(uint)(int)fVar3 / 255.0 <= 1.0) {
      fVar7 = ((float)(uint)(int)fVar3 / 255.0) * 255.0;
    }
    fVar3 = 255.0;
    if ((float)(uint)(int)fVar5 / 255.0 <= 1.0) {
      fVar3 = ((float)(uint)(int)fVar5 / 255.0) * 255.0;
    }
    fVar8 = 255.0;
    if ((float)(uint)(int)fVar4 / 255.0 <= 1.0) {
      fVar8 = ((float)(uint)(int)fVar4 / 255.0) * 255.0;
    }
    local_64 = (int)fVar6 << 0x18 | (int)fVar7 << 0x10 | (int)fVar3 << 8 | (int)fVar8;
    FUN_007e7690(auStack_1708,(ulong)param_3,&local_64);
    uVar2 = *(undefined8 *)(param_4 + 2);
    puVar1 = (undefined8 *)(param_1 + (ulong)param_3 * 0x10);
    *puVar1 = *(undefined8 *)param_4;
    puVar1[1] = uVar2;
  }
  return;
}

