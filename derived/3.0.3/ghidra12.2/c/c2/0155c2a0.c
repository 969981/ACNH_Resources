
void FUN_0155c2a0(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  void *__dest;
  void *__src;
  undefined4 uVar13;
  undefined8 local_194;
  undefined4 local_18c;
  undefined *local_188;
  char *local_180;
  undefined8 local_178;
  undefined *puStack_170;
  undefined *local_168;
  undefined8 *puStack_160;
  undefined4 local_158;
  undefined1 local_75;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar6 = malloc(0x10);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar8 = (undefined8 *)(lVar12 + 8);
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x10,8);
  }
  *plVar6 = (long)(PTR_DAT_04bb3048 + 0x10);
  plVar6[1] = 0;
  param_1[0x50] = (long)plVar6;
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    plVar7 = malloc(0x230);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar12 + 8);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x230,8);
    }
  }
  puVar3 = PTR_DAT_04bb2020;
  local_158 = 0;
  local_188 = PTR_DAT_04bb2020 + 0x10;
  local_180 = "FieldUnitMapDrawer";
  puStack_160 = &DAT_0407ebb1;
  puStack_170 = &DAT_0405c6b1;
  *plVar7 = (long)(PTR_DAT_04bb3050 + 0x10);
  local_178 = local_188;
  local_168 = local_188;
  (**(code **)(puVar3 + 0x28))(&local_188);
  plVar7[2] = 0;
  plVar7[3] = 0;
  *(undefined1 *)((long)plVar7 + 0x44) = 0;
  plVar7[1] = (long)local_180;
  plVar11 = plVar7 + 5;
  *plVar11 = 0;
  puVar4 = PTR_DAT_04bb21f8;
  *(undefined4 *)(plVar7 + 8) = 0x100;
  *(undefined1 *)((long)plVar7 + 0x143) = 0;
  *(undefined1 *)(plVar7 + 0x29) = 0;
  *plVar7 = (long)&PTR_LAB_049a8c78;
  *(undefined4 *)(plVar7 + 4) = local_158;
  plVar7[0x2e] = 0;
  *(undefined4 *)(plVar7 + 0x2f) = 0;
  plVar7[0x31] = 0;
  plVar7[0x2a] = (long)plVar7;
  plVar7[0x2b] = (long)&PTR_LAB_049a8e60;
  plVar7[6] = (long)(puVar4 + 0x10);
  plVar7[7] = (long)plVar7 + 0x44;
  plVar7[0x2c] = (long)"mFieldMapSize";
  plVar7[0x2d] = 0;
  lVar12 = *plVar11;
  if (*plVar11 != 0) {
    do {
      lVar5 = lVar12;
      lVar12 = *(long *)(lVar5 + 0x10);
    } while (lVar12 != 0);
    plVar11 = (long *)(lVar5 + 0x10);
  }
  *plVar11 = (long)(plVar7 + 0x2b);
  plVar7[0x2e] = (long)plVar7;
  puVar8 = (undefined8 *)(**(code **)(plVar7[0x2b] + 0xf0))();
  *puVar8 = 0x4380000043800000;
  if ((*(uint *)(plVar7 + 0x2f) >> 7 & 1) == 0) {
    plVar7[0x31] = 0x4380000043800000;
  }
  *(undefined4 *)(plVar7 + 0x36) = 0;
  *(uint *)(plVar7 + 0x2f) = *(uint *)(plVar7 + 0x2f) & 0xfeffffff;
  plVar7[0x34] = 0;
  plVar7[0x35] = 0;
  plVar7[0x32] = (long)&PTR_LAB_049a8e60;
  plVar7[0x33] = (long)"mUIMapSize";
  plVar7[0x38] = 0;
  (**(code **)(*plVar7 + 0x140))(plVar7,plVar7 + 0x32);
  puVar8 = (undefined8 *)(**(code **)(plVar7[0x32] + 0xf0))(plVar7 + 0x32);
  *puVar8 = 0x4434000044340000;
  if ((*(uint *)(plVar7 + 0x36) >> 7 & 1) == 0) {
    plVar7[0x38] = 0x4434000044340000;
  }
  *(uint *)(plVar7 + 0x36) = *(uint *)(plVar7 + 0x36) & 0xfeffffff;
  local_188 = puVar3 + 0x10;
  local_158 = 0;
  local_180 = "mUIMapCapturePos";
  puStack_170 = &DAT_040bb01c;
  puStack_160 = &DAT_0407ebb1;
  local_194 = 0x42c8000043c80000;
  local_18c = 0x43a00000;
  local_178 = local_188;
  local_168 = local_188;
  FUN_006fdfc0(plVar7 + 0x39,&local_188,&local_194,plVar7);
  plVar7[0x42] = 0;
  plVar7[0x41] = (long)"mUIMapCapturePosOffsetZ";
  plVar7[0x43] = 0;
  puVar3 = PTR_DAT_04bb31d0;
  *(undefined4 *)(plVar7 + 0x44) = 0;
  plVar7[0x45] = 0;
  plVar7[0x40] = (long)(puVar3 + 0x10);
  (**(code **)(*plVar7 + 0x140))(plVar7,plVar7 + 0x40);
  uVar13 = 0x42000000;
  if ((*(uint *)(plVar7 + 0x44) & 0x800) != 0) {
    uVar13 = 0x3f0efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(plVar7[0x40] + 0xf0))(plVar7 + 0x40);
  *puVar9 = uVar13;
  uVar2 = *(uint *)(plVar7 + 0x44);
  if ((uVar2 >> 7 & 1) == 0) {
    plVar7[0x45] = 0;
    uVar13 = 0x42000000;
    if ((uVar2 & 0x800) != 0) {
      uVar13 = 0x3f0efa35;
    }
    *(undefined4 *)(plVar7 + 0x45) = uVar13;
  }
  *(uint *)(plVar7 + 0x44) = uVar2 & 0xfeffffff;
  plVar6[1] = (long)plVar7;
  __dest = (void *)plVar7[7];
  (**(code **)(param_1[1] + 0x18))(param_1 + 1);
  __src = (void *)param_1[2];
  if (__dest != __src) {
    (**(code **)(param_1[1] + 0x18))(param_1 + 1);
    lVar12 = 0;
    do {
      if (*(char *)(param_1[2] + lVar12) == '\0') goto LAB_0155c67c;
      lVar5 = param_1[2] + lVar12;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_0155c67c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_0155c67c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0155c67c:
    iVar1 = (int)lVar12;
    if ((int)plVar7[8] <= (int)lVar12) {
      iVar1 = (int)plVar7[8] + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  plVar7 = (long *)plVar6[1];
  local_180 = (char *)((long)&local_178 + 4);
  local_188 = puVar4 + 0x10;
  local_75 = 0;
  local_178 = (undefined *)CONCAT35(local_178._5_3_,0x100);
  uVar10 = (**(code **)(*plVar7 + 0xf0))(plVar7,&local_188,1);
  if ((uVar10 & 1) != 0) {
    FUN_03c27e60(plVar7,&local_188,0);
  }
  lVar12 = plVar6[1];
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x158) + 0xf0))(lVar12 + 0x158);
  *(undefined4 *)(param_1 + 0x14b) = *puVar9;
  *(undefined4 *)((long)param_1 + 0xa5c) = puVar9[1];
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 400) + 0xf0))(lVar12 + 400);
  *(undefined4 *)(param_1 + 0x14c) = *puVar9;
  *(undefined4 *)((long)param_1 + 0xa64) = puVar9[1];
  if ((char)param_1[7] == '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
    (**(code **)(*param_1 + 0xb8))(param_1,1);
  }
  return;
}

