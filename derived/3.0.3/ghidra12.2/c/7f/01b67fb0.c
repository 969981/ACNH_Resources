
void FUN_01b67fb0(long *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 byte *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  uint *puVar19;
  char cVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  undefined2 local_98;
  undefined8 local_96;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar23 = *(undefined8 *)PTR_DAT_04bb49a0;
  (**(code **)(*param_1 + 0x18))();
  uVar8 = FUN_006bd550(param_1[1],0);
  local_78 = CONCAT44(local_78._4_4_,uVar8);
  puVar9 = (uint *)FUN_01b5b4b0(uVar23,&local_78);
  if (puVar9 == (uint *)0x0) {
    return;
  }
  uVar10 = FUN_01b68870(puVar9,param_5,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  uVar14 = *puVar9;
  if (uVar14 == 0 || puVar9 == (uint *)(ulong)uVar14) {
LAB_01b680b4:
    uVar14 = 0;
  }
  else {
    puVar19 = (uint *)((long)puVar9 - (long)(ulong)uVar14);
    if (((*puVar19 == 0) || (uVar14 = puVar19[1], uVar14 == 0)) || ((ulong)(ushort)puVar19[2] == 0))
    goto LAB_01b680b4;
    lVar11 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar19 + lVar11 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar11 == 0) goto LAB_01b680b4;
    uVar15 = 0;
    if ((ulong)uVar14 != 0) {
      uVar15 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar14);
    }
    if (*puVar19 <= uVar15) {
      uVar15 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc0618 <= uVar15) ||
       (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar15 * 2),
       uVar14 = (uint)uVar5, 0x11 < uVar5)) goto LAB_01b680b4;
  }
  uVar15 = *puVar9;
  if (uVar15 == 0 || puVar9 == (uint *)(ulong)uVar15) {
LAB_01b68140:
    uVar15 = 0;
  }
  else {
    puVar19 = (uint *)((long)puVar9 - (long)(ulong)uVar15);
    if (((*puVar19 == 0) || (uVar15 = puVar19[1], uVar15 == 0)) || ((ulong)(ushort)puVar19[2] == 0))
    goto LAB_01b68140;
    lVar11 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar19 + lVar11 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar11 == 0) goto LAB_01b68140;
    uVar24 = 0;
    if ((ulong)uVar15 != 0) {
      uVar24 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar15);
    }
    if (*puVar19 <= uVar24) {
      uVar24 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc0620 <= uVar24) ||
       (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar24 * 2),
       uVar15 = (uint)uVar5, 0x11 < uVar5)) goto LAB_01b68140;
  }
  uVar24 = 0;
  uVar25 = *puVar9;
  if ((uVar25 != 0) && (puVar9 != (uint *)(ulong)uVar25)) {
    puVar19 = (uint *)((long)puVar9 - (long)(ulong)uVar25);
    if ((*puVar19 != 0) && ((uVar24 = puVar19[1], uVar24 != 0 && ((ulong)(ushort)puVar19[2] != 0))))
    {
      lVar11 = 0xc;
      if (*(char *)((long)puVar19 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar19 + lVar11 + (ulong)(ushort)puVar19[2] * 8;
      if (lVar11 != 0) {
        uVar25 = 0;
        if ((ulong)uVar24 != 0) {
          uVar25 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar24);
        }
        if (*puVar19 <= uVar25) {
          uVar25 = 0xffffffff;
        }
        if ((uVar25 < *(uint *)PTR_DAT_04bc0628) &&
           (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar25 * 2),
           uVar24 = (uint)uVar5, uVar5 < 0x12)) goto LAB_01b681d4;
      }
    }
    uVar24 = 0;
  }
LAB_01b681d4:
  uVar25 = 0;
  uVar4 = *puVar9;
  if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
    puVar19 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
    if ((*puVar19 != 0) && ((uVar25 = puVar19[1], uVar25 != 0 && ((ulong)(ushort)puVar19[2] != 0))))
    {
      lVar11 = 0xc;
      if (*(char *)((long)puVar19 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar19 + lVar11 + (ulong)(ushort)puVar19[2] * 8;
      if (lVar11 != 0) {
        uVar4 = 0;
        if ((ulong)uVar25 != 0) {
          uVar4 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar25);
        }
        if (*puVar19 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if ((uVar4 < *(uint *)PTR_DAT_04bc0630) &&
           (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar4 * 2),
           uVar25 = (uint)uVar5, uVar5 < 0x12)) goto LAB_01b68264;
      }
    }
    uVar25 = 0;
  }
LAB_01b68264:
  uVar4 = *puVar9;
  if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
    puVar19 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
    if ((*puVar19 != 0) && ((uVar4 = puVar19[1], uVar4 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
      lVar11 = 0xc;
      if (*(char *)((long)puVar19 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar19 + lVar11 + (ulong)(ushort)puVar19[2] * 8;
      if (lVar11 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar4);
        }
        if (*puVar19 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bc0638) &&
           (*(short *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar2 * 2) == 3)) {
          return;
        }
      }
    }
  }
  bVar18 = *param_5;
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  local_78 = CONCAT71(local_78._1_7_,bVar18);
  local_8c = uVar14;
  local_88 = uVar15;
  local_84 = uVar24;
  local_80 = uVar25;
  lVar11 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
  puVar7 = PTR_DAT_04bc0648;
  puVar6 = PTR_DAT_04bc0640;
  if (lVar11 == 0) {
    return;
  }
  lVar16 = lVar11 + 0x194b0;
  if (*(long *)(lVar11 + 0x194b8) == 0) {
    lVar16 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  if (*puVar9 == 0) {
LAB_01b6841c:
    local_98 = 0;
  }
  else {
    cVar20 = *PTR_DAT_04bc0640;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *puVar6 = 1;
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar7 + 0x1c);
        if (-1 < (int)uVar4) {
          if ((undefined2 *)((ulong)uVar4 + (long)puVar9) == (undefined2 *)0x0) goto LAB_01b6841c;
          local_98 = *(undefined2 *)((ulong)uVar4 + (long)puVar9);
          goto LAB_01b68420;
        }
        if (uVar4 != 0xffffffff) goto LAB_01b6841c;
      }
      puVar19 = (uint *)(ulong)*puVar9;
      local_98 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar19)) goto LAB_01b68420;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar19)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar19);
      if (lVar11 == 0) goto LAB_01b6841c;
      uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar19));
      *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
      local_98 = 0;
      if (uVar10 == 0) goto LAB_01b68420;
      piVar22 = (int *)(lVar11 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          local_98 = 0;
          goto LAB_01b68420;
        }
      }
      iVar1 = 0;
      if (*piVar22 != -1) {
        iVar1 = *piVar22;
      }
      *(int *)(puVar7 + 0x1c) = iVar1;
    } while (*puVar9 != 0);
    local_98 = 0;
  }
LAB_01b68420:
  if (uVar14 == 8) {
    uVar14 = 1;
  }
  local_96 = 0;
  lVar11 = 0;
  if (uVar14 == 0x11) {
LAB_01b684b4:
    *(undefined2 *)((long)&local_96 + lVar11 * 2) = param_2;
  }
  else {
    uVar4 = uVar15;
    if (uVar15 == 8) {
      uVar4 = 1;
    }
    if (uVar4 == 0x11) {
      lVar11 = 1;
      goto LAB_01b684b4;
    }
    uVar4 = uVar24;
    if (uVar24 == 8) {
      uVar4 = 1;
    }
    if (uVar4 == 0x11) {
      lVar11 = 2;
      goto LAB_01b684b4;
    }
    uVar4 = uVar25;
    if (uVar25 == 8) {
      uVar4 = 1;
    }
    if (uVar4 == 0x11) {
      lVar11 = 3;
      goto LAB_01b684b4;
    }
  }
  lVar11 = 1;
  if (uVar14 == 1) {
    lVar11 = 0;
LAB_01b6854c:
    *(undefined2 *)((long)&local_96 + lVar11 * 2) = param_3;
  }
  else {
    uVar4 = uVar15;
    if (uVar15 == 8) {
      uVar4 = 1;
    }
    if (uVar4 == 1) goto LAB_01b6854c;
    uVar4 = uVar24;
    if (uVar24 == 8) {
      uVar4 = 1;
    }
    if (uVar4 == 1) {
      lVar11 = 2;
      goto LAB_01b6854c;
    }
    uVar4 = uVar25;
    if (uVar25 == 8) {
      uVar4 = 1;
    }
    if (uVar4 == 1) {
      lVar11 = 3;
      goto LAB_01b6854c;
    }
  }
  lVar11 = 1;
  if (uVar15 == 8) {
    uVar15 = 1;
  }
  local_78 = CONCAT44(local_78._4_4_,uVar15);
  if ((uVar15 == 1) && (uVar14 == 1)) {
LAB_01b685f0:
    *(undefined2 *)((long)&local_96 + lVar11 * 2) = param_4;
  }
  else {
    if (uVar24 == 8) {
      uVar24 = 1;
    }
    local_78 = CONCAT44(local_78._4_4_,uVar24);
    if ((uVar24 == 1) && (uVar15 == 1 || uVar14 == 1)) {
      lVar11 = 2;
      goto LAB_01b685f0;
    }
    if (uVar25 == 8) {
      uVar25 = 1;
    }
    local_78 = CONCAT44(local_78._4_4_,uVar25);
    if ((uVar25 == 1) && (uVar24 == 1 || (uVar15 == 1 || uVar14 == 1))) {
      lVar11 = 3;
      goto LAB_01b685f0;
    }
  }
  local_7c = 1;
  lVar11 = *(long *)(lVar16 + 0x2c638);
  if (lVar11 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      lVar11 = *(long *)(lVar16 + 0x2c638);
      uVar10 = uVar10 & 0xffffffff;
      if (lVar11 == 0) goto LAB_01b68668;
    }
    plVar12 = *(long **)(lVar11 + 0x20);
    if (plVar12 != (long *)0x0) {
      local_78 = *(long *)(lVar16 + 0x2c618);
      local_70 = *(undefined8 *)(lVar16 + 0x2c620);
      uStack_68 = 0x2580;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
    }
  }
LAB_01b68668:
  lVar11 = *(long *)(lVar16 + 0x2c618);
  lVar3 = *(long *)(lVar16 + 0x2c620);
  bVar18 = *param_5;
  lVar17 = *(long *)PTR_DAT_04bb32e8;
  local_78 = *(long *)(lVar17 + 0x20) / 1000000000 + *(long *)(lVar17 + 8) +
             (((*(long *)(lVar17 + 0x10) + (long)*(int *)(lVar17 + 0x38)) - *(long *)(lVar17 + 8)) *
             1000000000) / 1000000000;
  local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
  lVar11 = FUN_02811460(lVar3 + lVar11,&local_78,&local_7c);
  if (((char)local_7c != '\0') && (bVar18 < 8)) {
    local_78 = CONCAT71(local_78._1_7_,bVar18);
    FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
    FUN_01b675a0();
  }
  local_78 = lVar11;
  if (*puVar9 == 0) {
LAB_01b68824:
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x2c638) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar16 + 0x2c638) + 0x18), puVar13 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar13)();
    }
    return;
  }
  cVar20 = *puVar6;
  do {
    if (cVar20 == '\0') {
      cVar20 = '\x01';
      *puVar6 = 1;
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      uVar14 = *puVar9;
    }
    else {
      uVar14 = *(uint *)(puVar7 + 0x18);
      if (-1 < (int)uVar14) {
        if (((short *)((ulong)uVar14 + (long)puVar9) != (short *)0x0) &&
           (*(short *)((ulong)uVar14 + (long)puVar9) != 0)) {
          FUN_01b6e5d0(&local_78,&local_98,puVar9,&local_8c,0);
        }
        goto LAB_01b68824;
      }
      if (uVar14 != 0xffffffff) goto LAB_01b68824;
      uVar14 = *puVar9;
    }
    if ((uVar14 == 0) || (puVar19 = (uint *)(ulong)uVar14, puVar9 == puVar19)) goto LAB_01b68824;
    lVar11 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar19)) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar9 + (lVar11 - (long)puVar19);
    if (lVar11 == 0) goto LAB_01b68824;
    uVar21 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar19));
    *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
    if (uVar21 == 0) goto LAB_01b68824;
    piVar22 = (int *)(lVar11 + 4);
    while (piVar22[-1] != 0x175969e1) {
      piVar22 = piVar22 + 2;
      uVar21 = uVar21 - 1;
      if (uVar21 == 0) goto LAB_01b68824;
    }
    iVar1 = 0;
    if (*piVar22 != -1) {
      iVar1 = *piVar22;
    }
    *(int *)(puVar7 + 0x18) = iVar1;
    if (*puVar9 == 0) goto LAB_01b68824;
  } while( true );
}

