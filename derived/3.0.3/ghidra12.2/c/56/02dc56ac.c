
bool FUN_02dc56ac(long param_1,short *param_2)

{
  short sVar1;
  bool bVar2;
  
  bVar2 = true;
  sVar1 = 0x4c7b;
  if (param_2[4] != -2) {
    sVar1 = *param_2;
  }
  if (((*(short *)(param_1 + 8) != sVar1) && (*(short *)(param_1 + 10) != sVar1)) &&
     (*(short *)(param_1 + 0xc) != sVar1)) {
    bVar2 = *(short *)(param_1 + 0xe) == sVar1;
  }
  return bVar2;
}

