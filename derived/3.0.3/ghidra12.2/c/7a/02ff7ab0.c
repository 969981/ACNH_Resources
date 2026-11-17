
void FUN_02ff7ab0(long param_1,short *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_16ea [2];
  undefined1 auStack_16e8 [5796];
  uint local_44;
  
  if (*param_2 != *(short *)PTR_DAT_04bb3170) {
    FUN_007ef010(auStack_16ea);
    FUN_007e4920(auStack_16e8,auStack_16ea);
    uVar1 = 0;
    pfVar2 = (float *)(param_1 + 0x100);
    do {
      fVar4 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar3 = 255.0;
      if (fVar4 <= 1.0) {
        fVar3 = fVar4 * 255.0;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar4) {
        fVar5 = fVar3;
      }
      fVar3 = 255.0;
      if (fVar7 <= 1.0) {
        fVar3 = fVar7 * 255.0;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar7) {
        fVar4 = fVar3;
      }
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      fVar3 = 255.0;
      if (fVar7 <= 1.0) {
        fVar3 = fVar7 * 255.0;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar7) {
        fVar6 = fVar3;
      }
      fVar3 = 255.0;
      if (fVar8 <= 1.0) {
        fVar3 = fVar8 * 255.0;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar8) {
        fVar7 = fVar3;
      }
      local_44 = (int)fVar5 << 0x18 | (int)fVar4 << 0x10 | (int)fVar6 << 8 | (int)fVar7;
      FUN_007e7690(auStack_16e8,uVar1 & 0xffffffff,&local_44);
      uVar1 = uVar1 + 1;
      *(undefined8 *)(pfVar2 + -0x40) = *(undefined8 *)pfVar2;
      *(undefined8 *)(pfVar2 + -0x3e) = *(undefined8 *)(pfVar2 + 2);
      pfVar2 = pfVar2 + 4;
    } while (uVar1 != 0xf);
  }
  return;
}

