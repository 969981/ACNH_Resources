
undefined4 FUN_01fb77bc(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  if ((((param_3 ^ 1) & 1) != 0) || ((param_2 & 1) != 0)) {
    if ((((param_2 ^ 1) & 1) == 0) && ((param_3 & 1) == 0)) {
      return 2;
    }
    if (((param_2 ^ 1 | param_3 ^ 1) & 1) != 0) {
      return 0;
    }
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4);
    if ((int)uVar2 < 1) {
      if (0x80000000 < uVar2) {
        return 2;
      }
      puVar3 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = *puVar3 ^ *puVar3 << 0xb;
      uVar1 = puVar3[3];
      *puVar3 = puVar3[1];
      puVar3[1] = puVar3[2];
      uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
      puVar3[2] = uVar1;
      puVar3[3] = uVar2;
      uVar4 = 2;
      if ((uVar2 & 2) != 0) {
        uVar4 = 3;
      }
      return uVar4;
    }
  }
  return 3;
}

