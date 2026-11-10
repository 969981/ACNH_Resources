
undefined8 FUN_002b3dbc(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_40 [2];
  
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_002b3a54(local_40,param_1 + 0x58);
  local_40[0] = 0;
  FUN_002282f0(local_40);
  *(undefined8 *)(param_1 + 0x78) = local_40[0];
  *(undefined8 *)(param_1 + 0x80) = local_40[0];
  if (*(byte *)(param_1 + 0x38) < 0x20) {
    lVar1 = FUN_002ba798(DAT_04c61168);
    lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x38) * 0x20;
    *(undefined8 *)(lVar1 + 0x3510) = 0;
    *(undefined8 *)(lVar1 + 0x3518) = 0;
    *(undefined8 *)(lVar1 + 0x3520) = 0;
    *(undefined4 *)(lVar1 + 0x3528) = 0;
    *(undefined1 *)(lVar1 + 0x352c) = 0;
  }
  *(undefined1 *)(param_1 + 0x38) = param_2;
  FUN_00227418(param_1 + 0x10,param_3);
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined2 *)(param_1 + 0x88) = 0x100;
  return 1;
}

