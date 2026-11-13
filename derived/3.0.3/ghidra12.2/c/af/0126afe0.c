
void FUN_0126afe0(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined **local_6d8;
  char *pcStack_6d0;
  undefined *local_618 [7];
  uint local_5e0;
  long *local_5d8;
  long *local_5d0;
  undefined *local_230;
  undefined1 *local_228;
  undefined4 local_220;
  undefined1 local_21c [127];
  undefined1 local_19d;
  undefined **local_198;
  undefined8 local_190;
  undefined *local_188;
  char *local_180;
  undefined8 local_178;
  char *local_170;
  undefined *local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined1 local_75;
  
  puVar7 = PTR_DAT_04bb2020;
  if (param_2 == 0) {
    return;
  }
  local_6d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_6d0 = "FieldInitParamsStructureHeap";
  plVar9 = (long *)FUN_038c6d48(0x1400,&local_6d8,param_2,8,1,0);
  puVar8 = PTR_DAT_04bb3350;
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar15 = *(long *)(lVar10 + 0xa8);
  *(long **)(lVar10 + 0xa8) = plVar9;
  local_198 = &PTR_LAB_0498df00;
  uVar3 = (param_3 & 0xffff) - (uint)*(ushort *)(DAT_0519d040 + 0x1168);
  if (uVar3 < *(uint *)(DAT_0519d040 + 0x1148)) {
    local_190 = *(undefined8 *)(*(long *)(DAT_0519d040 + 0x1150) + (long)(int)uVar3 * 8);
  }
  else {
    local_190 = 0;
  }
  local_220 = 0x80;
  local_228 = local_21c;
  local_19d = 0;
  local_21c[0] = 0;
  local_230 = PTR_DAT_04bb2d88 + 0x10;
  FUN_0131c710(&local_198,&local_230);
  FUN_00751ec0(&local_6d8,&DAT_05194bb0,&local_230,0);
  local_188 = puVar7 + 0x10;
  local_180 = "mSiteList";
  local_170 = "SiteList";
  local_158 = 0;
  local_6d8 = &PTR_LAB_049903d8;
  local_160 = &DAT_0407ebb1;
  local_178 = local_188;
  local_168 = local_188;
  FUN_0133e40c(local_618,&local_188,&local_6d8);
  local_180 = (char *)((long)&local_178 + 4);
  local_75 = 0;
  local_178 = (undefined *)CONCAT35(local_178._5_3_,0x100);
  local_188 = PTR_DAT_04bb21f8 + 0x10;
  uVar11 = (*(code *)local_6d8[0x1e])(&local_6d8,&local_188,1);
  if ((uVar11 & 1) != 0) {
    FUN_03c27e60(&local_6d8,&local_188,plVar9);
  }
  if (*(int *)(param_1 + 8) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = **(long **)(param_1 + 0x10);
  }
  if (local_5e0 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *local_5d8;
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x30) + 0xf0))();
  iVar1 = *piVar13;
  if (local_5e0 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *local_5d8;
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x60) + 0xf0))();
  iVar2 = *piVar13;
  *(int *)(lVar10 + 0x10) = iVar1;
  *(int *)(lVar10 + 0x14) = iVar2;
  *(int *)(lVar10 + 0x28) = iVar1;
  *(int *)(lVar10 + 0x2c) = iVar2;
  *(int *)(lVar10 + 0x38) = iVar1 + 8;
  *(int *)(lVar10 + 0x3c) = iVar2 + 5;
  fVar16 = (float)iVar1 * 10.0 + 2.5;
  fVar18 = (float)iVar2 * 10.0 + 2.5;
  fVar17 = (float)(iVar1 + 8) * 10.0 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  fVar16 = (float)(iVar2 + 5) * 10.0 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar5 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar1 = iVar4;
  if (iVar5 <= iVar4) {
    iVar1 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar5 = iVar2;
  if (iVar6 <= iVar2) {
    iVar5 = iVar6;
  }
  if (iVar2 <= iVar6) {
    iVar2 = iVar6;
  }
  *(int *)(lVar10 + 0x50) = iVar1;
  *(int *)(lVar10 + 0x54) = iVar5;
  *(int *)(lVar10 + 0x60) = iVar4;
  *(int *)(lVar10 + 100) = iVar2;
  if (*(uint *)(param_1 + 8) < 2) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  }
  if (local_5e0 < 2) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[1];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x30) + 0xf0))();
  iVar1 = *piVar13;
  if (local_5e0 < 2) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[1];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x60) + 0xf0))();
  iVar2 = *piVar13;
  *(int *)(lVar10 + 0x10) = iVar1;
  *(int *)(lVar10 + 0x14) = iVar2;
  *(int *)(lVar10 + 0x28) = iVar1;
  *(int *)(lVar10 + 0x2c) = iVar2;
  *(int *)(lVar10 + 0x38) = iVar1 + 8;
  *(int *)(lVar10 + 0x3c) = iVar2 + 5;
  fVar16 = (float)iVar1 * 10.0 + 2.5;
  fVar18 = (float)iVar2 * 10.0 + 2.5;
  fVar17 = (float)(iVar1 + 8) * 10.0 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  fVar16 = (float)(iVar2 + 5) * 10.0 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar5 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar1 = iVar4;
  if (iVar5 <= iVar4) {
    iVar1 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar5 = iVar2;
  if (iVar6 <= iVar2) {
    iVar5 = iVar6;
  }
  if (iVar2 <= iVar6) {
    iVar2 = iVar6;
  }
  *(int *)(lVar10 + 0x50) = iVar1;
  *(int *)(lVar10 + 0x54) = iVar5;
  *(int *)(lVar10 + 0x60) = iVar4;
  *(int *)(lVar10 + 100) = iVar2;
  if (*(uint *)(param_1 + 8) < 3) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  }
  if (local_5e0 < 3) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[2];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x30) + 0xf0))();
  iVar1 = *piVar13;
  if (local_5e0 < 3) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[2];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x60) + 0xf0))();
  iVar2 = *piVar13;
  *(int *)(lVar10 + 0x10) = iVar1;
  *(int *)(lVar10 + 0x14) = iVar2;
  *(int *)(lVar10 + 0x28) = iVar1;
  *(int *)(lVar10 + 0x2c) = iVar2;
  *(int *)(lVar10 + 0x38) = iVar1 + 8;
  *(int *)(lVar10 + 0x3c) = iVar2 + 5;
  fVar16 = (float)iVar1 * 10.0 + 2.5;
  fVar18 = (float)iVar2 * 10.0 + 2.5;
  fVar17 = (float)(iVar1 + 8) * 10.0 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  fVar16 = (float)(iVar2 + 5) * 10.0 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar5 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar1 = iVar4;
  if (iVar5 <= iVar4) {
    iVar1 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar5 = iVar2;
  if (iVar6 <= iVar2) {
    iVar5 = iVar6;
  }
  if (iVar2 <= iVar6) {
    iVar2 = iVar6;
  }
  *(int *)(lVar10 + 0x50) = iVar1;
  *(int *)(lVar10 + 0x54) = iVar5;
  *(int *)(lVar10 + 0x60) = iVar4;
  *(int *)(lVar10 + 100) = iVar2;
  if (*(uint *)(param_1 + 8) < 4) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  if (local_5e0 < 4) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[3];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x30) + 0xf0))();
  iVar1 = *piVar13;
  if (local_5e0 < 4) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[3];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x60) + 0xf0))();
  iVar2 = *piVar13;
  *(int *)(lVar10 + 0x10) = iVar1;
  *(int *)(lVar10 + 0x14) = iVar2;
  *(int *)(lVar10 + 0x28) = iVar1;
  *(int *)(lVar10 + 0x2c) = iVar2;
  *(int *)(lVar10 + 0x38) = iVar1 + 8;
  *(int *)(lVar10 + 0x3c) = iVar2 + 5;
  fVar16 = (float)iVar1 * 10.0 + 2.5;
  fVar18 = (float)iVar2 * 10.0 + 2.5;
  fVar17 = (float)(iVar1 + 8) * 10.0 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  fVar16 = (float)(iVar2 + 5) * 10.0 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar5 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar1 = iVar4;
  if (iVar5 <= iVar4) {
    iVar1 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar5 = iVar2;
  if (iVar6 <= iVar2) {
    iVar5 = iVar6;
  }
  if (iVar2 <= iVar6) {
    iVar2 = iVar6;
  }
  *(int *)(lVar10 + 0x50) = iVar1;
  *(int *)(lVar10 + 0x54) = iVar5;
  *(int *)(lVar10 + 0x60) = iVar4;
  *(int *)(lVar10 + 100) = iVar2;
  if (*(uint *)(param_1 + 8) < 5) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  }
  if (local_5e0 < 5) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[4];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x30) + 0xf0))();
  iVar1 = *piVar13;
  if (local_5e0 < 5) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[4];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x60) + 0xf0))();
  iVar2 = *piVar13;
  *(int *)(lVar10 + 0x10) = iVar1;
  *(int *)(lVar10 + 0x14) = iVar2;
  *(int *)(lVar10 + 0x28) = iVar1;
  *(int *)(lVar10 + 0x2c) = iVar2;
  *(int *)(lVar10 + 0x38) = iVar1 + 8;
  *(int *)(lVar10 + 0x3c) = iVar2 + 5;
  fVar16 = (float)iVar1 * 10.0 + 2.5;
  fVar18 = (float)iVar2 * 10.0 + 2.5;
  fVar17 = (float)(iVar1 + 8) * 10.0 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  fVar16 = (float)(iVar2 + 5) * 10.0 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar5 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar1 = iVar4;
  if (iVar5 <= iVar4) {
    iVar1 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar5 = iVar2;
  if (iVar6 <= iVar2) {
    iVar5 = iVar6;
  }
  if (iVar2 <= iVar6) {
    iVar2 = iVar6;
  }
  *(int *)(lVar10 + 0x50) = iVar1;
  *(int *)(lVar10 + 0x54) = iVar5;
  *(int *)(lVar10 + 0x60) = iVar4;
  *(int *)(lVar10 + 100) = iVar2;
  if (*(uint *)(param_1 + 8) < 6) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  }
  if (local_5e0 < 6) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[5];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x30) + 0xf0))();
  iVar1 = *piVar13;
  if (local_5e0 < 6) {
    lVar12 = 0;
  }
  else {
    lVar12 = local_5d8[5];
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar12 + 0x60) + 0xf0))();
  iVar2 = *piVar13;
  *(int *)(lVar10 + 0x10) = iVar1;
  *(int *)(lVar10 + 0x14) = iVar2;
  *(int *)(lVar10 + 0x28) = iVar1;
  *(int *)(lVar10 + 0x2c) = iVar2;
  *(int *)(lVar10 + 0x38) = iVar1 + 8;
  *(int *)(lVar10 + 0x3c) = iVar2 + 5;
  fVar16 = (float)iVar1 * 10.0 + 2.5;
  fVar18 = (float)iVar2 * 10.0 + 2.5;
  fVar17 = (float)(iVar1 + 8) * 10.0 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  fVar16 = (float)(iVar2 + 5) * 10.0 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar5 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar1 = iVar4;
  if (iVar5 <= iVar4) {
    iVar1 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar5 = iVar2;
  if (iVar6 <= iVar2) {
    iVar5 = iVar6;
  }
  if (iVar2 <= iVar6) {
    iVar2 = iVar6;
  }
  *(int *)(lVar10 + 0x60) = iVar4;
  *(int *)(lVar10 + 100) = iVar2;
  *(int *)(lVar10 + 0x50) = iVar1;
  *(int *)(lVar10 + 0x54) = iVar5;
  (*(code *)local_6d8[4])(&local_6d8);
  local_6d8 = &PTR_LAB_049903d8;
  local_618[0] = PTR_DAT_04bbc4f0 + 0x10;
  if (0 < (int)local_5e0) {
    lVar10 = 0;
    do {
      plVar14 = (long *)local_5d8[lVar10];
      (**(code **)*plVar14)(plVar14);
      lVar10 = lVar10 + 1;
      *plVar14 = (long)local_5d0;
      local_5d0 = plVar14;
    } while (lVar10 < (int)local_5e0);
  }
  if (lVar15 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar15;
  }
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return;
}

