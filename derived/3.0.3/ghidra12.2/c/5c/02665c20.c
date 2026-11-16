
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02665c20(byte *param_1,undefined2 *param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  long *plVar10;
  uint *puVar11;
  byte bVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  byte local_24 [4];
  
  bVar12 = *param_1;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  if ((param_3 & 1) == 0) {
    local_58 = (undefined **)CONCAT71(local_58._1_7_,bVar12);
    lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
    if (lVar5 == 0) {
      return 0;
    }
    if ((*(long **)(lVar5 + 0x178) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x178), puVar6 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      uVar7 = uVar7 & 0xffffffff;
    }
    puVar9 = (undefined2 *)FUN_026e85f0(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    *param_2 = *puVar9;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0x178);
    if ((uVar7 & 1) == 0) {
LAB_02665d84:
      if (plVar10 == (long *)0x0) goto LAB_02665da4;
LAB_02665d88:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02665da4;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0x178);
          goto LAB_02665d84;
        }
        goto LAB_02665d88;
      }
LAB_02665da4:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_026e88f0(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    param_2[4] = *puVar9;
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0x178);
    if ((uVar7 & 1) == 0) {
LAB_02665df8:
      if (plVar10 == (long *)0x0) goto LAB_02665e18;
LAB_02665dfc:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02665e18;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0x178);
          goto LAB_02665df8;
        }
        goto LAB_02665dfc;
      }
LAB_02665e18:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_026e8b00(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    param_2[8] = *puVar9;
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0x178);
    if ((uVar7 & 1) == 0) {
LAB_02665e6c:
      if (plVar10 == (long *)0x0) goto LAB_02665e8c;
LAB_02665e70:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02665e8c;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0x178);
          goto LAB_02665e6c;
        }
        goto LAB_02665e70;
      }
LAB_02665e8c:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_02814c00(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    param_2[0x20] = *puVar9;
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0x178);
    if ((uVar7 & 1) == 0) {
LAB_02665ee0:
      if (plVar10 == (long *)0x0) goto LAB_02665f00;
LAB_02665ee4:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02665f00;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0x178);
          goto LAB_02665ee0;
        }
        goto LAB_02665ee4;
      }
LAB_02665f00:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_026e8d10(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    param_2[0xc] = *puVar9;
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0x178);
    if ((uVar7 & 1) == 0) {
LAB_02665f54:
      if (plVar10 == (long *)0x0) goto LAB_02665f74;
LAB_02665f58:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02665f74;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0x178);
          goto LAB_02665f54;
        }
        goto LAB_02665f58;
      }
LAB_02665f74:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_026e9010(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    param_2[0x10] = *puVar9;
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0x178);
    if ((uVar7 & 1) == 0) {
LAB_02665fc8:
      if (plVar10 == (long *)0x0) goto LAB_02665fe8;
LAB_02665fcc:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02665fe8;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0x178);
          goto LAB_02665fc8;
        }
        goto LAB_02665fcc;
      }
LAB_02665fe8:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_026e9240(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    param_2[0x14] = *puVar9;
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0x178);
    if ((uVar7 & 1) == 0) {
LAB_0266603c:
      if (plVar10 == (long *)0x0) goto LAB_0266605c;
LAB_02666040:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_0266605c;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0x178);
          goto LAB_0266603c;
        }
        goto LAB_02666040;
      }
LAB_0266605c:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_026e9470(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    param_2[0x18] = *puVar9;
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0x178);
    if ((uVar7 & 1) == 0) {
LAB_026660b0:
      if (plVar10 == (long *)0x0) goto LAB_026660d0;
LAB_026660b4:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_026660d0;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0x178);
          goto LAB_026660b0;
        }
        goto LAB_026660b4;
      }
LAB_026660d0:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_026e96a0(*(long *)(lVar5 + 0x160) + *(long *)(lVar5 + 0x158));
    param_2[0x1c] = *puVar9;
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(puVar9 + 2);
    if ((uVar7 & 1) == 0) goto LAB_026666e8;
    lVar5 = *(long *)(lVar5 + 0x178);
  }
  else {
    local_24[0] = bVar12;
    lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
    if (lVar5 == 0) {
      return 0;
    }
    if ((*(long **)(lVar5 + 0xd0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0xd0), puVar6 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      uVar7 = uVar7 & 0xffffffff;
    }
    lVar15 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    if (*(char *)(lVar15 + 0xaf89) == '\0' || 7 < *(byte *)(lVar15 + 0xaf88)) {
      lVar14 = lVar15;
      if (((*(char *)(lVar15 + 0xaf8a) != '\0') && (uVar8 = FUN_016e5e90(), (uVar8 & 1) != 0)) &&
         (lVar14 = lVar15 + 0xaf90, (*(byte *)(lVar15 + 0xaf8b) & 0xfe) != 0)) {
        lVar14 = lVar15;
      }
    }
    else {
      lVar14 = lVar15 + (ulong)*(byte *)(lVar15 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar9 = (undefined2 *)FUN_026e85f0(lVar14);
    *param_2 = *puVar9;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0xd0);
    if ((uVar7 & 1) == 0) {
LAB_0266616c:
      if (plVar10 == (long *)0x0) goto LAB_0266618c;
LAB_02666170:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_0266618c;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0xd0);
          goto LAB_0266616c;
        }
        goto LAB_02666170;
      }
LAB_0266618c:
      uVar7 = 0;
    }
    lVar15 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    if ((*(char *)(lVar15 + 0xaf89) == '\0') || (7 < *(byte *)(lVar15 + 0xaf88))) {
      lVar14 = lVar15;
      if ((*(char *)(lVar15 + 0xaf8a) != '\0') &&
         ((uVar8 = FUN_016e5e90(), (uVar8 & 1) != 0 &&
          (lVar14 = lVar15 + 0xaf90, (*(byte *)(lVar15 + 0xaf8b) & 0xfe) != 0)))) {
        lVar14 = lVar15;
      }
    }
    else {
      lVar14 = lVar15 + (ulong)*(byte *)(lVar15 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar9 = (undefined2 *)FUN_026ea320(lVar14);
    param_2[4] = *puVar9;
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0xd0);
    if ((uVar7 & 1) == 0) {
LAB_02666240:
      if (plVar10 == (long *)0x0) goto LAB_02666260;
LAB_02666244:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02666260;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0xd0);
          goto LAB_02666240;
        }
        goto LAB_02666244;
      }
LAB_02666260:
      uVar7 = 0;
    }
    lVar15 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    if ((*(char *)(lVar15 + 0xaf89) == '\0') || (7 < *(byte *)(lVar15 + 0xaf88))) {
      lVar14 = lVar15;
      if ((*(char *)(lVar15 + 0xaf8a) != '\0') &&
         ((uVar8 = FUN_016e5e90(), (uVar8 & 1) != 0 &&
          (lVar14 = lVar15 + 0xaf90, (*(byte *)(lVar15 + 0xaf8b) & 0xfe) != 0)))) {
        lVar14 = lVar15;
      }
    }
    else {
      lVar14 = lVar15 + (ulong)*(byte *)(lVar15 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar9 = (undefined2 *)FUN_026ea720(lVar14);
    param_2[8] = *puVar9;
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0xd0);
    if ((uVar7 & 1) == 0) {
LAB_02666314:
      if (plVar10 == (long *)0x0) goto LAB_02666334;
LAB_02666318:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02666334;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0xd0);
          goto LAB_02666314;
        }
        goto LAB_02666318;
      }
LAB_02666334:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_028078d8(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    param_2[0x20] = *puVar9;
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0xd0);
    if ((uVar7 & 1) == 0) {
LAB_02666388:
      if (plVar10 == (long *)0x0) goto LAB_026663a8;
LAB_0266638c:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_026663a8;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0xd0);
          goto LAB_02666388;
        }
        goto LAB_0266638c;
      }
LAB_026663a8:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_028078d8(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    param_2[0xc] = *puVar9;
    *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0xd0);
    if ((uVar7 & 1) == 0) {
LAB_026663fc:
      if (plVar10 == (long *)0x0) goto LAB_0266641c;
LAB_02666400:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_0266641c;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0xd0);
          goto LAB_026663fc;
        }
        goto LAB_02666400;
      }
LAB_0266641c:
      uVar7 = 0;
    }
    puVar9 = (undefined2 *)FUN_02807b30(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    param_2[0x10] = *puVar9;
    *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0xd0);
    if ((uVar7 & 1) == 0) {
LAB_02666470:
      if (plVar10 == (long *)0x0) goto LAB_02666490;
LAB_02666474:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02666490;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0xd0);
          goto LAB_02666470;
        }
        goto LAB_02666474;
      }
LAB_02666490:
      uVar7 = 0;
    }
    lVar15 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    if ((*(char *)(lVar15 + 0xaf89) == '\0') || (7 < *(byte *)(lVar15 + 0xaf88))) {
      lVar14 = lVar15;
      if ((*(char *)(lVar15 + 0xaf8a) != '\0') &&
         ((uVar8 = FUN_016e5e90(), (uVar8 & 1) != 0 &&
          (lVar14 = lVar15 + 0xaf90, (*(byte *)(lVar15 + 0xaf8b) & 0xfe) != 0)))) {
        lVar14 = lVar15;
      }
    }
    else {
      lVar14 = lVar15 + (ulong)*(byte *)(lVar15 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar9 = (undefined2 *)FUN_026e9240(lVar14);
    param_2[0x14] = *puVar9;
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0xd0);
    if ((uVar7 & 1) == 0) {
LAB_02666544:
      if (plVar10 == (long *)0x0) goto LAB_02666564;
LAB_02666548:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02666564;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0xd0);
          goto LAB_02666544;
        }
        goto LAB_02666548;
      }
LAB_02666564:
      uVar7 = 0;
    }
    lVar15 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    if ((*(char *)(lVar15 + 0xaf89) == '\0') || (7 < *(byte *)(lVar15 + 0xaf88))) {
      lVar14 = lVar15;
      if ((*(char *)(lVar15 + 0xaf8a) != '\0') &&
         ((uVar8 = FUN_016e5e90(), (uVar8 & 1) != 0 &&
          (lVar14 = lVar15 + 0xaf90, (*(byte *)(lVar15 + 0xaf8b) & 0xfe) != 0)))) {
        lVar14 = lVar15;
      }
    }
    else {
      lVar14 = lVar15 + (ulong)*(byte *)(lVar15 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar9 = (undefined2 *)FUN_026e9470(lVar14);
    param_2[0x18] = *puVar9;
    *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(puVar9 + 2);
    plVar10 = *(long **)(lVar5 + 0xd0);
    if ((uVar7 & 1) == 0) {
LAB_02666618:
      if (plVar10 == (long *)0x0) goto LAB_02666638;
LAB_0266661c:
      if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_02666638;
      uVar7 = (*(code *)**(undefined8 **)*plVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    else {
      if (plVar10 != (long *)0x0) {
        if ((undefined8 *)plVar10[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar10[1])();
          plVar10 = *(long **)(lVar5 + 0xd0);
          goto LAB_02666618;
        }
        goto LAB_0266661c;
      }
LAB_02666638:
      uVar7 = 0;
    }
    lVar15 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    if ((*(char *)(lVar15 + 0xaf89) == '\0') || (7 < *(byte *)(lVar15 + 0xaf88))) {
      lVar14 = lVar15;
      if ((*(char *)(lVar15 + 0xaf8a) != '\0') &&
         ((uVar8 = FUN_016e5e90(), (uVar8 & 1) != 0 &&
          (lVar14 = lVar15 + 0xaf90, (*(byte *)(lVar15 + 0xaf8b) & 0xfe) != 0)))) {
        lVar14 = lVar15;
      }
    }
    else {
      lVar14 = lVar15 + (ulong)*(byte *)(lVar15 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar9 = (undefined2 *)FUN_026e96a0(lVar14);
    param_2[0x1c] = *puVar9;
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(puVar9 + 1);
    *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)((long)puVar9 + 3);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(puVar9 + 2);
    if ((uVar7 & 1) == 0) goto LAB_026666e8;
    lVar5 = *(long *)(lVar5 + 0xd0);
  }
  if ((lVar5 != 0) && (*(undefined8 **)(lVar5 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar5 + 8))();
  }
LAB_026666e8:
  puVar2 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2 + 0xc);
  lVar5 = *(long *)puVar2;
  if (lVar5 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_48 = 0;
      local_50 = *(undefined4 *)(param_2 + 0xc);
      uStack_4c = *(undefined4 *)(param_2 + 0xe);
      local_58 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_2 + 0xc);
          uVar3 = DAT_0558600c;
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
             (((puVar11 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8),
               puVar11 != (uint *)0x0 && (uVar4 = *puVar11, uVar4 != 0)) &&
              (puVar11 != (uint *)(ulong)uVar4)))) {
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            if (((*puVar13 != 0) && (uVar4 = puVar13[1], uVar4 != 0)) &&
               ((ulong)(ushort)puVar13[2] != 0)) {
              lVar5 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar13 + lVar5 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar5 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar11 - lVar5) / (ulong)uVar4);
                }
                if (*puVar13 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 8)
                   ) {
                  *(undefined4 *)(param_2 + 0xc) = _DAT_05586008;
                  *(undefined4 *)(param_2 + 0xe) = uVar3;
                }
              }
            }
          }
        }
      }
      lVar5 = *(long *)puVar2;
    }
  }
  uVar4 = FUN_0277d6c4(param_2 + 0x10);
  lVar15 = *(long *)puVar2;
  if (lVar15 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_48 = 0;
      local_50 = *(undefined4 *)(param_2 + 0x10);
      uStack_4c = *(undefined4 *)(param_2 + 0x12);
      local_58 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar5 = *(long *)(lVar15 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_2 + 0x10);
          uVar3 = DAT_0558600c;
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
             (((puVar11 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8),
               puVar11 != (uint *)0x0 && (uVar4 = *puVar11, uVar4 != 0)) &&
              (puVar11 != (uint *)(ulong)uVar4)))) {
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            if (((*puVar13 != 0) && (uVar4 = puVar13[1], uVar4 != 0)) &&
               ((ulong)(ushort)puVar13[2] != 0)) {
              lVar5 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar13 + lVar5 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar5 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar11 - lVar5) / (ulong)uVar4);
                }
                if (*puVar13 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0xc)) {
                  *(undefined4 *)(param_2 + 0x10) = _DAT_05586008;
                  *(undefined4 *)(param_2 + 0x12) = uVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

