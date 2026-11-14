
/* WARNING: Removing unreachable block (ram,0x01dbaa74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dba640(long param_1)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  byte bVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  undefined8 *puVar22;
  int local_d30 [2];
  long local_d28;
  undefined8 *local_d20 [202];
  int local_6d0 [2];
  long local_6c8;
  undefined8 *local_6c0;
  uint local_70;
  byte local_6c [12];
  
  plVar1 = (long *)(param_1 + 34000);
  if (*(int *)(param_1 + 0x84f4) == 7) {
    if (DAT_0537c938 == '\x01') {
LAB_01dba6f4:
      if (*(char *)(param_1 + 0x8507) == '\0') {
        *(undefined4 *)(param_1 + 0x84f4) = 8;
      }
    }
  }
  else if (*(int *)(param_1 + 0x84f4) == 5) {
    if (*(char *)(*(long *)PTR_DAT_04bc10b0 + 0xa8) != '\0') {
      *(undefined1 *)(param_1 + 0x8506) = 1;
    }
    if (*(char *)(*(long *)PTR_DAT_04bc10e0 + 0x38) != '\0') {
      *(undefined1 *)(param_1 + 0x8507) = 1;
    }
    if ((DAT_0537c938 == '\x01') && (*(char *)(param_1 + 0x8506) == '\0')) {
      *(undefined4 *)(param_1 + 0x84f4) = 7;
      goto LAB_01dba6f4;
    }
  }
  uVar11 = *(uint *)(param_1 + 0x84f4);
  if (uVar11 == *(uint *)(param_1 + 0x84f8)) {
LAB_01dba714:
    lVar12 = *(long *)(param_1 + 0x84c8);
    if (lVar12 == 0) goto LAB_01dba724;
    uVar16 = 1;
    goto LAB_01dba720;
  }
  puVar22 = (undefined8 *)(param_1 + 0x84d8);
  *puVar22 = 0;
  *(undefined8 *)(param_1 + 0x84e0) = 0;
  puVar5 = PTR_DAT_04bb27d0;
  uVar16 = *(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 8);
  if (uVar11 == 8) {
    iVar7 = FUN_01db8540(param_1 + 0x98,param_1 + 0x84f1,*(undefined1 *)(param_1 + 0x8500));
    iVar8 = FUN_01db8920(param_1 + 0x98,param_1 + 0x84f1);
    if (iVar8 + iVar7 == 0) {
      uVar11 = 10;
      *(undefined4 *)(param_1 + 0x84f4) = 10;
      goto LAB_01dba7c0;
    }
    uVar11 = *(uint *)(param_1 + 0x84f4);
    if (*(char *)(param_1 + 0x8504) != '\0') goto LAB_01dba7c8;
LAB_01dba7f4:
    puVar6 = PTR_DAT_04bc10e0;
    if ((uVar11 | 2) == 7) {
      *(undefined1 *)(*(long *)PTR_DAT_04bc10b0 + 0xa8) = 0;
      *(undefined1 *)(*(long *)puVar6 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x8502) = 0;
      *(undefined2 *)(param_1 + 0x84fc) = 0;
    }
  }
  else {
LAB_01dba7c0:
    if (*(char *)(param_1 + 0x8504) == '\0') goto LAB_01dba7f4;
LAB_01dba7c8:
    if ((0xf < uVar11) || ((1 << (ulong)(uVar11 & 0x1f) & 0xc300U) == 0)) goto LAB_01dba714;
  }
  puVar6 = PTR_DAT_04bb8460;
  switch(*(undefined4 *)(param_1 + 0x84f4)) {
  case 1:
  case 0x10:
    uVar10 = FUN_01d9a488(uVar16,param_1 + 0x84f1,plVar1,*(undefined1 *)(param_1 + 0x8500));
    if ((uVar10 & 1) != 0) {
      return;
    }
    break;
  case 2:
    lVar12 = *(long *)PTR_DAT_04bb49f8;
    if (*(int *)(lVar12 + 0x68) == 0 && *(int *)(lVar12 + 0xb0) == 0) {
      local_d30[0] = CONCAT31(local_d30[0]._1_3_,1);
      FUN_01da4dbc(lVar12,local_d30,1);
      return;
    }
    return;
  case 3:
  case 10:
  case 0x11:
    cVar4 = *(char *)(param_1 + 0x8500);
    FUN_01ca5b18(local_d30);
    FUN_01ca5b18(local_6d0);
    if (0 < local_d30[0]) {
      lVar12 = 0;
      puVar9 = local_d20[0];
      do {
        local_d20[0] = *(undefined8 **)(local_d28 + lVar12 * 8);
        lVar12 = lVar12 + 1;
        *local_d20[0] = puVar9;
        puVar9 = local_d20[0];
      } while (lVar12 < local_d30[0]);
    }
    local_d30[0] = 0;
    if (0 < local_6d0[0]) {
      lVar12 = 0;
      puVar9 = local_6c0;
      do {
        local_6c0 = *(undefined8 **)(local_6c8 + lVar12 * 8);
        lVar12 = lVar12 + 1;
        *local_6c0 = puVar9;
        puVar9 = local_6c0;
      } while (lVar12 < local_6d0[0]);
    }
    local_6c[0] = *(byte *)(param_1 + 0x84f1);
    local_6d0[0] = 0;
    if (7 < local_6c[0]) {
      local_6c[0] = 0xff;
    }
    lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
    if (lVar12 == 0) goto switchD_01dba848_caseD_0;
    lVar13 = lVar12 + 0x194b0;
    if (*(long *)(lVar12 + 0x194b8) == 0) {
      lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if (*(long **)(lVar13 + 0x248a8) == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar13 + 0x248a8);
      uVar10 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar10 = (**(code **)*puVar9)();
      }
    }
    iVar7 = 0;
    uVar11 = 0;
    lVar12 = *(long *)(lVar13 + 0x24890) + *(long *)(lVar13 + 0x24888);
    do {
      plVar18 = (long *)(lVar12 + ((long)((ulong)uVar11 << 0x20) >> 0x1c));
      lVar17 = *plVar18;
      if (lVar17 == 0) {
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar13 + 0x248a8) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x248a8) + 8), puVar9 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar9)();
        }
        if (iVar7 == 0) goto switchD_01dba848_caseD_0;
        goto LAB_01dbad2c;
      }
      local_70 = *(uint *)(lVar12 + (long)(int)uVar11 * 0x10 + 8);
      if (1 < local_70) {
        local_70 = 0;
      }
      piVar20 = local_d30 + (ulong)local_70 * 0x198;
      piVar2 = piVar20;
      if (1 < local_70) {
        piVar2 = local_d30;
      }
      if (*piVar2 < piVar2[1]) {
        piVar3 = piVar20;
        if (1 < local_70) {
          piVar3 = local_d30;
        }
        plVar21 = *(long **)(piVar3 + 4);
        if (plVar21 != (long *)0x0) {
          *(long *)(piVar3 + 4) = *plVar21;
          lVar17 = *plVar18;
        }
        *plVar21 = lVar17;
        if (*piVar2 < piVar2[1]) {
          if (1 < local_70) {
            piVar20 = local_d30;
          }
          *(long **)(*(long *)(piVar20 + 2) + (long)*piVar2 * 8) = plVar21;
          *piVar2 = *piVar2 + 1;
        }
      }
      iVar7 = iVar7 + -1;
      uVar11 = uVar11 + 1;
    } while (iVar7 != -100);
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar13 + 0x248a8) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x248a8) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
LAB_01dbad2c:
    uVar10 = FUN_01d9e814(*(undefined8 *)(*(long *)puVar5 + 8),(byte *)(param_1 + 0x84f1),local_d30,
                          param_1 + 0xa0,cVar4 != '\0');
    if ((uVar10 & 1) != 0) {
      *(long **)(param_1 + 0x98) = plVar1;
      *plVar1 = param_1 + 0x98;
      *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_1 + 0x84e8);
      puVar14 = &LAB_01db7ba0;
      *puVar22 = 0;
      *(undefined8 *)(param_1 + 0x84e0) = 0;
LAB_01dbb068:
      bVar15 = *(byte *)(param_1 + 0x84f1);
      *(undefined1 **)(param_1 + 0xd0) = puVar14;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      goto LAB_01dbb070;
    }
    break;
  case 4:
  case 0xb:
  case 0x12:
    cVar4 = *(char *)(param_1 + 0x8500);
    if (0 < (int)DAT_05384b38) {
      lVar12 = 0;
      plVar18 = DAT_05384b48;
      do {
        DAT_05384b48 = (long *)DAT_05384b40[lVar12];
        lVar12 = lVar12 + 1;
        *DAT_05384b48 = (long)plVar18;
        plVar18 = DAT_05384b48;
      } while (lVar12 < (int)DAT_05384b38);
    }
    DAT_05384b38 = 0;
    bVar15 = *(byte *)(param_1 + 0x84f1);
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    local_d30[0] = CONCAT31(local_d30[0]._1_3_,bVar15);
    lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_d30,1);
    if (lVar12 == 0) goto switchD_01dba848_caseD_0;
    lVar13 = lVar12 + 0x194b0;
    if (*(long *)(lVar12 + 0x194b8) == 0) {
      lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if (*(long **)(lVar13 + 0x248a8) == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar13 + 0x248a8);
      uVar10 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar10 = (**(code **)*puVar9)();
      }
    }
    plVar18 = DAT_05384b48;
    lVar12 = *(long *)(lVar13 + 0x24890) + *(long *)(lVar13 + 0x24888);
    lVar17 = *(long *)(lVar12 + 0x640);
    if (lVar17 == 0) {
      iVar7 = 0;
    }
    else {
      uVar19 = (ulong)DAT_05384b38;
      if (0 < (int)DAT_05384b38) {
        puVar9 = DAT_05384b40;
        do {
          if (*(long *)*puVar9 == lVar17) goto LAB_01dbae10;
          uVar19 = uVar19 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar19 != 0);
      }
      if ((int)DAT_05384b38 < _DAT_05384b3c) {
        if (DAT_05384b48 != (long *)0x0) {
          DAT_05384b48 = (long *)*DAT_05384b48;
        }
        *plVar18 = lVar17;
        if ((int)DAT_05384b38 < _DAT_05384b3c) {
          DAT_05384b40[(int)DAT_05384b38] = plVar18;
          DAT_05384b38 = DAT_05384b38 + 1;
        }
      }
LAB_01dbae10:
      iVar7 = 1;
    }
    plVar18 = DAT_05384b48;
    lVar17 = *(long *)(lVar12 + 0x648);
    if (lVar17 != 0) {
      uVar19 = (ulong)DAT_05384b38;
      if (0 < (int)DAT_05384b38) {
        puVar9 = DAT_05384b40;
        do {
          if (*(long *)*puVar9 == lVar17) goto LAB_01dbaeb0;
          uVar19 = uVar19 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar19 != 0);
      }
      if ((int)DAT_05384b38 < _DAT_05384b3c) {
        if (DAT_05384b48 != (long *)0x0) {
          DAT_05384b48 = (long *)*DAT_05384b48;
        }
        *plVar18 = lVar17;
        if ((int)DAT_05384b38 < _DAT_05384b3c) {
          DAT_05384b40[(int)DAT_05384b38] = plVar18;
          DAT_05384b38 = DAT_05384b38 + 1;
        }
      }
LAB_01dbaeb0:
      iVar7 = iVar7 + 1;
    }
    plVar18 = DAT_05384b48;
    lVar17 = *(long *)(lVar12 + 0x650);
    if (lVar17 != 0) {
      uVar19 = (ulong)DAT_05384b38;
      if (0 < (int)DAT_05384b38) {
        puVar9 = DAT_05384b40;
        do {
          if (*(long *)*puVar9 == lVar17) goto LAB_01dbaf44;
          uVar19 = uVar19 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar19 != 0);
      }
      if ((int)DAT_05384b38 < _DAT_05384b3c) {
        if (DAT_05384b48 != (long *)0x0) {
          DAT_05384b48 = (long *)*DAT_05384b48;
        }
        *plVar18 = lVar17;
        if ((int)DAT_05384b38 < _DAT_05384b3c) {
          DAT_05384b40[(int)DAT_05384b38] = plVar18;
          DAT_05384b38 = DAT_05384b38 + 1;
        }
      }
LAB_01dbaf44:
      iVar7 = 1;
    }
    plVar18 = DAT_05384b48;
    lVar12 = *(long *)(lVar12 + 0x658);
    if (lVar12 == 0) {
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar13 + 0x248a8) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x248a8) + 8), puVar9 != (undefined8 *)0x0))
      {
        (**(code **)*puVar9)();
      }
      if (iVar7 == 0) goto switchD_01dba848_caseD_0;
    }
    else {
      uVar19 = (ulong)DAT_05384b38;
      if (0 < (int)DAT_05384b38) {
        puVar9 = DAT_05384b40;
        do {
          if (*(long *)*puVar9 == lVar12) goto LAB_01dbafe0;
          uVar19 = uVar19 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar19 != 0);
      }
      if ((int)DAT_05384b38 < _DAT_05384b3c) {
        if (DAT_05384b48 != (long *)0x0) {
          DAT_05384b48 = (long *)*DAT_05384b48;
        }
        *plVar18 = lVar12;
        if ((int)DAT_05384b38 < _DAT_05384b3c) {
          DAT_05384b40[(int)DAT_05384b38] = plVar18;
          DAT_05384b38 = DAT_05384b38 + 1;
        }
      }
LAB_01dbafe0:
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar13 + 0x248a8) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x248a8) + 8), puVar9 != (undefined8 *)0x0))
      {
        (**(code **)*puVar9)();
      }
    }
    uVar10 = FUN_01d9eebc(*(undefined8 *)(*(long *)puVar5 + 8),(byte *)(param_1 + 0x84f1),
                          param_1 + 0xa0,cVar4 != '\0');
    if ((uVar10 & 1) != 0) {
      *(long **)(param_1 + 0x98) = plVar1;
      *puVar22 = 0;
      *(undefined8 *)(param_1 + 0x84e0) = 0;
      *plVar1 = param_1 + 0x98;
      puVar14 = &LAB_01db83c4;
      *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_1 + 0x84e8);
      goto LAB_01dbb068;
    }
    break;
  case 5:
    uVar10 = FUN_01d9e274(*(undefined8 *)(*(long *)puVar5 + 8),param_1 + 0x84f1,param_1 + 0xa0,
                          *(undefined1 *)(param_1 + 0x8500));
    if ((uVar10 & 1) != 0) {
      *puVar22 = 0;
      *(undefined8 *)(param_1 + 0x84e0) = 0;
      *(undefined8 *)(param_1 + 0x98) = plVar1;
      *plVar1 = param_1 + 0x98;
      *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_1 + 0x84e8);
      puVar14 = &LAB_01db6d64;
LAB_01dbac14:
      bVar15 = *(byte *)(param_1 + 0x84f1);
      *(undefined1 **)(param_1 + 0xd0) = puVar14;
      *(undefined8 *)(param_1 + 0xd8) = 0;
LAB_01dbb070:
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      *(byte *)(param_1 + 0x84a8) = bVar15;
      return;
    }
    break;
  case 6:
    if (*(uint *)(param_1 + 0x7538) != 0) {
      cVar4 = *(char *)(param_1 + 0x8500);
      uVar11 = 0;
      do {
        uVar10 = FUN_01db8e00(param_1 + 0x98,uVar11,cVar4 != '\0');
        if ((uVar10 & 1) != 0) {
          *(long **)(param_1 + 0x98) = plVar1;
          *plVar1 = param_1 + 0x98;
          *puVar22 = 0;
          *(undefined8 *)(param_1 + 0x84e0) = 0;
          *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_1 + 0x84e8);
          *(undefined1 **)(param_1 + 0xd0) = &LAB_01db74a0;
          *(undefined8 *)(param_1 + 0xd8) = 0;
          FUN_02669620(local_d30,*(undefined4 *)(param_1 + 0x84ac));
          *(char *)(param_1 + 0x84bd) = cVar4;
          *(undefined1 *)(param_1 + 0x84be) = 0;
          if (7 < (byte)local_d30[0]) {
            local_d30[0]._0_1_ = 0xff;
          }
          *(byte *)(param_1 + 0x84a8) = (byte)local_d30[0];
          return;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x7538));
    }
  case 0:
  case 0xd:
switchD_01dba848_caseD_0:
    *(undefined8 *)(param_1 + 0x84d8) = 1;
    *(undefined8 *)(param_1 + 0x84e0) = 0;
    return;
  case 7:
    uVar10 = FUN_01d9ecdc(*(undefined8 *)(*(long *)puVar5 + 8),param_1 + 0x84f1,param_1 + 0xa0,
                          *(undefined1 *)(param_1 + 0x8500));
    if ((uVar10 & 1) != 0) {
      *puVar22 = 0;
      *(undefined8 *)(param_1 + 0x84e0) = 0;
      *(undefined8 *)(param_1 + 0x98) = plVar1;
      *plVar1 = param_1 + 0x98;
      *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_1 + 0x84e8);
      puVar14 = &LAB_01db7f20;
      goto LAB_01dbac14;
    }
    break;
  case 8:
  case 0xe:
    local_d30[0] = 0xd;
    puVar22 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
    if (((*PTR_DAT_04bc73c8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc73c8);
    }
    if (puVar22 == (undefined8 *)0x0) {
      return;
    }
    uVar10 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc73c0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    FUN_031fe8dc(puVar22[0x52],1);
    return;
  case 9:
  case 0xf:
    *(undefined8 *)(param_1 + 0x40) = 0x210;
    puVar5 = PTR_DAT_04bc3880;
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar16 = *(undefined8 *)puVar6;
    *(undefined8 *)(param_1 + 0x90) = 0xffffffff;
    *(undefined **)(param_1 + 0x50) = puVar5 + 0x10;
    *(undefined **)(param_1 + 0x70) = puVar5 + 0x10;
    FUN_0283e2d0(uVar16,(undefined8 *)(param_1 + 0x40));
    return;
  }
  lVar12 = *(long *)(param_1 + 0x84c8);
  if (lVar12 != 0) {
    uVar16 = 0x2bffffffff;
LAB_01dba720:
    *(undefined8 *)(lVar12 + 8) = uVar16;
    *(undefined8 *)(lVar12 + 0x10) = 0;
  }
LAB_01dba724:
  *(undefined1 *)(param_1 + 0x8504) = 0;
  *(undefined4 *)(param_1 + 0x84f4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x84f1) = 0xff;
  *(undefined1 *)(param_1 + 0x84e8) = 0;
  DAT_0537c938 = 0;
  return;
}

