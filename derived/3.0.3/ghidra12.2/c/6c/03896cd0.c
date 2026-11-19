
void FUN_03896cd0(long *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  size_t sVar11;
  
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 9) = param_3;
  *param_1 = (long)&PTR_LAB_04b617e8;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_038e18e4(param_1 + 4);
  FUN_038e18e4(param_1 + 0xc);
  param_1[0x14] = 0;
  lVar7 = nn::os::GetSystemTick();
  param_1[0x15] = lVar7;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_038e18e4(param_1 + 0x22);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  bVar2 = *(byte *)(param_1 + 1);
  param_1[0x2a] = 0;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  sVar11 = ((ulong)bVar2 + 2) * 8;
  if (lVar7 == 0) {
    pvVar10 = malloc(sVar11);
joined_r0x03896e18:
    if (pvVar10 != (void *)0x0) {
      param_1[0x17] = (long)pvVar10;
      *(undefined4 *)(param_1 + 0x16) = 0;
      *(int *)((long)param_1 + 0xb4) = (int)((ulong)bVar2 + 2);
    }
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar7 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,sVar11,8);
      goto joined_r0x03896e18;
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x70))(param_1);
  if (uVar6 != 0) {
    lVar7 = *(long *)puVar3;
    if (lVar7 == 0) {
      pvVar10 = malloc((ulong)uVar6 << 3);
    }
    else {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar9 = (long *)(lVar7 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_03896e34;
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(ulong)uVar6 << 3,8);
    }
    if (pvVar10 != (void *)0x0) {
      param_1[0x1b] = (long)pvVar10;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(uint *)((long)param_1 + 0xd4) = (uint)uVar6;
    }
  }
LAB_03896e34:
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    pvVar10 = malloc(0x5a8);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar1 = (undefined8 *)(lVar7 + 8);
    if (lVar8 != 0) {
      puVar1 = (undefined8 *)(lVar8 + 0xa8);
    }
    pvVar10 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x5a8,8);
  }
  FUN_03890dd0(pvVar10,*(undefined1 *)((long)param_1 + 9),param_4);
  lVar7 = *(long *)puVar3;
  param_1[0x18] = (long)pvVar10;
  if (lVar7 == 0) {
    plVar9 = malloc(0x60);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar1 = (undefined8 *)(lVar7 + 8);
    if (lVar8 != 0) {
      puVar1 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x60,8);
  }
  FUN_03898ae0(plVar9,0xfd,*(undefined1 *)((long)param_1 + 9));
  puVar5 = PTR_DAT_04bcbad8;
  plVar9[0xb] = 0;
  *plVar9 = (long)(puVar5 + 0x10);
  param_1[0x19] = (long)plVar9;
  uVar6 = (**(code **)(*param_1 + 0x70))(param_1);
  if (uVar6 != 0) {
    lVar7 = *(long *)puVar3;
    sVar11 = (ulong)(uint)uVar6 << 5;
    if (lVar7 == 0) {
      pvVar10 = malloc(sVar11);
    }
    else {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar9 = (long *)(lVar7 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_03896f78;
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,sVar11,8);
    }
    if (pvVar10 != (void *)0x0) {
      *(uint *)(param_1 + 0x20) = (uint)uVar6;
      param_1[0x21] = (long)pvVar10;
    }
  }
LAB_03896f78:
  (**(code **)(*param_1 + 0x50))(param_1,param_1[0x18]);
  (**(code **)(*param_1 + 0x50))(param_1,param_1[0x19]);
  return;
}

