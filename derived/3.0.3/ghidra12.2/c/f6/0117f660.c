
void FUN_0117f660(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__ptr;
  
  __ptr = (void *)param_1[0x3b3];
  *param_1 = &PTR_FUN_04983680;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x3b3] = 0;
  }
  param_1[0x3b6] = PTR_DAT_04bbb820 + 0x10;
  param_1[0x1b23] = &PTR_LAB_04983608;
  param_1[0x1b71] = &PTR_LAB_04983608;
  param_1[0x1ad5] = &PTR_LAB_04983608;
  param_1[0x1a87] = &PTR_LAB_04983608;
  param_1[0x1a39] = &PTR_LAB_04983608;
  param_1[0x19eb] = &PTR_LAB_04983608;
  param_1[0x199d] = &PTR_LAB_04983608;
  param_1[0x194f] = &PTR_LAB_04983608;
  param_1[0x1901] = &PTR_LAB_04983608;
  param_1[0x18b3] = &PTR_LAB_04983608;
  param_1[0x1865] = &PTR_LAB_04983608;
  param_1[0x1817] = &PTR_LAB_04983608;
  param_1[0x17c9] = &PTR_LAB_04983608;
  param_1[0x177b] = &PTR_LAB_04983608;
  param_1[0x172d] = &PTR_LAB_04983608;
  param_1[0x16df] = &PTR_LAB_04983608;
  param_1[0x1691] = &PTR_LAB_04983608;
  param_1[0x1643] = &PTR_LAB_04983608;
  param_1[0x15f5] = &PTR_LAB_04983608;
  param_1[0x15a7] = &PTR_LAB_04983608;
  param_1[0x1559] = &PTR_LAB_04983608;
  param_1[0x150b] = &PTR_LAB_04983608;
  param_1[0x14bd] = &PTR_LAB_04983608;
  param_1[0x146f] = &PTR_LAB_04983608;
  param_1[0x1421] = &PTR_LAB_04983608;
  param_1[0x13d3] = &PTR_LAB_04983608;
  param_1[0x1385] = &PTR_LAB_04983608;
  param_1[0xfdd] = &PTR_LAB_04983608;
  param_1[0xf8f] = &PTR_LAB_04983608;
  param_1[0xf41] = &PTR_LAB_04983608;
  param_1[0xef3] = &PTR_LAB_04983608;
  param_1[0xea5] = &PTR_LAB_04983608;
  param_1[0xe57] = &PTR_LAB_04983608;
  param_1[0xe09] = &PTR_LAB_04983608;
  param_1[0xdbb] = &PTR_LAB_04983608;
  param_1[0xd6d] = &PTR_LAB_04983608;
  param_1[0xd1f] = &PTR_LAB_04983608;
  param_1[0xcd1] = &PTR_LAB_04983608;
  param_1[0xc83] = &PTR_LAB_04983608;
  param_1[0x1337] = &PTR_LAB_04983608;
  param_1[0xc35] = &PTR_LAB_04983608;
  param_1[0xbe7] = &PTR_LAB_04983608;
  param_1[0xb99] = &PTR_LAB_04983608;
  param_1[0xb4b] = &PTR_LAB_04983608;
  param_1[0xafd] = &PTR_LAB_04983608;
  param_1[0xaaf] = &PTR_LAB_04983608;
  param_1[0xa61] = &PTR_LAB_04983608;
  param_1[0xa13] = &PTR_LAB_04983608;
  param_1[0x9c5] = &PTR_LAB_04983608;
  param_1[0x977] = &PTR_LAB_04983608;
  param_1[0x12e9] = &PTR_LAB_04983608;
  param_1[0x929] = &PTR_LAB_04983608;
  param_1[0x8db] = &PTR_LAB_04983608;
  param_1[0x88d] = &PTR_LAB_04983608;
  param_1[0x129b] = &PTR_LAB_04983608;
  param_1[0x124d] = &PTR_LAB_04983608;
  param_1[0x11ff] = &PTR_LAB_04983608;
  param_1[0x11b1] = &PTR_LAB_04983608;
  param_1[0x1163] = &PTR_LAB_04983608;
  param_1[0x1115] = &PTR_LAB_04983608;
  param_1[0x10c7] = &PTR_LAB_04983608;
  param_1[0x1079] = &PTR_LAB_04983608;
  param_1[0x102b] = &PTR_LAB_04983608;
  puVar2 = (undefined8 *)param_1[0x2d];
  param_1[0x83f] = &PTR_LAB_04983608;
  param_1[0x828] = &PTR_LAB_04983558;
  param_1[0x816] = &PTR_LAB_04983558;
  param_1[0x804] = &PTR_LAB_04983558;
  param_1[0x7f2] = &PTR_LAB_04983558;
  param_1[0x7e0] = &PTR_LAB_04983558;
  param_1[0x7ce] = &PTR_LAB_04983558;
  param_1[0x7bc] = &PTR_LAB_04983558;
  param_1[0x7aa] = &PTR_LAB_04983558;
  param_1[0x798] = &PTR_LAB_04983558;
  param_1[0x786] = &PTR_LAB_04983558;
  param_1[0x774] = &PTR_LAB_04983558;
  param_1[0x762] = &PTR_LAB_04983558;
  param_1[0x750] = &PTR_LAB_04983558;
  param_1[0x73e] = &PTR_LAB_04983558;
  param_1[0x72c] = &PTR_LAB_04983558;
  param_1[0x71a] = &PTR_LAB_04983558;
  param_1[0x708] = &PTR_LAB_04983558;
  param_1[0x6f6] = &PTR_LAB_04983558;
  param_1[0x6e4] = &PTR_LAB_04983558;
  param_1[0x6d2] = &PTR_LAB_04983558;
  param_1[0x6c0] = &PTR_LAB_04983558;
  param_1[0x6ae] = &PTR_LAB_04983558;
  param_1[0x69c] = &PTR_LAB_04983558;
  param_1[0x68a] = &PTR_LAB_04983558;
  param_1[0x678] = &PTR_LAB_04983558;
  param_1[0x666] = &PTR_LAB_04983558;
  param_1[0x654] = &PTR_LAB_04983558;
  param_1[0x642] = &PTR_LAB_04983558;
  param_1[0x630] = &PTR_LAB_04983558;
  param_1[0x61e] = &PTR_LAB_04983558;
  param_1[0x60c] = &PTR_LAB_04983558;
  param_1[0x5fa] = &PTR_LAB_04983558;
  param_1[0x5e8] = &PTR_LAB_04983558;
  param_1[0x5d6] = &PTR_LAB_04983558;
  param_1[0x5c4] = &PTR_LAB_04983558;
  param_1[0x5b2] = &PTR_LAB_04983558;
  param_1[0x5a0] = &PTR_LAB_04983558;
  param_1[0x58e] = &PTR_LAB_04983558;
  param_1[0x57c] = &PTR_LAB_04983558;
  param_1[0x56a] = &PTR_LAB_04983558;
  param_1[0x558] = &PTR_LAB_04983558;
  param_1[0x546] = &PTR_LAB_04983558;
  param_1[0x534] = &PTR_LAB_04983558;
  param_1[0x522] = &PTR_LAB_04983558;
  param_1[0x510] = &PTR_LAB_04983558;
  param_1[0x4fe] = &PTR_LAB_04983558;
  param_1[0x4ec] = &PTR_LAB_04983558;
  param_1[0x4da] = &PTR_LAB_04983558;
  param_1[0x4c8] = &PTR_LAB_04983558;
  param_1[0x4b6] = &PTR_LAB_04983558;
  param_1[0x4a4] = &PTR_LAB_04983558;
  param_1[0x492] = &PTR_LAB_04983558;
  param_1[0x480] = &PTR_LAB_04983558;
  param_1[0x46e] = &PTR_LAB_04983558;
  param_1[0x45c] = &PTR_LAB_04983558;
  param_1[0x44a] = &PTR_LAB_04983558;
  param_1[0x438] = &PTR_LAB_04983558;
  param_1[0x426] = &PTR_LAB_04983558;
  param_1[0x414] = &PTR_LAB_04983558;
  param_1[0x402] = &PTR_LAB_04983558;
  param_1[0x3f0] = &PTR_LAB_04983558;
  param_1[0x3de] = &PTR_LAB_04983558;
  param_1[0x3cc] = &PTR_LAB_04983558;
  param_1[0x3ba] = &PTR_LAB_04983558;
  while (puVar2 != param_1 + 0x2c) {
    puVar3 = puVar2 + -0x1a;
    puVar2 = (undefined8 *)puVar2[1];
    (**(code **)*puVar3)();
  }
  FUN_038e1a84(param_1 + 0x24);
  FUN_03f2a9b0(param_1 + 2);
  FUN_038e1a84(param_1 + 0x10);
  return;
}

