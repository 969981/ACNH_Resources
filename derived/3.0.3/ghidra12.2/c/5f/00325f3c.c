
void FUN_00325f3c(undefined8 param_1,long param_2)

{
  size_t __n;
  undefined8 *puVar1;
  
  if (*(char *)(*(long *)(param_2 + 0xa0) + 0x792) == '\0') {
    puVar1 = *(undefined8 **)(param_2 + 0xc0);
    __n = (long)*(int *)(param_2 + 0x28) << 4;
    memcpy((void *)*puVar1,*(void **)(param_2 + 0x1d0),__n);
    memcpy((void *)puVar1[1],*(void **)(param_2 + 0x1d8),__n);
    memcpy((void *)puVar1[2],*(void **)(param_2 + 0x1e0),__n);
    memcpy((void *)puVar1[4],*(void **)(param_2 + 0x1f0),__n);
    memcpy((void *)puVar1[3],*(void **)(param_2 + 0x1e8),__n);
    memcpy((void *)puVar1[5],*(void **)(param_2 + 0x1f8),__n);
    if ((void *)puVar1[6] != (void *)0x0) {
      memcpy((void *)puVar1[6],*(void **)(param_2 + 0x200),__n);
      memcpy((void *)puVar1[7],*(void **)(param_2 + 0x208),__n);
    }
    if ((void *)puVar1[8] != (void *)0x0) {
      memcpy((void *)puVar1[8],*(void **)(param_2 + 0x210),__n);
      memcpy((void *)puVar1[9],*(void **)(param_2 + 0x218),__n);
      memcpy((void *)puVar1[10],*(void **)(param_2 + 0x220),__n);
      return;
    }
  }
  return;
}

