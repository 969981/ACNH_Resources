
void FUN_01bdbde0(long *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  short sVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  uint uVar13;
  int iVar14;
  ushort uVar15;
  undefined *local_360;
  char *pcStack_358;
  undefined *local_350;
  void *local_348;
  undefined4 local_340;
  undefined1 local_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined *local_320;
  undefined1 *local_318;
  undefined4 local_310;
  undefined1 local_30c [63];
  undefined1 local_2cd;
  undefined *local_2c8;
  undefined1 *local_2c0;
  undefined4 local_2b8;
  undefined1 local_2b4 [63];
  undefined1 local_275;
  void *local_270;
  undefined *local_268;
  char *apcStack_260 [2];
  undefined *local_250;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined *local_1c0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_160;
  undefined8 local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined2 local_62;
  
  puVar5 = PTR_DAT_04bb2718;
  puVar4 = PTR_DAT_04bb2020;
  local_268 = PTR_DAT_04bb2020 + 0x10;
  apcStack_260[0] = "STR_Mailcheck";
  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),&local_268);
  lVar9 = FUN_03d53db0(*(undefined8 *)(*(long *)puVar5 + 0x408),&local_268);
  if (lVar9 == 0) {
    iVar14 = -1;
  }
  else {
    iVar14 = *(int *)(lVar9 + 8);
  }
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  memset(apcStack_260,0,0x1e0);
  puVar6 = PTR_DAT_04bb2e00;
  puVar5 = PTR_DAT_04bb2698;
  local_230 = 0;
  uStack_228 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_250 = PTR_DAT_04bb2d80 + 0x10;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_140 = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_268 = PTR_DAT_04bc07f0 + 0x10;
  local_64 = 0;
  local_62 = 0;
  local_340 = 0;
  local_33c = 0;
  local_328 = 0xffffffff;
  local_310 = 0x40;
  local_2cd = 0;
  local_30c[0] = 0;
  local_338 = 0xffffffff;
  uStack_330 = 0xffffffff00000000;
  local_318 = local_30c;
  local_320 = PTR_DAT_04bb2bc0 + 0x10;
  local_2c0 = local_2b4;
  local_2b8 = 0x40;
  local_275 = 0;
  local_2b4[0] = 0;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  local_350 = PTR_DAT_04bb2e00 + 0x10;
  local_270 = (void *)0x0;
  local_348 = (void *)0x0;
  local_2c8 = local_320;
  local_220 = local_250;
  local_1f0 = local_250;
  local_1c0 = local_250;
  local_190 = local_250;
  local_160 = local_250;
  local_130 = local_250;
  local_100 = local_250;
  local_d0 = local_250;
  local_a0 = local_250;
  if (lVar9 == 0) {
    pvVar12 = malloc(0x1000);
    pvVar7 = local_348;
  }
  else {
    plVar10 = *(long **)PTR_DAT_04bc08b8;
    if (plVar10 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar9 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      pvVar7 = local_348;
      if (plVar10 == (long *)0x0) goto LAB_01bdbfe8;
    }
    pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1000,8);
    pvVar7 = local_348;
  }
  local_348 = pvVar12;
  if (local_348 != (void *)0x0) {
    local_340 = 0x800;
    local_270 = local_348;
    (**(code **)(local_350 + 0x38))(&local_350);
    pvVar7 = local_348;
  }
LAB_01bdbfe8:
  local_348 = pvVar7;
  if (0 < iVar14) {
    uVar13 = 0;
    uVar15 = 0;
    do {
      pcStack_358 = "STR_Mailcheck";
      local_360 = puVar4 + 0x10;
      FUN_006f5290(&local_350,&local_360,uVar13);
      sVar8 = FUN_01ba3a64(&local_268,&local_350);
      if (sVar8 != 0) {
        iVar2 = *(int *)((long)param_1 + 0xc) + (int)param_1[2];
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        iVar3 = 0;
        if ((int)param_1[1] <= iVar2) {
          iVar3 = (int)param_1[1];
        }
        psVar1 = (short *)(*param_1 + (long)(iVar2 - iVar3) * 4);
        *psVar1 = sVar8;
        psVar1[1] = uVar15;
      }
      uVar15 = uVar15 + 1;
      uVar13 = (uint)uVar15;
    } while ((int)uVar13 < iVar14);
  }
  local_350 = puVar6 + 0x10;
  if (local_270 != (void *)0x0) {
    local_348 = (void *)0x0;
    local_340 = 0;
    local_33c = 0;
    local_328 = 0xffffffff;
    local_338 = 0xffffffff;
    uStack_330 = 0xffffffff00000000;
    *local_318 = 0;
    *local_2c0 = 0;
    pvVar7 = local_270;
    if (local_270 != (void *)0x0) {
      if (*(long *)puVar5 == 0) {
        free(local_270);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)puVar5,local_270);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar7);
        }
      }
    }
  }
  return;
}

