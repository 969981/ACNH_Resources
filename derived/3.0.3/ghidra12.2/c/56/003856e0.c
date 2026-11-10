
void FUN_003856e0(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((*(byte *)(param_1 + 0x58) & 1) == 0) || (*(char *)(param_1 + 0x5a) == '\0')) {
    FUN_0037e140(param_1,param_2,param_3);
    return;
  }
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  bVar1 = *(byte *)(param_1 + 0x5b) & 3;
  bVar2 = *(byte *)(param_1 + 0x5b) >> 2 & 3;
  fVar10 = *(float *)(param_2 + 0x108);
  fVar8 = *(float *)(param_1 + 0x54) * (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) * 0.5
  ;
  fVar5 = *(float *)(param_2 + 0x10c);
  fVar11 = *(float *)(param_2 + 0x100);
  fVar7 = *(float *)(param_2 + 0x104);
  fVar12 = *(float *)(param_1 + 0x50) * (float)*(undefined8 *)(param_1 + 0x70) * 0.5;
  fVar15 = ABS(fVar8) + ABS(fVar8);
  fVar14 = ABS(fVar12) + ABS(fVar12);
  fVar6 = fVar4;
  if (bVar1 == 1) {
    fVar6 = fVar4 + fVar12;
  }
  fVar4 = fVar4 - fVar12;
  if (bVar1 != 2) {
    fVar4 = fVar6;
  }
  fVar6 = fVar9;
  if (bVar2 == 1) {
    fVar6 = fVar9 - fVar8;
  }
  fVar8 = fVar9 + fVar8;
  if (bVar2 != 2) {
    fVar8 = fVar6;
  }
  if ((*(byte *)(param_2 + 0x18e) & 8) != 0) {
    fVar8 = -fVar8;
  }
  fVar9 = fVar10;
  fVar6 = fVar5;
  if (*(int *)(param_2 + 0xe4) != 0 || *(int *)(param_2 + 0xe0) != 0) {
    fVar9 = (float)*(int *)(param_2 + 0xe0);
    fVar6 = (float)*(int *)(param_2 + 0xe4);
  }
  fVar12 = fVar7 + (fVar5 / fVar6) * ((fVar8 - fVar15 * 0.5) + fVar6 * 0.5);
  fVar8 = fVar11 + (fVar10 / fVar9) * ((fVar4 - fVar14 * 0.5) + fVar9 * 0.5);
  fVar16 = fVar10 + fVar11;
  fVar4 = fVar11;
  if (fVar11 <= fVar8) {
    fVar4 = fVar8;
  }
  fVar13 = fVar11 - fVar8;
  if (fVar11 <= fVar8) {
    fVar13 = 0.0;
  }
  fVar13 = fVar14 * (fVar10 / fVar9) - fVar13;
  fVar8 = fVar16 - fVar4;
  if (fVar4 + fVar13 <= fVar16) {
    fVar8 = fVar13;
  }
  fVar10 = fVar7 - fVar12;
  fVar9 = fVar7;
  if (fVar7 <= fVar12) {
    fVar9 = fVar12;
  }
  fVar11 = fVar5 + fVar7;
  if (fVar7 <= fVar12) {
    fVar10 = 0.0;
  }
  fVar10 = fVar15 * (fVar5 / fVar6) - fVar10;
  fVar6 = fVar11 - fVar9;
  if (fVar9 + fVar10 <= fVar11) {
    fVar6 = fVar10;
  }
  bVar3 = false;
  if ((fVar9 < fVar11) && (bVar3 = false, !NAN(fVar4) && !NAN(fVar16))) {
    bVar3 = fVar4 < fVar16;
  }
  if (((bVar3) && (0.0 < fVar8)) && (0.0 < fVar6)) {
    local_70 = *(undefined8 *)(param_2 + 0x130);
    uStack_68 = *(undefined8 *)(param_2 + 0x138);
    local_40 = 0;
    uStack_38 = 0;
    local_50 = (int)(fVar4 + 0.5);
    iStack_4c = (int)(fVar9 + 0.5);
    local_48 = (int)(fVar4 + fVar8 + 0.5) - local_50;
    iStack_44 = (int)(fVar9 + fVar6 + 0.5) - iStack_4c;
    local_60 = *(undefined8 *)(param_2 + 0x140);
    uStack_58 = *(undefined8 *)(param_2 + 0x148);
    FUN_00348bb0(param_3,0,1,&local_50);
    *(ulong *)(param_2 + 0x130) = CONCAT44(iStack_4c,local_50);
    *(ulong *)(param_2 + 0x138) = CONCAT44(iStack_44,local_48);
    *(undefined8 *)(param_2 + 0x140) = local_40;
    *(undefined8 *)(param_2 + 0x148) = uStack_38;
    FUN_0037e140(param_1,param_2,param_3);
    FUN_00348bb0(param_3,0,1,&local_70);
    *(undefined8 *)(param_2 + 0x130) = local_70;
    *(undefined8 *)(param_2 + 0x138) = uStack_68;
    *(undefined8 *)(param_2 + 0x140) = local_60;
    *(undefined8 *)(param_2 + 0x148) = uStack_58;
  }
  return;
}

