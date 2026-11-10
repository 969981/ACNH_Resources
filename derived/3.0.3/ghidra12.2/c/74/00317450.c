
void FUN_00317450(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  ulong uVar1;
  size_t sVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  undefined4 *__dest;
  undefined4 *puVar8;
  
  uVar3 = param_1[2];
  __dest = (undefined4 *)*param_1;
  if (param_4 <= (ulong)((long)(uVar3 - (long)__dest) >> 2)) {
    plVar6 = param_1 + 1;
    sVar2 = *plVar6 - (long)__dest;
    uVar3 = (long)sVar2 >> 2;
    if (uVar3 < param_4) {
      if ((undefined4 *)*plVar6 != __dest) {
        memmove(__dest,param_2,sVar2);
        __dest = (undefined4 *)*plVar6;
      }
      if (param_2 + uVar3 != param_3) {
        puVar5 = __dest;
        puVar4 = param_2 + uVar3;
        do {
          puVar8 = puVar4 + 1;
          __dest = __dest + 1;
          *puVar5 = *puVar4;
          puVar5 = puVar5 + 1;
          puVar4 = puVar8;
        } while (puVar8 != param_3);
      }
      *plVar6 = (long)__dest;
      return;
    }
    sVar2 = (long)param_3 - (long)param_2;
    lVar7 = 0;
    if (sVar2 != 0) {
      memmove(__dest,param_2,sVar2);
      *plVar6 = (long)__dest + sVar2;
      return;
    }
LAB_00317518:
    param_1[1] = (long)__dest + lVar7;
    return;
  }
  if (__dest != (undefined4 *)0x0) {
    param_1[1] = __dest;
    FUN_00187e4c(__dest);
    uVar3 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (param_4 >> 0x3e == 0) {
    uVar1 = (long)uVar3 >> 1;
    if ((ulong)((long)uVar3 >> 1) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 >> 0x3e == 0) {
      __dest = (undefined4 *)FUN_00187df4(uVar1 * 4);
      *param_1 = __dest;
      param_1[2] = __dest + uVar1;
      puVar5 = __dest;
      if (param_2 != param_3) {
        puVar4 = __dest;
        do {
          puVar8 = param_2 + 1;
          puVar5 = puVar4 + 1;
          *puVar4 = *param_2;
          puVar4 = puVar5;
          param_2 = puVar8;
        } while (puVar8 != param_3);
      }
      lVar7 = (long)puVar5 - (long)__dest;
      goto LAB_00317518;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001a3240(param_1);
}

