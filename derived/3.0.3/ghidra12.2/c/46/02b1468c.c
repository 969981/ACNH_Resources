
void FUN_02b1468c(long param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_98 [2];
  undefined *local_90;
  undefined *puStack_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  puVar12 = PTR_DAT_04bbc1a0;
  puVar11 = PTR_DAT_04bb2010;
  local_98[0] = 0x1a;
  local_90 = PTR_DAT_04bbc1a0 + 0x10;
  local_68 = *param_3;
  puStack_88 = PTR_DAT_04bb2010 + 0x10;
  local_60 = *(undefined4 *)(param_1 + 0x740);
  uStack_5c = 0;
  local_64 = 0;
  fVar16 = (float)*(int *)(param_2 + 0x10) * 10.0 + 2.5;
  fVar17 = (float)*(int *)(param_2 + 0x14) * 10.0 + 2.5;
  fVar15 = (float)*(int *)(param_2 + 0x24) * 10.0 + 10.0 + -2.5;
  fVar14 = (float)*(int *)(param_2 + 0x20) * 10.0 + 10.0 + -2.5;
  iVar7 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar8 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar9 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar1 = iVar7;
  if (iVar9 <= iVar7) {
    iVar1 = iVar9;
  }
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  local_62 = 1;
  iVar10 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar9 = iVar8;
  if (iVar10 <= iVar8) {
    iVar9 = iVar10;
  }
  if (iVar8 <= iVar10) {
    iVar8 = iVar10;
  }
  local_80 = iVar1;
  iStack_7c = iVar9;
  local_78 = puStack_88;
  local_70 = iVar7;
  iStack_6c = iVar8;
  FUN_02a7bc88(param_1 + 0x18,local_98);
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
    if (0xff < (uint)(int)sVar6) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      uVar3 = *param_3;
      uVar4 = *(undefined4 *)(param_1 + 0x740);
      uVar5 = *(undefined2 *)(param_1 + 0x744);
      lVar13 = *(long *)PTR_DAT_04bb5008;
      if (*(char *)(lVar13 + 0x26800) == '\0') {
        *(undefined2 *)(lVar13 + 0x267f8) = uVar5;
        *(int *)(lVar13 + 0x267d8) = iVar1;
        *(undefined **)(lVar13 + 0x267e0) = puVar11 + 0x10;
        *(undefined1 *)(lVar13 + 0x26800) = 1;
        *(undefined **)(lVar13 + 0x267c8) = puVar12 + 0x10;
        *(undefined **)(lVar13 + 0x267d0) = puVar11 + 0x10;
      }
      else {
        *(int *)(lVar13 + 0x267d8) = iVar1;
        *(undefined2 *)(lVar13 + 0x267f8) = uVar5;
      }
      *(int *)(lVar13 + 0x267dc) = iVar9;
      *(int *)(lVar13 + 0x267e8) = iVar7;
      *(int *)(lVar13 + 0x267ec) = iVar8;
      *(undefined4 *)(lVar13 + 0x267f0) = uVar3;
      *(undefined4 *)(lVar13 + 0x267f4) = uVar4;
    }
  }
  return;
}

