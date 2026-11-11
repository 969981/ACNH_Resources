
void FUN_003a9768(long param_1,int param_2,uint param_3)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  pcVar1 = (code *)&LAB_003a9594;
  if ((param_3 & 1) == 0) {
    pcVar1 = FUN_003a9580;
  }
  *(float *)(param_1 + 0x18) = (float)param_2;
  *(code **)(param_1 + 0x20) = pcVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

