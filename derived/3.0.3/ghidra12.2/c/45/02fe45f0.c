
void FUN_02fe45f0(uint *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  *(bool *)(*(long *)(param_1 + 2) + 0x28) = (param_1[5] & 0x18) != 8;
  lVar1 = 0x60;
  if (*param_1 < 3) {
    lVar1 = 0;
  }
  *(bool *)(*(long *)(param_1 + 2) + lVar1 + 0x28) = (param_1[5] & 9) == 1;
  lVar1 = 0x90;
  if (*param_1 < 4) {
    lVar1 = 0;
  }
  *(byte *)(*(long *)(param_1 + 2) + lVar1 + 0x28) = (byte)param_1[5] >> 2 & 1;
  if (((byte)param_1[5] >> 2 & 1) == 0) {
    if (((byte)param_1[5] & 0x18) == 8) {
      puVar2 = &DAT_040a266f;
    }
    else {
      puVar2 = &DAT_040936ba;
    }
    *(undefined **)(*(long *)(param_1 + 2) + (ulong)(1 < *param_1) * 0x30) = puVar2;
  }
  else {
    *(undefined **)(*(long *)(param_1 + 2) + (ulong)(1 < *param_1) * 0x30) = &DAT_040eb2ed;
  }
  lVar1 = 0x60;
  if (*param_1 < 3) {
    lVar1 = 0;
  }
  puVar2 = &DAT_04088a90;
  if ((param_1[5] & 2) != 0) {
    puVar2 = &DAT_040f0ca6;
  }
  *(undefined **)(*(long *)(param_1 + 2) + lVar1) = puVar2;
  lVar1 = 0x90;
  if (*param_1 < 4) {
    lVar1 = 0;
  }
  *(undefined **)(*(long *)(param_1 + 2) + lVar1) = &DAT_0405e656;
  return;
}

