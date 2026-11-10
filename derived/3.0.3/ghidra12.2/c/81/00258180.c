
void FUN_00258180(long *param_1)

{
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  FUN_0025829c();
  *(undefined1 *)((long)param_1 + 0x3c4) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined4 *)((long)param_1 + 0x474) = 0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  *(undefined1 *)((long)param_1 + 0x485) = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  if ((long *)param_1[99] != (long *)0x0) {
    (**(code **)(*(long *)param_1[99] + 0x10))();
  }
  if ((long *)param_1[0x62] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x62] + 0x10))();
  }
  if ((long *)param_1[0x61] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x61] + 0x10))();
  }
  (**(code **)(*param_1 + 0x1d8))(param_1);
  param_1[0x2e0] = 0;
  param_1[0x2e1] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_0021fef8(param_1 + 0x55);
  FUN_0021fef8(param_1 + 0x59);
  param_1[0xad] = 0;
  FUN_00220f24(param_1 + 0x9e);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x2e5) = 0;
  local_30 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_00229780((long)param_1 + 0x172c,&local_30);
  *(undefined1 *)((long)param_1 + 0x173c) = 1;
  return;
}

