
uint FUN_02286ec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_d4 [2];
  float local_cc;
  undefined **local_c8;
  undefined **local_c0;
  undefined *local_b8;
  int local_b0;
  int local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  int local_64;
  
  local_64 = 0;
  local_78 = 0;
  lVar6 = *(long *)PTR_DAT_04bb27c8;
  fVar10 = (float)param_1 * 5.0 + 2.5;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  fVar11 = (float)param_2 * 5.0 + 2.5;
  if (lVar5 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar7 + 7);
  local_70 = FUN_017baf44();
  fVar9 = fVar10 + 5.0;
  local_70 = local_70 & 1;
  fVar10 = fVar10 + -5.0;
  fVar8 = fVar11 + -5.0;
  fVar11 = fVar11 + 5.0;
  local_80 = PTR_DAT_04bb3140 + 0x10;
  local_a8 = PTR_DAT_04bbc1a0 + 0x10;
  local_b8 = PTR_DAT_04bb2010 + 0x10;
  local_88 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iStack_84 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar1 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iVar2 = local_88;
  if (iVar1 <= local_88) {
    iVar2 = iVar1;
  }
  if (local_88 <= iVar1) {
    local_88 = iVar1;
  }
  iVar1 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  local_ac = iStack_84;
  if (iVar1 <= iStack_84) {
    local_ac = iVar1;
  }
  if (iStack_84 <= iVar1) {
    iStack_84 = iVar1;
  }
  iVar1 = iStack_84 + 1;
  local_c8 = &puStack_a0;
  local_c0 = &local_90;
  local_b0 = iVar2;
  puStack_a0 = local_b8;
  local_98 = iVar2;
  iStack_94 = local_ac;
  local_90 = local_b8;
  if (iVar1 != local_ac) {
    do {
      local_d4[0] = (float)local_b0 * 5.0 + 2.5;
      local_cc = (float)local_ac * 5.0 + 2.5;
      FUN_0093a950(lVar6 + 0x28,local_d4,&local_64);
      if ((local_64 != 0) ||
         (psVar4 = (short *)FUN_01a5190c(&local_80,0,&local_b8,0), *psVar4 != -2)) {
        uVar3 = 1;
        goto LAB_02287150;
      }
      if (local_b0 < *(int *)(local_c0 + 1)) {
        local_b0 = local_b0 + 1;
      }
      else {
        local_b0 = *(int *)(local_c8 + 1);
        local_ac = local_ac + 1;
      }
    } while ((iVar2 != local_b0) || (iVar1 != local_ac));
  }
  uVar3 = FUN_022829d0(0x40a00000,param_1,param_2);
LAB_02287150:
  return uVar3 & 1;
}

