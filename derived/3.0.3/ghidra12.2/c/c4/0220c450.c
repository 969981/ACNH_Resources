
byte FUN_0220c450(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  uVar2 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_8 = uVar2;
  bVar1 = FUN_00a8117c(&local_8);
  return ((uint)((ulong)uVar2 >> 0x20) & 0xff) - 7 < 0xb & (bVar1 ^ 0xff);
}

