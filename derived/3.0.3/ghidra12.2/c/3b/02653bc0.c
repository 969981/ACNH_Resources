
void FUN_02653bc0(short *param_1,short *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  byte bVar20;
  undefined8 uVar21;
  byte *pbVar22;
  undefined1 auStack_3be8 [687];
  undefined1 uStack_3939;
  undefined1 auStack_3938 [680];
  undefined *local_3690;
  long local_3688;
  undefined1 local_3680;
  byte local_367f;
  undefined8 local_3678;
  undefined8 local_3670;
  undefined8 local_3668;
  undefined8 local_3660;
  undefined8 local_3658;
  undefined8 local_3650;
  undefined8 local_3648;
  undefined4 local_3640;
  undefined4 uStack_363c;
  undefined4 uStack_3638;
  undefined4 local_3634;
  undefined4 uStack_3630;
  undefined4 local_362c;
  undefined1 local_3628;
  undefined8 local_3624;
  undefined8 local_361c;
  undefined5 local_3614;
  undefined3 uStack_360f;
  uint local_360c;
  undefined1 local_3608;
  undefined1 local_3607;
  undefined2 local_3606;
  undefined8 local_3600;
  undefined8 uStack_35f8;
  undefined8 local_35f0;
  undefined8 local_35e8;
  undefined5 uStack_35e0;
  undefined3 local_35db;
  undefined5 uStack_35d8;
  undefined1 auStack_35d3 [2048];
  undefined1 local_2dd3;
  undefined2 local_2dd2;
  undefined1 auStack_2dca [2];
  undefined1 auStack_2dc8 [8];
  long local_2dc0;
  long local_2db8;
  undefined1 auStack_1722 [2];
  undefined1 auStack_1720 [8];
  long local_1718;
  long local_1710;
  undefined *local_80;
  long local_78;
  ulong local_70;
  
  if (*param_1 == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  if (*param_2 == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  FUN_007ef010(auStack_1722,param_1);
  FUN_007e4920(auStack_1720,auStack_1722);
  FUN_007ef010(auStack_2dca,param_2);
  FUN_007e4920(auStack_2dc8,auStack_2dca);
  uVar7 = FUN_007e4bb0(auStack_1720);
  uVar8 = FUN_007e4bb0(auStack_2dc8);
  uVar10 = FUN_007e4bb0(auStack_1720);
  if (((uVar7 ^ uVar8) & 1) != 0) {
    if (((uVar10 & 1) == 0) && (uVar10 = FUN_007e4bb0(auStack_2dc8), (uVar10 & 1) != 0)) {
      iVar9 = FUN_007e68d0(auStack_2dc8);
      local_3678 = CONCAT44(local_3678._4_4_,iVar9);
      if (iVar9 != 2) {
        return;
      }
      if (local_1718 == 0) {
        return;
      }
      if (local_2db8 == 0) {
        return;
      }
      local_78 = local_1718;
      local_70 = local_70 & 0xffffffffffffff00;
      if (*(long *)(local_1718 + 0x28) == 0) {
        uVar6 = 0;
      }
      else {
        puVar11 = *(undefined8 **)(*(long *)(local_1718 + 0x28) + 0x10);
        uVar6 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar11)();
        }
      }
      local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar6,(undefined1)local_70)) & 0xffffffffffff01ff;
      local_3688 = local_2db8;
      local_80 = PTR_DAT_04bb4c58 + 0x10;
      local_3680 = 0;
      if (*(long *)(local_2db8 + 0x28) == 0) {
        local_367f = 0;
      }
      else {
        puVar11 = *(undefined8 **)(*(long *)(local_2db8 + 0x28) + 0x10);
        local_367f = 0;
        if (puVar11 != (undefined8 *)0x0) {
          local_367f = (**(code **)*puVar11)();
        }
      }
      local_367f = local_367f & 1;
      local_3640 = 0;
      local_3648 = 0;
      local_3690 = PTR_DAT_04bb4c50 + 0x10;
      local_3650 = 0;
      local_3658 = 0;
      local_3660 = 0;
      local_3668 = 0;
      local_3670 = 0;
      local_3678 = 0;
      local_3634 = 0;
      uStack_3630 = 0;
      local_362c = 0;
      uStack_363c = 0;
      uStack_3638 = 0;
      local_3624 = 0;
      local_361c = 0;
      local_3614 = 0;
      uStack_360f = 0;
      local_360c = 0;
      local_3628 = 2;
      local_3606 = 0;
      local_3607 = 0xee;
      memset(&local_3600,0,0x830);
      local_3608 = 1;
      uVar14 = FUN_026535fc(&local_80);
      FUN_027c1430(auStack_3938,uVar14);
      FUN_00807334(&local_3678,auStack_3938);
      uVar14 = FUN_026535fc(&local_80);
      uVar15 = FUN_02125b64(&local_3690);
      FUN_00807430(uVar14,uVar15);
      ppuVar16 = &local_3690;
    }
    else {
      uVar10 = FUN_007e4bb0(auStack_1720);
      if ((uVar10 & 1) == 0) {
        return;
      }
      uVar10 = FUN_007e4bb0(auStack_2dc8);
      if ((uVar10 & 1) != 0) {
        return;
      }
      iVar9 = FUN_007e68d0(auStack_1720);
      local_3678 = CONCAT44(local_3678._4_4_,iVar9);
      if (iVar9 != 2) {
        return;
      }
      if (local_1710 == 0) {
        return;
      }
      if (local_2dc0 == 0) {
        return;
      }
      local_78 = local_1710;
      local_70 = local_70 & 0xffffffffffffff00;
      if (*(long *)(local_1710 + 0x28) == 0) {
        uVar6 = 0;
      }
      else {
        puVar11 = *(undefined8 **)(*(long *)(local_1710 + 0x28) + 0x10);
        uVar6 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar11)();
        }
      }
      local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar6,(undefined1)local_70)) & 0xffffffffffff01ff;
      local_3688 = local_2dc0;
      local_80 = PTR_DAT_04bb4c50 + 0x10;
      local_3680 = 0;
      if (*(long *)(local_2dc0 + 0x28) == 0) {
        local_367f = 0;
      }
      else {
        puVar11 = *(undefined8 **)(*(long *)(local_2dc0 + 0x28) + 0x10);
        local_367f = 0;
        if (puVar11 != (undefined8 *)0x0) {
          local_367f = (**(code **)*puVar11)();
        }
      }
      local_367f = local_367f & 1;
      local_3640 = 0;
      local_3648 = 0;
      local_3690 = PTR_DAT_04bb4c58 + 0x10;
      local_3650 = 0;
      local_3658 = 0;
      local_3660 = 0;
      local_3668 = 0;
      local_3670 = 0;
      local_3678 = 0;
      local_3634 = 0;
      uStack_3630 = 0;
      local_362c = 0;
      uStack_363c = 0;
      uStack_3638 = 0;
      local_3624 = 0;
      local_361c = 0;
      local_3614 = 0;
      uStack_360f = 0;
      local_360c = 0;
      local_3628 = 2;
      local_3606 = 0;
      local_3607 = 0xee;
      memset(&local_3600,0,0x830);
      local_3608 = 1;
      uVar14 = FUN_026535fc(&local_3690);
      FUN_027c1430(auStack_3be8,uVar14);
      FUN_00807334(&local_3678,auStack_3be8);
      uVar14 = FUN_026535fc(&local_3690);
      uVar15 = FUN_02125b64(&local_80);
      FUN_00807430(uVar14,uVar15);
      ppuVar16 = &local_80;
    }
    uVar14 = FUN_02125b64(ppuVar16);
    FUN_027c1db4(uVar14,&local_3678);
    FUN_025196e4(&uStack_3939);
    FUN_007e5828(auStack_1720,&uStack_3939);
    FUN_025196e4(&uStack_3939);
    FUN_007e5828(auStack_2dc8,&uStack_3939);
    FUN_02640184(&local_3690);
    FUN_02640184(&local_80);
    return;
  }
  if ((uVar10 & 1) == 0) {
    if (local_1718 == 0) {
      return;
    }
    if (local_2dc0 == 0) {
      return;
    }
    local_3640 = 0;
    local_3628 = 2;
    local_3607 = 0xee;
    local_3648 = 0;
    local_3650 = 0;
    local_3658 = 0;
    local_3660 = 0;
    local_3668 = 0;
    local_3670 = 0;
    local_3678 = 0;
    local_3634 = 0;
    uStack_3630 = 0;
    local_362c = 0;
    uStack_363c = 0;
    uStack_3638 = 0;
    local_3624 = 0;
    local_361c = 0;
    local_3614 = 0;
    uStack_360f = 0;
    local_360c = 0;
    local_3608 = 0;
    local_3606 = 0;
    memset(&local_3600,0,0x230);
    if ((*(long **)(local_2dc0 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(local_2dc0 + 0x28), puVar11 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar11)();
      uVar10 = uVar10 & 0xffffffff;
    }
    FUN_027c1640(&local_3678,*(long *)(local_2dc0 + 0x10) + *(long *)(local_2dc0 + 8));
    if ((((uVar10 & 1) != 0) && (*(long *)(local_2dc0 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(local_2dc0 + 0x28) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
    if ((*(long **)(local_1718 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(local_1718 + 0x28), puVar11 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar11)();
      uVar10 = uVar10 & 0xffffffff;
    }
    lVar17 = *(long *)(local_1718 + 0x10) + *(long *)(local_1718 + 8);
    lVar18 = *(long *)(local_2dc0 + 0x28);
    if (lVar18 == 0) {
      FUN_027c1640(*(long *)(local_2dc0 + 0x10) + *(long *)(local_2dc0 + 8),lVar17);
    }
    else {
      if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
        uVar12 = 0;
LAB_02654238:
        plVar13 = *(long **)(lVar18 + 0x20);
        if (plVar13 != (long *)0x0) {
          local_80 = *(undefined **)(local_2dc0 + 8);
          local_78 = *(undefined8 *)(local_2dc0 + 0x10);
          local_70 = 0x2a8;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
        }
      }
      else {
        uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        lVar18 = *(long *)(local_2dc0 + 0x28);
        uVar12 = uVar12 & 0xffffffff;
        if (lVar18 != 0) goto LAB_02654238;
      }
      FUN_027c1640(*(long *)(local_2dc0 + 0x10) + *(long *)(local_2dc0 + 8),lVar17);
      if ((((uVar12 & 1) != 0) && (*(long *)(local_2dc0 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(local_2dc0 + 0x28) + 0x18),
         puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
    }
    lVar17 = *(long *)(local_1718 + 0x28);
    if ((uVar10 & 1) == 0) {
LAB_026542b4:
      if (lVar17 != 0) goto LAB_026542b8;
LAB_026542dc:
      FUN_027c1640(*(long *)(local_1718 + 0x10) + *(long *)(local_1718 + 8),&local_3678);
    }
    else {
      if (lVar17 == 0) goto LAB_026542dc;
      if (*(undefined8 **)(lVar17 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar17 + 8))();
        lVar17 = *(long *)(local_1718 + 0x28);
        goto LAB_026542b4;
      }
LAB_026542b8:
      if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
        uVar10 = 0;
LAB_0265463c:
        plVar13 = *(long **)(lVar17 + 0x20);
        if (plVar13 != (long *)0x0) {
          local_80 = *(undefined **)(local_1718 + 8);
          local_78 = *(undefined8 *)(local_1718 + 0x10);
          local_70 = 0x2a8;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
        }
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        lVar17 = *(long *)(local_1718 + 0x28);
        uVar10 = uVar10 & 0xffffffff;
        if (lVar17 != 0) goto LAB_0265463c;
      }
      FUN_027c1640(*(long *)(local_1718 + 0x10) + *(long *)(local_1718 + 8),&local_3678);
      if ((((uVar10 & 1) != 0) && (*(long *)(local_1718 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(local_1718 + 0x28) + 0x18),
         puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
    }
    puVar4 = PTR_DAT_04bb39b0;
    pbVar22 = PTR_DAT_04bb32e0;
    lVar17 = *(long *)PTR_DAT_04bb39b0;
    pbVar19 = PTR_DAT_04bb32e0;
    if (lVar17 == 0) {
      if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02654708;
LAB_02654774:
      bVar20 = *pbVar19;
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      local_3690 = (undefined *)CONCAT71(local_3690._1_7_,bVar20);
    }
    else {
      if (*(int *)(lVar17 + 0x15c) != 0) {
        pbVar19 = (byte *)(lVar17 + 0x158);
      }
      if ((*pbVar19 < 8) ||
         (((*(int *)(lVar17 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar19 < 8))))
      goto LAB_02654774;
LAB_02654708:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0265476c:
        pbVar19 = PTR_DAT_04bb5038;
        goto LAB_02654774;
      }
      lVar17 = **(long **)PTR_DAT_04bb27d0;
      bVar20 = *(byte *)(lVar17 + 0x473);
      pbVar19 = PTR_DAT_04bb5038;
      if ((long)(char)bVar20 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
        if (7 < bVar20) {
          puVar3 = (uint *)(lVar17 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar19 = (byte *)(lVar17 + 0x471);
        }
      }
      bVar20 = *pbVar19;
      bVar5 = 7 < bVar20;
      if (bVar5) {
        bVar20 = 0xff;
      }
      local_3690 = (undefined *)CONCAT71(local_3690._1_7_,bVar20);
      if (bVar5) goto LAB_0265476c;
    }
    FUN_02582a24(&local_3690);
    uVar7 = FUN_02582d8c(&local_3690,1);
    if (((uVar7 < 8) &&
        (lVar17 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar17 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(int *)(lVar17 + (ulong)uVar7 * 0x13f0 + 0x13d0) == 0)) {
      uVar7 = (uint)*(byte *)(lVar17 + (ulong)uVar7 * 0x13f0 + 0x13d5);
    }
    else {
      uVar7 = 0xffffffff;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar7);
    FUN_007e5260(auStack_1720,&local_80);
    lVar17 = *(long *)puVar4;
    if (lVar17 == 0) {
LAB_02654834:
      if (7 < *pbVar22) {
LAB_02654840:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar17 = **(long **)PTR_DAT_04bb27d0;
          bVar20 = *(byte *)(lVar17 + 0x473);
          pbVar19 = PTR_DAT_04bb5038;
          if ((long)(char)bVar20 != 0xffffffffffffffff) {
            puVar3 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
            if (7 < bVar20) {
              puVar3 = (uint *)(lVar17 + 0x48);
            }
            if ((*puVar3 & 8) != 0) {
              pbVar19 = (byte *)(lVar17 + 0x471);
            }
          }
          bVar20 = *pbVar19;
          bVar5 = 7 < bVar20;
          if (bVar5) {
            bVar20 = 0xff;
          }
          local_3690 = (undefined *)CONCAT71(local_3690._1_7_,bVar20);
          if (!bVar5) goto LAB_026548c0;
        }
        pbVar22 = PTR_DAT_04bb5038;
      }
    }
    else {
      if (*(int *)(lVar17 + 0x15c) != 0) {
        pbVar22 = (byte *)(lVar17 + 0x158);
      }
      if (7 < *pbVar22) {
        if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar22 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02654834;
        }
        goto LAB_02654840;
      }
    }
    bVar20 = *pbVar22;
  }
  else {
    if (local_1710 == 0) {
      return;
    }
    if (local_2db8 == 0) {
      return;
    }
    local_3640 = 0;
    local_3628 = 2;
    local_3648 = 0;
    local_3650 = 0;
    local_3658 = 0;
    local_3660 = 0;
    local_3668 = 0;
    local_3670 = 0;
    local_3678 = 0;
    local_3634 = 0;
    uStack_3630 = 0;
    local_362c = 0;
    uStack_363c = 0;
    uStack_3638 = 0;
    local_3624 = 0;
    local_361c = 0;
    local_3614 = 0;
    uStack_360f = 0;
    local_360c = 0;
    local_3607 = 0xee;
    local_3606 = 0;
    memset(&local_3600,0,0x830);
    local_3608 = 1;
    if ((*(long **)(local_2db8 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(local_2db8 + 0x28), puVar11 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar11)();
      uVar10 = uVar10 & 0xffffffff;
    }
    puVar11 = (undefined8 *)(*(long *)(local_2db8 + 0x10) + *(long *)(local_2db8 + 8));
    local_3678 = *puVar11;
    local_3628 = *(undefined1 *)(puVar11 + 10);
    local_3670 = puVar11[1];
    local_3668 = puVar11[2];
    local_3650 = puVar11[5];
    local_3648 = puVar11[6];
    local_3660 = puVar11[3];
    local_3658 = puVar11[4];
    uStack_3630 = (undefined4)puVar11[9];
    local_362c = (undefined4)((ulong)puVar11[9] >> 0x20);
    local_3640 = (undefined4)puVar11[7];
    uStack_363c = (undefined4)((ulong)puVar11[7] >> 0x20);
    local_3624 = *(undefined8 *)((long)puVar11 + 0x54);
    uStack_3638 = (undefined4)puVar11[8];
    local_3634 = (undefined4)((ulong)puVar11[8] >> 0x20);
    local_361c = *(undefined8 *)((long)puVar11 + 0x5c);
    local_360c = *(uint *)((long)puVar11 + 0x6c);
    local_3614 = (undefined5)*(undefined8 *)((long)puVar11 + 100);
    uStack_360f = (undefined3)((ulong)*(undefined8 *)((long)puVar11 + 100) >> 0x28);
    if (1 < local_360c) {
      local_360c = 0;
    }
    local_3608 = *(undefined1 *)(puVar11 + 0xe);
    local_3607 = *(undefined1 *)((long)puVar11 + 0x71);
    local_3606 = *(undefined2 *)((long)puVar11 + 0x72);
    local_3600 = puVar11[0xf];
    uStack_35f8 = puVar11[0x10];
    local_35f0 = puVar11[0x11];
    local_35e8 = puVar11[0x12];
    uStack_35d8 = (undefined5)((ulong)*(undefined8 *)((long)puVar11 + 0x9d) >> 0x18);
    uStack_35e0 = (undefined5)puVar11[0x13];
    local_35db = (undefined3)((ulong)puVar11[0x13] >> 0x28);
    memcpy(auStack_35d3,(void *)((long)puVar11 + 0xa5),0x800);
    local_2dd3 = *(undefined1 *)((long)puVar11 + 0x8a5);
    local_2dd2 = 0;
    FUN_027c1b80(&local_3678);
    if ((((uVar10 & 1) != 0) && (*(long *)(local_2db8 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(local_2db8 + 0x28) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
    if ((*(long **)(local_1710 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(local_1710 + 0x28), puVar11 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar11)();
      uVar10 = uVar10 & 0xffffffff;
    }
    puVar1 = (undefined4 *)(*(long *)(local_1710 + 0x10) + *(long *)(local_1710 + 8));
    lVar17 = *(long *)(local_2db8 + 0x28);
    if (lVar17 == 0) {
      uVar12 = 0;
    }
    else {
      if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        lVar17 = *(long *)(local_2db8 + 0x28);
        uVar12 = uVar12 & 0xffffffff;
        if (lVar17 == 0) goto LAB_026540e4;
      }
      plVar13 = *(long **)(lVar17 + 0x20);
      if (plVar13 != (long *)0x0) {
        local_80 = *(undefined **)(local_2db8 + 8);
        local_78 = *(undefined8 *)(local_2db8 + 0x10);
        local_70 = 0x8a8;
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
      }
    }
LAB_026540e4:
    puVar2 = (undefined4 *)(*(long *)(local_2db8 + 0x10) + *(long *)(local_2db8 + 8));
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
    uVar14 = *(undefined8 *)(puVar1 + 6);
    uVar15 = *(undefined8 *)(puVar1 + 8);
    uVar21 = *(undefined8 *)(puVar1 + 0xc);
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
    *(undefined8 *)(puVar2 + 0xc) = uVar21;
    *(undefined8 *)(puVar2 + 6) = uVar14;
    *(undefined8 *)(puVar2 + 8) = uVar15;
    uVar21 = *(undefined8 *)(puVar1 + 0x12);
    uVar14 = *(undefined8 *)(puVar1 + 0xe);
    uVar15 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)(puVar1 + 0x14);
    *(undefined8 *)(puVar2 + 0x10) = uVar15;
    *(undefined8 *)(puVar2 + 0x12) = uVar21;
    *(undefined8 *)(puVar2 + 0xe) = uVar14;
    uVar14 = *(undefined8 *)(puVar1 + 0x15);
    uVar15 = *(undefined8 *)(puVar1 + 0x17);
    *(undefined8 *)(puVar2 + 0x19) = *(undefined8 *)(puVar1 + 0x19);
    *(undefined8 *)(puVar2 + 0x17) = uVar15;
    *(undefined8 *)(puVar2 + 0x15) = uVar14;
    uVar7 = puVar1[0x1b];
    if (1 < uVar7) {
      uVar7 = 0;
    }
    puVar2[0x1b] = uVar7;
    *(undefined1 *)(puVar2 + 0x1c) = *(undefined1 *)(puVar1 + 0x1c);
    *(undefined1 *)((long)puVar2 + 0x71) = *(undefined1 *)((long)puVar1 + 0x71);
    *(undefined2 *)((long)puVar2 + 0x72) = *(undefined2 *)((long)puVar1 + 0x72);
    uVar14 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(puVar1 + 0x1e);
    *(undefined8 *)(puVar2 + 0x20) = uVar14;
    uVar21 = *(undefined8 *)(puVar1 + 0x26);
    uVar14 = *(undefined8 *)(puVar1 + 0x22);
    uVar15 = *(undefined8 *)(puVar1 + 0x24);
    *(undefined8 *)((long)puVar2 + 0x9d) = *(undefined8 *)((long)puVar1 + 0x9d);
    *(undefined8 *)(puVar2 + 0x24) = uVar15;
    *(undefined8 *)(puVar2 + 0x26) = uVar21;
    *(undefined8 *)(puVar2 + 0x22) = uVar14;
    memcpy((void *)((long)puVar2 + 0xa5),(void *)((long)puVar1 + 0xa5),0x800);
    uVar6 = *(undefined1 *)((long)puVar1 + 0x8a5);
    *(undefined2 *)((long)puVar2 + 0x8a6) = 0;
    *(undefined1 *)((long)puVar2 + 0x8a5) = uVar6;
    FUN_027c1b80(puVar2);
    if ((((uVar12 & 1) != 0) && (*(long *)(local_2db8 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(local_2db8 + 0x28) + 0x18),
       puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    lVar17 = *(long *)(local_1710 + 0x28);
    if ((uVar10 & 1) == 0) {
LAB_02654204:
      if (lVar17 != 0) goto LAB_02654208;
LAB_0265422c:
      uVar10 = 0;
    }
    else {
      if (lVar17 == 0) goto LAB_0265422c;
      if (*(undefined8 **)(lVar17 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar17 + 8))();
        lVar17 = *(long *)(local_1710 + 0x28);
        goto LAB_02654204;
      }
LAB_02654208:
      if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        lVar17 = *(long *)(local_1710 + 0x28);
        uVar10 = uVar10 & 0xffffffff;
        if (lVar17 == 0) goto LAB_0265431c;
      }
      plVar13 = *(long **)(lVar17 + 0x20);
      if (plVar13 != (long *)0x0) {
        local_80 = *(undefined **)(local_1710 + 8);
        local_78 = *(undefined8 *)(local_1710 + 0x10);
        local_70 = 0x8a8;
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
      }
    }
LAB_0265431c:
    puVar1 = (undefined4 *)(*(long *)(local_1710 + 0x10) + *(long *)(local_1710 + 8));
    *puVar1 = (undefined4)local_3678;
    puVar1[1] = local_3678._4_4_;
    *(undefined8 *)(puVar1 + 2) = local_3670;
    *(undefined8 *)(puVar1 + 4) = local_3668;
    *(undefined8 *)(puVar1 + 10) = local_3650;
    *(undefined8 *)(puVar1 + 0xc) = local_3648;
    *(undefined8 *)(puVar1 + 6) = local_3660;
    *(undefined8 *)(puVar1 + 8) = local_3658;
    *(undefined1 *)(puVar1 + 0x14) = local_3628;
    *(ulong *)(puVar1 + 0x10) = CONCAT44(local_3634,uStack_3638);
    *(ulong *)(puVar1 + 0x12) = CONCAT44(local_362c,uStack_3630);
    *(ulong *)(puVar1 + 0xe) = CONCAT44(uStack_363c,local_3640);
    *(ulong *)(puVar1 + 0x19) = CONCAT35(uStack_360f,local_3614);
    *(undefined8 *)(puVar1 + 0x17) = local_361c;
    *(undefined8 *)(puVar1 + 0x15) = local_3624;
    uVar7 = local_360c;
    if (1 < local_360c) {
      uVar7 = 0;
    }
    puVar1[0x1b] = uVar7;
    *(undefined1 *)(puVar1 + 0x1c) = local_3608;
    *(undefined1 *)((long)puVar1 + 0x71) = local_3607;
    *(undefined2 *)((long)puVar1 + 0x72) = local_3606;
    *(undefined8 *)(puVar1 + 0x1e) = local_3600;
    *(undefined8 *)(puVar1 + 0x20) = uStack_35f8;
    *(ulong *)((long)puVar1 + 0x9d) = CONCAT53(uStack_35d8,local_35db);
    *(undefined8 *)(puVar1 + 0x24) = local_35e8;
    *(ulong *)(puVar1 + 0x26) = CONCAT35(local_35db,uStack_35e0);
    *(undefined8 *)(puVar1 + 0x22) = local_35f0;
    memcpy((void *)((long)puVar1 + 0xa5),auStack_35d3,0x800);
    *(undefined2 *)((long)puVar1 + 0x8a6) = 0;
    *(undefined1 *)((long)puVar1 + 0x8a5) = local_2dd3;
    FUN_027c1b80(puVar1);
    if ((((uVar10 & 1) != 0) && (*(long *)(local_1710 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(local_1710 + 0x28) + 0x18),
       puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    puVar4 = PTR_DAT_04bb39b0;
    lVar17 = *(long *)PTR_DAT_04bb39b0;
    pbVar19 = PTR_DAT_04bb32e0;
    if (lVar17 == 0) {
LAB_0265446c:
      if (*pbVar19 < 8) goto LAB_026544e4;
LAB_02654478:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_026544dc:
        pbVar19 = PTR_DAT_04bb5038;
        goto LAB_026544e4;
      }
      lVar17 = **(long **)PTR_DAT_04bb27d0;
      bVar20 = *(byte *)(lVar17 + 0x473);
      pbVar19 = PTR_DAT_04bb5038;
      if ((long)(char)bVar20 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
        if (7 < bVar20) {
          puVar3 = (uint *)(lVar17 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar19 = (byte *)(lVar17 + 0x471);
        }
      }
      bVar20 = *pbVar19;
      bVar5 = 7 < bVar20;
      if (bVar5) {
        bVar20 = 0xff;
      }
      local_3690 = (undefined *)CONCAT71(local_3690._1_7_,bVar20);
      if (bVar5) goto LAB_026544dc;
    }
    else {
      if (*(int *)(lVar17 + 0x15c) != 0) {
        pbVar19 = (byte *)(lVar17 + 0x158);
      }
      if (7 < *pbVar19) {
        if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0265446c;
        }
        goto LAB_02654478;
      }
LAB_026544e4:
      bVar20 = *pbVar19;
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      local_3690 = (undefined *)CONCAT71(local_3690._1_7_,bVar20);
    }
    FUN_02582a24(&local_3690);
    uVar7 = FUN_02582d8c(&local_3690,1);
    if (((uVar7 < 8) &&
        (lVar17 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar17 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(int *)(lVar17 + (ulong)uVar7 * 0x13f0 + 0x13d0) == 0)) {
      uVar7 = (uint)*(byte *)(lVar17 + (ulong)uVar7 * 0x13f0 + 0x13d5);
    }
    else {
      uVar7 = 0xffffffff;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar7);
    FUN_007e5260(auStack_1720,&local_80);
    lVar17 = *(long *)puVar4;
    pbVar19 = PTR_DAT_04bb32e0;
    if (lVar17 == 0) {
LAB_026545b8:
      if (7 < *pbVar19) {
LAB_026545c4:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar17 = **(long **)PTR_DAT_04bb27d0;
          bVar20 = *(byte *)(lVar17 + 0x473);
          pbVar19 = PTR_DAT_04bb5038;
          if ((long)(char)bVar20 != 0xffffffffffffffff) {
            puVar3 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
            if (7 < bVar20) {
              puVar3 = (uint *)(lVar17 + 0x48);
            }
            if ((*puVar3 & 8) != 0) {
              pbVar19 = (byte *)(lVar17 + 0x471);
            }
          }
          bVar20 = *pbVar19;
          bVar5 = bVar20 < 8;
          if (!bVar5) {
            bVar20 = 0xff;
          }
          local_3690 = (undefined *)CONCAT71(local_3690._1_7_,bVar20);
          if (bVar5) goto LAB_026548c0;
        }
        pbVar19 = PTR_DAT_04bb5038;
      }
    }
    else {
      if (*(int *)(lVar17 + 0x15c) != 0) {
        pbVar19 = (byte *)(lVar17 + 0x158);
      }
      if (7 < *pbVar19) {
        if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_026545b8;
        }
        goto LAB_026545c4;
      }
    }
    bVar20 = *pbVar19;
  }
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_3690 = (undefined *)CONCAT71(local_3690._1_7_,bVar20);
LAB_026548c0:
  FUN_02582a24(&local_3690);
  uVar7 = FUN_02582d8c(&local_3690,1);
  if (((uVar7 < 8) &&
      (lVar17 = *(long *)PTR_DAT_04bb4fb8,
      *(char *)(lVar17 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(int *)(lVar17 + (ulong)uVar7 * 0x13f0 + 0x13d0) == 0)) {
    uVar7 = (uint)*(byte *)(lVar17 + (ulong)uVar7 * 0x13f0 + 0x13d5);
  }
  else {
    uVar7 = 0xffffffff;
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar7);
  FUN_007e5260(auStack_2dc8,&local_80);
  return;
}

