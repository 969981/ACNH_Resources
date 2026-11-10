
void FUN_0018c218(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_2 * 3;
  *param_1 = 0;
  param_1[1] = lVar1;
  if (param_2 != 0) {
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar2 = malloc((lVar1 + 0xbU & 0xfffffffffffffff8) + 0x10);
    }
    else {
      puVar2 = (undefined8 *)(*DAT_04c57ea0)();
    }
    *(int *)(puVar2 + 2) = (int)lVar1;
    *puVar2 = DAT_04c57ea8;
    *param_1 = (long)puVar2 + 0x14;
  }
  return;
}

