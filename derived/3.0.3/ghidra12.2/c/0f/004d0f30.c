
void FUN_004d0f30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = CONCAT44((float)((ulong)param_1[1] >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                        (float)param_1[1] + (float)param_2[1]);
  *param_1 = CONCAT44((float)((ulong)*param_1 >> 0x20) + (float)((ulong)uVar1 >> 0x20),
                      (float)*param_1 + (float)uVar1);
  uVar1 = param_2[2];
  param_1[3] = CONCAT44((float)((ulong)param_1[3] >> 0x20) + (float)((ulong)param_2[3] >> 0x20),
                        (float)param_1[3] + (float)param_2[3]);
  param_1[2] = CONCAT44((float)((ulong)param_1[2] >> 0x20) + (float)((ulong)uVar1 >> 0x20),
                        (float)param_1[2] + (float)uVar1);
  uVar1 = param_2[4];
  param_1[5] = CONCAT44((float)((ulong)param_1[5] >> 0x20) + (float)((ulong)param_2[5] >> 0x20),
                        (float)param_1[5] + (float)param_2[5]);
  param_1[4] = CONCAT44((float)((ulong)param_1[4] >> 0x20) + (float)((ulong)uVar1 >> 0x20),
                        (float)param_1[4] + (float)uVar1);
  uVar1 = param_2[6];
  param_1[7] = CONCAT44((float)((ulong)param_1[7] >> 0x20) + (float)((ulong)param_2[7] >> 0x20),
                        (float)param_1[7] + (float)param_2[7]);
  param_1[6] = CONCAT44((float)((ulong)param_1[6] >> 0x20) + (float)((ulong)uVar1 >> 0x20),
                        (float)param_1[6] + (float)uVar1);
  return;
}

