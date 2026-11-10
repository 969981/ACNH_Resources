
void FUN_0018b650(undefined8 *param_1,long param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 uVar3;
  char *__dest;
  char *__src;
  char *__src_00;
  
  sVar1 = strlen(*(char **)(param_2 + 0x18));
  if (sVar1 == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x18);
  }
  else {
    sVar2 = strlen(*(char **)(param_3 + 0x18));
    if (sVar2 != 0) {
      __src_00 = *(char **)(param_2 + 0x18);
      __src = *(char **)(param_3 + 0x18);
      *param_1 = &PTR_LAB_04a426b8;
      *(undefined1 *)(param_1 + 1) = 0;
      param_1[3] = param_1 + 1;
      param_1[4] = 0x10;
      FUN_0018b7a0(param_1,sVar2 + sVar1);
      __dest = (char *)param_1[3];
      strcpy(__dest,__src_00);
      strcpy(__dest + sVar1,__src);
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  *param_1 = &PTR_LAB_04a426b8;
  FUN_0018b070(param_1,uVar3,0xffffffffffffffff);
  return;
}

