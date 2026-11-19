
void FUN_03c125c0(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined7 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *local_518;
  char *local_510;
  undefined4 local_508;
  char local_504 [8];
  char local_4fc [7];
  char cStack_4f5;
  char acStack_4f4 [7];
  undefined1 local_4ed;
  undefined1 local_405;
  undefined *local_400;
  undefined7 *local_3f8;
  int local_3f0;
  undefined7 local_3ec;
  char cStack_3e5;
  undefined3 uStack_3e4;
  undefined1 local_3e1;
  undefined1 local_2ed;
  undefined *local_2e8;
  char *local_2e0;
  int local_2d8;
  char local_2d4 [8];
  char local_2cc [8];
  char local_2c4 [8];
  undefined2 local_2bc;
  undefined1 local_1d5;
  undefined *local_1d0;
  char *local_1c8;
  undefined4 local_1c0;
  char local_1bc [8];
  char local_1b4 [7];
  char cStack_1ad;
  char acStack_1ac [7];
  undefined1 local_1a5;
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  local_1a5 = 0;
  local_1c0 = 0x100;
  local_1bc = (char  [8])s_System_Agl_agl_resource_040adc7f._0_8_;
  local_1b4 = (char  [7])s_System_Agl_agl_resource_040adc7f._8_7_;
  cStack_1ad = s_System_Agl_agl_resource_040adc7f[0xf];
  acStack_1ac = (char  [7])s_System_Agl_agl_resource_040adc7f._16_7_;
  local_2d4 = (char  [8])s_System_GSys_gsys_resource_040f7152._0_8_;
  local_2cc = (char  [8])s_System_GSys_gsys_resource_040f7152._8_8_;
  local_2c4 = (char  [8])s_System_GSys_gsys_resource_040f7152._16_8_;
  local_2bc = 0x65;
  local_518 = PTR_DAT_04bb21f8 + 0x10;
  local_2d8 = 0x100;
  local_400 = local_518;
  local_3f8 = &local_3ec;
  local_3f0 = 0x100;
  local_510 = local_504;
  local_508 = 0x100;
  local_1d0 = local_518;
  local_2e8 = local_518;
  lVar12 = 0;
  local_1c8 = local_1bc;
  local_1d5 = 0;
  local_2e0 = local_2d4;
  local_2ed = 0;
  local_3ec = s_Shader_apkg_040ec234._0_7_;
  _cStack_3e5 = CONCAT31(0x676b70,s_Shader_apkg_040ec234[7]);
  local_3e1 = 0;
  local_504 = (char  [8])s__Nin_NX_NVN_release_szs_040ec240._0_8_;
  local_4fc = (char  [7])s__Nin_NX_NVN_release_szs_040ec240._8_7_;
  cStack_4f5 = s__Nin_NX_NVN_release_szs_040ec240[0xf];
  acStack_4f4 = (char  [7])s__Nin_NX_NVN_release_szs_040ec240._16_7_;
  local_4ed = 0;
  local_bd = 0;
  do {
    if (local_1bc[lVar12] == '\0') goto LAB_03c1271c;
    if (local_1bc[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_03c1271c;
    }
    if (local_1bc[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_03c1271c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_03c1271c:
  uVar1 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
  lVar12 = 0;
  local_405 = 0;
  do {
    if (local_504[lVar12] == '\0') goto LAB_03c1276c;
    if (local_504[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_03c1276c;
    }
    if (local_504[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_03c1276c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_03c1276c:
  uVar2 = (uint)lVar12;
  if ((int)(0x100 - uVar1) <= (int)(uint)lVar12) {
    uVar2 = 0xff - uVar1;
  }
  if (0 < (int)uVar2) {
    FUN_038d1248(&local_518);
    memcpy(local_1bc + uVar1,local_510,(ulong)uVar2);
    local_1bc[(int)(uVar2 + uVar1)] = '\0';
  }
  pcVar6 = local_2e0;
  (**(code **)(local_2e8 + 0x18))(&local_2e8);
  lVar12 = 0;
  do {
    if (local_2e0[lVar12] == '\0') goto LAB_03c12810;
    if (local_2e0[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_03c12810;
    }
    if (local_2e0[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_03c12810;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_03c12810:
  uVar1 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_518 + 0x18))(&local_518);
  lVar12 = 0;
  do {
    if (local_510[lVar12] == '\0') goto LAB_03c1286c;
    if (local_510[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_03c1286c;
    }
    if (local_510[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_03c1286c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_03c1286c:
  uVar2 = (uint)lVar12;
  if ((int)(local_2d8 - uVar1) <= (int)(uint)lVar12) {
    uVar2 = local_2d8 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    (**(code **)(local_518 + 0x18))(&local_518);
    memcpy(pcVar6 + uVar1,local_510,(ulong)uVar2);
    pcVar6[(int)(uVar2 + uVar1)] = '\0';
  }
  puVar5 = local_3f8;
  (**(code **)(local_400 + 0x18))(&local_400);
  lVar12 = 0;
  do {
    if (*(char *)((long)local_3f8 + lVar12) == '\0') goto LAB_03c1290c;
    if (*(char *)((long)local_3f8 + lVar12 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_03c1290c;
    }
    if (*(char *)((long)local_3f8 + lVar12 + 2) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_03c1290c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_03c1290c:
  uVar1 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_518 + 0x18))(&local_518);
  lVar12 = 0;
  do {
    if (local_510[lVar12] == '\0') goto LAB_03c1296c;
    if (local_510[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_03c1296c;
    }
    if (local_510[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_03c1296c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_03c1296c:
  uVar2 = (uint)lVar12;
  if ((int)(local_3f0 - uVar1) <= (int)(uint)lVar12) {
    uVar2 = local_3f0 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    (**(code **)(local_518 + 0x18))(&local_518);
    memcpy((void *)((long)puVar5 + (ulong)uVar1),local_510,(ulong)uVar2);
    *(undefined1 *)((long)puVar5 + (long)(int)(uVar2 + uVar1)) = 0;
  }
  puVar8 = (undefined8 *)FUN_03eba220(&local_1d0,0x1000,0,1);
  puVar9 = (undefined8 *)FUN_03eba220(&local_2e8,0x1000,0,1);
  puVar10 = (undefined8 *)FUN_03eba220(&local_400,0x1000,0,1);
  puVar4 = PTR_DAT_04bb2868;
  if (((*PTR_DAT_04bb2868 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uVar11 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb2860);
    if ((uVar11 & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
  }
  *param_2 = (long)puVar8;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar11 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb2860);
    if ((uVar11 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
  }
  *param_3 = (long)puVar9;
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    uVar11 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb2860);
    if ((uVar11 & 1) == 0) {
      puVar10 = (undefined8 *)0x0;
    }
  }
  *param_4 = (long)puVar10;
  local_a8 = 0x40;
  puStack_b0 = local_a4;
  local_65 = 0;
  local_a4[0] = 0;
  local_b8 = PTR_DAT_04bb2bc0 + 0x10;
  lVar12 = nn::os::GetSystemTick();
  lVar12 = lVar12 - *(long *)PTR_DAT_04bd2db8;
  if (lVar12 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar13 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar13 = (lVar12 * 1000) / *(long *)PTR_DAT_04bb29d0;
    }
  }
  else {
    lVar13 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar13 = lVar12 / *(long *)PTR_DAT_04bb29d0;
    }
    lVar13 = lVar13 * 1000;
  }
  lVar12 = lVar13 / 1000;
  auVar3 = SEXT816(lVar13 / 60000) * ZEXT816(0x8888888888888889);
  FUN_038d13f0(&local_b8,"[time: %3d:%02d:%02d.%02d]",
               (int)(SUB168(SEXT816(lVar13) * SEXT816(0x4a90be587de6e565),8) >> 0x14) -
               (SUB164(SEXT816(lVar13) * SEXT816(0x4a90be587de6e565),0xc) >> 0x1f),
               (int)(lVar13 / 60000) + ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c,
               (int)lVar12 +
               ((int)(SUB168(SEXT816(lVar12) * ZEXT816(0x8888888888888889),8) >> 5) -
               (SUB164(SEXT816(lVar12) * ZEXT816(0x8888888888888889),0xc) >> 0x1f)) * -0x3c,
               (int)(short)((short)lVar13 + (short)lVar12 * -1000) / 10);
  return;
}

