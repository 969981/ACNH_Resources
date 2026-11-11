
undefined8 FUN_0043c4e0(ulong param_1)

{
  long lVar1;
  
  lVar1 = nn::os::GetTlsValue(DAT_04c6f1a4);
  return *(undefined8 *)(lVar1 + (param_1 & 0xffff) * 8);
}

