
void FUN_00188940(long *param_1,char *param_2,long param_3)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *__dest;
  char *__src;
  
  puVar1 = PTR_DAT_04bc0ec8;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[3] = (long)(param_1 + 1);
    param_1[4] = 0x10;
    *param_1 = (long)(puVar1 + 0x10);
    FUN_0018b070(param_1,uVar4,0xffffffffffffffff);
    return;
  }
  sVar2 = strlen(*(char **)(param_3 + 0x18));
  puVar1 = PTR_DAT_04bc0ec8;
  if (sVar2 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[3] = (long)(param_1 + 1);
    param_1[4] = 0x10;
    *param_1 = (long)(puVar1 + 0x10);
    FUN_0018b070(param_1,param_2,0xffffffffffffffff);
    return;
  }
  sVar3 = strlen(param_2);
  *(undefined1 *)(param_1 + 1) = 0;
  __src = *(char **)(param_3 + 0x18);
  *param_1 = (long)(PTR_DAT_04bc0ec8 + 0x10);
  param_1[3] = (long)(param_1 + 1);
  param_1[4] = 0x10;
  FUN_0018b7a0(param_1,sVar3 + sVar2);
  __dest = (char *)param_1[3];
  strcpy(__dest,param_2);
  strcpy(__dest + sVar3,__src);
  return;
}

