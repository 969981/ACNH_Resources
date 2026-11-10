
void FUN_00157c08(long *param_1)

{
  memcpy((void *)(*param_1 + 0x1668),(void *)((long)param_1 + 0x1a2),0x2e);
  memcpy((void *)(*param_1 + 0x16a0),param_1 + 0x3b,0x2e);
  *(undefined8 *)(*param_1 + 0x16d8) = *(undefined8 *)param_1[0x88];
  *(undefined4 *)(*param_1 + 0x16e0) = *(undefined4 *)(param_1[0x88] + 0x80);
  *(long *)(*param_1 + 0x1698) = param_1[0x3a];
  *(long *)(*param_1 + 0x16d0) = param_1[0x41];
  return;
}

