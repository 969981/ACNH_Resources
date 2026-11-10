
undefined8 FUN_0031e0f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x240);
  lVar3 = *(long *)(lVar2 + 0x350);
  if ((lVar3 == 0) || ((*(char *)(lVar3 + 0x50) == -1 && (*(char *)(lVar3 + 0x13) == -1)))) {
    uVar1 = 0;
    lVar3 = *(long *)(lVar2 + 0x358);
  }
  else {
    uVar1 = 1;
    lVar3 = *(long *)(lVar2 + 0x358);
  }
  if ((lVar3 != 0) && ((*(char *)(lVar3 + 0x50) != -1 || (*(char *)(lVar3 + 0x13) != -1)))) {
    uVar1 = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x360);
  if ((lVar2 != 0) && ((*(char *)(lVar2 + 0x50) != -1 || (*(char *)(lVar2 + 0x13) != -1)))) {
    uVar1 = 1;
  }
  return uVar1;
}

