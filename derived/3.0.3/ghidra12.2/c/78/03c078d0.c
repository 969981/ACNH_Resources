
void FUN_03c078d0(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  puVar3 = PTR_DAT_04bd4738;
  *param_1 = &PTR_LAB_04b7c8e0;
  pcVar1 = (char *)((long)param_1 + 0xdc);
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = pcVar1;
  *(undefined4 *)(param_1 + 0x1b) = 0x20;
  *(undefined1 *)((long)param_1 + 0xfb) = 0;
  param_1[3] = puVar3 + 0x10;
  param_1[4] = 0xffffffff;
  param_1[0x12] = param_1;
  param_1[0x13] = &LAB_03c07a84;
  param_1[0x10] = 0;
  param_1[0x11] = &PTR_LAB_04b7c900;
  uVar2 = DAT_05aec448;
  *(undefined4 *)((long)param_1 + 0xb4) = DAT_05aec450;
  *(undefined8 *)((long)param_1 + 0xac) = uVar2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar2 = s_LPDbgEntry_040fc3b6._0_8_;
  if (pcVar1 != "LPDbgEntry") {
    *(undefined2 *)((long)param_1 + 0xe4) = 0x7972;
    *(undefined1 *)((long)param_1 + 0xe6) = 0;
    *(undefined8 *)pcVar1 = uVar2;
  }
  puVar3 = PTR_DAT_04bb2028;
  pcVar1 = (char *)((long)param_1 + 0x114);
  param_1[0x21] = pcVar1;
  *(undefined4 *)(param_1 + 0x22) = 0x20;
  *(undefined1 *)((long)param_1 + 0x133) = 0;
  param_1[0x19] = puVar3 + 0x10;
  uVar2 = s_LPDbgEntry_040fc3b6._0_8_;
  if (pcVar1 != "LPDbgEntry") {
    *(undefined2 *)((long)param_1 + 0x11c) = 0x7972;
    *(undefined1 *)((long)param_1 + 0x11e) = 0;
    *(undefined8 *)pcVar1 = uVar2;
  }
  param_1[0x20] = puVar3 + 0x10;
  *(undefined2 *)((long)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x1000000;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar5 = malloc(0x40);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar6 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x40,8);
    }
  }
  plVar5[2] = 0;
  plVar5[3] = 0;
  *plVar5 = (long)(PTR_DAT_04bd2dd0 + 0x10);
  plVar5[1] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar5 + 0x2c));
  *(undefined4 *)(plVar5 + 7) = 0;
  puVar3 = PTR_LAB_04bd2dc8;
  plVar5[3] = 0;
  plVar5[1] = (long)plVar5;
  plVar5[2] = (long)puVar3;
  param_1[1] = plVar5;
  return;
}

