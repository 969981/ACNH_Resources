
int FUN_016b285c(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar1 = *puVar3 ^ *puVar3 << 0xb;
  uVar2 = puVar3[3];
  *puVar3 = puVar3[1];
  puVar3[1] = puVar3[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  puVar3[2] = uVar2;
  puVar3[3] = uVar1;
  return (uVar1 & 2) - 1;
}

