
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00397aa4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = _UNK_04102628;
  lVar3 = _DAT_04102620;
  lVar2 = DAT_04102218;
  lVar1 = DAT_04102210;
  if ((long *)param_1[1] == (long *)0x0) {
    return;
  }
  fVar5 = *(float *)(*param_1 + 0x20);
  fVar7 = *(float *)(*param_1 + 0x24);
  fVar8 = 1.0 / fVar5;
  fVar6 = fVar7;
  if ((*(byte *)(param_2 + 0x18e) & 8) != 0) {
    fVar6 = 0.0 - fVar7;
  }
  fVar6 = 1.0 / fVar6;
  param_1[5] = (ulong)(uint)-((fVar5 + 0.0) * fVar8) << 0x20;
  param_1[4] = (ulong)(uint)(fVar8 + fVar8);
  param_1[7] = (ulong)(uint)-((fVar7 + 0.0) * fVar6) << 0x20;
  param_1[6] = (ulong)(uint)(fVar6 + fVar6) << 0x20;
  param_1[9] = lVar4;
  param_1[8] = lVar3;
  param_1[0xb] = lVar2;
  param_1[10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00397b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x20))();
  return;
}

