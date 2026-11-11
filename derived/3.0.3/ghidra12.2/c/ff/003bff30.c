
void FUN_003bff30(undefined8 *param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = param_2;
  switch(*(undefined4 *)param_1) {
  case 0:
    param_2 = param_2 + 1;
    fVar4 = *(float *)((long)param_1 + 4);
    while (param_2 = param_2 + -1, 0 < param_2) {
      fVar4 = *(float *)(param_1 + 2) * fVar4;
      *(float *)((long)param_1 + 4) = fVar4;
      if (-0.03125 < fVar4) {
        *param_1 = 1;
        *(undefined2 *)((long)param_1 + 0x16) = *(undefined2 *)((long)param_1 + 0x14);
        return;
      }
    }
    break;
  case 1:
    uVar1 = *(ushort *)((long)param_1 + 0x16);
    iVar3 = param_2 - (uint)uVar1;
    if (param_2 < (int)(uint)uVar1) {
      *(ushort *)((long)param_1 + 0x16) = uVar1 - (short)param_2;
      return;
    }
    *(undefined2 *)((long)param_1 + 0x16) = 0;
    *(undefined4 *)param_1 = 2;
  case 2:
    fVar4 = *(float *)((long)param_1 + 4) - (float)iVar3 * *(float *)(param_1 + 1);
    sVar2 = *(short *)(PTR_DAT_04bd04f0 + (ulong)*(byte *)(param_1 + 3) * 2);
    *(float *)((long)param_1 + 4) = fVar4;
    if (fVar4 < (float)(int)sVar2) {
      *(float *)((long)param_1 + 4) = (float)(int)sVar2;
      *(undefined4 *)param_1 = 3;
      return;
    }
    break;
  case 4:
    *(float *)((long)param_1 + 4) =
         *(float *)((long)param_1 + 4) - (float)param_2 * *(float *)((long)param_1 + 0xc);
  }
  return;
}

