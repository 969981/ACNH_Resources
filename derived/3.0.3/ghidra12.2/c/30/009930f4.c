
void FUN_009930f4(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_0492b4a8;
  puVar1 = (undefined4 *)((long)param_1 + 100);
  *(undefined4 *)(param_1 + 0xc) = 0x20;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0xb] = puVar1;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (puVar1 != (undefined4 *)&UNK_04080ee5) {
    *(undefined4 *)((long)param_1 + 0x67) = 0x2a746573;
    *puVar1 = 0x736e752a;
    *(undefined1 *)((long)param_1 + 0x6b) = 0;
  }
  puVar1 = (undefined4 *)((long)param_1 + 0x9c);
  param_1[0x12] = puVar1;
  puVar2 = PTR_DAT_04bb2028;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[10] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  if (puVar1 != (undefined4 *)&UNK_04080ee5) {
    *(undefined4 *)((long)param_1 + 0x9f) = 0x2a746573;
    *puVar1 = 0x736e752a;
    *(undefined1 *)((long)param_1 + 0xa3) = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  puVar1 = (undefined4 *)((long)param_1 + 0xf4);
  param_1[0x1d] = puVar1;
  *(undefined4 *)(param_1 + 0x1e) = 0x40;
  *(undefined1 *)((long)param_1 + 0x133) = 0;
  param_1[0x11] = puVar2 + 0x10;
  if (puVar1 != (undefined4 *)&UNK_04080ee5) {
    *(undefined4 *)((long)param_1 + 0xf7) = 0x2a746573;
    *puVar1 = 0x736e752a;
    *(undefined1 *)((long)param_1 + 0xfb) = 0;
  }
  param_1[0x1c] = puVar2 + 0x10;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return;
}

