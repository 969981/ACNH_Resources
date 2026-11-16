
void FUN_02569408(int *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  int local_24;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x48) + 0x68);
  puVar1 = &DAT_0417abf4;
  if (*(char *)(param_2 + 0x438) != '\0') {
    puVar1 = (undefined4 *)(param_2 + 0x2c);
  }
  FUN_02569464(&local_24,puVar1);
  *param_1 = local_24 - *(int *)(lVar2 + 0x2b4);
  return;
}

