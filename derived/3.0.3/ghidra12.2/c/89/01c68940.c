
void FUN_01c68940(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 *__dest;
  undefined8 *puVar7;
  undefined8 *puVar6;
  
  uVar2 = param_1[2];
  __dest = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((long)(uVar2 - (long)__dest) >> 3)) {
    puVar3 = (undefined8 *)param_1[1];
    sVar5 = (long)puVar3 - (long)__dest;
    uVar2 = (long)sVar5 >> 3;
    if (uVar2 < param_4) {
      if (puVar3 != __dest) {
        memmove(__dest,param_2,sVar5);
        __dest = (undefined8 *)param_1[1];
      }
      puVar3 = __dest;
      if (param_2 + uVar2 != param_3) {
        puVar4 = __dest;
        puVar6 = param_2 + uVar2;
        do {
          puVar7 = puVar6 + 1;
          puVar3 = puVar3 + 1;
          *puVar4 = *puVar6;
          puVar4 = puVar4 + 1;
          puVar6 = puVar7;
        } while (puVar7 != param_3);
      }
      sVar5 = (long)puVar3 - (long)__dest;
    }
    else {
      sVar5 = (long)param_3 - (long)param_2;
      if (sVar5 != 0) {
        memmove(__dest,param_2,sVar5);
      }
    }
LAB_01c68a88:
    param_1[1] = (long)__dest + sVar5;
    return;
  }
  if (__dest != (undefined8 *)0x0) {
    param_1[1] = (long)__dest;
    FUN_00187e4c(__dest);
    uVar2 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (param_4 >> 0x3d == 0) {
    uVar1 = (long)uVar2 >> 2;
    if ((ulong)((long)uVar2 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 >> 0x3d == 0) {
      __dest = (undefined8 *)FUN_00187df4(uVar1 * 8);
      *param_1 = (long)__dest;
      param_1[2] = (long)(__dest + uVar1);
      param_1[1] = (long)__dest;
      puVar3 = __dest;
      if (param_2 != param_3) {
        puVar4 = __dest;
        do {
          puVar6 = param_2 + 1;
          puVar3 = puVar4 + 1;
          *puVar4 = *param_2;
          puVar4 = puVar3;
          param_2 = puVar6;
        } while (puVar6 != param_3);
      }
      sVar5 = (long)puVar3 - (long)__dest;
      goto LAB_01c68a88;
    }
  }
  FUN_01c6892c(param_1);
  return;
}

