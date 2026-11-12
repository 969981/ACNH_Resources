
void FUN_00ba914c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar1 = *puVar4 ^ *puVar4 << 0xb;
  uVar3 = puVar4[3];
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar2 = uVar1 ^ uVar3;
  uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
  puVar4[2] = uVar3;
  puVar4[3] = uVar1;
  uVar1 = (uVar1 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  param_1[2] = uVar1;
  param_1[3] = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  return;
}

