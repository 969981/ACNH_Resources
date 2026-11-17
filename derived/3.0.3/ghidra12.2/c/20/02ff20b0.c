
void FUN_02ff20b0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  undefined *local_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined1 local_10c [31];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [31];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 local_9c [31];
  undefined1 local_7d;
  undefined *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  puVar1 = PTR_DAT_04bc7c10;
  *param_1 = &PTR_LAB_04af0400;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = puVar1 + 0x10;
  local_70 = local_64;
  param_1[7] = 0;
  local_68 = 0x20;
  local_45 = 0;
  local_64[0] = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  local_78 = puVar1;
  FUN_038d1270(&local_78,"Move%sCursor",param_2);
  local_a8 = local_9c;
  local_a0 = 0x20;
  local_7d = 0;
  local_9c[0] = 0;
  local_b0 = puVar1;
  FUN_038d1270(&local_b0,"DecideFirst%sCursor",param_2);
  local_e0 = local_d4;
  local_d8 = 0x20;
  local_b5 = 0;
  local_d4[0] = 0;
  local_e8 = puVar1;
  FUN_038d1270(&local_e8,"DecideLast%sCursor",param_2);
  local_118 = local_10c;
  local_110 = 0x20;
  local_ed = 0;
  local_10c[0] = 0;
  local_120 = puVar1;
  FUN_038d1270(&local_120,"Length%sCursor",param_2);
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar7 = malloc(0x108);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x108,8);
    }
  }
  (**(code **)(local_78 + 0x18))(&local_78);
  puVar4 = local_70;
  (**(code **)(local_b0 + 0x18))(&local_b0);
  puVar3 = local_a8;
  (**(code **)(local_e8 + 0x18))(&local_e8);
  puVar2 = local_e0;
  (**(code **)(local_120 + 0x18))(&local_120);
  FUN_02fec4d0(pvVar7,puVar4,puVar3,puVar2,local_118);
  param_1[7] = pvVar7;
  return;
}

