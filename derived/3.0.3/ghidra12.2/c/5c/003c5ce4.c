
void FUN_003c5ce4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd02a8 + 0x10);
  nn::os::InitializeEvent((EventType *)(param_1 + 1),0,0);
  *(undefined8 *)((long)param_1 + 0x35) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x3f800000;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 10) = 0xff;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f80000000000001;
  *(undefined8 *)((long)param_1 + 100) = 0x3f80000000000000;
  *(undefined1 **)((long)param_1 + 0x74) = &DAT_3f8000003f800000;
  *(undefined1 **)((long)param_1 + 0x6c) = &DAT_3f8000003f800000;
  param_1[0x12] = (long)&DAT_3f8000003f800000;
  param_1[0x10] = (long)&DAT_3f8000003f800000;
  param_1[0x11] = (long)&DAT_3f8000003f800000;
  param_1[8] = (long)&DAT_3f8000003f800000;
  param_1[9] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  nn::os::SignalEvent((EventType *)(param_1 + 1));
  return;
}

