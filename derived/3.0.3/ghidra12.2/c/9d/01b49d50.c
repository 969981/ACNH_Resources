
void FUN_01b49d50(byte *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  bVar7 = *param_1;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_58 = CONCAT71(local_58._1_7_,bVar7);
  lVar2 = FUN_02583354(DAT_055021a0,&local_58,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar6 + 0x83f0);
  lVar2 = *(long *)(lVar6 + 0x8410);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      lVar2 = *(long *)(lVar6 + 0x8410);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar2 == 0) goto LAB_01b49e68;
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    if (plVar4 == (long *)0x0) {
      lVar8 = *plVar1;
      lVar9 = *(long *)(lVar6 + 0x83f8);
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    else {
      local_58 = *plVar1;
      local_50 = *(long *)(lVar6 + 0x83f8);
      local_48 = 0x808;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
      lVar8 = *plVar1;
      lVar9 = *(long *)(lVar6 + 0x83f8);
      if (*(long *)(lVar6 + 0x8410) == 0) goto LAB_01b49e6c;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x8410) + 0x20);
    }
    if (plVar4 == (long *)0x0) goto LAB_01b49e6c;
    local_48 = 0x808;
    local_58 = lVar8;
    local_50 = lVar9;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  }
LAB_01b49e68:
  lVar8 = *plVar1;
  lVar9 = *(long *)(lVar6 + 0x83f8);
LAB_01b49e6c:
  lVar9 = lVar9 + lVar8;
  memset((void *)(lVar9 + 0x438),0,0x3c8);
  *(undefined1 *)(lVar9 + 0x4fb) = 0;
  *(undefined2 *)(lVar9 + 0x4f8) = 0xfffe;
  FUN_0277d4ac(lVar9 + 0x4f8);
  *(undefined1 *)(lVar9 + 0x500) = 0;
  *(undefined1 *)(lVar9 + 0x504) = 0;
  memset((void *)(lVar9 + 0x506),0,0x2a2);
  *(undefined2 *)(lVar9 + 0x7a8) = 0xfffe;
  *(undefined8 *)(lVar9 + 0x7ac) = 0;
  *(undefined8 *)(lVar9 + 0x7b4) = 0;
  *(undefined8 *)(lVar9 + 0x7bc) = 0;
  *(undefined8 *)(lVar9 + 0x7c4) = 0;
  *(undefined8 *)(lVar9 + 0x7cc) = 0;
  *(undefined8 *)(lVar9 + 0x7d4) = 0;
  *(undefined8 *)(lVar9 + 0x7dc) = 0;
  *(undefined8 *)(lVar9 + 0x7e4) = 0;
  if ((*(long *)(lVar6 + 0x8410) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar6 + 0x8410) + 0x20), plVar4 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(long *)(lVar6 + 0x83f8);
    local_48 = 0x808;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  }
  *(undefined4 *)(*(long *)(lVar6 + 0x83f8) + *plVar1 + 0x800) = 0;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x8410) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x8410) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

