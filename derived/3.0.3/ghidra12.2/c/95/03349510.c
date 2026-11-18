
void FUN_03349510(long *param_1,float *param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 != (long *)0x0) {
    bVar1 = (**(code **)(*param_1 + 0x50))();
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar3);
        if (lVar2 != 0) {
          fVar5 = *param_2;
          fVar8 = param_2[1];
          fVar4 = 255.0;
          if (fVar5 <= 1.0) {
            fVar4 = fVar5 * 255.0;
          }
          fVar6 = 0.0;
          if (0.0 <= fVar5) {
            fVar6 = fVar4;
          }
          fVar4 = 255.0;
          if (fVar8 <= 1.0) {
            fVar4 = fVar8 * 255.0;
          }
          fVar5 = 0.0;
          if (0.0 <= fVar8) {
            fVar5 = fVar4;
          }
          fVar8 = param_2[2];
          fVar9 = param_2[3];
          fVar4 = 255.0;
          if (fVar8 <= 1.0) {
            fVar4 = fVar8 * 255.0;
          }
          fVar7 = 0.0;
          if (0.0 <= fVar8) {
            fVar7 = fVar4;
          }
          fVar4 = 255.0;
          if (fVar9 <= 1.0) {
            fVar4 = fVar9 * 255.0;
          }
          fVar8 = 0.0;
          if (0.0 <= fVar9) {
            fVar8 = fVar4;
          }
          *(int *)(lVar2 + 0xc) =
               (int)fVar7 << 0x10 | (int)fVar8 << 0x18 | (int)fVar5 << 8 | (int)fVar6;
        }
        uVar3 = uVar3 + 1;
      } while (bVar1 != uVar3);
    }
  }
  return;
}

