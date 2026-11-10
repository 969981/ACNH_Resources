
void FUN_002b55fc(undefined8 param_1,uint param_2,uint param_3)

{
  DAT_04c5fcd4 = (uint)*(ushort *)(*(long *)PTR_DAT_04bc1510 + 0x58) * (param_2 & 0xffff);
  DAT_04c5fcd8 = (uint)*(ushort *)(*(long *)PTR_DAT_04bc1510 + 0x58) * (param_3 & 0xffff);
  FUN_002a4a7c();
  return;
}

