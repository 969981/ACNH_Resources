
void FUN_002290c4(long param_1,char *param_2)

{
  size_t __n;
  
  __n = strlen(param_2);
  if (0x3e < __n) {
    __n = 0x3f;
  }
  memcpy((void *)(param_1 + 0x21),param_2,__n);
  *(undefined1 *)(param_1 + 0x21 + __n) = 0;
  return;
}

