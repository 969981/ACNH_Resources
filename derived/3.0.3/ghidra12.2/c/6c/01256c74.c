
void FUN_01256c74(undefined4 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  *(undefined2 *)(param_1 + 0x1a) = 0;
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  *(undefined1 *)((long)param_1 + 0x6e) = 0xff;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0x1e00000003;
  *(undefined4 *)((long)param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 6) = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0x6f) = 0xffff;
  *param_1 = (undefined4)local_28;
  param_1[1] = local_28._4_4_;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined2 *)param_1 = *param_2;
  *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
  param_1[1] = *(undefined4 *)(param_2 + 2);
  param_1[2] = *(undefined4 *)(param_2 + 4);
  param_1[3] = *(undefined4 *)(param_2 + 6);
  param_1[6] = *(undefined4 *)(param_2 + 0xc);
  param_1[7] = *(undefined4 *)(param_2 + 0xe);
  param_1[10] = *(undefined4 *)(param_2 + 0x14);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x16);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x18);
  param_1[8] = *(undefined4 *)(param_2 + 0x10);
  param_1[9] = *(undefined4 *)(param_2 + 0x12);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0x17] = *(undefined4 *)(param_2 + 0x2e);
  *(undefined1 *)((long)param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x37);
  *(undefined2 *)(param_1 + 0x1a) = param_2[0x34];
  param_1[0x18] = *(undefined4 *)(param_2 + 0x30);
  param_1[0x19] = *(undefined4 *)(param_2 + 0x32);
  *(undefined1 *)((long)param_1 + 0x6f) = *(undefined1 *)((long)param_2 + 0x6f);
  *(undefined2 *)((long)param_1 + 0x6a) = param_2[0x35];
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x36);
  *(undefined1 *)((long)param_1 + 0x6d) = *(undefined1 *)((long)param_2 + 0x6d);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}

