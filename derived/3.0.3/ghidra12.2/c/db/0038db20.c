
void FUN_0038db20(float param_1,float param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 int param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  FUN_003b4974();
  puVar1 = PTR_DAT_04bd0920;
  *(int *)(param_3 + 9) = param_6;
  *(float *)(param_3 + 8) = param_1 + param_1;
  *(float *)((long)param_3 + 0x44) = param_2 + param_2;
  *param_3 = (long)(puVar1 + 0x10);
  FUN_003b4a40(param_3,param_6 * 4 + 0x14);
  FUN_003b4a78(param_3,(int)param_3[9] * 0xc + 0x12);
  lVar4 = FUN_003b49b8(param_3);
  iVar2 = FUN_003b4a04(param_3);
  FUN_003b4a30(param_3,lVar4 * iVar2);
  iVar2 = FUN_003b49fc(param_3);
  iVar3 = FUN_003b4a0c(param_3);
  lVar4 = (ulong)(iVar2 == 2) << 1;
  if (iVar2 == 1) {
    lVar4 = 1;
  }
  FUN_003b4a38(param_3,(long)iVar3 << lVar4);
  return;
}

