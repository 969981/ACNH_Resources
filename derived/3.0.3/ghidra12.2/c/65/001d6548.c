
void FUN_001d6548(undefined8 *param_1,int param_2)

{
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  *(int *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_0483b340;
  *(int *)(param_1 + 1) = param_2 << 3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}

