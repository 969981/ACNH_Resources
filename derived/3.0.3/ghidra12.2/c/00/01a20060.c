
void FUN_01a20060(byte *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  byte local_5c [4];
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_5c[0] = *param_1;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_5c,1);
  if (lVar4 == 0) {
    return;
  }
  lVar11 = lVar4 + 0x194b0;
  plVar12 = (long *)(lVar4 + 0x194b8);
  lVar10 = lVar11;
  if (*plVar12 == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar10 + 0x2d060);
  if ((*(long *)(lVar10 + 0x2d0b8) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(lVar10 + 0x2d0b8) + 0x10), puVar5 == (undefined8 *)0x0)) {
    uVar6 = 0;
    if (*plVar12 == 0) goto LAB_01a20120;
LAB_01a20114:
    plVar8 = *(long **)(lVar4 + 0x19580);
    lVar13 = lVar11;
    if (plVar8 == (long *)0x0) goto LAB_01a2015c;
LAB_01a20138:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_01a2015c;
    uVar7 = (*(code *)**(undefined8 **)*plVar8)();
    uVar7 = uVar7 & 0xffffffff;
    lVar9 = *(long *)(lVar10 + 0x2d0b8);
  }
  else {
    uVar6 = (**(code **)*puVar5)();
    uVar6 = uVar6 & 0xffffffff;
    if (*plVar12 != 0) goto LAB_01a20114;
LAB_01a20120:
    lVar13 = *(long *)(DAT_05574040 + 0x20);
    plVar8 = *(long **)(lVar13 + 0xd0);
    if (plVar8 != (long *)0x0) goto LAB_01a20138;
LAB_01a2015c:
    uVar7 = 0;
    lVar9 = *(long *)(lVar10 + 0x2d0b8);
  }
  if ((lVar9 != 0) && (plVar8 = *(long **)(lVar9 + 0x20), plVar8 != (long *)0x0)) {
    local_58 = *(long *)(lVar10 + 0x2d098);
    local_50 = *(undefined8 *)(lVar10 + 0x2d0a0);
    uStack_48 = 0xb8;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
  }
  memcpy((void *)(*(long *)(lVar10 + 0x2d0a0) + *(long *)(lVar10 + 0x2d098)),
         (void *)(*(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0)),0xb8);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar13 + 0xd0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar13 + 0xd0) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x2d0b8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar10 + 0x2d0b8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if ((*(long *)(lVar10 + 0x2d0f0) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(lVar10 + 0x2d0f0) + 0x10), puVar5 == (undefined8 *)0x0)) {
    uVar2 = 1;
    if (*plVar12 == 0) goto LAB_01a20230;
LAB_01a20224:
    plVar12 = *(long **)(lVar4 + 0x195b8);
    if (plVar12 == (long *)0x0) goto LAB_01a2026c;
LAB_01a20248:
    if ((undefined8 *)*plVar12 == (undefined8 *)0x0) goto LAB_01a2026c;
    uVar3 = (*(code *)**(undefined8 **)*plVar12)();
    uVar3 = uVar3 ^ 1;
    lVar4 = *(long *)(lVar10 + 0x2d0f0);
  }
  else {
    uVar2 = (**(code **)*puVar5)();
    uVar2 = uVar2 ^ 1;
    if (*plVar12 != 0) goto LAB_01a20224;
LAB_01a20230:
    lVar11 = *(long *)(DAT_05574040 + 0x20);
    plVar12 = *(long **)(lVar11 + 0x108);
    if (plVar12 != (long *)0x0) goto LAB_01a20248;
LAB_01a2026c:
    uVar3 = 1;
    lVar4 = *(long *)(lVar10 + 0x2d0f0);
  }
  if ((lVar4 != 0) && (plVar12 = *(long **)(lVar4 + 0x20), plVar12 != (long *)0x0)) {
    local_58 = *(long *)(lVar10 + 0x2d0d0);
    local_50 = *(undefined8 *)(lVar10 + 0x2d0d8);
    uStack_48 = 0xb8;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
  }
  memcpy((void *)(*(long *)(lVar10 + 0x2d0d8) + *(long *)(lVar10 + 0x2d0d0)),
         (void *)(*(long *)(lVar11 + 0xf0) + *(long *)(lVar11 + 0xe8)),0xb8);
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar11 + 0x108) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar11 + 0x108) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar10 + 0x2d0f0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar10 + 0x2d0f0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  lVar4 = *(long *)(lVar10 + 0x2d080);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar12 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar10 + 0x2d080) == 0) goto LAB_01a20368;
      plVar12 = *(long **)(*(long *)(lVar10 + 0x2d080) + 0x20);
    }
    if (plVar12 != (long *)0x0) {
      local_58 = *plVar1;
      local_50 = *(undefined8 *)(lVar10 + 0x2d068);
      uStack_48 = 2;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
    }
  }
LAB_01a20368:
  *(ushort *)(*(long *)(lVar10 + 0x2d068) + *plVar1) =
       *(ushort *)(*(long *)(lVar10 + 0x2d068) + *plVar1) | 1;
  if ((*(long *)(lVar10 + 0x2d080) != 0) &&
     (plVar12 = *(long **)(*(long *)(lVar10 + 0x2d080) + 0x20), plVar12 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar10 + 0x2d068);
    uStack_48 = 2;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
  }
  *(ushort *)(*(long *)(lVar10 + 0x2d068) + *plVar1) =
       *(ushort *)(*(long *)(lVar10 + 0x2d068) + *plVar1) | 2;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x2d080) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar10 + 0x2d080) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

