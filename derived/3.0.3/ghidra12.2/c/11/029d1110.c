
void FUN_029d1110(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = 0;
  uVar7 = 0x48077044;
  uVar6 = 0x714acb41;
  uVar5 = 0x6c078967;
  uVar4 = 1;
  if ((param_2[1] != 0 || *param_2 != 0) || (param_2[2] != 0 || param_2[3] != 0)) {
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar5 = param_2[1];
    uVar4 = *param_2;
  }
  do {
    uVar4 = uVar4 ^ uVar4 << 0xb;
    uVar5 = uVar5 ^ uVar5 << 0xb;
    uVar4 = uVar7 >> 0x13 ^ uVar4 >> 8 ^ uVar7 ^ uVar4;
    uVar6 = uVar6 ^ uVar6 << 0xb;
    uVar7 = uVar7 ^ uVar7 << 0xb;
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    puVar1 = (uint *)(param_1 + 0x14 + ((long)((ulong)uVar3 << 0x20) >> 0x1c));
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    uVar6 = uVar6 >> 8 ^ uVar5 >> 0x13 ^ uVar6 ^ uVar5;
    uVar2 = uVar7 >> 8 ^ uVar6 >> 0x13 ^ uVar7;
    uVar7 = uVar2 ^ uVar6;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    if (((uVar4 == 0) && (uVar5 == 0)) && (uVar2 == 0 && uVar6 == 0)) {
      *puVar1 = 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x10);
  return;
}

