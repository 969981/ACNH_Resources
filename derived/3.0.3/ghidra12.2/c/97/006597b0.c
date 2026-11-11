
void FUN_006597b0(long param_1,int param_2,long *param_3)

{
  *param_3 = *(long *)(param_1 + 0x1a0) + (long)*(int *)(param_1 + (long)param_2 * 4 + 0x11c);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined8 *)((long)param_3 + 0xc) = *(undefined8 *)(param_1 + (long)param_2 * 8 + 0x18);
  return;
}

