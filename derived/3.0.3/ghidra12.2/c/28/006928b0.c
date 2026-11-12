
undefined8 FUN_006928b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00691680();
  if (((uVar2 & 1) == 0) ||
     (iVar1 = nn::ssl::Connection::SetSessionCacheMode(param_2,2), iVar1 == 0)) {
    return 0;
  }
  return 0x2a;
}

