
void FUN_015aab80(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  float *pfVar15;
  long *plVar16;
  undefined2 *puVar17;
  long lVar18;
  void *pvVar19;
  void *__src;
  float fVar20;
  float fVar21;
  undefined *local_180;
  char *local_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined8 *puStack_158;
  undefined4 local_150;
  undefined1 local_6d;
  
  puVar1 = PTR_DAT_04bb3350;
  puVar9 = PTR_DAT_04bb2698;
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar11 = malloc(0x10);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar13 = (undefined8 *)(lVar18 + 8);
    if (lVar10 != 0) {
      puVar13 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)(**(code **)(*(long *)*puVar13 + 0x30))((long *)*puVar13,0x10,8);
  }
  *plVar11 = (long)(PTR_DAT_04bb3048 + 0x10);
  plVar11[1] = 0;
  *(long **)(param_1 + 0x280) = plVar11;
  lVar18 = *(long *)puVar9;
  if (lVar18 == 0) {
    plVar12 = malloc(400);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar12 = (long *)(lVar18 + 8);
    if (lVar10 != 0) {
      plVar12 = (long *)(lVar10 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,400,8);
    }
  }
  puVar7 = PTR_DAT_04bb2020;
  local_150 = 0;
  local_180 = PTR_DAT_04bb2020 + 0x10;
  local_178 = "TVProgramDrawer";
  puStack_168 = &DAT_0409bb85;
  puStack_158 = &DAT_0407ebb1;
  *plVar12 = (long)(PTR_DAT_04bb3050 + 0x10);
  local_170 = local_180;
  local_160 = local_180;
  (**(code **)(puVar7 + 0x28))(&local_180);
  plVar12[2] = 0;
  plVar12[3] = 0;
  *(undefined1 *)((long)plVar12 + 0x44) = 0;
  plVar12[1] = (long)local_178;
  plVar16 = plVar12 + 5;
  *plVar16 = 0;
  puVar8 = PTR_DAT_04bb21f8;
  *(undefined4 *)(plVar12 + 8) = 0x100;
  *(undefined1 *)((long)plVar12 + 0x143) = 0;
  *(undefined1 *)(plVar12 + 0x29) = 0;
  *(undefined4 *)(plVar12 + 4) = local_150;
  plVar12[0x2e] = 0;
  plVar12[6] = (long)(puVar8 + 0x10);
  plVar12[7] = (long)plVar12 + 0x44;
  *plVar12 = (long)&PTR_LAB_049ae6b0;
  plVar12[0x2c] = (long)"mBufferSize";
  plVar12[0x2d] = 0;
  puVar1 = PTR_DAT_04bbd520 + 0x10;
  *(undefined4 *)(plVar12 + 0x2f) = 0;
  plVar12[0x31] = 0;
  plVar12[0x2a] = (long)plVar12;
  plVar12[0x2b] = (long)puVar1;
  lVar18 = *plVar16;
  if (*plVar16 != 0) {
    do {
      lVar10 = lVar18;
      lVar18 = *(long *)(lVar10 + 0x10);
    } while (lVar18 != 0);
    plVar16 = (long *)(lVar10 + 0x10);
  }
  *plVar16 = (long)(plVar12 + 0x2b);
  plVar12[0x2e] = (long)plVar12;
  puVar13 = (undefined8 *)(**(code **)(plVar12[0x2b] + 0xf0))();
  *puVar13 = 0x4300000043800000;
  if ((*(uint *)(plVar12 + 0x2f) >> 7 & 1) == 0) {
    plVar12[0x31] = 0x4300000043800000;
  }
  *(uint *)(plVar12 + 0x2f) = *(uint *)(plVar12 + 0x2f) & 0xfeffffff;
  plVar11[1] = (long)plVar12;
  pvVar19 = (void *)plVar12[7];
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  __src = *(void **)(param_1 + 0x10);
  if (pvVar19 != __src) {
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
    lVar18 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x10) + lVar18) == '\0') goto LAB_015aae1c;
      lVar10 = *(long *)(param_1 + 0x10) + lVar18;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_015aae1c;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_015aae1c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_015aae1c:
    iVar3 = (int)lVar18;
    if ((int)plVar12[8] <= (int)lVar18) {
      iVar3 = (int)plVar12[8] + -1;
    }
    memcpy(pvVar19,__src,(long)iVar3);
    *(undefined1 *)((long)pvVar19 + (long)iVar3) = 0;
  }
  plVar12 = (long *)plVar11[1];
  local_178 = (char *)((long)&local_170 + 4);
  local_180 = puVar8 + 0x10;
  local_6d = 0;
  local_170 = (undefined *)CONCAT35(local_170._5_3_,0x100);
  uVar14 = (**(code **)(*plVar12 + 0xf0))(plVar12,&local_180,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar12,&local_180,0);
  }
  pfVar15 = (float *)(**(code **)(*(long *)(plVar11[1] + 0x158) + 0xf0))(plVar11[1] + 0x158);
  fVar20 = *pfVar15;
  *(float *)(param_1 + 0x720) = fVar20;
  fVar21 = pfVar15[1];
  *(float *)(param_1 + 0x724) = fVar21;
  FUN_01628904(param_1,param_1 + 0x290,0x1a,(int)fVar20,(int)fVar21,1,param_3);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x294);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x2ac);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x377) = *(undefined8 *)(param_1 + 0x2d7);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x2c0);
  FUN_038fd1e0(param_1 + 0x380);
  FUN_038fd2f0(param_1 + 0x380,(int *)(param_1 + 0x2e0));
  puVar2 = (uint *)(param_1 + 0x404);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x328);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 | 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar17 = *(undefined2 **)(param_1 + 0x480);
  *puVar17 = 9;
  *(undefined8 *)(puVar17 + 1) = s_TVProgram_040f980f._0_8_;
  puVar17[5] = 0x6d;
  if (*(int *)(param_1 + 0x2e0) == -1) {
    lVar18 = -1;
  }
  else {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    uVar6 = *(int *)(param_1 + 0x2e0) - (uint)*(ushort *)(lVar18 + 0x3da);
    if (*(uint *)(lVar18 + 0x368) <= uVar6) {
      uVar6 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar6 * 0x20 + 4);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar18 = (long)*(int *)(param_1 + 0x2e0);
  }
  lVar10 = *(long *)puVar9;
  *(long *)(param_1 + 0x4b0) = lVar18;
  *(long *)(param_1 + 0x410) = param_1 + 0x420;
  if (lVar10 == 0) {
    plVar11 = malloc(0x40);
  }
  else {
    plVar11 = param_3;
    if (param_3 == (long *)0x0) {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar10 + 8);
      if (lVar18 != 0) {
        plVar11 = (long *)(lVar18 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_015ab094;
      }
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x40,8);
  }
LAB_015ab094:
  puVar1 = PTR_DAT_04bd1840;
  *(undefined4 *)(plVar11 + 4) = 0;
  plVar11[5] = 0;
  plVar11[6] = 0;
  *(undefined4 *)(plVar11 + 7) = 0;
  *plVar11 = (long)(puVar1 + 0x10);
  plVar11[1] = (long)(puVar7 + 0x10);
  plVar11[2] = (long)&DAT_0407ebb1;
  plVar11[3] = 0;
  *(undefined4 *)((long)plVar11 + 0x3c) = 0;
  lVar18 = *(long *)puVar9;
  *(long **)(param_1 + 0x6e8) = plVar11;
  if (lVar18 == 0) {
    pvVar19 = malloc(0x1000);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar13 = (undefined8 *)(lVar18 + 8);
      if (lVar10 != 0) {
        puVar13 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_3 = (long *)*puVar13;
      if (param_3 == (long *)0x0) {
        pvVar19 = (void *)0x0;
        goto LAB_015ab134;
      }
    }
    pvVar19 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x1000,0x40);
  }
LAB_015ab134:
  plVar11[5] = (long)pvVar19;
  plVar11[6] = (long)pvVar19;
  *(undefined4 *)(plVar11 + 7) = 0x200;
  *(undefined4 *)((long)plVar11 + 0x3c) = 0;
  return;
}

