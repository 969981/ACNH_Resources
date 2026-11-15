
undefined4 FUN_020e7d28(long param_1,byte *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  bVar3 = *param_2;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  if (*(byte *)(param_1 + 0x388) == bVar3 && *(char *)(param_1 + 0x38a) != '\0') {
    lVar1 = 0;
  }
  else if (*(byte *)(param_1 + 0x398) == bVar3 && *(char *)(param_1 + 0x39a) != '\0') {
    lVar1 = 1;
  }
  else if ((*(byte *)(param_1 + 0x3a8) == bVar3) && (*(char *)(param_1 + 0x3aa) != '\0')) {
    lVar1 = 2;
  }
  else if ((*(byte *)(param_1 + 0x3b8) == bVar3) && (*(char *)(param_1 + 0x3ba) != '\0')) {
    lVar1 = 3;
  }
  else if ((*(byte *)(param_1 + 0x3c8) == bVar3) && (*(char *)(param_1 + 0x3ca) != '\0')) {
    lVar1 = 4;
  }
  else if ((*(byte *)(param_1 + 0x3d8) == bVar3) && (*(char *)(param_1 + 0x3da) != '\0')) {
    lVar1 = 5;
  }
  else if ((*(byte *)(param_1 + 1000) == bVar3) && (*(char *)(param_1 + 0x3ea) != '\0')) {
    lVar1 = 6;
  }
  else {
    puVar2 = (undefined4 *)PTR_DAT_04bb3238;
    if ((*(byte *)(param_1 + 0x3f8) != bVar3) || (*(char *)(param_1 + 0x3fa) == '\0'))
    goto LAB_020e7da0;
    lVar1 = 7;
  }
  puVar2 = (undefined4 *)(param_1 + 0x37c + lVar1 * 0x10);
  if (*(char *)((long)puVar2 + 0xd) != '\0') {
    puVar2 = puVar2 + 2;
  }
LAB_020e7da0:
  return *puVar2;
}

