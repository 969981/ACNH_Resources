
void FUN_03a1b574(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_448 [1048];
  
  FUN_0391e860();
  *(undefined4 *)(param_1 + 0x22) = 0;
  *param_1 = &PTR_FUN_04b6cb78;
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  param_1[6] = &PTR_FUN_04b6ccb0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = (undefined1 *)((long)param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x28) = 0x20;
  *(undefined1 *)((long)param_1 + 0x163) = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = puVar1;
  FUN_03a25e20(param_1 + 0x2e);
  param_1[0x192] = 0x3f80000000000000;
  param_1[0x194] = 0x3f80000000000000;
  param_1[0x196] = 0x3f80000000000000;
  puVar2 = (undefined8 *)((long)param_1 + 0xcdc);
  param_1[0x191] = 0;
  param_1[0x193] = 0;
  param_1[0x195] = 0;
  param_1[0x197] = 0;
  *(undefined2 *)(param_1 + 0x198) = 0;
  param_1[0x19a] = puVar2;
  *(undefined4 *)(param_1 + 0x19b) = 0x20;
  *(undefined1 *)((long)param_1 + 0xcfb) = 0;
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  param_1[0x199] = puVar1;
  *(undefined1 *)((long)param_1 + 0xd53) = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0x40;
  *(undefined1 *)((long)param_1 + 0xd14) = 0;
  param_1[0x1a1] = (undefined1 *)((long)param_1 + 0xd14);
  *param_1 = &PTR_FUN_04b6ce08;
  param_1[6] = &PTR_LAB_04b6cf48;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1a0] = &PTR_LAB_048fb9f8;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  *(undefined4 *)(param_1 + 0x1af) = 0;
  *(undefined1 **)((long)param_1 + 0xd7c) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0xd84) = &DAT_3f8000003f800000;
  FUN_0390e190(param_1 + 0x1b2);
  FUN_0390e190(param_1 + 0x1ee);
  FUN_0390e190(param_1 + 0x22a);
  FUN_0390e190(param_1 + 0x266);
  lVar3 = DAT_05ae9300;
  if ((DAT_05ae9300 != 0) && (*(long *)(DAT_05ae92f0 + 0x58) != 0)) {
    (**(code **)(*(long *)(DAT_05ae9300 + 8) + 0x18))((long *)(DAT_05ae9300 + 8));
    FUN_006e9454(auStack_448,&DAT_0406a3d7,"Icon=EFFECT",*(undefined8 *)(lVar3 + 0x10));
  }
  return;
}

