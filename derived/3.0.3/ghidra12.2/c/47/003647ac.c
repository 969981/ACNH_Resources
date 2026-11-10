
void FUN_003647ac(byte *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if ((int)(uint)*param_1 < (int)param_2) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00367b50();
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
    }
    puVar1 = (undefined8 *)FUN_00367b30((ulong)param_2 << 5);
    *puVar1 = 0;
    *(undefined8 **)(param_1 + 8) = puVar1;
    *param_1 = (byte)param_2;
  }
  return;
}

