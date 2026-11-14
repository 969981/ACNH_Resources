
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a4ca70(undefined4 *param_1,uint *param_2,long *param_3,uint param_4,
                 code *UNRECOVERED_JUMPTABLE,ulong param_6)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  
  lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  uVar5 = DAT_0558600c;
  lVar9 = 0;
  iVar7 = 0;
  do {
    puVar1 = (uint *)(lVar6 + lVar9);
    lVar9 = lVar9 + 4;
    uVar8 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar8 = uVar8 + (uVar8 >> 8);
    iVar7 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar7;
  } while (lVar9 != 0x754);
  if (iVar7 == 0) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar5;
  }
  else {
    if (param_4 != 0) {
      uVar8 = (param_4 ^ param_4 >> 0x1e) * 0x6c078965 + 1;
      uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
      *param_2 = uVar8;
      param_2[1] = uVar4;
      uVar8 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
      param_2[2] = uVar8;
      param_2[3] = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
    }
    lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
    lVar9 = 0;
    uVar8 = 0;
    do {
      puVar1 = (uint *)(lVar6 + lVar9);
      lVar9 = lVar9 + 4;
      uVar4 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      uVar8 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar8;
    } while (lVar9 != 0x754);
    uVar3 = param_2[3];
    uVar4 = *param_2 ^ *param_2 << 0xb;
    *param_2 = param_2[1];
    param_2[1] = param_2[2];
    uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    FUN_00889f80(param_1,param_3,(int)((ulong)uVar4 * (ulong)uVar8 >> 0x20) + 1);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) || (param_6 != 0 && (param_6 & 1) != 0)) {
      plVar2 = (long *)((long)param_2 + ((long)param_6 >> 1));
      if ((param_6 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01a4cc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,param_1);
      return;
    }
  }
  return;
}

