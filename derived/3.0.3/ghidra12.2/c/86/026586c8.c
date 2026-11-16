
/* WARNING: Type propagation algorithm not settling */

long FUN_026586c8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined **local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bb46b0;
  if (param_1 != 0) {
    lVar4 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))();
    if (lVar4 != 0) {
      plVar8 = *(long **)(lVar4 + 0xe7680);
      if ((plVar8 == (long *)0x0) || (puVar5 = (undefined8 *)*plVar8, puVar5 == (undefined8 *)0x0))
      {
        local_50 = &PTR_LAB_048f9770;
        pcStack_48 = "NeedUpdatePassword";
        uVar7 = FUN_0273f0a0(&local_50);
      }
      else {
        uVar6 = (**(code **)*puVar5)();
        local_50 = &PTR_LAB_048f9770;
        pcStack_48 = "NeedUpdatePassword";
        uVar7 = FUN_0273f0a0(&local_50);
        if ((((uVar6 & 1) != 0) && (lVar4 = *(long *)(lVar4 + 0xe7680), lVar4 != 0)) &&
           (puVar5 = *(undefined8 **)(lVar4 + 8), puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)();
        }
      }
      if ((uVar7 & 1) != 0) {
        return 0;
      }
    }
    if ((*(long **)(param_1 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(param_1 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    local_50 = &PTR_LAB_048f9770;
    pcStack_48 = "PasswordIsOld";
    iVar3 = FUN_0274bbb0(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 0xc170,&local_50);
    if ((((uVar2 & 1) == 0) && (*(long *)(param_1 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (iVar3 != 0) {
      return 0;
    }
    if ((*(long **)(param_1 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(param_1 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar5)();
      uVar7 = uVar7 & 0xffffffff;
    }
    local_50 = &PTR_LAB_048f9770;
    pcStack_48 = "NetIsRegistHomeLand";
    iVar3 = FUN_0274bbb0(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 0xc170,&local_50);
    if (iVar3 != 0) {
      lVar4 = param_1 + 0x194b0;
      if (*(long *)(param_1 + 0x194b8) == 0) {
        lVar4 = *(long *)(*(long *)puVar1 + 0x20);
      }
      if ((*(long **)(lVar4 + 0x24838) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x24838), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      lVar9 = *(long *)(*(long *)(lVar4 + 0x24820) + *(long *)(lVar4 + 0x24818));
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x24838) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x24838) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (lVar9 != 0) {
        if ((uVar7 & 1) == 0) {
          return lVar9;
        }
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 == 0) {
          return lVar9;
        }
        goto LAB_0265891c;
      }
    }
    if (((uVar7 & 1) != 0) && (lVar4 = *(long *)(param_1 + 0x28), lVar4 != 0)) {
      lVar9 = 0;
LAB_0265891c:
      if (*(undefined8 **)(lVar4 + 8) == (undefined8 *)0x0) {
        return lVar9;
      }
      (**(code **)**(undefined8 **)(lVar4 + 8))();
      return lVar9;
    }
  }
  return 0;
}

