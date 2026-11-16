
void FUN_0285f270(void)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_04cd19d8 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_0285f2d0:
    if (*pbVar9 < 8) goto LAB_0285f33c;
LAB_0285f2dc:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0285f334:
      pbVar9 = &DAT_0548e168;
      goto LAB_0285f33c;
    }
    lVar12 = *DAT_0537d558;
    bVar5 = *(byte *)(lVar12 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar9 = (byte *)(lVar12 + 0x471);
      }
    }
    local_4c[0] = *pbVar9;
    if (7 < local_4c[0]) goto LAB_0285f334;
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar9 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0285f2d0;
      }
      goto LAB_0285f2dc;
    }
LAB_0285f33c:
    local_4c[0] = *pbVar9;
    if (7 < local_4c[0]) {
      local_4c[0] = 0xff;
    }
  }
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar12 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_4c,1);
  if (lVar12 == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar7 == 0) {
      return;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar10[0x26] == (long *)0x0) {
      return;
    }
    lVar7 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
    if (lVar7 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar7 + 0xe7290) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar7 + 0xe7290), puVar10 == (undefined8 *)0x0)) {
    uVar6 = 1;
    lVar11 = *(long *)(lVar12 + 0x17be8);
  }
  else {
    uVar6 = (**(code **)*puVar10)();
    uVar6 = uVar6 ^ 1;
    lVar11 = *(long *)(lVar12 + 0x17be8);
  }
  if (lVar11 == 0) {
    uVar14 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar14 = 0;
      plVar8 = *(long **)(lVar11 + 0x20);
    }
    else {
      uVar14 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      uVar14 = uVar14 & 0xffffffff;
      if (*(long *)(lVar12 + 0x17be8) == 0) goto LAB_0285f47c;
      plVar8 = *(long **)(*(long *)(lVar12 + 0x17be8) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_48 = *(long *)(lVar12 + 0x17bc8);
      local_40 = *(undefined8 *)(lVar12 + 0x17bd0);
      uStack_38 = 0x1c;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    }
  }
LAB_0285f47c:
  puVar10 = (undefined8 *)(*(long *)(lVar7 + 0xe7278) + *(long *)(lVar7 + 0xe7270));
  puVar1 = (undefined8 *)(*(long *)(lVar12 + 0x17bd0) + *(long *)(lVar12 + 0x17bc8));
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar13 = puVar10[2];
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar10 + 3);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar13;
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar12 + 0x17be8) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x17be8) + 0x18), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)();
  }
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0xe7290) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0xe7290) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

