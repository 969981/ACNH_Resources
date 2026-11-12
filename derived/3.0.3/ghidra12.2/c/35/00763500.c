
void FUN_00763500(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined8 *local_48;
  long *local_40;
  uint local_38;
  
  uVar1 = param_1[4];
  if (*param_1 <= uVar1) {
    uVar1 = 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8) = param_2;
  uVar8 = param_1[4];
  uVar2 = *param_1;
  plVar5 = *(long **)(param_1 + 2);
  uVar1 = uVar8;
  if (uVar2 <= uVar8) {
    uVar1 = 0;
  }
  plVar6 = plVar5 + (int)uVar1;
  if (uVar1 != uVar2) {
    lVar7 = (long)(int)uVar2 * 8 + (long)(int)uVar1 * -8;
    do {
      uVar8 = uVar8 + 1;
      if (*plVar6 == 0) goto LAB_00763584;
      param_1[4] = uVar8;
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
    plVar6 = plVar5 + (int)uVar2;
  }
LAB_00763584:
  plVar4 = *(long **)(param_1 + 6);
  if (*(long **)(param_1 + 6) < plVar6) {
    *(long **)(param_1 + 6) = plVar6;
    plVar4 = plVar6;
  }
  if (param_1[9] == 0xfffff) {
    *(undefined1 *)(param_1 + 10) = 1;
    local_38 = 2;
    param_1[9] = 2;
  }
  else {
    local_38 = param_1[9] + 1;
    param_1[9] = local_38;
    if ((char)param_1[10] == '\0') {
      return;
    }
  }
  local_40 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8);
  local_48 = (undefined8 *)(PTR_DAT_04bb3310 + 0x10);
  if (plVar5 <= plVar4) {
    do {
      plVar5 = *(long **)(param_1 + 2);
      if (plVar4 <= plVar5) {
        return;
      }
      do {
        if ((*plVar5 != 0) && ((*(uint *)(*plVar5 + 0x248) >> 1 & 1) == 0)) {
          uVar3 = (*(code *)*local_48)(&local_48);
          plVar4 = *(long **)(param_1 + 6);
          if ((uVar3 & 1) != 0) {
            plVar6 = plVar5;
            break;
          }
        }
        plVar5 = plVar5 + 1;
        plVar6 = plVar4;
      } while (plVar5 != plVar4);
      local_40 = plVar6 + (plVar6 != plVar4);
      if (plVar6 == plVar4) {
        return;
      }
      local_38 = param_1[9] + 1;
      param_1[9] = local_38;
    } while (local_38 != 0xfffff);
    param_1[9] = 2;
  }
  return;
}

