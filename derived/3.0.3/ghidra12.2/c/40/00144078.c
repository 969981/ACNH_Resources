
undefined8 FUN_00144078(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *__s;
  
  puVar2 = PTR_DAT_04be2008;
  lVar4 = param_1 + (long)param_2 * 0x18;
  if ((*(int *)(lVar4 + 0x290) != 2) ||
     (lVar5 = param_1 + (long)param_2 * 0x18, (*(byte *)(lVar5 + 0x2d0) & 1) != 0)) {
    return 0;
  }
  if (((byte)PTR_DAT_04be2008[0x10] >> 4 & 1) == 0) {
    return 4;
  }
  param_1 = param_1 + (long)param_2 * 0x18;
  uVar3 = *(undefined8 *)(lVar4 + 0x290);
  uVar1 = *(undefined8 *)(lVar4 + 0x298);
  *(undefined8 *)(lVar4 + 0x290) = 0;
  *(undefined8 *)(lVar4 + 0x298) = 0;
  __s = *(void **)(param_1 + 0x2c8);
  *(undefined8 *)(lVar5 + 0x2c0) = uVar3;
  *(undefined8 *)(lVar5 + 0x2c8) = uVar1;
  uVar3 = *(undefined8 *)(lVar4 + 0x2a0);
  *(undefined8 *)(lVar4 + 0x2a0) = 0;
  *(undefined8 *)(lVar5 + 0x2d0) = uVar3;
  memset(__s,0,*(size_t *)(puVar2 + 0x18));
  *(void **)(param_1 + 0x298) = __s;
  return 0;
}

