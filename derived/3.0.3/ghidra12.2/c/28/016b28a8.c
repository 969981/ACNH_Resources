
float FUN_016b28a8(float param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = puVar3[3];
  uVar1 = *puVar3 ^ *puVar3 << 0xb;
  *puVar3 = puVar3[1];
  puVar3[1] = puVar3[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  puVar3[2] = uVar2;
  puVar3[3] = uVar1;
  return ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * param_1;
}

