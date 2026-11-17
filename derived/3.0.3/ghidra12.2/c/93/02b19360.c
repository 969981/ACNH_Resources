
/* WARNING: Removing unreachable block (ram,0x02b193e8) */
/* WARNING: Removing unreachable block (ram,0x02b193ac) */
/* WARNING: Removing unreachable block (ram,0x02b193e0) */
/* WARNING: Removing unreachable block (ram,0x02b19624) */

uint FUN_02b19360(long param_1,byte param_2)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  undefined2 local_a8;
  byte local_a2;
  undefined ***local_a0;
  undefined *local_98;
  undefined1 local_90;
  int local_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined *local_70;
  int local_68;
  undefined **local_60;
  undefined **ppuStack_58;
  undefined **local_50;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  local_70 = PTR_DAT_04bc43f8 + 0x10;
  local_68 = DAT_05636e5c;
  local_c8 = 1;
  local_98 = PTR_DAT_04bc4608 + 0x10;
  local_90 = PTR_DAT_04bbc570[8];
  local_8c = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uStack_80 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_78 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_74 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (DAT_05636e5c != 0) {
    ppuStack_58 = &local_70;
    local_60 = &PTR_FUN_04a9b150;
    local_50 = &local_98;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      plVar6 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar4 = (**(code **)(*plVar6 + 0x18))();
      if (0 < iVar4) {
        iVar14 = 0;
        do {
          FUN_01360490(&local_c8,puVar1[1],iVar14);
          uVar7 = (*(code *)*local_60)(&local_60,&local_c8);
          if ((uVar7 & 1) != 0) break;
          bVar3 = iVar4 + -1 != iVar14;
          iVar14 = iVar14 + 1;
        } while (bVar3);
      }
    }
  }
  if (local_8c == 0) {
    lVar9 = *(long *)PTR_DAT_04bb5c90;
    fVar15 = (float)*(int *)(lVar9 + 0x28) * 0.5;
    uVar5 = 0;
    if (fVar15 != (float)(int)fVar15) {
      uVar5 = (uint)(fVar15 < 0.0);
    }
    fVar16 = (float)*(int *)(lVar9 + 0x2c) * 0.5;
    uVar11 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar11 = (uint)(fVar16 < 0.0);
    }
    lVar13 = *(long *)PTR_DAT_04bb5008;
    plVar6 = (long *)(lVar13 + 0x261b8);
    fVar17 = (float)*(int *)(lVar9 + 0x38) * 0.5;
    uVar12 = 0;
    if (fVar17 != (float)(int)fVar17) {
      uVar12 = (uint)(fVar17 < 0.0);
    }
    fVar18 = (float)*(int *)(lVar9 + 0x3c) * 0.5;
    uVar10 = 0;
    if (fVar18 != (float)(int)fVar18) {
      uVar10 = (uint)(fVar18 < 0.0);
    }
    iVar4 = (int)fVar15 - uVar5;
    if ((int)((int)fVar17 - uVar12) <= (int)((int)fVar15 - uVar5)) {
      iVar4 = (int)fVar17 - uVar12;
    }
    iVar14 = (int)fVar16 - uVar11;
    if ((int)((int)fVar18 - uVar10) <= (int)((int)fVar16 - uVar11)) {
      iVar14 = (int)fVar18 - uVar10;
    }
    piVar8 = (int *)(**(code **)(*plVar6 + 0xf0))(plVar6);
    iVar2 = *piVar8;
    plVar6 = (long *)(lVar13 + 0x261e8);
    piVar8 = (int *)(**(code **)(*plVar6 + 0xf0))(plVar6);
    local_a0 = &local_60;
    local_60 = (undefined **)((ulong)local_60 & 0xffffffff00000000);
    local_c0 = 0;
    iStack_ac = iVar14 + *piVar8;
    local_a8 = 0;
    iStack_c4 = DAT_05636e5c;
    local_b8 = PTR_DAT_04bb2018 + 0x10;
    local_c8 = 1;
    local_98 = PTR_DAT_04bc45d0 + 0x10;
    local_b0 = iVar4 + iVar2;
    local_a2 = param_2 & 1;
    uVar5 = FUN_02a81334(&local_98,&local_c8);
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(param_1 + 8) = local_60._0_4_;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 1;
}

