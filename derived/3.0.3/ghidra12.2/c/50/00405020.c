
void FUN_00405020(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *__dest;
  undefined8 *puVar8;
  
  uVar4 = param_1[2];
  __dest = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((long)(uVar4 - (long)__dest) >> 3)) {
    plVar2 = param_1 + 1;
    sVar3 = *plVar2 - (long)__dest;
    uVar4 = (long)sVar3 >> 3;
    if (uVar4 < param_4) {
      if ((undefined8 *)*plVar2 != __dest) {
        memmove(__dest,param_2,sVar3);
        __dest = (undefined8 *)*plVar2;
      }
      if (param_2 + uVar4 != param_3) {
        puVar6 = __dest;
        puVar5 = param_2 + uVar4;
        do {
          puVar8 = puVar5 + 1;
          __dest = __dest + 1;
          *puVar6 = *puVar5;
          puVar6 = puVar6 + 1;
          puVar5 = puVar8;
        } while (puVar8 != param_3);
      }
      *plVar2 = (long)__dest;
      return;
    }
    sVar3 = (long)param_3 - (long)param_2;
    lVar7 = 0;
    if (sVar3 != 0) {
      memmove(__dest,param_2,sVar3);
      *plVar2 = (long)__dest + sVar3;
      return;
    }
LAB_004050e8:
    param_1[1] = (long)__dest + lVar7;
    return;
  }
  if (__dest != (undefined8 *)0x0) {
    param_1[1] = (long)__dest;
    FUN_00187e4c(__dest);
    uVar4 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (param_4 >> 0x3d == 0) {
    uVar1 = (long)uVar4 >> 2;
    if ((ulong)((long)uVar4 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 >> 0x3d == 0) {
      __dest = (undefined8 *)FUN_00187df4(uVar1 * 8);
      *param_1 = (long)__dest;
      param_1[2] = (long)(__dest + uVar1);
      param_1[1] = (long)__dest;
      puVar6 = __dest;
      if (param_2 != param_3) {
        puVar5 = __dest;
        do {
          puVar8 = param_2 + 1;
          puVar6 = puVar5 + 1;
          *puVar5 = *param_2;
          puVar5 = puVar6;
          param_2 = puVar8;
        } while (puVar8 != param_3);
      }
      lVar7 = (long)puVar6 - (long)__dest;
      goto LAB_004050e8;
    }
  }
  plVar2 = (long *)FUN_00404498(param_1);
  *plVar2 = (long)(PTR_DAT_04bd2830 + 0x10);
  if (plVar2[2] != 0) {
    plVar2[3] = plVar2[2];
    FUN_00187e4c();
  }
  FUN_00185ac4(plVar2);
  return;
}

