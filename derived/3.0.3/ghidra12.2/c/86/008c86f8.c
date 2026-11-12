
void FUN_008c86f8(long param_1)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_24;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x1a & 1) != 0) && ((*puVar1 & 1) != 0)) goto LAB_008c8788;
  }
  uVar3 = FUN_016cf9f0();
  if ((uVar3 & 1) == 0) {
    return;
  }
LAB_008c8788:
  if (DAT_05292338 == 0) {
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar6 = 85.0;
    fVar7 = 85.0;
  }
  else {
    fVar5 = (float)*(int *)(DAT_05292338 + 0xd88) * 5.0;
    fVar4 = (float)*(int *)(DAT_05292338 + 0xd8c) * 5.0;
    fVar6 = (float)*(int *)(DAT_05292338 + 0xd98) * 5.0 + 5.0;
    fVar7 = (float)*(int *)(DAT_05292338 + 0xd9c) * 5.0 + 5.0;
  }
  *(float *)(param_1 + 0x31664) = fVar5;
  *(undefined4 *)(param_1 + 0x31668) = 0;
  *(undefined1 *)(param_1 + 0x316fc) = 1;
  *(float *)(param_1 + 0x3166c) = fVar4;
  *(float *)(param_1 + 0x31670) = fVar6;
  *(undefined4 *)(param_1 + 0x31674) = 0;
  *(float *)(param_1 + 0x31678) = fVar7;
  FUN_008af57c(&local_24);
  *(undefined4 *)(param_1 + 0x315e4) = local_24;
  return;
}

