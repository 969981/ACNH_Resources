
undefined8 FUN_01509afc(float *param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  uint local_24;
  
  local_50 = 0;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar3 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar11 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_58 = PTR_DAT_04bb3140 + 0x10;
  local_68 = PTR_DAT_04bb2010 + 0x10;
  local_60 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_5c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  puVar5 = (uint *)FUN_014fbd50(&local_58,0,&local_68);
  uVar10 = *puVar5;
  local_24 = uVar10;
  uVar6 = FUN_015039ac(&local_24);
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar7 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x01509cc8;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01509cc8;
    }
  }
  uVar10 = 0;
joined_r0x01509cc8:
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar8 = plVar9[0x2a];
  uVar1 = *(uint *)(plVar9 + 0x49);
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
  if ((int)lVar8 != 1) {
    return 0;
  }
  if ((uVar4 & uVar10) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  if (*param_2 < 9) {
    puVar11 = *(undefined8 **)(PTR_DAT_04bbcdb8 + (ulong)*param_2 * 8 + 200);
  }
  else {
    puVar11 = &DAT_0407ebb1;
  }
  plVar9[0x138] = (long)puVar11;
  return 1;
}

