
void FUN_0031e430(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  
  if (*(char *)(*(long *)(param_1 + 0xa0) + 0x792) == '\x02') {
    lVar1 = **(long **)(param_1 + 0x4d0);
    if ((*(char *)(lVar1 + 0x13) == '\0') && (*(char *)(lVar1 + 0x11) != '\0')) {
      FUN_0031f2e4(*(undefined8 *)(param_1 + 0x98),param_2,param_1,
                   *(undefined8 *)(*(long *)(param_1 + 0x240) + 0x368),
                   (int)(*(long **)(param_1 + 0x4d0))[1],param_3 & 1,param_4,1,param_5);
    }
  }
  if (*(char *)(**(long **)(param_1 + 0x4d0) + 0x12) == '\0') {
    return;
  }
  FUN_0031f8ac(*(undefined8 *)(param_1 + 0x98),param_2,param_1,param_4,param_5);
  return;
}

