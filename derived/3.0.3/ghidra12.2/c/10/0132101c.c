
void FUN_0132101c(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_34 [2];
  
  plVar8 = (long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = (**(code **)*plVar8)(plVar8);
  if (lVar6 == 0) {
    return;
  }
  uVar1 = *(int *)(param_2 + 8) - *(int *)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x30) <= uVar1) {
    return;
  }
  uVar2 = *(int *)(param_2 + 0xc) - *(int *)(param_1 + 0x44);
  if (*(uint *)(param_1 + 0x34) <= uVar2) {
    return;
  }
  plVar8 = (long *)(**(code **)*plVar8)(plVar8);
  uVar3 = (**(code **)(*plVar8 + 0x18))();
  uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8);
  lVar6 = plVar8[5];
  if (uVar3 <= uVar1) {
    uVar1 = 0;
  }
  if (uVar4 <= uVar2) {
    uVar2 = 0;
  }
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = plVar8[5];
      uVar5 = uVar5 & 0xffffffff;
      if (lVar6 == 0) goto LAB_01321164;
    }
    if (*(long *)(lVar6 + 0x20) != 0) {
      local_68 = plVar8[1];
      local_60 = (**(code **)(*plVar8 + 0x28))(plVar8,uVar1,uVar2);
      uStack_58 = 2;
      (**(code **)(**(long **)(plVar8[5] + 0x20) + 0x20))(*(long **)(plVar8[5] + 0x20),&local_68);
    }
  }
LAB_01321164:
  lVar6 = (**(code **)(*plVar8 + 0x28))(plVar8,uVar1,uVar2);
  lVar9 = plVar8[1];
  FUN_007ef010(local_34,param_3);
  *(undefined2 *)(lVar6 + lVar9) = local_34[0];
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 != 0) {
    if (((uint)(*(int *)(param_2 + 8) - *(int *)(lVar6 + 0x28)) < *(uint *)(lVar6 + 0x18)) &&
       ((uint)(*(int *)(param_2 + 0xc) - *(int *)(lVar6 + 0x2c)) < *(uint *)(lVar6 + 0x1c))) {
      lVar6 = lVar6 + 0x40;
    }
    else {
      if ((*(char *)(lVar6 + 0x88) == '\0') ||
         ((*(uint *)(lVar6 + 0xa0) <= (uint)(*(int *)(param_2 + 8) - *(int *)(lVar6 + 0x98)) ||
          (*(uint *)(lVar6 + 0xa4) <= (uint)(*(int *)(param_2 + 0xc) - *(int *)(lVar6 + 0x9c))))))
      goto LAB_0132120c;
      lVar6 = lVar6 + 0xa8;
    }
    FUN_0138367c(lVar6);
  }
LAB_0132120c:
  if ((((uVar5 & 1) != 0) && (plVar8[5] != 0)) &&
     (puVar7 = *(undefined8 **)(plVar8[5] + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

