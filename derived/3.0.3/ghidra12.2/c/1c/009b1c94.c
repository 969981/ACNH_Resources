
void FUN_009b1c94(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  param_1[2] = 0x500000000;
  param_1[3] = 0x500000000;
  param_1[4] = 0x500000000;
  param_1[5] = 0x500000000;
  puVar1 = PTR_DAT_04bb61a0;
  param_1[10] = 0;
  param_1[0x1708c] = 0;
  *param_1 = &PTR_LAB_0492c788;
  param_1[1] = puVar1 + 0x10;
  param_1[6] = 0x500000000;
  param_1[7] = 0x500000000;
  param_1[8] = 0x500000000;
  param_1[9] = 0x500000000;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  plVar2 = param_1 + 0x10;
  *plVar2 = (long)(param_1 + 0x7ae4);
  param_1[0x7ae4] = param_1 + 0xf5b8;
  param_1[0xf5b8] = param_1 + 0x1708c;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = plVar2;
  param_1[0xf] = plVar2;
  if (param_1 + 0x1eb60 != (undefined8 *)0x0) {
    param_1[0xd] = param_1 + 0x1eb60;
    *(undefined4 *)((long)param_1 + 100) = 4;
  }
  *(undefined2 *)(param_1 + 0x1eb6c) = 0x101;
  *(undefined4 *)((long)param_1 + 0xf5b6c) = 1;
  param_1[0x1eb72] = FUN_009b1d90;
  param_1[0x1eb73] = 0;
  *(undefined8 *)((long)param_1 + 0xf5b54) = 0;
  *(undefined4 *)((long)param_1 + 0xf5b5c) = 0;
  *(undefined2 *)(param_1 + 0x1eb6a) = 0;
  *(undefined8 *)((long)param_1 + 0xf5b64) = 0;
  *(undefined2 *)(param_1 + 0x1eb6e) = 0;
  *(undefined8 *)((long)param_1 + 0xf5b74) = 0;
  *(undefined4 *)((long)param_1 + 0xf5b7c) = 0;
  *(undefined2 *)((long)param_1 + 0xf5b62) = 0;
  param_1[0x1eb70] = &PTR_LAB_0492c800;
  param_1[0x1eb71] = param_1;
  param_1[0x1eb64] = 0;
  param_1[0x1eb65] = 0;
  param_1[0x1eb66] = 0;
  param_1[0x1eb67] = 0;
  param_1[0x1eb68] = 0x500000005;
  param_1[0x1eb69] = 0x500000005;
  return;
}

