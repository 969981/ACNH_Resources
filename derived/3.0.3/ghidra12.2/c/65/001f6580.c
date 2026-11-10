
undefined8 FUN_001f6580(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *__s;
  long lVar3;
  
  __s = (void *)FUN_001f4e40(0x10a0);
  *param_1 = (long)__s;
  if (__s == (void *)0x0) {
    return 0xffffffff;
  }
  memset(__s,0,0x10a0);
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x1030) = 3;
  *(undefined8 *)(lVar3 + 0x1098) = param_3;
  *(undefined4 *)(lVar3 + 0x1078) = 0;
  *(undefined8 *)(lVar3 + 0x1038) = 2;
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x1008) = lVar3;
  *(long *)(*param_1 + 0x1000) = lVar3;
  lVar3 = *param_1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(lVar3 + 0x1090) = param_2[2];
  *(undefined8 *)(lVar3 + 0x1088) = uVar2;
  *(undefined8 *)(lVar3 + 0x1080) = uVar1;
  return 0;
}

