
void FUN_00228ee0(long *param_1,void *param_2,uint param_3)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 3) & 0x3f;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) + param_3;
  uVar1 = 0x40 - (int)uVar3;
  uVar2 = param_3 - uVar1;
  if (param_3 < uVar1) {
    if (param_3 != 0) {
      memcpy((void *)((long)param_1 + uVar3 + 0x1c),param_2,(ulong)param_3);
      return;
    }
  }
  else {
    __dest = (void *)((long)param_1 + 0x1c);
    memcpy((void *)((long)__dest + uVar3),param_2,(ulong)uVar1);
    (**(code **)(*param_1 + 0x28))(param_1);
    param_2 = (void *)((ulong)uVar1 + (long)param_2);
    if (0x3f < uVar2) {
      uVar3 = (ulong)(uVar2 >> 6) + 1;
      do {
        memcpy(__dest,param_2,0x40);
        param_2 = (void *)((long)param_2 + 0x40);
        (**(code **)(*param_1 + 0x28))(param_1);
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
    if ((uVar2 & 0x3f) != 0) {
      memcpy(__dest,param_2,(ulong)(uVar2 & 0x3f));
      return;
    }
  }
  return;
}

