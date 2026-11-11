
undefined4 FUN_00429b70(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  size_t __n;
  int iVar2;
  void *__s1;
  void *__s2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  __s1 = (void *)*param_1;
  __s2 = (void *)*param_2;
  if (__s1 == __s2) {
    uVar3 = 1;
    if ((ulong)param_1[1] < (ulong)param_2[1]) {
      uVar3 = 0xffffffff;
    }
    uVar1 = 0;
    if (param_1[1] != param_2[1]) {
      uVar1 = uVar3;
    }
    return uVar1;
  }
  uVar4 = param_1[1] - (long)__s1;
  uVar5 = param_2[1] - (long)__s2;
  __n = uVar4;
  if (uVar5 <= uVar4) {
    __n = uVar5;
  }
  iVar2 = memcmp(__s1,__s2,__n);
  uVar3 = 1;
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  if (iVar2 != 0) {
    return uVar3;
  }
  uVar3 = 1;
  if (uVar4 < uVar5) {
    uVar3 = 0xffffffff;
  }
  uVar1 = 0;
  if (uVar4 != uVar5) {
    uVar1 = uVar3;
  }
  return uVar1;
}

