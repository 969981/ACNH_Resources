
void FUN_03eb6f30(long param_1)

{
  byte bVar1;
  
  bVar1 = nn::pctl::CheckFreeCommunicationPermission(*(bool *)(param_1 + 0x24));
  *(byte *)(param_1 + 0x25) = bVar1 & 1;
  return;
}

