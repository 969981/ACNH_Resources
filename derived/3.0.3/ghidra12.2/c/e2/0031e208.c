
bool FUN_0031e208(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((*(char *)(lVar1 + 0x1e) != '\0') &&
     ((*(int *)(lVar1 + 0x270) < 0 ||
      (*(float *)(param_1 + 100) + (float)*(int *)(lVar1 + 0x278) + (float)*(int *)(lVar1 + 0x270)
       <= *(float *)(param_1 + 0x44))))) {
    return *(char *)(*(long *)(param_1 + 0xa0) + 0x792) != '\0' || *(int *)(param_1 + 0x2c) < 1;
  }
  return false;
}

