
void FUN_03782630(uint *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined2 uVar6;
  long lVar7;
  long lVar8;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar7 = *(long *)PTR_DAT_04bb27f8;
  local_48 = PTR_DAT_04bb7648 + 0x10;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar8 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar8 == 0)) {
    puVar1 = (undefined2 *)(lVar7 + 0x2c);
    if ((*(ushort *)(lVar7 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar7 + 0x2a);
    }
    uVar6 = *puVar1;
  }
  else if ((*(long **)(lVar8 + 0x60) == (long *)0x0) ||
          (puVar3 = (undefined8 *)**(long **)(lVar8 + 0x60), puVar3 == (undefined8 *)0x0)) {
    uVar6 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    uVar6 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x60) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar8 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  local_40 = CONCAT62(local_40._2_6_,uVar6);
  lVar8 = FUN_03775a30(&local_48);
  if (lVar8 == 0) {
    return;
  }
  uVar2 = *param_1;
  if (3 < uVar2) {
    uVar2 = 1;
  }
  *(uint *)(lVar7 + 4) = uVar2;
  lVar7 = *(long *)(lVar8 + 0x28);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_03782784;
      plVar5 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined **)(lVar8 + 8);
      local_40 = *(undefined8 *)(lVar8 + 0x10);
      local_38 = 0x48b0;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_03782784:
  local_48 = (undefined *)CONCAT44(local_48._4_4_,*param_1);
  *(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 4) = (char)*param_1;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

