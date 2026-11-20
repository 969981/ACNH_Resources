
undefined8 FUN_03fffa3c(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  void *__dest;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  plVar3 = DAT_05b059a0;
  uVar1 = param_2 + 1;
  if (param_2 != -1) {
    uVar7 = *param_1;
    if (uVar1 <= uVar7) {
      return 0;
    }
    if (param_2 == 0) {
      *param_1 = 1;
      return 0;
    }
    if (uVar1 >> 0x3b == 0) {
      uVar4 = (**(code **)(*DAT_05b059a0 + 0x28))(DAT_05b059a0);
      if ((uVar4 & 1) == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,0);
        __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar1 * 0x20,8);
      }
      else {
        __dest = (void *)(**(code **)(*plVar3 + 0x20))(plVar3,0,uVar1 * 0x20,8);
      }
      if (__dest != (void *)0x0) {
        uVar2 = param_1[6];
        uVar4 = param_1[7];
        if (uVar4 < uVar2) {
          memcpy(__dest,(void *)param_1[3],uVar4 << 5);
          lVar8 = uVar7 - param_1[6];
          memcpy((void *)((long)__dest + lVar8 * -0x20 + uVar1 * 0x20),
                 (void *)(param_1[3] + param_1[6] * 0x20),lVar8 * 0x20);
          param_1[6] = uVar1 - lVar8;
        }
        else if (uVar2 < uVar4) {
          uVar6 = *param_1;
          uVar4 = (uVar6 - uVar2) + uVar4;
          uVar7 = 0;
          if (uVar6 <= uVar4) {
            uVar7 = uVar6;
          }
          memcpy(__dest,(void *)(param_1[3] + uVar2 * 0x20),(uVar4 - uVar7) * 0x20);
        }
        uVar7 = param_1[3];
        param_1[3] = (ulong)__dest;
        param_1[4] = 0;
        plVar5 = (long *)param_1[1];
        param_1[5] = uVar1;
        *param_1 = uVar1;
        param_1[1] = (ulong)plVar3;
        if (uVar7 == 0) {
          return 0;
        }
        (**(code **)(*plVar5 + 0x18))();
        return 0;
      }
    }
  }
  return 0x80000007;
}

