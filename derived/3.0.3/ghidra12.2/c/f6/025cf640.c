
void FUN_025cf640(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_58;
  Any64BitId *local_50;
  ulong local_48;
  
  puVar2 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_58 = (undefined *)CONCAT71(local_58._1_7_,*(byte *)(param_1 + 0x18));
    lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
  }
  else {
    if ((*(int *)(param_1 + 0x1c) == -1) || (DAT_05574040 == 0)) goto LAB_025cf878;
    lVar4 = FUN_026eec4c();
  }
  if (lVar4 == 0) goto LAB_025cf878;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar7 = *(long *)(DAT_05574040 + 0x20);
    plVar8 = *(long **)(lVar7 + 0x98);
    if (plVar8 != (long *)0x0) goto LAB_025cf6fc;
LAB_025cf718:
    uVar10 = 0;
  }
  else {
    lVar7 = lVar4 + 0x194b0;
    plVar8 = *(long **)(lVar4 + 0x19548);
    if (plVar8 == (long *)0x0) goto LAB_025cf718;
LAB_025cf6fc:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_025cf718;
    uVar10 = (*(code *)**(undefined8 **)*plVar8)();
    uVar10 = uVar10 & 0xffffffff;
  }
  uVar5 = FUN_027fd4c0(*(long *)(lVar7 + 0x80) + *(long *)(lVar7 + 0x78));
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x98) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x98) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  lVar9 = *(long *)(param_1 + 0x28);
  local_58 = puVar2 + 0x10;
  local_50 = (Any64BitId *)0x4092cbf;
  lVar7 = nn::prepo::Struct::GetBuffer();
  if (lVar7 != 0) {
    local_48 = uVar5 & 0xffffffff;
    (**(code **)(local_58 + 0x18))(&local_58);
    nn::prepo::Struct::Add((char *)(lVar9 + 8),local_50);
  }
  if (*(long **)(lVar4 + 0x18358) == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar6 = (undefined8 *)**(long **)(lVar4 + 0x18358);
    uVar10 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar6)();
    }
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar4 + 0x18358) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x18358) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  lVar7 = *(long *)(param_1 + 0x28);
  lVar4 = nn::prepo::Struct::GetBuffer();
  if (lVar4 != 0) {
    nn::prepo::Struct::Add((char *)(lVar7 + 8),0x40cb0dc);
  }
LAB_025cf878:
  lVar4 = FUN_02602680(param_1);
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8));
    if (8 < uVar1) {
      uVar1 = 0;
    }
    local_48 = CONCAT44(local_48._4_4_,uVar1);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    lVar9 = *(long *)(param_1 + 0x28);
    lVar7 = nn::prepo::Struct::GetBuffer();
    if (lVar7 != 0) {
      nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40b1a21);
    }
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    local_58 = puVar2 + 0x10;
    local_50 = (Any64BitId *)0x40c10c4;
    FUN_0273c490(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x20,&local_58);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    lVar7 = *(long *)(param_1 + 0x28);
    lVar4 = nn::prepo::Struct::GetBuffer();
    if (lVar4 != 0) {
      nn::prepo::Struct::Add((char *)(lVar7 + 8),0x40db13d);
    }
  }
  local_58 = puVar2 + 0x10;
  local_50 = (Any64BitId *)0x407d30e;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_58,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

