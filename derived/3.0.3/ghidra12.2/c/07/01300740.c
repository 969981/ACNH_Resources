
void FUN_01300740(long param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_0131af5c(param_1 + 0x38);
  FUN_01302100(param_1 + 200);
  FUN_01302100(param_1 + 0x9f8);
  *(undefined4 *)(param_1 + 0x1338) = 0;
  *(undefined4 *)(param_1 + 0x1360) = 0;
  fVar5 = (float)*(int *)(param_3 + 0xc) * 10.0 + 5.0 + -10.0;
  fVar4 = (float)*(int *)(param_3 + 8) * 10.0 + 5.0 + -10.0;
  iVar2 = (int)((float)(int)fVar4 / 10.0) - (uint)(fVar4 < 0.0);
  iVar3 = (int)((float)(int)fVar5 / 10.0) - (uint)(fVar5 < 0.0);
  *(int *)(param_1 + 0x20) = iVar2;
  *(int *)(param_1 + 0x24) = iVar3;
  *(int *)(param_1 + 0x30) = iVar2 + 2;
  *(int *)(param_1 + 0x34) = iVar3 + 2;
  *(short *)(param_1 + 0x38) = (short)*(undefined4 *)(param_3 + 8);
  *(short *)(param_1 + 0x3a) = (short)*(undefined4 *)(param_3 + 0xc);
  fVar5 = (float)*(int *)(param_3 + 0xc) * 10.0 + 5.0 + -10.0;
  fVar4 = (float)*(int *)(param_3 + 8) * 10.0 + 5.0 + -10.0;
  sVar1 = (short)(int)((float)(int)fVar4 / 10.0) - (ushort)(fVar4 < 0.0);
  *(short *)(param_1 + 0x3c) = sVar1;
  *(short *)(param_1 + 0x40) = sVar1 + 2;
  sVar1 = (short)(int)((float)(int)fVar5 / 10.0) - (ushort)(fVar5 < 0.0);
  *(short *)(param_1 + 0x3e) = sVar1;
  *(short *)(param_1 + 0x42) = sVar1 + 2;
  FUN_0131b430(param_2,param_1 + 0x38);
  FUN_013008a0(param_1);
  FUN_01300cd0(param_1);
  return;
}

