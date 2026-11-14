
void FUN_01c6ec00(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  size_t sVar6;
  undefined2 *__dest;
  undefined2 *puVar8;
  undefined2 *puVar7;
  
  uVar3 = param_1[2];
  __dest = (undefined2 *)*param_1;
  if (param_4 <= (ulong)((long)(uVar3 - (long)__dest) >> 1)) {
    puVar4 = (undefined2 *)param_1[1];
    sVar6 = (long)puVar4 - (long)__dest;
    uVar3 = (long)sVar6 >> 1;
    if (uVar3 < param_4) {
      if (puVar4 != __dest) {
        memmove(__dest,param_2,sVar6);
        __dest = (undefined2 *)param_1[1];
      }
      puVar4 = __dest;
      if (param_2 + uVar3 != param_3) {
        puVar5 = __dest;
        puVar7 = param_2 + uVar3;
        do {
          puVar8 = puVar7 + 1;
          puVar4 = puVar4 + 1;
          *puVar5 = *puVar7;
          puVar5 = puVar5 + 1;
          puVar7 = puVar8;
        } while (puVar8 != param_3);
      }
      sVar6 = (long)puVar4 - (long)__dest;
    }
    else {
      sVar6 = (long)param_3 - (long)param_2;
      if (sVar6 != 0) {
        memmove(__dest,param_2,sVar6);
      }
    }
LAB_01c6ed44:
    param_1[1] = (long)__dest + sVar6;
    return;
  }
  if (__dest != (undefined2 *)0x0) {
    param_1[1] = __dest;
    FUN_00187e4c(__dest);
    uVar3 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if (-1 < (long)param_4) {
    uVar1 = uVar3;
    if (uVar3 <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffd < uVar3) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (-1 < (long)uVar1) {
      __dest = (undefined2 *)FUN_00187df4(uVar1 * 2);
      *param_1 = __dest;
      param_1[2] = __dest + uVar1;
      param_1[1] = __dest;
      puVar4 = __dest;
      if (param_2 != param_3) {
        puVar5 = __dest;
        do {
          puVar7 = param_2 + 1;
          puVar4 = puVar5 + 1;
          *puVar5 = *param_2;
          puVar5 = puVar4;
          param_2 = puVar7;
        } while (puVar7 != param_3);
      }
      sVar6 = (long)puVar4 - (long)__dest;
      goto LAB_01c6ed44;
    }
  }
  lVar2 = FUN_01c6e558(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
  if ((*(ulong *)(lVar2 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(lVar2 + 8) + ((long)*(ulong *)(lVar2 + 0x18) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x01c6ed80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

