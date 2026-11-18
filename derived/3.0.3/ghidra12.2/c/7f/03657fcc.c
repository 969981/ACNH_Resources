
uint FUN_03657fcc(long param_1,uint param_2,uint param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  param_1 = param_1 + 0x2a8;
  lVar1 = param_1 + (ulong)(param_2 >> 10) * 0x10;
  uVar2 = *(int *)(param_1 + (ulong)(param_2 >> 10) * 4 + 0x410) - 1U & param_4 * param_3;
  FUN_03653cb0(param_1,param_2,*(undefined8 *)(lVar1 + 0x18),param_3,uVar2,
               *(char *)(lVar1 + 0x10) == '\0');
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = uVar2 / param_3;
  }
  return uVar3;
}

