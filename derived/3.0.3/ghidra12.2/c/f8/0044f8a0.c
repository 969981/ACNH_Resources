
bool FUN_0044f8a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (ulong *)FUN_00426e90(param_1,0x2000);
  bVar1 = false;
  if (puVar2 != (ulong *)0x0) {
    if (*puVar2 == 0) {
      return false;
    }
    puVar3 = (ulong *)FUN_00426e90(param_2,0x2000);
    while( true ) {
      uVar4 = (uint)*puVar3;
      if (((DAT_04c6f8f8 & 1) == 0) || ((((uint)*puVar2 ^ uVar4) & 3) == 0)) break;
      DataMemoryBarrier(2,2);
      Yield();
    }
    iVar5 = (int)(*puVar2 >> 0x11);
    bVar1 = iVar5 <= (int)(uVar4 >> 2 & 0x7fff) && (int)(*puVar3 >> 0x11) <= iVar5;
  }
  return bVar1;
}

