
void FUN_03977cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,uint param_6,undefined4 *param_7,float *param_8,undefined8 *param_9,
                 uint param_10,undefined8 *param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  byte *pbVar6;
  long lVar7;
  int iVar8;
  byte bVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar10 = *(undefined8 **)(param_5 + 0x30);
  if (((*PTR_DAT_04bd1448 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd1448), iVar3 != 0))
  {
    *(undefined ***)PTR_DAT_04bd1440 = &PTR_LAB_04b685c0;
    __cxa_guard_release(PTR_DAT_04bd1448);
  }
  uVar4 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bd1440);
  if ((uVar4 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  if (*(uint *)(puVar10 + 2) <= param_6) {
    param_6 = 0;
  }
  pbVar6 = (byte *)(puVar10[3] + (long)(int)param_6 * 0x70);
  bVar9 = 2;
  if ((param_10 & 1) == 0) {
    bVar9 = 0;
  }
  *(undefined4 *)(pbVar6 + 0x10) = *param_7;
  *(undefined4 *)(pbVar6 + 0x14) = param_7[1];
  *(undefined4 *)(pbVar6 + 0x18) = param_7[2];
  fVar11 = *param_8;
  pfVar5 = (float *)(pbVar6 + 0x1c);
  *pfVar5 = fVar11;
  fVar12 = param_8[1];
  *(float *)(pbVar6 + 0x20) = fVar12;
  fVar13 = param_8[2];
  *(undefined4 *)(pbVar6 + 0x48) = param_1;
  *(undefined4 *)(pbVar6 + 0x4c) = param_2;
  *(float *)(pbVar6 + 0x24) = fVar13;
  uVar1 = param_9[1];
  *(undefined8 *)(pbVar6 + 0x28) = *param_9;
  *(undefined8 *)(pbVar6 + 0x30) = uVar1;
  uVar1 = *param_11;
  uVar2 = param_11[1];
  *(undefined4 *)(pbVar6 + 0x50) = param_3;
  *(undefined4 *)(pbVar6 + 0x54) = param_4;
  *pbVar6 = *pbVar6 & 0xfd | bVar9;
  pbVar6[4] = 0xff;
  pbVar6[5] = 0xff;
  pbVar6[6] = 0xff;
  pbVar6[7] = 0xff;
  *(undefined8 *)(pbVar6 + 0x38) = uVar1;
  *(undefined8 *)(pbVar6 + 0x40) = uVar2;
  pbVar6[0x58] = 1;
  pbVar6[0x59] = 0;
  pbVar6[0x5a] = 0;
  pbVar6[0x5b] = 0;
  pbVar6[0x5c] = 0;
  pbVar6[0x5d] = 0;
  pbVar6[0x5e] = 0;
  pbVar6[0x5f] = 0x3f;
  iVar3 = *(int *)(pbVar6 + 0x60);
  if (iVar3 != 0) {
    lVar7 = *(long *)(pbVar6 + 0x68);
    iVar8 = 0;
    do {
      *(undefined8 *)(lVar7 + (long)iVar8 * 0xd0 + 8) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
    fVar11 = *pfVar5;
    fVar12 = *(float *)(pbVar6 + 0x20);
    fVar13 = *(float *)(pbVar6 + 0x24);
  }
  fVar14 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13);
  if (0.0 < fVar14) {
    fVar14 = 1.0 / fVar14;
    *pfVar5 = fVar11 * fVar14;
    *(float *)(pbVar6 + 0x20) = fVar12 * fVar14;
    *(float *)(pbVar6 + 0x24) = fVar13 * fVar14;
  }
  return;
}

