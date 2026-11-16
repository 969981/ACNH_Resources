
void FUN_02818bc0(long *param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar12 = *param_1;
  lVar10 = *(long *)(lVar12 + 0x28);
  if (lVar10 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar12 + 0x28) == 0) goto LAB_02818c4c;
      plVar7 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar12 + 8);
      uStack_50 = *(undefined8 *)(lVar12 + 0x10);
      local_48 = 0x37ad0;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
LAB_02818c4c:
  lVar10 = *(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8);
  FUN_027eff98(lVar10);
  FUN_0274f840(lVar10 + 0xc170);
  FUN_027a5750(lVar10 + 0xd170);
  *(undefined4 *)(lVar10 + 0x36904) = 0;
  *(undefined2 *)(lVar10 + 0x1341e) = 0;
  *(undefined2 *)(lVar10 + 0xafa2) = 0xff00;
  uVar5 = DAT_0558600c;
  uVar4 = DAT_0558600b;
  uVar3 = DAT_0558600a;
  uVar2 = DAT_05586008;
  *(undefined1 *)(lVar10 + 0xc11a) = DAT_0558600a;
  *(undefined1 *)(lVar10 + 0xc11b) = uVar4;
  *(undefined2 *)(lVar10 + 0xafa8) = uVar2;
  *(undefined1 *)(lVar10 + 0xafaa) = uVar3;
  *(undefined1 *)(lVar10 + 0xafab) = uVar4;
  *(undefined4 *)(lVar10 + 0xafac) = uVar5;
  *(undefined2 *)(lVar10 + 0xb858) = uVar2;
  *(undefined1 *)(lVar10 + 0xb85a) = uVar3;
  *(undefined1 *)(lVar10 + 0xb85b) = uVar4;
  *(undefined4 *)(lVar10 + 0xb85c) = uVar5;
  *(undefined2 *)(lVar10 + 0xb860) = uVar2;
  *(undefined1 *)(lVar10 + 0xb862) = uVar3;
  *(undefined1 *)(lVar10 + 0xb863) = uVar4;
  *(undefined4 *)(lVar10 + 0xb864) = uVar5;
  *(undefined2 *)(lVar10 + 0xb868) = uVar2;
  *(undefined1 *)(lVar10 + 0xb86a) = uVar3;
  *(undefined1 *)(lVar10 + 0xb86b) = uVar4;
  *(undefined4 *)(lVar10 + 0xb86c) = uVar5;
  *(undefined1 *)(lVar10 + 0xc122) = uVar3;
  *(undefined1 *)(lVar10 + 0xc123) = uVar4;
  *(undefined2 *)(lVar10 + 0xc118) = uVar2;
  *(undefined4 *)(lVar10 + 0xc11c) = uVar5;
  *(undefined1 *)(lVar10 + 0xc12a) = uVar3;
  *(undefined1 *)(lVar10 + 0xc12b) = uVar4;
  *(undefined2 *)(lVar10 + 0xc120) = uVar2;
  *(undefined4 *)(lVar10 + 0xc124) = uVar5;
  *(undefined2 *)(lVar10 + 0xc128) = uVar2;
  *(undefined4 *)(lVar10 + 0xc12c) = uVar5;
  *(undefined2 *)(lVar10 + 0xc130) = uVar2;
  *(undefined1 *)(lVar10 + 0xc132) = uVar3;
  *(undefined1 *)(lVar10 + 0xc133) = uVar4;
  *(undefined4 *)(lVar10 + 0xc134) = uVar5;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  puVar1 = PTR_DAT_04bb46b0;
  lVar12 = *param_1;
  lVar10 = lVar12 + 0x194b0;
  if (*(long *)(lVar12 + 0x194b8) == 0) {
    lVar10 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    lVar12 = *(long *)(lVar10 + 0x28);
    if (lVar12 != 0) goto LAB_02818d9c;
LAB_02818e28:
    FUN_02813df0(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x194d8);
    if (lVar12 == 0) goto LAB_02818e28;
LAB_02818d9c:
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar12 + 0x20);
joined_r0x02818ec0:
      if (plVar7 != (long *)0x0) {
        local_58 = *(undefined8 *)(lVar10 + 8);
        uStack_50 = *(undefined8 *)(lVar10 + 0x10);
        local_48 = 0x3ce60;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
      }
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar10 + 0x28) != 0) {
        plVar7 = *(long **)(*(long *)(lVar10 + 0x28) + 0x20);
        goto joined_r0x02818ec0;
      }
    }
    FUN_02813df0(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    return;
  }
  puVar8 = *(undefined8 **)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
    lVar10 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar10 == 0) {
      return;
    }
    lVar10 = lVar10 + 0x70;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar8[0x26] == (long *)0x0) {
      return;
    }
    lVar10 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    if (lVar10 == 0) {
      return;
    }
  }
  lVar12 = *(long *)(lVar10 + 0xd0);
  if (lVar12 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar12 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar10 + 0xd0) == 0) goto LAB_02818f00;
      plVar7 = *(long **)(*(long *)(lVar10 + 0xd0) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar10 + 0xb0);
      uStack_50 = *(undefined8 *)(lVar10 + 0xb8);
      local_48 = 0x1e3388;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
LAB_02818f00:
  lVar12 = *(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0);
  lVar13 = *param_1;
  lVar11 = *(long *)(lVar13 + 0x28);
  if (lVar11 == 0) {
    FUN_027ea950(lVar12,*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0xc138);
    goto LAB_02818fb4;
  }
  if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
    uVar9 = 0;
    plVar7 = *(long **)(lVar11 + 0x20);
joined_r0x02818ff4:
    if (plVar7 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar13 + 8);
      uStack_50 = *(undefined8 *)(lVar13 + 0x10);
      local_48 = 0x37ad0;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
  else {
    uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    uVar9 = uVar9 & 0xffffffff;
    if (*(long *)(lVar13 + 0x28) != 0) {
      plVar7 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20);
      goto joined_r0x02818ff4;
    }
  }
  FUN_027ea950(lVar12,*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0xc138);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_02818fb4:
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0xd0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0xd0) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

