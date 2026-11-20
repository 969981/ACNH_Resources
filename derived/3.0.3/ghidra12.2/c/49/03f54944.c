
void FUN_03f54944(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(undefined4 *)(param_1 + 0x23c) = 4;
  uVar4 = (int)*(short *)(param_1 + 0x22a) * (int)*(short *)(param_1 + 0x22a);
  sVar3 = *(short *)(param_1 + 0x230);
  uVar5 = (int)*(short *)(param_1 + 0x22c) * (int)*(short *)(param_1 + 0x22c);
  uVar6 = (int)*(short *)(param_1 + 0x22e) * (int)*(short *)(param_1 + 0x22e);
  uVar7 = (int)sVar3 * (int)sVar3;
  *(short *)(param_1 + 0x18) = sVar3;
  *(short *)(param_1 + 0x1a) = sVar3;
  sVar3 = (short)(uVar7 >> 0xf);
  *(short *)(param_1 + 0x1c) = sVar3;
  *(short *)(param_1 + 0x1e) = (short)(uVar7 * 2);
  uVar1 = (uVar5 * 2 & 0xfffe) + (uVar4 * 2 & 0xffff | param_2 >> 5 & 1);
  uVar2 = (uVar6 * 2 & 0xfffe) + (uVar1 & 0xffff);
  *(short *)(param_1 + 0x14) = (short)uVar2 + (short)uVar7 * -2;
  sVar3 = (((((ushort)(param_2 >> 5) & 1) + (short)((uVar4 & 0x7fffffff) >> 0xf) +
             (short)((uVar5 & 0x7fffffff) >> 0xf) + (short)(uVar6 >> 0xf)) - sVar3) +
           (short)(uVar1 >> 0x10) + (short)(uVar2 >> 0x10)) -
          (ushort)((uVar2 & 0xffff) < (uVar7 * 2 & 0xfffe));
  *(short *)(param_1 + 0x16) = sVar3;
  *(short *)(param_1 + 0x240) = sVar3;
  *(undefined4 *)(param_1 + 0x250) = 1;
  return;
}

