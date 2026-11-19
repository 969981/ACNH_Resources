
void FUN_038a3af0(uint *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  if (param_2 != 0) {
    uVar7 = (ulong)param_2;
    do {
      *param_1 = 0;
      uVar7 = uVar7 - 1;
      uVar4 = param_5[1];
      uVar1 = *param_5 ^ *param_5 << 0xb;
      uVar3 = param_5[2];
      uVar5 = param_5[3];
      uVar2 = uVar4 ^ uVar4 << 0xb;
      *param_5 = uVar4;
      param_5[1] = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
      uVar4 = uVar2 ^ uVar1;
      param_5[2] = uVar5;
      param_5[3] = uVar1;
      uVar6 = *(uint *)(param_3 + ((ulong)param_4 * (ulong)uVar1 >> 0x1e & 0x3fffffffc));
      *param_5 = uVar3;
      param_5[1] = uVar5;
      param_5[2] = uVar1;
      param_5[3] = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar4;
      *param_1 = uVar6 >> (ulong)(uVar4 >> 0x1b & 0x18) & 0xff | *param_1 << 8;
      uVar4 = param_5[1];
      uVar1 = *param_5 ^ *param_5 << 0xb;
      uVar3 = param_5[2];
      uVar5 = param_5[3];
      uVar2 = uVar4 ^ uVar4 << 0xb;
      *param_5 = uVar4;
      param_5[1] = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
      uVar4 = uVar2 ^ uVar1;
      param_5[2] = uVar5;
      param_5[3] = uVar1;
      uVar6 = *(uint *)(param_3 + ((ulong)param_4 * (ulong)uVar1 >> 0x1e & 0x3fffffffc));
      *param_5 = uVar3;
      param_5[1] = uVar5;
      param_5[2] = uVar1;
      param_5[3] = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar4;
      *param_1 = uVar6 >> (ulong)(uVar4 >> 0x1b & 0x18) & 0xff | *param_1 << 8;
      uVar4 = param_5[1];
      uVar1 = *param_5 ^ *param_5 << 0xb;
      uVar3 = param_5[2];
      uVar5 = param_5[3];
      uVar2 = uVar4 ^ uVar4 << 0xb;
      *param_5 = uVar4;
      param_5[1] = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
      uVar4 = uVar2 ^ uVar1;
      param_5[2] = uVar5;
      param_5[3] = uVar1;
      uVar6 = *(uint *)(param_3 + ((ulong)param_4 * (ulong)uVar1 >> 0x1e & 0x3fffffffc));
      *param_5 = uVar3;
      param_5[1] = uVar5;
      param_5[2] = uVar1;
      param_5[3] = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar4;
      *param_1 = uVar6 >> (ulong)(uVar4 >> 0x1b & 0x18) & 0xff | *param_1 << 8;
      uVar4 = param_5[1];
      uVar1 = *param_5 ^ *param_5 << 0xb;
      uVar3 = param_5[2];
      uVar5 = param_5[3];
      uVar2 = uVar4 ^ uVar4 << 0xb;
      *param_5 = uVar4;
      param_5[1] = uVar3;
      uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
      uVar4 = uVar2 ^ uVar1;
      param_5[2] = uVar5;
      param_5[3] = uVar1;
      uVar6 = *(uint *)(param_3 + ((ulong)param_4 * (ulong)uVar1 >> 0x1e & 0x3fffffffc));
      *param_5 = uVar3;
      param_5[1] = uVar5;
      param_5[2] = uVar1;
      param_5[3] = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar4;
      *param_1 = uVar6 >> (ulong)(uVar4 >> 0x1b & 0x18) & 0xff | *param_1 << 8;
      param_1 = param_1 + 1;
    } while (uVar7 != 0);
  }
  return;
}

