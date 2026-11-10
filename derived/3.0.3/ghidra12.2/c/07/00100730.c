
int FUN_00100730(short *param_1,short param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  sVar1 = *param_1;
  if ((param_2 != 0) && (sVar1 != 0)) {
    iVar3 = 0;
    do {
      bVar2 = sVar1 == 0;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + 1;
      sVar1 = *param_1;
      param_2 = param_2 - (~(ushort)bVar2 & 1);
    } while (param_2 != 0 && sVar1 != 0);
  }
  return iVar3;
}

