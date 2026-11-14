
bool FUN_01ccfa60(byte *param_1,byte *param_2)

{
  bool bVar1;
  undefined *puVar2;
  
  param_1[8] = 0;
  puVar2 = PTR_DAT_04bb3170;
  param_1[9] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)puVar2;
  bVar1 = (((((((*param_2 < 0x30 && param_2[1] < 0x10) && param_2[2] < 0x34) && param_2[3] < 0xc) &&
             param_2[4] < 3) && param_2[5] < 4) && param_2[6] < 3) && param_2[7] < 2) &&
          param_2[8] < 0xc;
  if (bVar1) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
  }
  return bVar1;
}

