
undefined1 FUN_0097a3f0(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 != 0) {
    fVar4 = *param_2 - (float)*(int *)(param_1 + 0xc) * 5.0;
    fVar6 = param_2[2] - (float)*(int *)(param_1 + 0x10) * 5.0;
    uVar1 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
    if ((((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 4))) &&
        (uVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0), -1 < (int)uVar2)) &&
       (uVar2 < *(uint *)(param_1 + 8))) {
      lVar3 = param_1 + 0x14 + (ulong)(uVar1 + *(uint *)(param_1 + 4) * uVar2) * 0x34;
      fVar4 = fVar4 + (float)(int)uVar1 * -5.0;
      fVar6 = fVar6 + (float)(int)uVar2 * -5.0;
      fVar5 = fVar4 + fVar6 + -5.0;
      if (0.0 <= fVar6 - fVar4) {
        if (fVar5 < 0.0) {
          return *(undefined1 *)(lVar3 + 0x31);
        }
        return *(undefined1 *)(lVar3 + 0x32);
      }
      if (fVar5 < 0.0) {
        return *(undefined1 *)(lVar3 + 0x30);
      }
      return *(undefined1 *)(lVar3 + 0x33);
    }
  }
  return 7;
}

