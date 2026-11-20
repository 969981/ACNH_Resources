
void FUN_03ff9f94(undefined8 *param_1)

{
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x200007d00;
  *param_1 = &PTR_FUN_04bb13a0;
  param_1[6] = 4;
  param_1[7] = 0x3f80000000000200;
  param_1[8] = 0x3f80a3d73f81eb85;
  param_1[9] = 0x3f7c28f63f7eb852;
  param_1[10] = 0x100000000800;
  memset(param_1 + 0xb,0,0x1032);
  *(undefined1 *)((long)param_1 + 0x108a) = 0;
  *(undefined1 *)((long)param_1 + 0x108b) = 0;
  *(undefined1 *)((long)param_1 + 0x108c) = 0;
  *(undefined1 *)((long)param_1 + 0x108d) = 0;
  return;
}

