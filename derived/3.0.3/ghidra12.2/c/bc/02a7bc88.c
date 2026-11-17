
void FUN_02a7bc88(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_90 [2];
  undefined *local_88;
  undefined *puStack_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  *(undefined4 *)(param_1 + 8) = 0;
  local_90[0] = *param_2;
  *(undefined4 *)(param_1 + 0xc) = local_90[0];
  *(uint *)(param_1 + 8) = (uint)*(byte *)(param_2 + 0xd) << 1;
  local_60 = param_2[0xc];
  local_5b = *(undefined1 *)((long)param_2 + 0x35);
  local_88 = PTR_DAT_04bbc5d8 + 0x10;
  puStack_80 = PTR_DAT_04bb2018 + 0x10;
  local_5a = *(undefined1 *)((long)param_2 + 0x36);
  local_5c = *(undefined1 *)(param_2 + 0xd);
  fVar15 = (float)(int)param_2[7] * 0.5;
  fVar14 = (float)(int)param_2[6] * 0.5;
  fVar17 = (float)(int)param_2[10] * 0.5;
  fVar16 = (float)(int)param_2[0xb] * 0.5;
  uVar13 = 0;
  if (fVar14 != (float)(int)fVar14) {
    uVar13 = (uint)(fVar14 < 0.0);
  }
  iVar9 = (int)fVar14 - uVar13;
  uVar13 = 0;
  if (fVar15 != (float)(int)fVar15) {
    uVar13 = (uint)(fVar15 < 0.0);
  }
  iVar10 = (int)fVar15 - uVar13;
  uVar13 = 0;
  if (fVar17 != (float)(int)fVar17) {
    uVar13 = (uint)(fVar17 < 0.0);
  }
  iVar11 = (int)fVar17 - uVar13;
  uVar13 = 0;
  if (fVar16 != (float)(int)fVar16) {
    uVar13 = (uint)(fVar16 < 0.0);
  }
  iVar12 = (int)fVar16 - uVar13;
  iVar1 = iVar9;
  if (iVar11 <= iVar9) {
    iVar1 = iVar11;
  }
  if (iVar9 <= iVar11) {
    iVar9 = iVar11;
  }
  iVar11 = iVar10;
  if (iVar12 <= iVar10) {
    iVar11 = iVar12;
  }
  if (iVar10 <= iVar12) {
    iVar10 = iVar12;
  }
  local_58 = param_2[0xe];
  uStack_54 = param_2[0xf];
  local_78 = iVar1;
  iStack_74 = iVar11;
  local_70 = puStack_80;
  local_68 = iVar9;
  iStack_64 = iVar10;
  local_50 = FUN_02b58b90();
  local_4c = FUN_02b5a7a0(*(undefined1 *)((long)param_2 + 0x35));
  local_48 = FUN_02b5aaf0(*(undefined1 *)((long)param_2 + 0x35));
  local_44 = FUN_02b5aef0(*(undefined1 *)((long)param_2 + 0x35));
  FUN_02ad68d0(param_1 + 0xb8,local_90);
  *(undefined4 *)(param_1 + 0x10) = param_2[0xc];
  iVar3 = param_2[6];
  *(int *)(param_1 + 0x28) = iVar3;
  iVar7 = iVar3 + -2;
  iVar4 = param_2[7];
  *(int *)(param_1 + 0x2c) = iVar4;
  iVar8 = iVar4 + -2;
  iVar5 = param_2[10];
  *(int *)(param_1 + 0x38) = iVar5;
  iVar12 = iVar5 + 2;
  iVar6 = param_2[0xb];
  iVar2 = iVar3;
  if (iVar5 <= iVar3) {
    iVar2 = iVar5;
  }
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x50) = iVar1;
  *(int *)(param_1 + 0x54) = iVar11;
  *(int *)(param_1 + 0x60) = iVar9;
  *(int *)(param_1 + 100) = iVar10;
  iVar9 = iVar6 + 2;
  *(int *)(param_1 + 0x3c) = iVar6;
  iVar10 = iVar4;
  if (iVar9 <= iVar4) {
    iVar10 = iVar9;
  }
  if (iVar4 <= iVar9) {
    iVar4 = iVar9;
  }
  *(int *)(param_1 + 0x88) = iVar3;
  *(int *)(param_1 + 0x8c) = iVar4;
  iVar11 = iVar7;
  if (iVar12 <= iVar7) {
    iVar11 = iVar12;
  }
  if (iVar7 <= iVar12) {
    iVar7 = iVar12;
  }
  *(int *)(param_1 + 0x78) = iVar2;
  *(int *)(param_1 + 0x7c) = iVar10;
  iVar10 = iVar8;
  if (iVar9 <= iVar8) {
    iVar10 = iVar9;
  }
  if (iVar8 <= iVar9) {
    iVar8 = iVar9;
  }
  *(int *)(param_1 + 0xa0) = iVar11;
  *(int *)(param_1 + 0xa4) = iVar10;
  *(int *)(param_1 + 0xb0) = iVar7;
  *(int *)(param_1 + 0xb4) = iVar8;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  return;
}

