
undefined1  [16] FUN_03bd1300(long param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  char *__s1;
  long lVar3;
  undefined1 auVar4 [16];
  
  __s1 = (char *)(param_1 + 0x28);
  lVar3 = 0x40;
  uVar2 = 0xffffffff;
  do {
    iVar1 = strcmp(__s1,param_2);
    if (iVar1 == 0) {
      uVar2 = (ulong)*(uint *)(__s1 + -0x18);
      goto LAB_03bd135c;
    }
    __s1 = __s1 + 0x1910;
    param_1 = param_1 + 0x1910;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1 = 0;
LAB_03bd135c:
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}

