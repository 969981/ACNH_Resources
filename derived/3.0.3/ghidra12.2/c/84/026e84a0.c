
char FUN_026e84a0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_026e98c8();
  cVar1 = iVar2 != 0;
  iVar2 = FUN_026e98c8(param_1 + 0x11f8,param_2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_026e98c8(param_1 + 0x23f0,param_2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_026e98c8(param_1 + 0x35e8,param_2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_026e98c8(param_1 + 0x47e0,param_2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_026e98c8(param_1 + 23000,param_2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_026e98c8(param_1 + 0x6bd0,param_2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_026e98c8(param_1 + 0x7dc8,param_2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

