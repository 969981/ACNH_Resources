
int FUN_00131d60(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0xae01;
  }
  else {
    cVar1 = *(char *)(param_1 + 3);
    iVar3 = 0x9201;
    if ((cVar1 != '\0') && (cVar1 != '\x03')) {
      if ((param_2 == 0) && (cVar1 == '\x01')) {
        return 0x9101;
      }
      if ((param_2 != 0) && ((*(ushort *)(param_2 + 0x80) & 0xf) != 1)) {
        return 0x9b01;
      }
      FUN_00131aa0(param_1);
      *(undefined1 *)(param_1 + 3) = 2;
      sVar2 = FUN_00105880(param_1,param_2,param_3,param_4,1);
      iVar3 = (int)sVar2;
      if (iVar3 < 0) {
        *(undefined1 *)(param_1 + 3) = 0;
        return iVar3;
      }
    }
  }
  return iVar3;
}

