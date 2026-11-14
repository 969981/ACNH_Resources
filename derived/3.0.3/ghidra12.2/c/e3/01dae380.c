
/* WARNING: Removing unreachable block (ram,0x01dae508) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dae380(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  byte bVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  byte extraout_w9;
  uint uVar14;
  undefined1 uStack_51;
  undefined1 *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  FUN_01c73694(DAT_05351250);
  local_48 = FUN_02642bc0();
  uVar11 = local_48._8_8_ & 0xffffffff;
  if (uVar11 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_50 = &uStack_51;
  lVar6 = (*(code *)(&PTR_LAB_04a88310)[uVar11])(&local_50,local_48);
  if (lVar6 == 0) {
    uVar14 = 0;
  }
  else if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
          (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
    uVar14 = (uint)(*(char *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x48db1) != '\0');
  }
  else {
    uVar11 = (**(code **)*puVar7)();
    uVar14 = (uint)(*(char *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x48db1) != '\0');
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  lVar6 = DAT_05351250;
  lVar13 = DAT_05351250;
  if (*(char *)(DAT_05351250 + 0x198) == '\0') {
LAB_01dae490:
    bVar5 = *(int *)(lVar13 + 0xb0) == 1;
    bVar10 = 1;
  }
  else {
    lVar13 = DAT_05351250 + 0x148;
    *(undefined1 *)(DAT_05351250 + 400) = 1;
    FUN_0092ae80(lVar13);
    lVar13 = DAT_05351250;
    *(undefined1 *)(lVar6 + 0x198) = 0;
    bVar10 = 0;
    bVar5 = extraout_w9;
    if (lVar13 != 0) goto LAB_01dae490;
  }
  *(byte *)(lVar6 + 0x148) = (bVar10 & bVar5) - 1;
  uVar8 = nn::os::GetSystemTick();
  lVar13 = DAT_05351250;
  *(undefined8 *)(lVar6 + 0x188) = uVar8;
  *(undefined1 *)(lVar6 + 400) = 0;
  *(undefined8 *)(lVar6 + 0x14c) = 0;
  *(undefined8 *)(lVar6 + 0x154) = 0;
  *(undefined8 *)(lVar6 + 0x15c) = 0;
  *(undefined8 *)(lVar6 + 0x164) = 0;
  *(undefined8 *)(lVar6 + 0x16c) = 0;
  *(undefined8 *)(lVar6 + 0x174) = 0;
  *(undefined8 *)(lVar6 + 0x17c) = 0;
  *(undefined1 *)(lVar6 + 0x198) = 1;
  if (*(char *)(lVar13 + 0x198) != '\0') {
    local_48._0_4_ = 0xd;
    *(uint *)(lVar13 + 0x180) = uVar14;
  }
  FUN_007ebec8(DAT_04cb54b8);
  FUN_007cf4dc(DAT_04cadf60);
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 1;
  lVar3 = DAT_053cfba8;
  lVar13 = DAT_04da7238;
  lVar6 = DAT_04da6480;
  if (*(int *)(DAT_05351250 + 0xb0) != 1) {
    if (DAT_053cfba8 == 0) {
      return;
    }
    FUN_0205e6c0(DAT_053cfba8);
    *(undefined4 *)(lVar3 + 0x2c0) = 0;
    *(undefined1 *)(lVar3 + 0x2cc) = 0;
    if (*(char *)(lVar3 + 0x2f8) == '\0') {
      return;
    }
    (*(code *)**(undefined8 **)(lVar3 + 0x2d0))(lVar3 + 0x2d0);
    *(undefined1 *)(lVar3 + 0x2f8) = 0;
    return;
  }
  if (DAT_04da7238 != 0) {
    puVar1 = (undefined4 *)(DAT_04da7238 + 0x65ad0);
    if (DAT_04da6480 != 0) {
      uVar8 = *(undefined8 *)(DAT_04da6480 + 0x4060);
      *(char *)(DAT_04da7238 + 0x65ad4) = (char)((ulong)uVar8 >> 0x20);
      *(char *)(lVar13 + 0x65ad5) = (char)((ulong)uVar8 >> 0x28);
      *(char *)(lVar13 + 0x65ad6) = (char)((ulong)uVar8 >> 0x30);
      *(undefined8 *)(lVar13 + 0x65ad8) = *(undefined8 *)(lVar6 + 0x4060);
    }
    FUN_028e2220(lVar13 + 0x65838);
    FUN_028e24f0(lVar13 + 0x65984);
    *puVar1 = 0;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar12 = &DAT_0548e140;
LAB_01dae668:
    if (*pbVar12 < 8) goto LAB_01dae6d4;
LAB_01dae674:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01dae6cc:
      pbVar12 = &DAT_0548e168;
      goto LAB_01dae6d4;
    }
    lVar6 = *DAT_0537d558;
    bVar10 = *(byte *)(lVar6 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar2 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar12 = (byte *)(lVar6 + 0x471);
      }
    }
    bVar10 = *pbVar12;
    if (7 < bVar10) goto LAB_01dae6cc;
  }
  else {
    pbVar12 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar12 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar12 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01dae668;
      }
      goto LAB_01dae674;
    }
LAB_01dae6d4:
    bVar10 = *pbVar12;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_48[0] = bVar10;
  lVar6 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1);
  if (lVar6 == 0) goto LAB_01dae7b8;
  lVar13 = *(long *)(lVar6 + 0x178);
  if (lVar13 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
      plVar9 = *(long **)(lVar13 + 0x20);
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      uVar11 = uVar11 & 0xffffffff;
      if (*(long *)(lVar6 + 0x178) == 0) goto LAB_01dae77c;
      plVar9 = *(long **)(*(long *)(lVar6 + 0x178) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_48._0_8_ = *(undefined8 *)(lVar6 + 0x158);
      local_48._8_8_ = *(undefined8 *)(lVar6 + 0x160);
      local_38 = 0x1198;
      (**(code **)(*plVar9 + 0x20))(plVar9,local_48);
    }
  }
LAB_01dae77c:
  uVar4 = DAT_0558600c;
  lVar13 = *(long *)(lVar6 + 0x160) + *(long *)(lVar6 + 0x158);
  *(undefined4 *)(lVar13 + 0x1190) = _DAT_05586008;
  *(undefined4 *)(lVar13 + 0x1194) = uVar4;
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar6 + 0x178) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x178) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_01dae7b8:
  lVar6 = DAT_053cfba8;
  if (DAT_053cfba8 != 0) {
    FUN_0205e6c0(DAT_053cfba8);
    *(undefined4 *)(lVar6 + 0x2c0) = 0;
    *(undefined1 *)(lVar6 + 0x2cc) = 0;
    if (*(char *)(lVar6 + 0x2f8) != '\0') {
      (*(code *)**(undefined8 **)(lVar6 + 0x2d0))(lVar6 + 0x2d0);
      *(undefined1 *)(lVar6 + 0x2f8) = 0;
    }
    FUN_0205b138(lVar6);
  }
  if (DAT_04cfba28 != 0) {
    FUN_0098b990();
  }
  return;
}

