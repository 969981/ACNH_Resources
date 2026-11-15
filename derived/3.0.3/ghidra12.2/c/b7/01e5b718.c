
undefined8 FUN_01e5b718(long param_1,undefined2 *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_28 = 0;
  FUN_01e5a930(0x40000000,param_1,0x10,PTR_DAT_04bb2150,&local_24,&local_28,&DAT_04178e00,6);
  *(undefined2 *)(param_1 + 0x5d8) = *param_2;
  *(undefined1 *)(param_1 + 0x5da) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x5db) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)(param_1 + 0x5e0) = param_2[4];
  *(undefined1 *)(param_1 + 0x5e2) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x5e3) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_2 + 6);
  *(undefined2 *)(param_1 + 0x5e8) = param_2[8];
  *(undefined1 *)(param_1 + 0x5ea) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 0x5eb) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x5ec) = *(undefined4 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x5f0) = *(undefined8 *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x5f4) = (uint)*(byte *)(param_1 + 0x59c);
  return 1;
}

