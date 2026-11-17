
/* WARNING: Removing unreachable block (ram,0x02b1a554) */

uint FUN_02b1a3ec(long param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined2 local_58;
  undefined1 local_52;
  undefined4 *local_50;
  undefined4 local_44;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  lVar7 = *(long *)PTR_DAT_04bb5c90;
  fVar12 = (float)*(int *)(lVar7 + 0x28) * 0.5;
  uVar4 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar4 = (uint)(fVar12 < 0.0);
  }
  fVar13 = (float)*(int *)(lVar7 + 0x2c) * 0.5;
  uVar9 = 0;
  if (fVar13 != (float)(int)fVar13) {
    uVar9 = (uint)(fVar13 < 0.0);
  }
  lVar10 = *(long *)PTR_DAT_04bb5008;
  plVar11 = (long *)(lVar10 + 0x26218);
  fVar14 = (float)*(int *)(lVar7 + 0x38) * 0.5;
  uVar6 = 0;
  if (fVar14 != (float)(int)fVar14) {
    uVar6 = (uint)(fVar14 < 0.0);
  }
  fVar15 = (float)*(int *)(lVar7 + 0x3c) * 0.5;
  uVar8 = 0;
  if (fVar15 != (float)(int)fVar15) {
    uVar8 = (uint)(fVar15 < 0.0);
  }
  iVar1 = (int)fVar12 - uVar4;
  if ((int)((int)fVar14 - uVar6) <= (int)((int)fVar12 - uVar4)) {
    iVar1 = (int)fVar14 - uVar6;
  }
  iVar2 = (int)fVar13 - uVar9;
  if ((int)((int)fVar15 - uVar8) <= (int)((int)fVar13 - uVar9)) {
    iVar2 = (int)fVar15 - uVar8;
  }
  piVar5 = (int *)(**(code **)(*plVar11 + 0xf0))(plVar11);
  iVar3 = *piVar5;
  plVar11 = (long *)(lVar10 + 0x26248);
  piVar5 = (int *)(**(code **)(*plVar11 + 0xf0))(plVar11);
  local_44 = 0;
  local_50 = &local_44;
  local_70 = 0;
  iStack_5c = iVar2 + *piVar5;
  local_58 = 0;
  local_68 = PTR_DAT_04bb2018 + 0x10;
  uStack_74 = DAT_05636e68;
  local_78 = 1;
  local_80 = PTR_DAT_04bc45d0 + 0x10;
  local_60 = iVar1 + iVar3;
  local_52 = param_2;
  uVar4 = FUN_02a81334(&local_80,&local_78);
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(param_1 + 8) = local_44;
  }
  return uVar4 & 1;
}

