
void FUN_01363380(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_0131daa0(param_1 + 0x28);
  FUN_0130c3e0(param_1 + 0x1370);
  FUN_0131feb0(param_1 + 0x4730);
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a8de531 && (*(uint *)(param_1 + 0x4758) & 1) != 0) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar5 = (undefined8 *)(lVar7 + 8);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 0xa8);
    }
    FUN_012def80(param_1 + 0x4750,*puVar5);
  }
  *(undefined4 *)(param_1 + 0x4780) = 0;
  *(undefined8 *)(param_1 + 0x4788) = 0;
  local_40 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 0x4790) = 0;
  local_40 = local_40 + 0x10;
  pcStack_38 = "ValidateVillageSave";
  uVar4 = FUN_0273f0a0(&local_40);
  if ((uVar4 & 1) != 0) goto LAB_01363564;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar5 = (undefined8 *)(lVar7 + 8);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar3 + 0xa8);
  }
  uVar6 = *puVar5;
  lVar3 = *(long *)PTR_DAT_04bb46b0;
  if (lVar3 == 0) {
LAB_013634e8:
    lVar3 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar5 + 0x38))();
      lVar3 = 0;
      if (lVar7 != 0) {
        lVar3 = lVar7 + 0x70;
      }
    }
    else {
      if (puVar5 == (undefined8 *)0x0) goto LAB_013634e8;
      lVar3 = 0;
      if ((long *)puVar5[0x26] != (long *)0x0) {
        lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar3 + 0xe7648) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar3 + 0xe7648), puVar5 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar5)();
    uVar2 = uVar2 ^ 1;
  }
  uVar1 = *(undefined2 *)(*(long *)(lVar3 + 0xe7630) + *(long *)(lVar3 + 0xe7628) + 0x10063e);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0xe7648) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0xe7648) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  FUN_0126afe0(param_1 + 0x3a90,uVar6,uVar1);
LAB_01363564:
  FUN_01371564(param_1 + 0x4928);
  FUN_0126d940(param_1 + 0x4b68);
  FUN_0126fce0(param_1 + 0x4b90);
  return;
}

