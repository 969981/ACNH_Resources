
void FUN_02659600(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + 0x70;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar7[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
  }
  lVar8 = *(long *)(FUN_002051f0 + lVar3);
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(FUN_002051f0 + lVar3) == 0) goto LAB_026596e0;
      plVar5 = *(long **)(*(long *)(FUN_002051f0 + lVar3) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long *)(lVar3 + 0x2051d0);
      local_40 = *(undefined8 *)(FUN_002051d8 + lVar3);
      uStack_38 = 0x58;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_026596e0:
  lVar8 = *(long *)(FUN_002051d8 + lVar3) + *(long *)(lVar3 + 0x2051d0);
  uVar6 = param_1[3];
  uVar1 = param_1[4];
  uVar2 = param_1[2];
  *(undefined8 *)(lVar8 + 0x10) = param_1[1];
  *(undefined8 *)(lVar8 + 0x18) = uVar2;
  *(undefined8 *)(lVar8 + 0x20) = uVar6;
  *(undefined8 *)(lVar8 + 0x28) = uVar1;
  *(undefined8 *)(lVar8 + 8) = *param_1;
  uVar6 = nn::oe::GetDesiredLanguage();
  *(undefined8 *)(lVar8 + 0x30) = uVar6;
  if ((((uVar4 & 1) != 0) && (*(long *)(FUN_002051f0 + lVar3) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(FUN_002051f0 + lVar3) + 0x18), puVar7 != (undefined8 *)0x0
     )) {
    (**(code **)*puVar7)();
  }
  return;
}

