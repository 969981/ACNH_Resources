
void FUN_03fc456c(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = (ulong)(param_3 & 3) * 2;
  lVar7 = *(long *)(param_1 + 0x78);
  sVar2 = *(short *)(&DAT_04101688 + lVar5);
  lVar6 = param_1 + (long)param_2 * 0xb8;
  sVar3 = *(short *)(&DAT_04101668 + lVar5);
  uVar1 = param_3 * 0x200 & 0xf800;
  *(char *)(lVar6 + 0x45ade) = (char)param_3;
  sVar4 = (short)uVar1;
  *(short *)(lVar6 + 0x45adc) = sVar4;
  *(ulong *)(lVar6 + 0x45b40) = lVar7 + (ulong)(ushort)(sVar2 + sVar4);
  lVar5 = *(long *)(param_1 + 0x78);
  *(ulong *)(lVar6 + 0x45b30) = lVar7 + (ulong)uVar1;
  *(ulong *)(lVar6 + 0x45b38) = lVar7 + (ulong)((param_3 & 1) * 0x800 + param_3 * 0x200 & 0xf800);
  *(ulong *)(lVar6 + 0x45b48) = lVar5 + (ulong)(ushort)(sVar3 + sVar4);
  *(undefined **)(lVar6 + 0x45b60) = &DAT_041ebaea + (ulong)(param_3 & 1) * 0xc0;
  return;
}

