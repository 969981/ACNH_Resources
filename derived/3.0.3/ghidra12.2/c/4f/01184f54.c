
void FUN_01184f54(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  puVar1 = (undefined8 *)((long)param_1 + 0x74);
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 3) = 0x40;
  param_1[2] = (undefined1 *)((long)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xe) = 0x40;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  *(undefined1 *)((long)param_1 + 0xb3) = 0;
  *param_1 = &PTR_LAB_049836a0;
  param_1[1] = &PTR_LAB_048fb9f8;
  param_1[0xc] = &PTR_LAB_048fb9f8;
  param_1[0xd] = puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0xff;
  return;
}

