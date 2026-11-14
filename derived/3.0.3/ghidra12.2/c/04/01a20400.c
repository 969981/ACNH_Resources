
void FUN_01a20400(byte *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_34,1);
  if (lVar4 == 0) {
    return;
  }
  lVar13 = lVar4 + 0x194b0;
  plVar14 = (long *)(lVar4 + 0x194b8);
  lVar9 = lVar13;
  if (*plVar14 == 0) {
    lVar9 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar9 + 0x2d060);
  lVar10 = *(long *)(lVar9 + 0x2d080);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar9 + 0x2d080) == 0) goto LAB_01a204e8;
      plVar6 = *(long **)(*(long *)(lVar9 + 0x2d080) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_68 = *plVar1;
      local_60 = *(undefined8 *)(lVar9 + 0x2d068);
      local_58 = 2;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
    }
  }
LAB_01a204e8:
  if ((*(ushort *)(*(long *)(lVar9 + 0x2d068) + *plVar1) & 1) == 0) goto LAB_01a20754;
  if (*plVar14 == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
    lVar11 = *(long *)(lVar10 + 0xd0);
    if (lVar11 != 0) goto LAB_01a20524;
LAB_01a20548:
    uVar12 = 0;
    plVar6 = *(long **)(lVar9 + 0x2d0b8);
    if (plVar6 == (long *)0x0) goto LAB_01a20578;
LAB_01a20554:
    if ((undefined8 *)*plVar6 == (undefined8 *)0x0) goto LAB_01a20578;
    uVar7 = (*(code *)**(undefined8 **)*plVar6)();
    uVar7 = uVar7 & 0xffffffff;
    lVar11 = *(long *)(lVar10 + 0xd0);
  }
  else {
    lVar11 = *(long *)(lVar4 + 0x19580);
    lVar10 = lVar13;
    if (lVar11 == 0) goto LAB_01a20548;
LAB_01a20524:
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) goto LAB_01a20548;
    uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    uVar12 = uVar12 & 0xffffffff;
    plVar6 = *(long **)(lVar9 + 0x2d0b8);
    if (plVar6 != (long *)0x0) goto LAB_01a20554;
LAB_01a20578:
    uVar7 = 0;
    lVar11 = *(long *)(lVar10 + 0xd0);
  }
  if ((lVar11 != 0) && (plVar6 = *(long **)(lVar11 + 0x20), plVar6 != (long *)0x0)) {
    local_68 = *(long *)(lVar10 + 0xb0);
    local_60 = *(undefined8 *)(lVar10 + 0xb8);
    local_58 = 0xb8;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
  }
  memcpy((void *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0)),
         (void *)(*(long *)(lVar9 + 0x2d0a0) + *(long *)(lVar9 + 0x2d098)),0xb8);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x2d0b8) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x2d0b8) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0xd0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0xd0) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if (*plVar14 == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
    lVar4 = *(long *)(lVar13 + 0x108);
    if (lVar4 != 0) goto LAB_01a20630;
LAB_01a20654:
    uVar2 = 1;
    plVar14 = *(long **)(lVar9 + 0x2d0f0);
    if (plVar14 == (long *)0x0) goto LAB_01a20684;
LAB_01a20660:
    if ((undefined8 *)*plVar14 == (undefined8 *)0x0) goto LAB_01a20684;
    uVar3 = (*(code *)**(undefined8 **)*plVar14)();
    uVar3 = uVar3 ^ 1;
    lVar4 = *(long *)(lVar13 + 0x108);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x195b8);
    if (lVar4 == 0) goto LAB_01a20654;
LAB_01a20630:
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) goto LAB_01a20654;
    uVar2 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
    uVar2 = uVar2 ^ 1;
    plVar14 = *(long **)(lVar9 + 0x2d0f0);
    if (plVar14 != (long *)0x0) goto LAB_01a20660;
LAB_01a20684:
    uVar3 = 1;
    lVar4 = *(long *)(lVar13 + 0x108);
  }
  if ((lVar4 != 0) && (plVar14 = *(long **)(lVar4 + 0x20), plVar14 != (long *)0x0)) {
    local_68 = *(long *)(lVar13 + 0xe8);
    local_60 = *(undefined8 *)(lVar13 + 0xf0);
    local_58 = 0xb8;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_68);
  }
  memcpy((void *)(*(long *)(lVar13 + 0xf0) + *(long *)(lVar13 + 0xe8)),
         (void *)(*(long *)(lVar9 + 0x2d0d8) + *(long *)(lVar9 + 0x2d0d0)),0xb8);
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar9 + 0x2d0f0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x2d0f0) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar13 + 0x108) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x108) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((*(long *)(lVar9 + 0x2d080) != 0) &&
     (plVar14 = *(long **)(*(long *)(lVar9 + 0x2d080) + 0x20), plVar14 != (long *)0x0)) {
    local_68 = *plVar1;
    local_60 = *(undefined8 *)(lVar9 + 0x2d068);
    local_58 = 2;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_68);
  }
  *(ushort *)(*(long *)(lVar9 + 0x2d068) + *plVar1) =
       *(ushort *)(*(long *)(lVar9 + 0x2d068) + *plVar1) & 0xfffe;
LAB_01a20754:
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x2d080) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x2d080) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

