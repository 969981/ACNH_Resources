
void FUN_002a8950(long param_1,char *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  size_t __n;
  long lVar3;
  
  puVar2 = PTR_DAT_04bcb8c8;
  lVar3 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + lVar3);
    lVar3 = lVar3 + 0x30;
    *puVar1 = *(undefined4 *)puVar2;
    puVar1[6] = *(undefined4 *)puVar2;
  } while (lVar3 != 0xc00);
  FUN_002a6f8c(param_1);
  FUN_002214b4(param_1 + 0xd40,0xd);
  *(undefined8 *)(param_1 + 0xd60) = 0;
  *(undefined1 *)(param_1 + 0xd68) = 0;
  *(undefined4 *)(param_1 + 0xd6c) = param_3;
  __n = strlen(param_2);
  if (0x1e < __n) {
    __n = 0x1f;
  }
  memcpy((void *)(param_1 + 0xc08),param_2,__n);
  *(undefined1 *)(param_1 + 0xc08 + __n) = 0;
  return;
}

