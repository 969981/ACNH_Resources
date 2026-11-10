
void FUN_00155f2c(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  size_t __n;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar1 = uVar2 + param_3 & 0x1fffffff;
  uVar4 = (ulong)uVar2 & 0x3f;
  if (uVar1 < uVar2) {
    uVar3 = uVar3 + 1;
  }
  *param_1 = uVar1;
  param_1[1] = uVar3 + (param_3 >> 0x1d);
  if ((int)uVar4 != 0) {
    __n = 0x40 - uVar4;
    if (param_3 < __n) {
      param_1 = (uint *)((long)param_1 + uVar4);
      goto LAB_00155fe4;
    }
    memcpy((void *)((long)(param_1 + 6) + uVar4),param_2,__n);
    param_2 = (void *)((long)param_2 + __n);
    param_3 = param_3 - (int)__n;
    FUN_0015631c(param_1,param_1 + 6,0x40);
  }
  if (0x3f < param_3) {
    param_2 = (void *)FUN_0015631c(param_1,param_2,param_3 & 0xffffffc0);
    param_3 = param_3 & 0x3f;
  }
LAB_00155fe4:
  memcpy(param_1 + 6,param_2,(ulong)param_3);
  return;
}

