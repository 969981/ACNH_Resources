
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a50240(uint *param_1,long param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar6;
  long lVar5;
  uint local_38;
  uint uStack_34;
  
  uVar4 = FUN_01a4f798(param_2,param_3);
  if ((uVar4 & 1) == 0) goto LAB_01a50318;
  param_1[0] = 0xfffe;
  param_1[1] = 0;
  FUN_0277d4ac(param_1);
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 == 0) {
LAB_01a502d0:
    plVar6 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_01a502d4:
    lVar5 = *plVar6;
  }
  else {
    if (uVar3 != 0) {
      if (uVar3 == 0) goto LAB_01a502d0;
      plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar6 = plVar1 + uVar3;
      if (0x38 < uVar3) {
        plVar6 = plVar1;
      }
      goto LAB_01a502d4;
    }
    lVar5 = 0;
  }
  lVar2 = lVar5 + 200 + (ulong)param_3 * 0x10;
  if (7 < param_3) {
    lVar2 = lVar5 + 200;
  }
  if (*(long *)(lVar2 + 8) != 0) {
    local_38 = param_3;
    FUN_012e4d78(&local_38,*(long *)(lVar2 + 8),param_4);
    *param_1 = local_38;
    param_1[1] = uStack_34;
    return;
  }
LAB_01a50318:
  uVar3 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar3;
  return;
}

