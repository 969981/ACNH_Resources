
void FUN_0355f47c(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar7 = *(byte *)(param_3 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar7;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b39840;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0xffffffff;
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  *(undefined4 *)(param_1 + 0x45) = 0;
  puVar3 = PTR_DAT_04bb3350;
  if (lVar8 == 0) {
    plVar6 = malloc(0xa0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0xa0,8);
  }
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *plVar6 = 0;
  plVar6[1] = 0;
  puVar4 = PTR_DAT_04bbba70;
  *plVar6 = (long)(PTR_DAT_04bc6388 + 0x10);
  lVar8 = *(long *)puVar1;
  puVar1 = puVar4 + 0x10;
  plVar6[6] = (long)puVar1;
  plVar6[10] = (long)puVar1;
  plVar6[0xe] = (long)puVar1;
  *(undefined4 *)((long)plVar6 + 0x94) = 3;
  param_1[0x46] = (long)plVar6;
  if (lVar8 == 0) {
    plVar6 = malloc(0x28);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x28,8);
  }
  plVar6[3] = 0;
  plVar6[4] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  *(undefined4 *)(plVar6 + 4) = 0xffffffff;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  param_1[0x47] = (long)plVar6;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((long)param_1 + 0x254) = 0;
  *(undefined4 *)((long)param_1 + 0x264) = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0x100;
  puVar1 = PTR_DAT_04bc5c10 + 0x10;
  *(undefined4 *)((long)param_1 + 0x26c) = 0;
  param_1[0x42] = 0;
  param_1[0x4b] = (long)puVar1;
  return;
}

