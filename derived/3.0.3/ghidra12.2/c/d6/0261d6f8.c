
/* WARNING: Removing unreachable block (ram,0x0261d980) */
/* WARNING: Removing unreachable block (ram,0x0261d970) */
/* WARNING: Removing unreachable block (ram,0x0261d9cc) */

void FUN_0261d6f8(undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *local_48;
  char *local_40;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    return;
  }
  lVar8 = param_2 + 0x194b0;
  plVar9 = (long *)(param_2 + 0x194b8);
  lVar6 = lVar8;
  if (*plVar9 == 0) {
    lVar6 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  if (*(long **)(lVar6 + 0x86b0) == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar3 = (undefined8 *)**(long **)(lVar6 + 0x86b0);
    uVar4 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      uVar4 = (**(code **)*puVar3)();
    }
  }
  bVar1 = *(byte *)(*(long *)(lVar6 + 0x8698) + *(long *)(lVar6 + 0x8690) + 0x39);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x86b0) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x86b0) + 8), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  if (((bVar1 >> 2 & 1) != 0) && (uVar4 = FUN_02b61120(), (uVar4 & 1) != 0)) {
    lVar6 = lVar8;
    if (*plVar9 == 0) {
      lVar6 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    lVar7 = *(long *)(lVar6 + 0x86b0);
    if (lVar7 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        lVar7 = *(long *)(lVar6 + 0x86b0);
        uVar4 = uVar4 & 0xffffffff;
        if (lVar7 == 0) goto LAB_0261d824;
      }
      plVar5 = *(long **)(lVar7 + 0x20);
      if (plVar5 != (long *)0x0) {
        local_48 = *(undefined **)(lVar6 + 0x8690);
        local_40 = *(char **)(lVar6 + 0x8698);
        uStack_38 = 0x1400;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      }
    }
LAB_0261d824:
    lVar7 = *(long *)(lVar6 + 0x8698) + *(long *)(lVar6 + 0x8690);
    *(byte *)(lVar7 + 0x39) = *(byte *)(lVar7 + 0x39) & 0xfb;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x86b0) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x86b0) + 0x18), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  lVar6 = lVar8;
  if (*plVar9 == 0) {
    lVar6 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  if ((*(long **)(lVar6 + 0x86b0) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x86b0), puVar3 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar3)();
    uVar2 = uVar2 ^ 1;
  }
  bVar1 = *(byte *)(*(long *)(lVar6 + 0x8698) + *(long *)(lVar6 + 0x8690) + 0x39);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x86b0) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x86b0) + 8), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  if ((bVar1 >> 5 & 1) == 0) {
    return;
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "RcoBuildCampsiteComplete";
  uVar4 = FUN_0273f0a0(&local_48);
  if ((uVar4 & 1) == 0) {
    puVar3 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar3 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar3[1] == 0) {
      return;
    }
    local_48 = PTR_DAT_04bc43f8 + 0x10;
    local_40 = (char *)CONCAT44(local_40._4_4_,DAT_05636e70);
    if (DAT_05636e70 == 0) {
      return;
    }
    uVar4 = FUN_02a59140(puVar3,&local_48);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  if (*plVar9 == 0) {
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  lVar6 = *(long *)(lVar8 + 0x86b0);
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar8 + 0x86b0);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar6 == 0) goto LAB_0261da20;
    }
    plVar9 = *(long **)(lVar6 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_48 = *(undefined **)(lVar8 + 0x8690);
      local_40 = *(char **)(lVar8 + 0x8698);
      uStack_38 = 0x1400;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
    }
  }
LAB_0261da20:
  lVar6 = *(long *)(lVar8 + 0x8698) + *(long *)(lVar8 + 0x8690);
  *(byte *)(lVar6 + 0x39) = *(byte *)(lVar6 + 0x39) & 0xdf;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x86b0) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar8 + 0x86b0) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

