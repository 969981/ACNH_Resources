
void FUN_0390d86c(long *param_1,uint param_2,int param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = *(long *)param_1[1];
  uVar3 = (ulong)*(ushort *)(param_1[1] + 10);
  piVar4 = (int *)(lVar2 + uVar3 * 0xc);
  *(char *)(piVar4 + 2) = (char)param_2;
  *piVar4 = param_3;
  if (param_2 == 0x12) {
    uVar1 = (uint)(param_5 >> 2);
    *(short *)(lVar2 + uVar3 * 0xc + 6) = (short)(param_4 >> 2);
  }
  else if (param_3 == 1) {
    uVar1 = (uint)(byte)(&DAT_041b370d)[(ulong)param_2 * 4];
    *(ushort *)(lVar2 + uVar3 * 0xc + 6) = (ushort)(byte)(&DAT_041b370c)[(ulong)param_2 * 4];
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2 & 0xff);
    uVar1 = uVar1 & 0xff;
    *(short *)(lVar2 + uVar3 * 0xc + 6) = (short)uVar1;
  }
  uVar1 = (uVar1 * 4 + (int)param_1[6]) - 1 & uVar1 * -4;
  lVar2 = lVar2 + uVar3 * 0xc;
  *(uint *)(param_1 + 6) = uVar1;
  *(short *)(lVar2 + 4) = (short)uVar1;
  *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*(ushort *)(lVar2 + 6) * *piVar4 * 4;
  *(short *)(param_1[1] + 10) = *(short *)(param_1[1] + 10) + 1;
  if (*(short *)(param_1[1] + 10) == *(short *)(param_1[1] + 8)) {
    *(uint *)(param_1 + 6) = (int)param_1[6] + 0x1fU & 0xffffffe0;
  }
  return;
}

