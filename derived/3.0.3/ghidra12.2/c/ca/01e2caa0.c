
ulong FUN_01e2caa0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar1 = *puVar3 ^ *puVar3 << 0xb;
  uVar2 = puVar3[3];
  *puVar3 = puVar3[1];
  puVar3[1] = puVar3[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  puVar3[2] = uVar2;
  puVar3[3] = uVar1;
  return (ulong)uVar1 * (ulong)param_1 >> 0x20;
}

