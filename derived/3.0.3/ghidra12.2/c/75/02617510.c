
ulong FUN_02617510(ushort *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ushort uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  short local_88;
  undefined8 local_86;
  undefined4 local_7e;
  undefined2 local_7a;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  if (*(long *)PTR_DAT_04bb46f0 == 0) {
    uVar13 = 1;
    uVar17 = 0;
    uVar19 = 0;
    uVar15 = 0x4c7b;
    uVar18 = 1;
    goto LAB_02617c94;
  }
  uVar6 = FUN_0261d530(*(long *)PTR_DAT_04bb46f0,*param_1);
  uVar13 = 1;
  uVar17 = 0;
  uVar15 = 0x4c7b;
  uVar18 = 1;
  uVar19 = 0;
  if ((param_2 == 0) || ((uVar6 & 1) == 0)) goto LAB_02617c94;
  lVar14 = param_2 + 0x194b0;
  lVar9 = lVar14;
  if (*(long *)(param_2 + 0x194b8) == 0) {
    lVar9 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar1 = lVar9 + 0x2d1a8 + (param_4 & 0xff) * 0x38;
  if ((param_4 & 0xfc) != 0) {
    lVar1 = lVar9 + 0x2d1a8;
  }
  lVar9 = *(long *)(lVar1 + 0x28);
  if (lVar9 == 0) {
    uVar12 = *param_1;
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar12 = *param_1;
      uVar6 = 0;
      plVar7 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      uVar12 = *param_1;
      if (*(long *)(lVar1 + 0x28) == 0) goto LAB_02617640;
      plVar7 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_78 = *(long *)(lVar1 + 8);
      local_70 = *(long *)(lVar1 + 0x10);
      local_68 = 6;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
    }
  }
LAB_02617640:
  *(ushort *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8)) = uVar12;
  uVar12 = param_1[1];
  if ((*(long *)(lVar1 + 0x28) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(long *)(lVar1 + 8);
    local_70 = *(long *)(lVar1 + 0x10);
    local_68 = 6;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  *(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 2) = (char)uVar12;
  uVar3 = *(undefined1 *)((long)param_1 + 3);
  if ((*(long *)(lVar1 + 0x28) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(long *)(lVar1 + 8);
    local_70 = *(long *)(lVar1 + 0x10);
    local_68 = 6;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  *(undefined1 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 3) = uVar3;
  uVar3 = *(undefined1 *)((long)param_1 + 5);
  if ((*(long *)(lVar1 + 0x28) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(long *)(lVar1 + 8);
    local_70 = *(long *)(lVar1 + 0x10);
    local_68 = 6;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  local_7a = 0x4c7b;
  *(undefined1 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 5) = uVar3;
  uVar12 = *param_1;
  local_86 = 0x4c7b4c7b4c7b4c7b;
  local_7e = 0x4c7b4c7b;
  if (*(long *)(param_2 + 0x194b8) == 0) {
    lVar14 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar7 = (long *)(lVar14 + 0x2d140);
  plVar10 = *(long **)(lVar14 + 0x2d160);
  if (plVar10 == (long *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if ((undefined8 *)*plVar10 != (undefined8 *)0x0) {
      uVar13 = (*(code *)**(undefined8 **)*plVar10)();
      plVar10 = *(long **)(lVar14 + 0x2d160);
    }
  }
  lVar9 = *(long *)(lVar14 + 0x2d148) + *plVar7;
  sVar16 = *(short *)(lVar9 + 0x20);
  local_88 = sVar16;
  if ((uVar13 & 1) == 0) {
LAB_026177a8:
    if (sVar16 == 0x4c7b) goto LAB_02617ad4;
    if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0))
    goto LAB_0261780c;
    uVar13 = (*(code *)**(undefined8 **)*plVar10)();
    lVar9 = *(long *)(lVar14 + 0x2d148) + *plVar7;
    plVar10 = *(long **)(lVar14 + 0x2d160);
    sVar16 = *(short *)(lVar9 + 0x22);
    local_86 = CONCAT62(local_86._2_6_,sVar16);
    if ((uVar13 & 1) != 0) {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar14 + 0x2d160);
        }
        goto LAB_0261781c;
      }
      if (sVar16 == 0x4c7b) goto LAB_02617b3c;
      plVar10 = (long *)0x0;
LAB_02617880:
      sVar16 = *(short *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x24);
      local_86._0_4_ = CONCAT22(sVar16,(undefined2)local_86);
      goto LAB_02617890;
    }
LAB_0261781c:
    if (sVar16 == 0x4c7b) goto LAB_02617ad4;
    if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0))
    goto LAB_02617880;
    uVar13 = (*(code *)**(undefined8 **)*plVar10)();
    lVar9 = *(long *)(lVar14 + 0x2d148) + *plVar7;
    plVar10 = *(long **)(lVar14 + 0x2d160);
    sVar16 = *(short *)(lVar9 + 0x24);
    local_86._0_4_ = CONCAT22(sVar16,(undefined2)local_86);
    if ((uVar13 & 1) != 0) {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar14 + 0x2d160);
        }
        goto LAB_02617890;
      }
      if (sVar16 == 0x4c7b) goto LAB_02617b3c;
      plVar10 = (long *)0x0;
LAB_026178f4:
      sVar16 = *(short *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x26);
      local_86._0_6_ = CONCAT24(sVar16,(undefined4)local_86);
      goto LAB_02617904;
    }
LAB_02617890:
    if (sVar16 == 0x4c7b) goto LAB_02617ad4;
    if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0))
    goto LAB_026178f4;
    uVar13 = (*(code *)**(undefined8 **)*plVar10)();
    lVar9 = *(long *)(lVar14 + 0x2d148) + *plVar7;
    plVar10 = *(long **)(lVar14 + 0x2d160);
    sVar16 = *(short *)(lVar9 + 0x26);
    local_86._0_6_ = CONCAT24(sVar16,(undefined4)local_86);
    if ((uVar13 & 1) != 0) {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar14 + 0x2d160);
        }
        goto LAB_02617904;
      }
      if (sVar16 == 0x4c7b) goto LAB_02617b3c;
      plVar10 = (long *)0x0;
LAB_02617968:
      sVar16 = *(short *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x28);
      local_86 = CONCAT26(sVar16,(undefined6)local_86);
      goto LAB_02617978;
    }
LAB_02617904:
    if (sVar16 == 0x4c7b) goto LAB_02617ad4;
    if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0))
    goto LAB_02617968;
    uVar13 = (*(code *)**(undefined8 **)*plVar10)();
    lVar9 = *(long *)(lVar14 + 0x2d148) + *plVar7;
    plVar10 = *(long **)(lVar14 + 0x2d160);
    sVar16 = *(short *)(lVar9 + 0x28);
    local_86 = CONCAT26(sVar16,(undefined6)local_86);
    if ((uVar13 & 1) != 0) {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar14 + 0x2d160);
        }
        goto LAB_02617978;
      }
      if (sVar16 == 0x4c7b) goto LAB_02617b3c;
      plVar10 = (long *)0x0;
LAB_026179dc:
      sVar16 = *(short *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x2a);
      local_7e = CONCAT22(local_7e._2_2_,sVar16);
      goto LAB_026179ec;
    }
LAB_02617978:
    if (sVar16 == 0x4c7b) goto LAB_02617ad4;
    if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0))
    goto LAB_026179dc;
    uVar13 = (*(code *)**(undefined8 **)*plVar10)();
    lVar9 = *(long *)(lVar14 + 0x2d148) + *plVar7;
    plVar10 = *(long **)(lVar14 + 0x2d160);
    sVar16 = *(short *)(lVar9 + 0x2a);
    local_7e = CONCAT22(local_7e._2_2_,sVar16);
    if ((uVar13 & 1) != 0) {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar14 + 0x2d160);
        }
        goto LAB_026179ec;
      }
      if (sVar16 == 0x4c7b) goto LAB_02617b3c;
      plVar10 = (long *)0x0;
LAB_02617a50:
      sVar16 = *(short *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x2c);
      local_7e = CONCAT22(sVar16,(undefined2)local_7e);
      goto LAB_02617a60;
    }
LAB_026179ec:
    if (sVar16 == 0x4c7b) goto LAB_02617ad4;
    if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0))
    goto LAB_02617a50;
    uVar13 = (*(code *)**(undefined8 **)*plVar10)();
    plVar10 = *(long **)(lVar14 + 0x2d160);
    sVar16 = *(short *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x2c);
    local_7e = CONCAT22(sVar16,(undefined2)local_7e);
    if ((uVar13 & 1) != 0) {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar14 + 0x2d160);
        }
        goto LAB_02617a60;
      }
      if (sVar16 != 0x4c7b) {
        plVar10 = (long *)0x0;
        goto LAB_02617ac4;
      }
LAB_02617b34:
      lVar9 = *(long *)(lVar14 + 0x2d148) + *plVar7;
      goto LAB_02617b3c;
    }
LAB_02617a60:
    if (sVar16 == 0x4c7b) {
LAB_02617ad4:
      if (plVar10 == (long *)0x0) goto LAB_02617b34;
    }
    else {
      if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0)) {
LAB_02617ac4:
        local_7a = *(undefined2 *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x2e);
        goto LAB_02617ad4;
      }
      uVar13 = (*(code *)**(undefined8 **)*plVar10)();
      local_7a = *(undefined2 *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x2e);
      plVar10 = *(long **)(lVar14 + 0x2d160);
      if ((uVar13 & 1) == 0) goto LAB_02617ad4;
      if (plVar10 == (long *)0x0) goto LAB_02617b34;
      if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar10[1])();
        plVar10 = *(long **)(lVar14 + 0x2d160);
        goto LAB_02617ad4;
      }
    }
    if ((undefined8 *)plVar10[2] == (undefined8 *)0x0) {
      lVar9 = *plVar7;
      lVar11 = *(long *)(lVar14 + 0x2d148);
      uVar5 = 1;
      plVar10 = (long *)plVar10[4];
      if (plVar10 == (long *)0x0) goto LAB_02617b54;
LAB_02617b04:
      local_68 = 0x30;
      local_78 = lVar9;
      local_70 = lVar11;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      *(ushort *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x20) = uVar12;
    }
    else {
      uVar5 = (*(code *)**(undefined8 **)plVar10[2])();
      uVar5 = uVar5 ^ 1;
      lVar9 = *plVar7;
      lVar11 = *(long *)(lVar14 + 0x2d148);
      if ((*(long *)(lVar14 + 0x2d160) != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar14 + 0x2d160) + 0x20), plVar10 != (long *)0x0))
      goto LAB_02617b04;
LAB_02617b54:
      *(ushort *)(lVar11 + lVar9 + 0x20) = uVar12;
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar14 + 0x2d160) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar14 + 0x2d160) + 0x18), puVar8 != (undefined8 *)0x0))
    {
      (**(code **)*puVar8)();
    }
  }
  else {
    if (plVar10 != (long *)0x0) {
      if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar10[1])();
        plVar10 = *(long **)(lVar14 + 0x2d160);
      }
      goto LAB_026177a8;
    }
    if (sVar16 != 0x4c7b) {
      plVar10 = (long *)0x0;
LAB_0261780c:
      sVar16 = *(short *)(*(long *)(lVar14 + 0x2d148) + *plVar7 + 0x22);
      local_86 = CONCAT62(local_86._2_6_,sVar16);
      goto LAB_0261781c;
    }
LAB_02617b3c:
    *(ushort *)(lVar9 + 0x20) = uVar12;
  }
  lVar9 = 0;
  uVar13 = 1;
  do {
    uVar4 = *(undefined2 *)((long)&local_88 + lVar9);
    lVar11 = *(long *)(lVar14 + 0x2d160);
    if (lVar11 == 0) {
      uVar15 = 0;
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar15 = 0;
        plVar10 = *(long **)(lVar11 + 0x20);
      }
      else {
        uVar15 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        uVar15 = uVar15 & 0xffffffff;
        if (*(long *)(lVar14 + 0x2d160) == 0) goto LAB_02617c1c;
        plVar10 = *(long **)(*(long *)(lVar14 + 0x2d160) + 0x20);
      }
      if (plVar10 != (long *)0x0) {
        local_78 = *plVar7;
        local_70 = *(long *)(lVar14 + 0x2d148);
        local_68 = 0x30;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      }
    }
LAB_02617c1c:
    lVar11 = *(long *)(lVar14 + 0x2d148) + *plVar7;
    puVar2 = (undefined2 *)(lVar11 + lVar9 + 0x22);
    if ((uVar13 & 0xf8) != 0) {
      puVar2 = (undefined2 *)(lVar11 + 0x20);
    }
    *puVar2 = uVar4;
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar14 + 0x2d160) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar14 + 0x2d160) + 0x18), puVar8 != (undefined8 *)0x0))
    {
      (**(code **)*puVar8)();
    }
    uVar13 = uVar13 + 1;
    lVar9 = lVar9 + 2;
  } while (uVar13 != 8);
  uVar15 = (ulong)*param_1;
  uVar13 = (ulong)(byte)param_1[1];
  uVar18 = (ulong)*(byte *)((long)param_1 + 3);
  uVar17 = (ulong)(byte)param_1[2];
  uVar19 = (ulong)*(byte *)((long)param_1 + 5);
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_02617c94:
  return uVar17 << 0x20 | uVar19 << 0x28 | uVar18 << 0x18 | uVar13 << 0x10 | uVar15;
}

