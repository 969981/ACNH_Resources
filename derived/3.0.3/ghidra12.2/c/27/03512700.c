
void FUN_03512700(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_LAB_04b34120;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 8);
  *(undefined1 *)((long)param_2 + 10) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(param_1 + 0xb);
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}

