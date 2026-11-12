
undefined8 FUN_008d7290(long param_1,undefined2 *param_2,float *param_3,float *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined *local_78;
  undefined8 local_70;
  byte local_68;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  puVar1 = (undefined8 *)PTR_DAT_04bc3a80;
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x122957f5) {
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8) {
      return 0;
    }
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "CommuneExpanded";
    uVar7 = FUN_0273f0a0(&local_78);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *(undefined2 *)(param_1 + 0x77a0);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x77a2);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x77a3);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x77a4);
  }
  pfVar8 = (float *)(**(code **)(*(long *)(param_1 + 0x7728) + 0x20))(param_1 + 0x7728);
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_70 = (char *)((ulong)local_70 & 0xffffffff00000000);
  local_58 = (int)((float)(int)*pfVar8 / 5.0) - (uint)(*pfVar8 < 0.0);
  iStack_54 = (int)((float)(int)pfVar8[2] / 5.0) - (uint)(pfVar8[2] < 0.0);
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar5 = FUN_006bd550(*puVar9,0);
      if (iVar5 != 0x758f7eaf) {
        puVar1 = &DAT_055c04a0;
      }
      puVar9 = puVar1;
    }
  }
  local_70 = (char *)CONCAT44(*(undefined4 *)(puVar9 + 7),(undefined4)local_70);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb3140 + 0x10;
  puVar10 = (uint *)FUN_014fbd50(&local_78,1,&local_60);
  uVar14 = *puVar10;
  if (uVar14 == 0) {
    puVar10 = (uint *)FUN_014fbd50(&local_78,0,&local_60);
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      return 0;
    }
  }
  puVar4 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return 0;
  }
  plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + (ulong)(uVar14 >> 0x14) * 8);
  if (((plVar13 == (long *)0x0) || ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar11 + 0x60))();
    if (iVar5 < 0x11) {
      uVar14 = 1;
      goto joined_r0x008d75dc;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x008d75dc;
    }
  }
  uVar14 = 0;
joined_r0x008d75dc:
  if (plVar13 == (long *)0x0) {
    return 0;
  }
  lVar12 = plVar13[0x2a];
  uVar3 = *(uint *)(plVar13 + 0x49);
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb5920);
  if ((int)lVar12 != 1) {
    return 0;
  }
  if ((uVar6 & uVar14) == 0) {
    return 0;
  }
  if ((uVar3 >> 4 & 1) == 0) {
    return 0;
  }
  if (param_3 != (float *)0x0) {
    fVar20 = *(float *)(plVar13[0xd] + 0x27c);
    fVar15 = (float)FUN_01473460(plVar13);
    *param_3 = fVar20 + fVar15;
  }
  if (param_4 != (float *)0x0) {
    lVar12 = plVar13[0xc];
    lVar2 = plVar13[0xd];
    fVar20 = *(float *)(lVar12 + 0x11c8);
    fVar16 = *(float *)(lVar12 + 0x11d4);
    fVar18 = *(float *)(lVar12 + 0x11cc);
    fVar15 = *(float *)(lVar12 + 0x11d8);
    fVar17 = *(float *)(lVar2 + 0x27c);
    fVar19 = *(float *)(lVar2 + 0x280);
    *param_4 = (*(float *)(lVar12 + 0x11c4) + *(float *)(lVar12 + 0x11d0)) * 0.5 +
               *(float *)(lVar2 + 0x278);
    param_4[1] = (fVar20 + fVar16) * 0.5 + fVar17;
    param_4[2] = (fVar18 + fVar15) * 0.5 + fVar19;
  }
  return 1;
}

