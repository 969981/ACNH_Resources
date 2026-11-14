
byte FUN_01b66700(undefined8 param_1,undefined8 param_2,uint *param_3,PosixTime *param_4,
                 ulong param_5)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  PosixTime PVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  byte bVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  undefined2 uVar22;
  uint *puVar23;
  ulong uVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 local_a8;
  undefined8 local_a0;
  PosixTime local_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined2 local_90;
  undefined6 uStack_8e;
  undefined1 local_88;
  byte bStack_87;
  undefined6 uStack_86;
  undefined2 local_80;
  undefined4 uStack_7e;
  undefined2 uStack_7a;
  ushort local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  
  uVar10 = uStack_70;
  uVar22 = uStack_76;
  puVar8 = PTR_DAT_04bc0648;
  puVar2 = PTR_DAT_04bc0640;
  if ((param_3 != (uint *)0x0) && (*param_3 != 0)) {
    cVar19 = *PTR_DAT_04bc0640;
    do {
      puVar7 = PTR_DAT_04bb4f78;
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 0x2c);
        if (-1 < (int)uVar20) {
          if (((char *)((ulong)uVar20 + (long)param_3) == (char *)0x0) ||
             (*(char *)((ulong)uVar20 + (long)param_3) == '\0')) break;
          puVar23 = (uint *)((long)param_3 - (ulong)*param_3);
          uStack_76 = (undefined2)param_2;
          uVar9 = uStack_76;
          uStack_70 = (undefined2)((ulong)param_2 >> 0x30);
          uVar11 = uStack_70;
          uStack_74 = (undefined4)((ulong)param_2 >> 0x10);
          if (((*param_3 == 0) ||
              (((puVar23 == (uint *)0x0 || (*puVar23 == 0)) || (uVar20 = puVar23[1], uVar20 == 0))))
             || ((ulong)(ushort)puVar23[2] == 0)) {
LAB_01b66a04:
            if ((param_5 & 1) != 0) {
              bVar12 = 1;
              goto LAB_01b66c2c;
            }
            if (param_4 == (PosixTime *)0x0) {
              if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
                 (uStack_70 = uVar10,
                 lVar13 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10)
                                      + 0x30))(), lVar13 == 0)) break;
              uStack_7e = 0;
              plVar1 = (long *)(&LAB_00284e08 + lVar13);
              uStack_86 = 0;
              local_80 = 0;
              uStack_8e = 0;
              local_88 = 0;
              bStack_87 = 0;
              if (*param_3 == 0) goto LAB_01b66ebc;
              cVar19 = *puVar2;
              goto LAB_01b66b88;
            }
          }
          else {
            lVar13 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar23 + lVar13 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar13 == 0) goto LAB_01b66a04;
            uVar4 = 0;
            if ((ulong)uVar20 != 0) {
              uVar4 = (uint)((ulong)((long)param_3 - lVar13) / (ulong)uVar20);
            }
            uVar20 = uVar4;
            if (*puVar23 <= uVar4) {
              uVar20 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bc0638 <= uVar20) ||
               (*(short *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar20 * 2) != 3))
            goto LAB_01b66a04;
            local_78 = 0;
            if (*puVar23 != 0) {
              uVar20 = uVar4;
              if (*puVar23 <= uVar4) {
                uVar20 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bc0618 <= uVar20) ||
                 (local_78 = *(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar20 * 2),
                 0x11 < local_78)) {
                local_78 = 0;
              }
            }
            uVar20 = 0;
            if (*puVar23 != 0) {
              uVar20 = uVar4;
              if (*puVar23 <= uVar4) {
                uVar20 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bc0620 <= uVar20) ||
                 (uVar20 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar20 * 2),
                 0x11 < uVar20)) {
                uVar20 = 0;
              }
            }
            local_a8 = CONCAT44((int)((ulong)local_a8 >> 0x20),uVar20);
            uVar21 = 0;
            if (*puVar23 != 0) {
              uVar21 = uVar4;
              if (*puVar23 <= uVar4) {
                uVar21 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bc0628 <= uVar21) ||
                 (uVar21 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar21 * 2),
                 0x11 < uVar21)) {
                uVar21 = 0;
              }
            }
            uVar17 = 0;
            if (*puVar23 != 0) {
              if (*puVar23 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bc0630 <= uVar4) ||
                 (uVar17 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar4 * 2)
                 , 0x11 < uVar17)) {
                uVar17 = 0;
              }
            }
            local_a0 = CONCAT44(uVar21,uVar17);
            uStack_97 = 0;
            uStack_96 = 0;
            if ((((local_78 != 9) && (uVar20 != 9)) && (uVar21 != 9)) && (uVar17 != 9)) break;
            bVar12 = param_4 != (PosixTime *)0x0;
            if ((param_4 == (PosixTime *)0x0) || (uVar22 = 0, (param_5 & 1) != 0))
            goto LAB_01b66c2c;
          }
          uStack_76 = uVar22;
          local_98 = *param_4;
          if (7 < (byte)local_98) {
            local_98 = (PosixTime)0xff;
          }
          lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_98,1);
          if (lVar13 == 0) break;
          lVar18 = lVar13 + 0x194b0;
          if (*(long *)(lVar13 + 0x194b8) == 0) {
            lVar18 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          plVar1 = (long *)(lVar18 + 0x2c618);
          if (*param_3 == 0) goto LAB_01b66c60;
          cVar19 = *puVar2;
          goto LAB_01b66a8c;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar23 = (uint *)(ulong)*param_3;
      bVar12 = 0;
      if ((*param_3 == 0) || (param_3 == puVar23)) goto LAB_01b66c2c;
      lVar13 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)param_3 + (lVar13 - (long)puVar23);
      if (lVar13 == 0) break;
      uVar24 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
      *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
      if (uVar24 == 0) break;
      piVar26 = (int *)(lVar13 + 4);
      while (piVar26[-1] != -0x7c25c4d6) {
        piVar26 = piVar26 + 2;
        uVar24 = uVar24 - 1;
        if (uVar24 == 0) goto LAB_01b66c28;
      }
      bVar12 = 0;
      iVar3 = 0;
      if (*piVar26 != -1) {
        iVar3 = *piVar26;
      }
      *(int *)(puVar8 + 0x2c) = iVar3;
      if (*param_3 == 0) goto LAB_01b66c2c;
    } while( true );
  }
LAB_01b66c28:
  bVar12 = 0;
  goto LAB_01b66c2c;
  while( true ) {
    puVar23 = (uint *)(ulong)*param_3;
    uVar22 = 0;
    if ((*param_3 == 0) || (param_3 == puVar23)) goto LAB_01b66ec0;
    lVar18 = 0xc;
    if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
      lVar18 = 0x1c;
    }
    lVar18 = (long)param_3 + (lVar18 - (long)puVar23);
    if (lVar18 == 0) goto LAB_01b66ebc;
    uVar24 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
    *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
    uVar22 = 0;
    if (uVar24 == 0) goto LAB_01b66ec0;
    piVar26 = (int *)(lVar18 + 4);
    while (piVar26[-1] != 0x54706054) {
      piVar26 = piVar26 + 2;
      uVar24 = uVar24 - 1;
      if (uVar24 == 0) {
        uVar22 = 0;
        goto LAB_01b66ec0;
      }
    }
    iVar3 = 0;
    if (*piVar26 != -1) {
      iVar3 = *piVar26;
    }
    *(int *)(puVar8 + 0x1c) = iVar3;
    if (*param_3 == 0) break;
LAB_01b66b88:
    if (cVar19 == '\0') {
      cVar19 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar20 = *(uint *)(puVar8 + 0x1c);
      if (-1 < (int)uVar20) {
        if ((undefined2 *)((ulong)uVar20 + (long)param_3) == (undefined2 *)0x0) {
LAB_01b66ebc:
          uVar22 = 0;
        }
        else {
          uVar22 = *(undefined2 *)((ulong)uVar20 + (long)param_3);
        }
        goto LAB_01b66ec0;
      }
      if (uVar20 != 0xffffffff) goto LAB_01b66ebc;
    }
  }
  uVar22 = 0;
LAB_01b66ec0:
  local_98 = SUB21(uVar22,0);
  uStack_97 = (undefined1)((ushort)uVar22 >> 8);
  lVar18 = *(long *)(&LAB_00284e28 + lVar13);
  uStack_96 = uStack_76;
  uStack_94 = uStack_74;
  local_90 = uVar11;
  if (lVar18 == 0) {
    uVar24 = 0;
  }
  else {
    if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
      uVar24 = 0;
    }
    else {
      uVar24 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      lVar18 = *(long *)(&LAB_00284e28 + lVar13);
      uVar24 = uVar24 & 0xffffffff;
      if (lVar18 == 0) goto LAB_01b66f30;
    }
    plVar14 = *(long **)(lVar18 + 0x20);
    if (plVar14 != (long *)0x0) {
      lVar18 = *plVar1;
      local_78 = (ushort)lVar18;
      uStack_76 = (undefined2)((ulong)lVar18 >> 0x10);
      uStack_74 = (undefined4)((ulong)lVar18 >> 0x20);
      uStack_70 = (undefined2)*(undefined8 *)(&LAB_00284e10 + lVar13);
      uStack_6e = (undefined6)((ulong)*(undefined8 *)(&LAB_00284e10 + lVar13) >> 0x10);
      uStack_68 = 0x28370;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
    }
  }
LAB_01b66f30:
  lVar18 = *plVar1;
  lVar5 = *(long *)(&LAB_00284e10 + lVar13);
  lVar13 = *(long *)PTR_DAT_04bb32e8;
  lVar13 = *(long *)(lVar13 + 0x20) / 1000000000 + *(long *)(lVar13 + 8) +
           (((*(long *)(lVar13 + 0x10) + (long)*(int *)(lVar13 + 0x38)) - *(long *)(lVar13 + 8)) *
           1000000000) / 1000000000;
  local_78 = (ushort)lVar13;
  uStack_76 = (undefined2)((ulong)lVar13 >> 0x10);
  uStack_74 = (undefined4)((ulong)lVar13 >> 0x20);
  uVar15 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
  local_78 = (ushort)uVar15;
  uStack_76 = (undefined2)((ulong)uVar15 >> 0x10);
  uStack_74 = (undefined4)((ulong)uVar15 >> 0x20);
  uVar15 = FUN_0280f530(lVar5 + lVar18,&local_78,&local_a8);
  if ((char)local_a8 != '\0') {
    FUN_0266f010(uVar15,&local_78);
  }
  local_78 = (ushort)uVar15;
  uStack_76 = (undefined2)((ulong)uVar15 >> 0x10);
  uStack_74 = (undefined4)((ulong)uVar15 >> 0x20);
  if (*param_3 != 0) {
    cVar19 = *puVar2;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 0x18);
        if (-1 < (int)uVar20) {
          if (((short *)((ulong)uVar20 + (long)param_3) != (short *)0x0) &&
             (*(short *)((ulong)uVar20 + (long)param_3) != 0)) {
            bVar12 = FUN_01b695b0(&local_78,&local_98,param_3,0);
            goto joined_r0x01b6712c;
          }
          break;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar23 = (uint *)(ulong)*param_3;
      bVar12 = 0;
      if ((*param_3 == 0) || (param_3 == puVar23)) goto joined_r0x01b6712c;
      lVar13 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)param_3 + (lVar13 - (long)puVar23);
      if (lVar13 == 0) break;
      uVar25 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
      *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
      if (uVar25 == 0) break;
      piVar26 = (int *)(lVar13 + 4);
      while (piVar26[-1] != 0x175969e1) {
        piVar26 = piVar26 + 2;
        uVar25 = uVar25 - 1;
        if (uVar25 == 0) goto LAB_01b670bc;
      }
      iVar3 = 0;
      if (*piVar26 != -1) {
        iVar3 = *piVar26;
      }
      *(int *)(puVar8 + 0x18) = iVar3;
      if (*param_3 == 0) break;
    } while( true );
  }
LAB_01b670bc:
  bVar12 = 0;
  goto joined_r0x01b6712c;
  while( true ) {
    puVar23 = (uint *)(ulong)*param_3;
    local_78 = 0;
    if ((*param_3 == 0) || (param_3 == puVar23)) goto LAB_01b66c64;
    lVar13 = 0xc;
    if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
      lVar13 = 0x1c;
    }
    lVar13 = (long)param_3 + (lVar13 - (long)puVar23);
    if (lVar13 == 0) goto LAB_01b66c60;
    uVar24 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
    *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
    local_78 = 0;
    if (uVar24 == 0) goto LAB_01b66c64;
    piVar26 = (int *)(lVar13 + 4);
    while (piVar26[-1] != 0x54706054) {
      piVar26 = piVar26 + 2;
      uVar24 = uVar24 - 1;
      if (uVar24 == 0) {
        local_78 = 0;
        goto LAB_01b66c64;
      }
    }
    iVar3 = 0;
    if (*piVar26 != -1) {
      iVar3 = *piVar26;
    }
    *(int *)(puVar8 + 0x1c) = iVar3;
    if (*param_3 == 0) break;
LAB_01b66a8c:
    if (cVar19 == '\0') {
      cVar19 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar20 = *(uint *)(puVar8 + 0x1c);
      if (-1 < (int)uVar20) {
        if ((ushort *)((ulong)uVar20 + (long)param_3) == (ushort *)0x0) {
LAB_01b66c60:
          local_78 = 0;
        }
        else {
          local_78 = *(ushort *)((ulong)uVar20 + (long)param_3);
        }
        goto LAB_01b66c64;
      }
      if (uVar20 != 0xffffffff) goto LAB_01b66c60;
    }
  }
  local_78 = 0;
LAB_01b66c64:
  lVar13 = *(long *)(lVar18 + 0x2c638);
  uStack_76 = uVar9;
  if (lVar13 == 0) {
    uVar24 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar24 = 0;
    }
    else {
      uVar24 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar18 + 0x2c638);
      uVar24 = uVar24 & 0xffffffff;
      if (lVar13 == 0) goto LAB_01b66cd0;
    }
    plVar14 = *(long **)(lVar13 + 0x20);
    if (plVar14 != (long *)0x0) {
      lVar13 = *plVar1;
      local_98 = SUB81(lVar13,0);
      uStack_97 = (undefined1)((ulong)lVar13 >> 8);
      uStack_96 = (undefined2)((ulong)lVar13 >> 0x10);
      uStack_94 = (undefined4)((ulong)lVar13 >> 0x20);
      local_90 = (undefined2)*(undefined8 *)(lVar18 + 0x2c620);
      uStack_8e = (undefined6)((ulong)*(undefined8 *)(lVar18 + 0x2c620) >> 0x10);
      local_88 = 0x80;
      bStack_87 = 0x25;
      uStack_86 = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_98);
    }
  }
LAB_01b66cd0:
  lVar5 = *plVar1;
  lVar18 = *(long *)(lVar18 + 0x2c620);
  PVar6 = *param_4;
  lVar13 = *(long *)PTR_DAT_04bb32e8;
  lVar13 = *(long *)(lVar13 + 0x20) / 1000000000 + *(long *)(lVar13 + 8) +
           (((*(long *)(lVar13 + 0x10) + (long)*(int *)(lVar13 + 0x38)) - *(long *)(lVar13 + 8)) *
           1000000000) / 1000000000;
  local_98 = SUB81(lVar13,0);
  uStack_97 = (undefined1)((ulong)lVar13 >> 8);
  uStack_96 = (undefined2)((ulong)lVar13 >> 0x10);
  uStack_94 = (undefined4)((ulong)lVar13 >> 0x20);
  uVar15 = nn::time::ToCalendarTimeInUtc(&local_98);
  local_98 = SUB81(uVar15,0);
  uStack_97 = (undefined1)((ulong)uVar15 >> 8);
  uStack_96 = (undefined2)((ulong)uVar15 >> 0x10);
  uStack_94 = (undefined4)((ulong)uVar15 >> 0x20);
  uVar15 = FUN_02811460(lVar18 + lVar5,&local_98,&local_a8);
  if (((char)local_a8 != '\0') && ((byte)PVar6 < 8)) {
    local_98 = PVar6;
    FUN_02583354(*(undefined8 *)puVar7,&local_98,1);
    FUN_01b675a0();
  }
  local_a8 = uVar15;
  if (*param_3 != 0) {
    cVar19 = *puVar2;
    do {
      if (cVar19 == '\0') {
        cVar19 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar20 = *(uint *)(puVar8 + 0x18);
        if (-1 < (int)uVar20) {
          if (((short *)((ulong)uVar20 + (long)param_3) != (short *)0x0) &&
             (*(short *)((ulong)uVar20 + (long)param_3) != 0)) {
            local_80 = 0;
            uStack_7e = 0;
            uStack_7a = 0;
            lVar13 = FUN_026456c0(param_4);
            if (lVar13 != 0) {
              puVar2 = PTR_DAT_04bc35d0 + 0x10;
              local_98 = SUB81(puVar2,0);
              uStack_97 = (undefined1)((ulong)puVar2 >> 8);
              uStack_96 = (undefined2)((ulong)puVar2 >> 0x10);
              uStack_94 = (undefined4)((ulong)puVar2 >> 0x20);
              local_90 = (undefined2)lVar13;
              uStack_8e = (undefined6)((ulong)lVar13 >> 0x10);
              local_88 = 1;
              bStack_87 = 0;
              if (*(long **)(lVar13 + 0x28) == (long *)0x0) {
                bVar12 = 0;
              }
              else {
                puVar16 = (undefined8 *)**(long **)(lVar13 + 0x28);
                bVar12 = 0;
                if (puVar16 != (undefined8 *)0x0) {
                  bVar12 = (**(code **)*puVar16)();
                }
              }
              bStack_87 = bVar12 & 1;
              local_98 = (PosixTime)0xc0;
              uStack_97 = 0x8a;
              uStack_96 = 0x4a3;
              uStack_94 = 0;
              local_80 = SUB82(&local_98,0);
              uStack_7e = (undefined4)((ulong)&local_98 >> 0x10);
              uStack_7a = (undefined2)((ulong)&local_98 >> 0x30);
            }
            bVar12 = FUN_01b6e5d0(&local_a8,&local_78,param_3,0,&local_98);
            if (CONCAT26(uStack_7a,CONCAT42(uStack_7e,local_80)) != 0) {
              FUN_02640184();
            }
            goto joined_r0x01b6712c;
          }
          break;
        }
        if (uVar20 != 0xffffffff) break;
      }
      puVar23 = (uint *)(ulong)*param_3;
      bVar12 = 0;
      if ((*param_3 == 0) || (param_3 == puVar23)) goto joined_r0x01b6712c;
      lVar13 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)param_3 + (lVar13 - (long)puVar23);
      if (lVar13 == 0) break;
      uVar25 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
      *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
      if (uVar25 == 0) break;
      piVar26 = (int *)(lVar13 + 4);
      while (piVar26[-1] != 0x175969e1) {
        piVar26 = piVar26 + 2;
        uVar25 = uVar25 - 1;
        if (uVar25 == 0) goto LAB_01b66ea0;
      }
      iVar3 = 0;
      if (*piVar26 != -1) {
        iVar3 = *piVar26;
      }
      *(int *)(puVar8 + 0x18) = iVar3;
      if (*param_3 == 0) break;
    } while( true );
  }
LAB_01b66ea0:
  bVar12 = 0;
joined_r0x01b6712c:
  if ((((uVar24 & 1) != 0) && (plVar1[4] != 0)) &&
     (puVar16 = *(undefined8 **)(plVar1[4] + 0x18), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
LAB_01b66c2c:
  return bVar12 & 1;
}

