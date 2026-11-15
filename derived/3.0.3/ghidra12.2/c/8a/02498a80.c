
void FUN_02498a80(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte local_38 [4];
  float local_34;
  float local_30;
  float fStack_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  *(undefined8 *)(param_1 + 0x398) = 0;
  local_28 = 0x3f800000;
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 0x32;
  local_30 = (float)(int)*(short *)(param_1 + 0x191a) * 0.25;
  local_38[0] = *(byte *)(param_1 + 0x1ee8);
  fStack_2c = (float)*(int *)(param_1 + 0x191c) * 0.001;
  local_34 = (float)*(int *)(param_1 + 0x1916) * 0.001;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  local_24 = 1;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_38,*(undefined4 *)(param_1 + 0x230),1);
  lVar3 = *(long *)(param_1 + 0x68);
  if (*(int *)(lVar3 + 0x2b4) == (uint)*(ushort *)(param_1 + 0x1914) * 0x10000) {
    fVar4 = (float)*(int *)(param_1 + 0x190a) * 0.001 - *(float *)(lVar3 + 0x278);
    fVar5 = -fVar4;
    if (0.0 <= fVar4) {
      fVar5 = fVar4;
    }
    fVar6 = (float)*(int *)(param_1 + 0x1910) * 0.001 - *(float *)(lVar3 + 0x280);
    fVar4 = -fVar6;
    if (0.0 <= fVar6) {
      fVar4 = fVar6;
    }
    bVar1 = false;
    bVar2 = false;
    if (fVar5 < 1.1920929e-07) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 < 1.1920929e-07;
        bVar2 = false;
      }
    }
    if (bVar1 != bVar2) {
      FUN_02498670(param_1,param_1 + 0x1900);
      return;
    }
  }
  FUN_02497d80(param_1,*(char *)(param_1 + 0x1922) != '\0');
  return;
}

