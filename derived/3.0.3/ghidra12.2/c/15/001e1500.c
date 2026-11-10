
void FUN_001e1500(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcbf00 + 0x10);
  memset(param_1 + 1,0,0x10);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 9) = 2;
  return;
}

