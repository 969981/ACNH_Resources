
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03295370(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **local_60;
  long lStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_1 + 0x148);
  if (lVar2 == 0) {
    lVar2 = *(long *)PTR_DAT_04bc8e90 + 0x2a8;
    *(long *)(param_1 + 0x148) = lVar2;
    lVar4 = *(long *)(param_1 + 0x140);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x140);
  }
  if (lVar4 == 0) {
    *(long *)(param_1 + 0x140) = *(long *)PTR_DAT_04bc8ee8 + 0x1d8;
  }
  lVar4 = param_1 + 0x6f0;
  *(ushort *)(param_1 + 0x740) = *(ushort *)(param_1 + 0x740) | 0x20;
  lVar5 = *(long *)(param_1 + 0x6f0);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x700);
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_1 + 0x708);
      goto LAB_03295420;
    }
LAB_03295424:
    if (*(long *)(param_1 + 0x708) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x708) + 0x10) = *(undefined8 *)(param_1 + 0x700);
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x708);
    if (*(long *)(lVar5 + 8) != lVar4) {
      lVar5 = *(long *)(param_1 + 0x700);
LAB_03295420:
      *(long *)(lVar5 + 0x18) = lVar6;
      goto LAB_03295424;
    }
    if (lVar6 == 0) {
      *(undefined8 *)(lVar5 + 8) = 0;
    }
    else {
      *(long *)(lVar5 + 8) = lVar6;
      *(undefined8 *)(*(long *)(param_1 + 0x708) + 0x10) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(long *)(param_1 + 0x6f0) = lVar2;
  if (*(long *)(lVar2 + 8) == 0) {
    *(long *)(lVar2 + 8) = lVar4;
  }
  else {
    lVar5 = *(long *)(lVar2 + 8);
    do {
      lVar6 = lVar5;
      lVar5 = *(long *)(lVar6 + 0x18);
    } while (*(long *)(lVar6 + 0x18) != 0);
    *(long *)(lVar6 + 0x18) = lVar4;
    *(long *)(param_1 + 0x700) = lVar6;
  }
  if ((*(ushort *)(param_1 + 0x740) >> 6 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x718) = *(undefined8 *)(lVar2 + 0x28);
  }
  lVar5 = *(long *)(param_1 + 0x4d0);
  lVar2 = param_1 + 0x4d0;
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x4e0);
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_1 + 0x4e8);
      goto LAB_032954dc;
    }
LAB_032954e0:
    if (*(long *)(param_1 + 0x4e8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x4e8) + 0x10) = *(undefined8 *)(param_1 + 0x4e0);
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x4e8);
    if (*(long *)(lVar5 + 8) != lVar2) {
      lVar5 = *(long *)(param_1 + 0x4e0);
LAB_032954dc:
      *(long *)(lVar5 + 0x18) = lVar6;
      goto LAB_032954e0;
    }
    if (lVar6 == 0) {
      *(undefined8 *)(lVar5 + 8) = 0;
    }
    else {
      *(long *)(lVar5 + 8) = lVar6;
      *(undefined8 *)(*(long *)(param_1 + 0x4e8) + 0x10) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(long *)(param_1 + 0x4d0) = lVar4;
  if (*(long *)(param_1 + 0x6f8) == 0) {
    *(long *)(param_1 + 0x6f8) = lVar2;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x6f8);
    do {
      lVar6 = lVar5;
      lVar5 = *(long *)(lVar6 + 0x18);
    } while (*(long *)(lVar6 + 0x18) != 0);
    *(long *)(lVar6 + 0x18) = lVar2;
    *(long *)(param_1 + 0x4e0) = lVar6;
  }
  if ((*(ushort *)(param_1 + 0x520) >> 6 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_1 + 0x718);
  }
  lVar5 = *(long *)(param_1 + 0x140);
  plVar3 = (long *)(param_1 + 0x300);
  lVar6 = *(long *)(param_1 + 0x300);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x310);
    if (lVar6 != 0) {
      lVar7 = *(long *)(param_1 + 0x318);
      goto LAB_03295594;
    }
LAB_03295598:
    if (*(long *)(param_1 + 0x318) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x318) + 0x10) = *(undefined8 *)(param_1 + 0x310);
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x318);
    if (*(long **)(lVar6 + 8) != plVar3) {
      lVar6 = *(long *)(param_1 + 0x310);
LAB_03295594:
      *(long *)(lVar6 + 0x18) = lVar7;
      goto LAB_03295598;
    }
    if (lVar7 == 0) {
      *(undefined8 *)(lVar6 + 8) = 0;
    }
    else {
      *(long *)(lVar6 + 8) = lVar7;
      *(undefined8 *)(*(long *)(param_1 + 0x318) + 0x10) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  if (lVar5 != 0) {
    *plVar3 = lVar5;
    if (*(long *)(lVar5 + 8) == 0) {
      *(long **)(lVar5 + 8) = plVar3;
    }
    else {
      lVar5 = *(long *)(lVar5 + 8);
      do {
        lVar6 = lVar5;
        lVar5 = *(long *)(lVar6 + 0x18);
      } while (*(long *)(lVar6 + 0x18) != 0);
      *(long **)(lVar6 + 0x18) = plVar3;
      *(long *)(param_1 + 0x310) = lVar6;
    }
  }
  *(undefined8 *)(param_1 + 0x338) = 0x100030000;
  *(undefined4 *)(param_1 + 0x340) = 1;
  plVar3 = *(long **)(param_1 + 0x380);
  local_60 = &PTR_LAB_04b18610;
  local_50 = &LAB_03296db8;
  uStack_48 = 0;
  lStack_58 = param_1;
  if ((plVar3 == (long *)0x0) ||
     ((**(code **)(*plVar3 + 8))(plVar3), &local_60 != (undefined ***)0x0)) {
    uVar1 = (*(code *)local_60[3])(&local_60,param_1 + 0x388);
    *(undefined8 *)(param_1 + 0x380) = uVar1;
    if (&local_60 != (undefined ***)0x0) {
      (*(code *)local_60[1])();
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x380) = 0;
  }
  local_50 = &LAB_03296dbc;
  uStack_48 = 0;
  plVar3 = *(long **)(param_1 + 0x3b0);
  local_60 = &PTR_LAB_04b18610;
  lStack_58 = param_1;
  if (plVar3 == (long *)0x0) {
LAB_032956ec:
    uVar1 = (*(code *)local_60[3])(&local_60,param_1 + 0x3b8);
    *(undefined8 *)(param_1 + 0x3b0) = uVar1;
    if (&local_60 != (undefined ***)0x0) {
      (*(code *)local_60[1])();
    }
  }
  else {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (&local_60 != (undefined ***)0x0) goto LAB_032956ec;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
  }
  local_50 = &LAB_03296dc0;
  uStack_48 = 0;
  plVar3 = *(long **)(param_1 + 0x410);
  local_60 = &PTR_LAB_04b18610;
  lStack_58 = param_1;
  if (plVar3 == (long *)0x0) {
LAB_03295768:
    uVar1 = (*(code *)local_60[3])(&local_60,param_1 + 0x418);
    *(undefined8 *)(param_1 + 0x410) = uVar1;
    if (&local_60 != (undefined ***)0x0) {
      (*(code *)local_60[1])();
    }
  }
  else {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (&local_60 != (undefined ***)0x0) goto LAB_03295768;
    *(undefined8 *)(param_1 + 0x410) = 0;
  }
  local_50 = &LAB_03296dc4;
  uStack_48 = 0;
  plVar3 = *(long **)(param_1 + 0x440);
  local_60 = &PTR_LAB_04b18610;
  lStack_58 = param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (&local_60 == (undefined ***)0x0) {
      *(undefined8 *)(param_1 + 0x440) = 0;
      goto LAB_0329580c;
    }
  }
  uVar1 = (*(code *)local_60[3])(&local_60,param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x440) = uVar1;
  if (&local_60 != (undefined ***)0x0) {
    (*(code *)local_60[1])();
  }
LAB_0329580c:
  *(byte *)(param_1 + 0x4c8) = *(byte *)(param_1 + 0x4c8) & 0xfb;
  *(ushort *)(param_1 + 0x740) = *(ushort *)(param_1 + 0x740) & 0xfffe;
  FUN_032c2100(lVar4);
  *(ushort *)(param_1 + 0x520) = *(ushort *)(param_1 + 0x520) & 0xfffe;
  FUN_032c2100(lVar2);
  return;
}

