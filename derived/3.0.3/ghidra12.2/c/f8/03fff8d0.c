
undefined8 FUN_03fff8d0(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *__dest;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  size_t __n;
  
  plVar3 = DAT_05b059a0;
  uVar1 = param_2 + 1;
  if (param_2 == -1) {
LAB_03fff8ec:
    uVar4 = 0x80000007;
  }
  else {
    uVar8 = *param_1;
    if (uVar8 < uVar1) {
      if (param_2 == 0) {
        *param_1 = 1;
        return 0;
      }
      uVar5 = (**(code **)(*DAT_05b059a0 + 0x28))(DAT_05b059a0);
      if ((uVar5 & 1) == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,0);
        __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar1,1);
      }
      else {
        __dest = (void *)(**(code **)(*plVar3 + 0x20))(plVar3,0,uVar1,1);
      }
      if (__dest == (void *)0x0) goto LAB_03fff8ec;
      uVar2 = param_1[6];
      uVar5 = param_1[7];
      if (uVar5 < uVar2) {
        memcpy(__dest,(void *)param_1[3],uVar5);
        __n = uVar8 - param_1[6];
        memcpy((void *)((long)__dest + (uVar1 - __n)),(void *)(param_1[3] + param_1[6]),__n);
        param_1[6] = uVar1 - __n;
      }
      else if (uVar2 < uVar5) {
        uVar7 = *param_1;
        uVar5 = (uVar7 - uVar2) + uVar5;
        uVar8 = 0;
        if (uVar7 <= uVar5) {
          uVar8 = uVar7;
        }
        memcpy(__dest,(void *)(param_1[3] + uVar2),uVar5 - uVar8);
      }
      uVar8 = param_1[3];
      param_1[3] = (ulong)__dest;
      param_1[4] = 0;
      plVar6 = (long *)param_1[1];
      param_1[5] = uVar1;
      *param_1 = uVar1;
      param_1[1] = (ulong)plVar3;
      if (uVar8 != 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

