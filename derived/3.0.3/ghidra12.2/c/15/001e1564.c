
void FUN_001e1564(long *param_1,long param_2)

{
  *param_1 = (long)(PTR_DAT_04bcbf00 + 0x10);
  memcpy(param_1 + 1,(void *)(param_2 + 8),0x80);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  return;
}

