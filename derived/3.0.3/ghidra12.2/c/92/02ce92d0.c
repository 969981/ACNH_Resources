
void FUN_02ce92d0(undefined8 *param_1)

{
  uint uVar1;
  void *__s;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined1 *)(param_1 + 1) = 0xff;
  *param_1 = &PTR_LAB_04ab8880;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  plVar4 = param_1 + 2;
  *plVar4 = (long)&PTR_LAB_049ff3a8;
  memset(param_1 + 3,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x76c) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xee) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x774) = uVar1;
  *(uint *)(param_1 + 0xef) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(*plVar4 + 0x18))(plVar4);
  memset(__s,0,0x754);
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  puVar2 = param_1 + 0xf9;
  lVar3 = 0x3a94;
  param_1[0xf2] = 0;
  param_1[0xf3] = param_1 + 0xf5;
  while( true ) {
    puVar2[-3] = puVar2 + -2;
    puVar2[-4] = puVar2 + -3;
    puVar2[-2] = puVar2 + -1;
    if (lVar3 == 0) break;
    puVar2[-1] = puVar2;
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -4;
  }
  param_1[0xf4] = param_1 + 0xf5;
  param_1[0x3b8c] = 0;
  if (param_1 + 0x3b8d != (undefined8 *)0x0) {
    param_1[0xf2] = param_1 + 0x3b8d;
    param_1[0xf1] = 0x3a9800000000;
  }
  param_1[0x7625] = &PTR_LAB_04ab89e8;
  param_1[0x7627] = 0;
  param_1[0x7628] = param_1 + 0x762a;
  puVar2 = param_1 + 0x762e;
  lVar3 = 0x3a94;
  param_1[0x7626] = 0;
  while( true ) {
    puVar2[-3] = puVar2 + -2;
    puVar2[-4] = puVar2 + -3;
    puVar2[-2] = puVar2 + -1;
    if (lVar3 == 0) break;
    puVar2[-1] = puVar2;
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -4;
  }
  param_1[0xb0c1] = 0;
  param_1[0x7629] = param_1 + 0x762a;
  if (param_1 + 0xb0c2 != (undefined8 *)0x0) {
    param_1[0x7627] = param_1 + 0xb0c2;
    *(undefined4 *)((long)param_1 + 0x3b134) = 15000;
  }
  *(undefined4 *)(param_1 + 0x7626) = 0;
  FUN_02ce08e0(param_1 + 0xeb5a);
  param_1[0xeb67] = 0xffffffffffffffff;
  param_1[0xeb68] = 0;
  param_1[0xeb69] = 0;
  *(undefined4 *)(param_1 + 0xeb7c) = 0;
  param_1[0xeb6a] = 0;
  param_1[0xeb6b] = 0;
  param_1[0xeb6c] = 0;
  param_1[0xeb6d] = 0;
  param_1[0xeb6e] = 0;
  param_1[0xeb6f] = 0;
  param_1[0xeb70] = 0;
  param_1[0xeb71] = 0;
  param_1[0xeb72] = 0;
  param_1[0xeb73] = 0;
  param_1[0xeb74] = 0;
  param_1[0xeb75] = 0;
  param_1[0xeb76] = 0;
  param_1[0xeb77] = 0;
  param_1[0xeb78] = 0;
  param_1[0xeb79] = 0;
  param_1[0xeb7a] = 0;
  param_1[0xeb7b] = 0;
  *(undefined2 *)((long)param_1 + 0x75b44) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x75b54) = 0xfffe;
  *(undefined1 **)((long)param_1 + 0x75b4c) = &DAT_ffffffff00000006;
  FUN_0277d4ac();
  *(undefined1 **)((long)param_1 + 0x75b5c) = &DAT_ffffffff00000006;
  *(undefined8 *)((long)param_1 + 0x75b64) = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 **)((long)param_1 + 0x75b6c) = &DAT_ffffffff00000006;
  *(undefined8 *)((long)param_1 + 0x75b74) = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 **)((long)param_1 + 0x75b7c) = &DAT_ffffffff00000006;
  *(undefined8 *)((long)param_1 + 0x75b84) = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 **)((long)param_1 + 0x75b8c) = &DAT_ffffffff00000006;
  *(undefined8 *)((long)param_1 + 0x75b94) = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 **)((long)param_1 + 0x75b9c) = &DAT_ffffffff00000006;
  *(undefined8 *)((long)param_1 + 0x75ba4) = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 **)((long)param_1 + 0x75bac) = &DAT_ffffffff00000006;
  *(undefined8 *)((long)param_1 + 0x75bb4) = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 **)((long)param_1 + 0x75bbc) = &DAT_ffffffff00000006;
  *(undefined8 *)((long)param_1 + 0x75bc4) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x75bd4) = 0xfffe;
  *(undefined1 **)((long)param_1 + 0x75bcc) = &DAT_ffffffff00000006;
  FUN_0277d4ac((undefined8 *)((long)param_1 + 0x75bd4));
  *(undefined1 **)((long)param_1 + 0x75bdc) = &DAT_ffffffff00000006;
  return;
}

