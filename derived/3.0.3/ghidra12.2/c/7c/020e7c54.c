
bool FUN_020e7c54(long param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  
  bVar2 = *param_2;
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  if (*(byte *)(param_1 + 0x388) == bVar2) {
    lVar1 = 0;
  }
  else if (*(byte *)(param_1 + 0x398) == bVar2) {
    lVar1 = 1;
  }
  else if (*(byte *)(param_1 + 0x3a8) == bVar2) {
    lVar1 = 2;
  }
  else if (*(byte *)(param_1 + 0x3b8) == bVar2) {
    lVar1 = 3;
  }
  else if (*(byte *)(param_1 + 0x3c8) == bVar2) {
    lVar1 = 4;
  }
  else if (*(byte *)(param_1 + 0x3d8) == bVar2) {
    lVar1 = 5;
  }
  else if (*(byte *)(param_1 + 1000) == bVar2) {
    lVar1 = 6;
  }
  else {
    if (*(byte *)(param_1 + 0x3f8) != bVar2) {
      return false;
    }
    lVar1 = 7;
  }
  return *(char *)(param_1 + lVar1 * 0x10 + 0x389) != '\0';
}

