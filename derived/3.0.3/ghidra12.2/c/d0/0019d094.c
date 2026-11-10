
void FUN_0019d094(float param_1,long *param_2)

{
  undefined *puVar1;
  
  *param_2 = (long)(PTR_DAT_04bcc190 + 0x10);
  FUN_0019ae34(param_2 + 2);
  *(undefined2 *)(param_2 + 8) = 1;
  FUN_0018ea28(param_2 + 9,0);
  FUN_00186460(param_2 + 0xb,1,0);
  puVar1 = PTR_DAT_04bcbdd0;
  *(float *)(param_2 + 1) = param_1;
  param_2[0xb] = (long)(puVar1 + 0x10);
  if (param_1 == 0.0) {
    param_2[0x14] = 0;
    *(undefined1 *)((long)param_2 + 0xcc) = 0;
    return;
  }
  param_2[0x14] = (ulong)(uint)(int)(1000.0 / param_1);
  *(undefined1 *)((long)param_2 + 0xcc) = 0;
  return;
}

