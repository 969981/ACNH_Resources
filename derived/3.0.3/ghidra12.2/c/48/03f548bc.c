
void FUN_03f548bc(long param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  
  *(undefined4 *)(param_1 + 0x23c) = 3;
  uVar5 = (int)*(short *)(param_1 + 0x18) * (int)*(short *)(param_1 + 0x18);
  sVar3 = *(short *)(param_1 + 0x22e);
  uVar6 = (int)*(short *)(param_1 + 0x22c) * (int)*(short *)(param_1 + 0x22c);
  uVar7 = (int)sVar3 * (int)sVar3;
  *(short *)(param_1 + 0x18) = sVar3;
  *(short *)(param_1 + 0x1a) = sVar3;
  uVar4 = uVar7 * 2;
  uVar1 = (uVar6 * 2 & 0xfffe) + (uVar5 * 2 & 0xfffe);
  *(short *)(param_1 + 0x1e) = (short)uVar4;
  sVar3 = (short)(uVar7 >> 0xf);
  *(short *)(param_1 + 0x1c) = sVar3;
  iVar2 = (uVar1 & 0xfffe) + (uVar4 & 0xfffe);
  uVar8 = (undefined2)iVar2;
  *(undefined2 *)(param_1 + 0x14) = uVar8;
  *(undefined2 *)(param_1 + 0x240) = uVar8;
  sVar3 = (short)(uVar6 >> 0xf) + (short)((uVar5 & 0x7fffffff) >> 0xf) + sVar3 +
          (short)(uVar1 >> 0x10) + (short)((uint)iVar2 >> 0x10);
  *(short *)(param_1 + 0x16) = sVar3;
  *(short *)(param_1 + 0x242) = sVar3;
  *(undefined4 *)(param_1 + 0x250) = 2;
  return;
}

