
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e4d78(undefined4 *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  plVar12 = (long *)(param_2 + 0x28);
  iVar1 = *(int *)(param_3 + 0xc);
  iVar2 = *(int *)(param_2 + 0x14);
  uVar4 = *(int *)(param_3 + 8) - *(int *)(param_2 + 0x10);
  plVar8 = (long *)(**(code **)*plVar12)(plVar12);
  uVar5 = (**(code **)(*plVar8 + 0x18))();
  if (uVar4 < uVar5) {
    uVar5 = iVar1 - iVar2;
    plVar8 = (long *)(**(code **)*plVar12)(plVar12);
    uVar6 = (**(code **)(*plVar8 + 0x20))();
    if (((uVar5 < uVar6) && (uVar9 = (**(code **)(*plVar12 + 0x10))(plVar12), (uVar9 & 1) != 0)) &&
       (lVar10 = (**(code **)*plVar12)(plVar12), lVar10 != 0)) {
      if (((*(long *)(param_2 + 0x1b8) != 0) && (uVar4 < *(uint *)(param_2 + 0x1c8))) &&
         (uVar5 < *(uint *)(param_2 + 0x1cc))) {
        iVar1 = *(int *)(param_2 + 0x1c4);
        uVar6 = uVar4 + *(uint *)(param_2 + 0x1c8) * uVar5;
        *(int *)(param_2 + 0x1c4) = iVar1 + 1;
        if (((int)uVar6 < 0) || (*(int *)(param_2 + 0x1c0) <= (int)uVar6)) {
          *(int *)(param_2 + 0x1c4) = iVar1;
        }
        else {
          uVar7 = *(uint *)(*(long *)(param_2 + 0x1b8) + (ulong)(uVar6 >> 5) * 4);
          *(int *)(param_2 + 0x1c4) = iVar1;
          if ((uVar7 >> (ulong)(uVar6 & 0x1f) & 1) != 0) goto LAB_012e4e6c;
        }
      }
      plVar8 = (long *)(**(code **)*plVar12)(plVar12);
      uVar6 = (**(code **)(*plVar8 + 0x18))();
      uVar7 = (**(code **)(*plVar8 + 0x20))(plVar8);
      if (uVar6 <= uVar4) {
        uVar4 = 0;
      }
      if (uVar7 <= uVar5) {
        uVar5 = 0;
      }
      if (((long *)plVar8[5] == (long *)0x0) ||
         (puVar11 = *(undefined8 **)plVar8[5], puVar11 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)*puVar11)();
        uVar6 = uVar6 ^ 1;
      }
      lVar10 = (**(code **)(*plVar8 + 0x28))(plVar8,uVar4,uVar5);
      uVar3 = ((undefined4 *)(lVar10 + plVar8[1]))[1];
      *param_1 = *(undefined4 *)(lVar10 + plVar8[1]);
      param_1[1] = uVar3;
      if ((uVar6 & 1) != 0) {
        return;
      }
      if (plVar8[5] == 0) {
        return;
      }
      puVar11 = *(undefined8 **)(plVar8[5] + 8);
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x012e4f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar11)();
      return;
    }
  }
LAB_012e4e6c:
  uVar3 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar3;
  return;
}

