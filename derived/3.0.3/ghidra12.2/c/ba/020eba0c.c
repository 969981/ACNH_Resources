
void FUN_020eba0c(byte param_1,byte *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  byte bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte local_7c [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_04bb4f78;
  local_7c[0] = *param_2;
  if (7 < local_7c[0]) {
    local_7c[0] = 0xff;
  }
  lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_7c,1);
  if (lVar5 == 0) {
    return;
  }
  uVar4 = (uint)(char)param_1;
  if ((*(long **)(lVar5 + 0x17bb0) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17bb0), puVar6 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar7 = uVar7 & 0xffffffff;
  }
  lVar12 = *(long *)(lVar5 + 0x17b90);
  lVar14 = *(long *)(lVar5 + 0x17b98);
  lVar8 = FUN_0265c2a0(uVar4);
  if (lVar8 == 0) goto LAB_020ec040;
  puVar6 = (undefined8 *)(lVar14 + lVar12);
  uVar9 = FUN_026692d0(puVar6);
  plVar13 = *(long **)(lVar8 + 0x28);
  if ((uVar9 & 1) == 0) {
    if ((plVar13 == (long *)0x0) || ((undefined8 *)*plVar13 == (undefined8 *)0x0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = (*(code *)**(undefined8 **)*plVar13)();
      uVar9 = uVar9 & 0xffffffff;
    }
    uVar3 = FUN_026b3660(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8),param_2);
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    uVar2 = uVar3;
    if ((int)uVar3 < 0) {
      if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar11 == (undefined8 *)0x0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)*puVar11)();
        uVar9 = uVar9 & 0xffffffff;
      }
      uVar2 = FUN_026b3780(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
      if ((int)uVar2 < 0) goto LAB_020ec040;
    }
    if (((9 < param_1) || (0x9f < uVar2)) || (DAT_05574040 == 0)) goto LAB_020ec040;
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar12 == 0) goto LAB_020ec040;
      lVar12 = lVar12 + 0x70;
    }
    else if (((puVar11 == (undefined8 *)0x0) || ((long *)puVar11[0x26] == (long *)0x0)) ||
            (lVar12 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar12 == 0))
    goto LAB_020ec040;
    lVar14 = lVar12 + (ulong)uVar4 * 0x10798 + (ulong)uVar2 * 0xa8;
    lVar12 = lVar14 + 0x39c0;
    lVar8 = *(long *)(lVar14 + 0x39e8);
    if (lVar8 == 0) {
      if (-1 < (int)uVar3) {
        puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x39d0) + *(long *)(lVar14 + 0x39c8));
        uVar16 = puVar6[5];
        uVar17 = puVar6[6];
        uVar18 = puVar6[4];
        puVar11[3] = puVar6[3];
        puVar11[4] = uVar18;
        puVar11[5] = uVar16;
        puVar11[6] = uVar17;
        uVar18 = puVar6[2];
        uVar16 = *puVar6;
        uVar17 = puVar6[1];
        goto LAB_020ebe80;
      }
      uVar4 = 1;
LAB_020ebf08:
      puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x39d0) + *(long *)(lVar14 + 0x39c8));
      uVar17 = puVar6[6];
      uVar16 = puVar6[3];
      uVar18 = puVar6[4];
      puVar11[5] = puVar6[5];
      puVar11[6] = uVar17;
      puVar11[3] = uVar16;
      puVar11[4] = uVar18;
      uVar17 = puVar6[2];
      uVar16 = puVar6[1];
      *puVar11 = *puVar6;
      puVar11[1] = uVar16;
      puVar11[2] = uVar17;
      FUN_02746500(puVar11 + 7);
      *(undefined4 *)(puVar11 + 0x27) = 0;
      *(undefined8 *)((long)puVar11 + 0x14c) = 0xfffe;
      FUN_0277d4ac();
      *(undefined1 *)((long)puVar11 + 0x156) = 0;
      *(undefined2 *)((long)puVar11 + 0x154) = 0xffff;
      lVar8 = *(long *)(lVar14 + 0x39e8);
    }
    else {
      if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        lVar8 = *(long *)(lVar14 + 0x39e8);
        uVar4 = uVar4 ^ 1;
      }
      if ((int)uVar3 < 0) {
        if ((lVar8 != 0) && (plVar13 = *(long **)(lVar8 + 0x20), plVar13 != (long *)0x0)) {
          local_78 = *(undefined8 *)(lVar14 + 0x39c8);
          local_70 = *(undefined8 *)(lVar14 + 0x39d0);
          uStack_68 = 0x158;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_78);
        }
        goto LAB_020ebf08;
      }
    }
    if ((lVar8 != 0) && (plVar13 = *(long **)(lVar8 + 0x20), plVar13 != (long *)0x0)) {
      local_78 = *(undefined8 *)(lVar14 + 0x39c8);
      local_70 = *(undefined8 *)(lVar14 + 0x39d0);
      uStack_68 = 0x158;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_78);
    }
    puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x39d0) + *(long *)(lVar14 + 0x39c8));
    uVar16 = puVar6[5];
    uVar17 = puVar6[6];
    uVar18 = puVar6[4];
    puVar11[3] = puVar6[3];
    puVar11[4] = uVar18;
    puVar11[5] = uVar16;
    puVar11[6] = uVar17;
    uVar18 = puVar6[2];
    uVar16 = *puVar6;
    uVar17 = puVar6[1];
  }
  else {
    if ((plVar13 == (long *)0x0) || ((undefined8 *)*plVar13 == (undefined8 *)0x0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = (*(code *)**(undefined8 **)*plVar13)();
      uVar9 = uVar9 & 0xffffffff;
    }
    bVar15 = *param_2;
    lVar12 = *(long *)(lVar8 + 8);
    lVar14 = *(long *)(lVar8 + 0x10);
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    local_78 = CONCAT71(local_78._1_7_,bVar15);
    lVar10 = FUN_025830c0(*(undefined8 *)puVar1,&local_78,1);
    if (lVar10 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      if ((*(long **)(lVar10 + 0x17bb0) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x17bb0), puVar11 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar11)();
        uVar2 = uVar2 ^ 1;
      }
      uVar3 = FUN_026b318c(lVar14 + lVar12,
                           *(long *)(lVar10 + 0x17b98) + *(long *)(lVar10 + 0x17b90) + 0x1c);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar10 + 0x17bb0) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x17bb0) + 8), puVar11 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar11)();
      }
    }
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    uVar2 = uVar3;
    if ((int)uVar3 < 0) {
      if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar11 == (undefined8 *)0x0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)*puVar11)();
        uVar9 = uVar9 & 0xffffffff;
      }
      uVar2 = FUN_026b35a0(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
      if ((int)uVar2 < 0) goto LAB_020ec040;
    }
    if (((9 < param_1) || (7 < uVar2)) || (DAT_05574040 == 0)) goto LAB_020ec040;
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar12 == 0) goto LAB_020ec040;
      lVar12 = lVar12 + 0x70;
    }
    else if (((puVar11 == (undefined8 *)0x0) || ((long *)puVar11[0x26] == (long *)0x0)) ||
            (lVar12 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar12 == 0))
    goto LAB_020ec040;
    lVar14 = lVar12 + (ulong)uVar4 * 0x10798 + (ulong)uVar2 * 0x700;
    lVar12 = lVar14 + 0x188;
    lVar8 = *(long *)(lVar14 + 0x1b0);
    if (lVar8 == 0) {
      if (-1 < (int)uVar3) {
        puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x198) + *(long *)(lVar14 + 400));
        uVar16 = puVar6[5];
        uVar17 = puVar6[6];
        uVar18 = puVar6[4];
        puVar11[3] = puVar6[3];
        puVar11[4] = uVar18;
        puVar11[5] = uVar16;
        puVar11[6] = uVar17;
        uVar18 = puVar6[2];
        uVar16 = *puVar6;
        uVar17 = puVar6[1];
LAB_020ebe80:
        puVar11[1] = uVar17;
        puVar11[2] = uVar18;
        *puVar11 = uVar16;
        goto LAB_020ec040;
      }
      uVar4 = 1;
LAB_020ebfb4:
      FUN_027b5aa4(*(long *)(lVar14 + 0x198) + *(long *)(lVar14 + 400),puVar6);
      lVar8 = *(long *)(lVar14 + 0x1b0);
    }
    else {
      if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        lVar8 = *(long *)(lVar14 + 0x1b0);
        uVar4 = uVar4 ^ 1;
      }
      if ((int)uVar3 < 0) {
        if ((lVar8 != 0) && (plVar13 = *(long **)(lVar8 + 0x20), plVar13 != (long *)0x0)) {
          local_78 = *(undefined8 *)(lVar14 + 400);
          local_70 = *(undefined8 *)(lVar14 + 0x198);
          uStack_68 = 0x5f0;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_78);
        }
        goto LAB_020ebfb4;
      }
    }
    if ((lVar8 != 0) && (plVar13 = *(long **)(lVar8 + 0x20), plVar13 != (long *)0x0)) {
      local_78 = *(undefined8 *)(lVar14 + 400);
      local_70 = *(undefined8 *)(lVar14 + 0x198);
      uStack_68 = 0x5f0;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_78);
    }
    puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x198) + *(long *)(lVar14 + 400));
    uVar16 = puVar6[5];
    uVar17 = puVar6[6];
    uVar18 = puVar6[4];
    puVar11[3] = puVar6[3];
    puVar11[4] = uVar18;
    puVar11[5] = uVar16;
    puVar11[6] = uVar17;
    uVar18 = puVar6[2];
    uVar16 = *puVar6;
    uVar17 = puVar6[1];
  }
  puVar11[1] = uVar17;
  puVar11[2] = uVar18;
  *puVar11 = uVar16;
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
LAB_020ec040:
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

