
void FUN_0043c4a0(ulong param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = nn::os::GetTlsValue(DAT_04c6f1a4);
  *(undefined8 *)(lVar1 + (param_1 & 0xffff) * 8) = param_2;
  return;
}

