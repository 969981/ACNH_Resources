
void FUN_03b6ce84(undefined8 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  char *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  
  if (*(int *)(param_2 + 0xc) == 32000) {
    uVar9 = 0xa0;
    uVar10 = 0x46fa0000;
LAB_03b6cee4:
    *(undefined4 *)(param_1 + 2) = uVar9;
    *(undefined4 *)((long)param_1 + 0x14) = uVar10;
  }
  else if (*(int *)(param_2 + 0xc) == 48000) {
    uVar9 = 0xf0;
    uVar10 = 0x473b8000;
    goto LAB_03b6cee4;
  }
  puVar3 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    puVar7 = malloc(8);
    *param_1 = puVar7;
LAB_03b6cf78:
    pvVar8 = malloc(0x18);
LAB_03b6cfd4:
    *puVar7 = pvVar8;
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) {
      if (param_3 == (long *)0x0) {
LAB_03b6d00c:
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar6 = (long *)(lVar11 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
      }
      else {
        plVar6 = param_3;
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x68,8);
      goto LAB_03b6d054;
    }
  }
  else {
    plVar6 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03b6cf34:
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,8,8);
      lVar11 = *(long *)puVar3;
      *param_1 = puVar7;
      if (lVar11 == 0) goto LAB_03b6cf78;
      plVar6 = param_3;
      if (param_3 == (long *)0x0) goto LAB_03b6cf90;
LAB_03b6cfbc:
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
      puVar7 = (undefined8 *)*param_1;
      goto LAB_03b6cfd4;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar11 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_03b6cf34;
    lVar11 = *(long *)puVar3;
    *param_1 = 0;
    if (lVar11 == 0) {
      puVar7 = (undefined8 *)0x0;
      goto LAB_03b6cf78;
    }
LAB_03b6cf90:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar11 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_03b6cfbc;
    *(undefined8 *)*param_1 = 0;
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) goto LAB_03b6d00c;
  }
  plVar6 = malloc(0x68);
LAB_03b6d054:
  puVar2 = PTR_DAT_04bb2020;
  plVar6[2] = (long)&DAT_0407ebb1;
  puVar4 = PTR_DAT_04bd2058;
  *(undefined4 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *(undefined2 *)(plVar6 + 0xc) = 0;
  local_80 = puVar2 + 0x10;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = (long)local_80;
  plVar6[6] = 0x400000000;
  plVar6[7] = (long)(plVar6 + 8);
  **(undefined8 **)*param_1 = plVar6;
  uStack_88 = 1;
  local_78 = "AuxBusA(TV)";
  local_6c = (ushort)*param_2;
  local_68 = *(undefined8 *)(param_2 + 4);
  local_70 = *(undefined4 *)(param_2 + 0x18);
  local_90 = param_1;
  FUN_03b6d684(**(undefined8 **)*param_1,&local_90,param_3);
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    plVar6 = malloc(0x68);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x68,8);
  }
  local_80 = puVar2 + 0x10;
  *(undefined4 *)(plVar6 + 3) = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = (long)local_80;
  plVar6[2] = (long)&DAT_0407ebb1;
  *(undefined2 *)(plVar6 + 0xc) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0x400000000;
  plVar6[7] = (long)(plVar6 + 8);
  *(long **)(*(long *)*param_1 + 8) = plVar6;
  uStack_88 = 2;
  local_78 = "AuxBusB(TV)";
  local_6c = (ushort)*param_2;
  local_68 = *(undefined8 *)(param_2 + 4);
  local_70 = *(undefined4 *)(param_2 + 0x1c);
  local_90 = param_1;
  FUN_03b6d684(*(undefined8 *)(*(long *)*param_1 + 8),&local_90,param_3);
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar6 = malloc(0x68);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x68,8);
  }
  local_80 = puVar2 + 0x10;
  *(undefined4 *)(plVar6 + 3) = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = (long)local_80;
  plVar6[2] = (long)&DAT_0407ebb1;
  *(undefined2 *)(plVar6 + 0xc) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0x400000000;
  plVar6[7] = (long)(plVar6 + 8);
  *(long **)(*(long *)*param_1 + 0x10) = plVar6;
  uStack_88 = 3;
  local_78 = "AuxBusC(TV)";
  local_70 = *(undefined4 *)(param_2 + 0x20);
  local_6c = (ushort)*param_2;
  local_68 = *(undefined8 *)(param_2 + 4);
  local_90 = param_1;
  FUN_03b6d684(*(undefined8 *)(*(long *)*param_1 + 0x10),&local_90,param_3);
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar6 = malloc(0x68);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x68,8);
  }
  local_80 = puVar2 + 0x10;
  *(undefined4 *)(plVar6 + 3) = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[1] = (long)local_80;
  plVar6[2] = (long)&DAT_0407ebb1;
  *(undefined2 *)(plVar6 + 0xc) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0x400000000;
  plVar6[7] = (long)(plVar6 + 8);
  param_1[1] = plVar6;
  local_78 = "FinalMix";
  bVar1 = *param_2;
  if (param_2[0x14] != 0) {
    bVar1 = 0;
  }
  local_6c = CONCAT11(1,bVar1);
  local_68 = *(undefined8 *)(param_2 + 4);
  local_70 = *(undefined4 *)(param_2 + 0x10);
  uStack_88 = 1;
  local_90 = param_1;
  FUN_03b6d684(plVar6,&local_90,param_3);
  return;
}

