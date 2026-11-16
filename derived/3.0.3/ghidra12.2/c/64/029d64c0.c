
undefined8 FUN_029d64c0(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined *local_1a8;
  char *pcStack_1a0;
  undefined4 local_194;
  undefined *local_190;
  undefined *puStack_188;
  undefined **local_180;
  undefined8 local_178;
  undefined *local_170;
  char *pcStack_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_15b;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined4 local_11c;
  undefined *local_118;
  undefined *puStack_110;
  char *local_f0;
  uint local_e8;
  int local_e4;
  char local_e0 [7];
  char cStack_d9;
  char acStack_d8 [7];
  undefined1 local_d1;
  
  puVar4 = PTR_DAT_04bb2698;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    pvVar11 = malloc(0x18);
    if (pvVar11 != (void *)0x0) goto LAB_029d6544;
LAB_029d6560:
    iVar14 = *(int *)(param_1 + 0x10);
    if (iVar14 != 0) {
      pvVar11 = *(void **)(param_1 + 0x18);
      goto LAB_029d656c;
    }
  }
  else {
    plVar9 = (long *)*param_2;
    if (plVar9 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar19 + 8);
      if (lVar10 != 0) {
        plVar9 = (long *)(lVar10 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_029d6560;
    }
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x18,8);
    if (pvVar11 == (void *)0x0) goto LAB_029d6560;
LAB_029d6544:
    iVar14 = 3;
    *(void **)(param_1 + 0x18) = pvVar11;
    *(undefined4 *)(param_1 + 0x10) = 3;
LAB_029d656c:
    uVar16 = 0;
    do {
      *(undefined8 *)((long)pvVar11 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)) = 0;
      uVar12 = uVar16 + 1;
      uVar16 = uVar12 & 0xffffffff;
    } while (iVar14 != (int)uVar12);
  }
  puVar5 = PTR_DAT_04bb26a8;
  lVar19 = *(long *)PTR_DAT_04bb26a8;
  plVar9 = (long *)(lVar19 + 0xa5950);
  lVar10 = *plVar9;
  plVar2 = (long *)(*(int *)(lVar19 + 0xa5964) + param_1);
  *plVar9 = (long)plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)plVar9;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  puVar1 = PTR_DAT_04bb28b0;
  *(int *)(lVar19 + 0xa5960) = *(int *)(lVar19 + 0xa5960) + 1;
  lVar19 = *(long *)puVar4;
  *(long *)(param_1 + 0xe0) = *(long *)puVar1 + 0x448;
  if (lVar19 == 0) {
    pvVar11 = malloc(8);
    if (pvVar11 != (void *)0x0) goto LAB_029d6634;
LAB_029d6650:
    if (DAT_055ebd18 == 0) goto LAB_029d6678;
  }
  else {
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar19 + 8);
      if (lVar10 != 0) {
        param_2 = (long *)(lVar10 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) goto LAB_029d6650;
    }
    pvVar11 = (void *)(**(code **)(*param_2 + 0x30))(param_2,8,8);
    if (pvVar11 == (void *)0x0) goto LAB_029d6650;
LAB_029d6634:
    DAT_055ebd18 = 1;
    DAT_055ebd20 = pvVar11;
  }
  pvVar11 = DAT_055ebd20;
  iVar14 = DAT_055ebd18;
  uVar16 = 0;
  do {
    *(undefined8 *)((long)pvVar11 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)) = 0;
    uVar12 = uVar16 + 1;
    uVar16 = uVar12 & 0xffffffff;
  } while (iVar14 != (int)uVar12);
LAB_029d6678:
  lVar19 = *(long *)puVar5;
  plVar9 = (long *)(lVar19 + 0xa5950);
  iVar14 = *(int *)(lVar19 + 0xa5964);
  lVar10 = *plVar9;
  plVar2 = (long *)((long)&DAT_055ebd08 + (long)iVar14);
  *plVar9 = (long)plVar2;
  *plVar2 = lVar10;
  *(long **)((long)&DAT_055ebd10 + (long)iVar14) = plVar9;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar2;
  }
  *(int *)(lVar19 + 0xa5960) = *(int *)(lVar19 + 0xa5960) + 1;
  puVar4 = PTR_DAT_04bb2020;
  local_d1 = 0;
  local_170 = (undefined *)((ulong)local_170 & 0xffffffffffffff00);
  local_f0 = local_e0;
  local_180 = &local_170;
  local_e8 = 0xf;
  local_e4 = 0x80;
  local_e0[0] = s_Sound_Resource__040d5fac[0];
  local_e0[1] = s_Sound_Resource__040d5fac[1];
  local_e0[2] = s_Sound_Resource__040d5fac[2];
  local_e0[3] = s_Sound_Resource__040d5fac[3];
  local_e0[4] = s_Sound_Resource__040d5fac[4];
  local_e0[5] = s_Sound_Resource__040d5fac[5];
  local_e0[6] = s_Sound_Resource__040d5fac[6];
  cStack_d9 = s_Sound_Resource__040d5fac[7];
  acStack_d8[0] = s_Sound_Resource__040d5fac[8];
  acStack_d8[1] = s_Sound_Resource__040d5fac[9];
  acStack_d8[2] = s_Sound_Resource__040d5fac[10];
  acStack_d8[3] = s_Sound_Resource__040d5fac[0xb];
  acStack_d8[4] = s_Sound_Resource__040d5fac[0xc];
  acStack_d8[5] = s_Sound_Resource__040d5fac[0xd];
  acStack_d8[6] = s_Sound_Resource__040d5fac[0xe];
  local_178 = 0x8000000000;
  local_190 = PTR_DAT_04bb2020 + 0x10;
  puStack_188 = &DAT_040ead18;
  local_194 = 1;
  FUN_02a21700(&local_180,&local_190,2,&local_194);
  uVar7 = local_e8;
  pcVar6 = local_f0;
  uVar15 = (uint)local_178;
  if ((uint)local_178 == 0xffffffff) {
    uVar15 = 0xffffffff;
    ppuVar18 = local_180;
    do {
      cVar3 = *(char *)ppuVar18;
      uVar15 = uVar15 + 1;
      ppuVar18 = (undefined **)((long)ppuVar18 + 1);
    } while (cVar3 != '\0');
  }
  uVar17 = local_e4 + ~local_e8;
  if (local_e4 <= (int)(local_e8 + uVar15)) {
    uVar15 = uVar17;
  }
  if (0 < (int)uVar15) {
    memcpy(local_f0 + (int)local_e8,local_180,(ulong)uVar15);
    local_e8 = uVar15 + uVar7;
    pcVar6[(int)local_e8] = '\0';
    uVar17 = local_e4 + ~local_e8;
  }
  pcVar6 = local_f0;
  uVar15 = 5;
  if (local_e4 <= (int)(local_e8 + 5)) {
    uVar15 = uVar17;
  }
  if (0 < (int)uVar15) {
    lVar19 = (long)(int)local_e8;
    memcpy(local_f0 + lVar19,".bars",(ulong)uVar15);
    lVar19 = lVar19 + (int)uVar15;
    pcVar6[lVar19] = '\0';
    local_e8 = (uint)lVar19;
  }
  local_1a8 = puVar4 + 0x10;
  local_178 = CONCAT44(local_178._4_4_,1);
  local_160 = 0x1010100;
  local_15b = 0x1010001;
  local_15c = 0;
  uStack_130 = 0;
  local_13c = 0;
  local_154 = 0;
  local_180 = (undefined **)(PTR_DAT_04bdf0b0 + 0x10);
  local_14c = 0;
  local_144 = 0;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  puStack_110 = PTR_DAT_04bb2120;
  uStack_138 = (undefined4)*(undefined8 *)(param_1 + 0xe0);
  local_134 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20);
  pcStack_168 = "KKFesDynamicWaveLoader";
  pcStack_1a0 = local_f0;
  local_170 = local_1a8;
  local_118 = local_1a8;
  FUN_03f2dbac(&DAT_055ebcd0,&local_1a8,&local_180,0);
  pvVar11 = DAT_055ebd20;
  iVar14 = DAT_055ebd18;
  puVar5 = PTR_DAT_04bc4000;
  puVar4 = PTR_DAT_04bc3ff8;
  if (DAT_055ebd18 != 0) {
    uVar16 = 0;
    puVar1 = PTR_DAT_04bb4448 + 0x10;
    do {
      puVar13 = (undefined8 *)FUN_03f2d7f0(&DAT_055ebcd0);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(puVar5);
      }
      if (puVar13 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        uVar12 = (**(code **)*puVar13)(puVar13,puVar4);
        if ((uVar12 & 1) == 0) {
          puVar13 = (undefined8 *)0x0;
        }
      }
      *(undefined8 **)((long)pvVar11 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)) =
           puVar13;
      uVar12 = uVar16 + 1;
      uVar16 = uVar12 & 0xffffffff;
    } while (iVar14 != (int)uVar12);
  }
  return 1;
}

