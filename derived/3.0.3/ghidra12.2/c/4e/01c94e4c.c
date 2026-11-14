
bool FUN_01c94e4c(long param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  
  cVar1 = *param_2;
  if (cVar1 == -1) {
    return false;
  }
  if ((*(char *)(param_1 + 0x28) == cVar1) && (*(char *)(param_1 + 0x20) == '\0')) {
    lVar2 = 0;
  }
  else if ((*(char *)(param_1 + 0x48) == cVar1) && (*(char *)(param_1 + 0x40) == '\0')) {
    lVar2 = 1;
  }
  else if ((*(char *)(param_1 + 0x68) == cVar1) && (*(char *)(param_1 + 0x60) == '\0')) {
    lVar2 = 2;
  }
  else if ((*(char *)(param_1 + 0x88) == cVar1) && (*(char *)(param_1 + 0x80) == '\0')) {
    lVar2 = 3;
  }
  else if ((*(char *)(param_1 + 0xa8) == cVar1) && (*(char *)(param_1 + 0xa0) == '\0')) {
    lVar2 = 4;
  }
  else if ((*(char *)(param_1 + 200) == cVar1) && (*(char *)(param_1 + 0xc0) == '\0')) {
    lVar2 = 5;
  }
  else if ((*(char *)(param_1 + 0xe8) == cVar1) && (*(char *)(param_1 + 0xe0) == '\0')) {
    lVar2 = 6;
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if ((*(char *)(param_1 + 0x108) != cVar1) || (*(char *)(param_1 + 0x100) != '\0'))
    goto LAB_01c94f48;
    lVar2 = 7;
  }
  pbVar3 = &DAT_0548e168 + lVar2;
LAB_01c94f48:
  if ((ulong)*pbVar3 < 8) {
    return *(char *)(param_1 + (ulong)*pbVar3 * 0x20 + 0x28) != -1;
  }
  return false;
}

