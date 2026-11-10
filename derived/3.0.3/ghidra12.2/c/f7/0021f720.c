
bool FUN_0021f720(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = memcmp((void *)(param_1 + 8),&DAT_0410d274,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = memcmp((void *)(param_1 + 0xc),&DAT_0410d274,0xc);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}

