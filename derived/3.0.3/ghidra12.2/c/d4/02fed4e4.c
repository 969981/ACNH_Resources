
void FUN_02fed4e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3f0000003f000000;
  param_1[0xc] = 0x600000003;
  param_1[0xd] = 0;
  *param_1 = &PTR___cxa_pure_virtual_04aefeb0;
  *(undefined8 *)((long)param_1 + 0x74) = 0x41a0000000000000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0x28000000280;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0x41a000003f800000;
  memset(param_1 + 0x14,0,0x160);
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined2 *)((long)param_1 + 0x9c) = 0;
  FUN_02fe4884(param_1 + 0x14);
  puVar1 = PTR_DAT_04bc7ac0 + 0x10;
  param_1[0x14] = puVar1;
  FUN_02fe4884(param_1 + 0x1f);
  param_1[0x1f] = puVar1;
  FUN_02fe4884(param_1 + 0x2a);
  param_1[0x2a] = puVar1;
  FUN_02fe4884(param_1 + 0x35);
  param_1[0x35] = puVar1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  FUN_02fe4884(param_1 + 0x40);
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x40] = &PTR_LAB_04aeebc0;
  lVar3 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar5 = malloc(0x38);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar2 = (undefined8 *)(lVar3 + 8);
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x38,8);
  }
  puVar1 = PTR_DAT_04bcb4d0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined8 *)((long)plVar5 + 0x2c) = 0xffffffff00000000;
  plVar5[4] = 0;
  *(undefined1 *)(plVar5 + 5) = 0;
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[1] = 0;
  param_1[0x4b] = plVar5;
  return;
}

