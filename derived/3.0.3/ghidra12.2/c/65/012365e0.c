
/* WARNING: Removing unreachable block (ram,0x0123754c) */

undefined8 FUN_012365e0(long param_1,char param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined *puVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  char cVar21;
  int iVar22;
  uint *puVar23;
  short *psVar24;
  int *piVar25;
  char *pcVar26;
  undefined8 uVar27;
  undefined *puVar28;
  uint uVar29;
  uint uVar30;
  undefined8 local_e0;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  int local_c0;
  char local_bc [31];
  undefined1 local_9d;
  undefined1 local_7d;
  int local_74;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  
  puVar5 = PTR_DAT_04bb30a0;
  uVar29 = *(uint *)(DAT_05150358 + 0x1c0);
  if ((int)uVar29 < 1) {
    if ((*(long *)(DAT_05150358 + 0xb0) == 0) ||
       (puVar23 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar23 == (uint *)0x0)) {
      uVar29 = 0;
    }
    else {
      uVar29 = *puVar23;
    }
  }
  uVar27 = *(undefined8 *)PTR_DAT_04bb30a0;
  local_e0 = (undefined *)FUN_00a8c31c(uVar27);
  if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
    local_d0 = (undefined *)(lVar17 + -0x15180);
    local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
  }
  uVar19 = (ulong)local_e0 >> 0x10;
  uVar18 = (ulong)local_e0 >> 0x30;
  uVar20 = (ulong)local_e0 >> 0x18;
  local_e0._0_6_ = CONCAT24(5,(uint)local_e0);
  local_e0 = (undefined *)(CONCAT26((short)uVar18,(uint6)local_e0) & 0xff00ffffffffffff);
  cVar14 = FUN_00a8ae20(uVar27,uVar19,uVar20,4);
  uVar27 = *(undefined8 *)puVar5;
  local_e0 = (undefined *)FUN_00a8c31c(uVar27);
  if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
    local_d0 = (undefined *)(lVar17 + -0x15180);
    local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
  }
  uVar18 = (ulong)local_e0;
  uVar19 = (ulong)local_e0 >> 0x10;
  uVar20 = (ulong)local_e0 >> 0x18;
  local_e0._0_6_ = CONCAT24(5,(uint)local_e0);
  local_e0._7_1_ = SUB81(uVar18,7);
  local_e0._0_7_ = (uint7)(uint6)local_e0;
  cVar15 = FUN_00a8ae20(uVar27,uVar19,uVar20,8);
  psVar24 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar24 == 0) {
    local_e0 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_e0 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e0);
      local_d0 = (undefined *)(lVar17 + -0x15180);
      local_e0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d0);
    }
    uVar27 = local_e0;
    psVar24 = (short *)&local_e0;
    local_e0._0_6_ = CONCAT24(5,(uint)local_e0);
    local_e0._7_1_ = SUB81(uVar27,7);
    local_e0._0_7_ = (uint7)(uint6)local_e0;
  }
  puVar5 = PTR_DAT_04bb2020;
  uVar30 = (uint)*(undefined8 *)psVar24 >> 0x10 & 0xff;
  iVar10 = (int)(uint)*(undefined8 *)psVar24 >> 0x18;
  if (uVar30 == 1) {
    bVar1 = iVar10 < 7;
  }
  else if (uVar30 == 0xc) {
    bVar1 = 0xe < iVar10;
  }
  else {
    bVar1 = false;
  }
  iVar10 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (uVar29 == 0) {
LAB_012373c4:
    if (param_2 == '\0') {
      puVar5 = PTR_DAT_04bb2a08 + 0x10;
      puVar2 = PTR_DAT_04bb2028 + 0x10;
      iVar16 = 0;
      do {
        FUN_01af9ba0(&local_e0,iVar16);
        local_9d = 0;
        local_c0 = 0x20;
        local_d0 = puVar5;
        local_c8 = local_bc;
        (**(code **)(local_e0 + 0x18))(&local_e0);
        pcVar26 = local_d8;
        if (local_bc != local_d8) {
          (**(code **)(local_e0 + 0x18))(&local_e0);
          lVar17 = 0;
          do {
            if (local_d8[lVar17] == '\0') goto LAB_0123749c;
            if (local_d8[lVar17 + 1] == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_0123749c;
            }
            if (local_d8[lVar17 + 2] == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_0123749c;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_0123749c:
          iVar22 = (int)lVar17;
          if (local_c0 <= (int)lVar17) {
            iVar22 = local_c0 + -1;
          }
          memcpy(local_bc,pcVar26,(long)iVar22);
          local_bc[iVar22] = '\0';
        }
        local_d0 = puVar2;
        if (*local_c8 != '\0') {
          FUN_00757850(param_1,&local_d0,1);
        }
        iVar22 = 0xda;
        if (iVar16 < 0xda) {
          iVar22 = iVar16 + 1;
        }
        iVar16 = iVar22;
      } while (iVar22 != 0xda);
      if (((bVar1) || (iVar10 == -0x17df00c3)) || (iVar10 == -0x24a26848)) {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
        local_d0 = PTR_DAT_04bb2020 + 0x10;
        local_c8 = "PltTreeCedarDecoAnim";
        (**(code **)(*(long *)(param_1 + 0x310) + 0x10))((long *)(param_1 + 0x310),&local_d0);
        pcVar26 = *(char **)(param_1 + 0x1028);
        puVar9 = (undefined4 *)(param_1 + 0x10dc) + ((ulong)local_e0 & 0xffffffff);
        if (0x11 < (uint)local_e0) {
          puVar9 = (undefined4 *)(param_1 + 0x10dc);
        }
        *puVar9 = 0;
        if (pcVar26 != "PlantCommon") {
          iVar10 = 0xb;
          if (*(int *)(param_1 + 0x1030) < 0xc) {
            iVar10 = *(int *)(param_1 + 0x1030) + -1;
          }
          memcpy(pcVar26,"PlantCommon",(long)iVar10);
          pcVar26[iVar10] = '\0';
        }
      }
    }
    return 1;
  }
  uVar30 = 0;
  puVar2 = PTR_DAT_04bb2f70 + 0x10;
  puVar3 = PTR_DAT_04bb2bc0 + 0x10;
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  puVar28 = PTR_DAT_04bb2bc0;
LAB_01236870:
  if (0 < (int)*(uint *)(DAT_05150358 + 0x1c0)) {
    if (*(uint *)(DAT_05150358 + 0x1c0) <= uVar30) goto LAB_01236864;
    uVar6 = uVar30;
    if (*(uint *)(DAT_05150358 + 0x1b0) <= uVar30) {
      uVar6 = 0;
    }
    puVar23 = *(uint **)(*(long *)(DAT_05150358 + 0x1b8) + (ulong)uVar6 * 8);
    if (puVar23 == (uint *)0x0) goto LAB_01236864;
LAB_012368a0:
    uVar18 = FUN_012375e0(puVar23);
    if ((uVar18 & 1) == 0) goto LAB_01236864;
    uVar6 = *puVar23;
    if (uVar6 != 0) {
      cVar21 = *PTR_DAT_04bbbc70;
      do {
        puVar13 = PTR_DAT_04bbbc78;
        if (cVar21 == '\0') {
          cVar21 = '\x01';
          *(undefined8 *)PTR_DAT_04bbbc78 = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
          *(undefined4 *)(puVar13 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
          uVar6 = *puVar23;
          *PTR_DAT_04bbbc70 = 1;
        }
        else {
          uVar11 = *(uint *)(PTR_DAT_04bbbc78 + 0x40);
          if (-1 < (int)uVar11) {
            if ((undefined2 *)((ulong)uVar11 + (long)puVar23) != (undefined2 *)0x0) {
              local_70 = *(undefined2 *)((ulong)uVar11 + (long)puVar23);
              goto LAB_01236a48;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)uVar6;
        local_70 = 0;
        if ((puVar12 == (uint *)0x0) || (local_70 = 0, puVar23 == puVar12)) goto LAB_01236a48;
        lVar17 = 0xc;
        if (*(char *)((long)puVar23 + (10 - (long)puVar12)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar23 + (lVar17 - (long)puVar12);
        local_70 = 0;
        if (lVar17 == 0) goto LAB_01236a48;
        uVar18 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar12));
        *(undefined4 *)(PTR_DAT_04bbbc78 + 0x40) = 0xfffffffe;
        if (uVar18 == 0) break;
        piVar25 = (int *)(lVar17 + 4);
        while (piVar25[-1] != 0x54706054) {
          piVar25 = piVar25 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_01236a44;
        }
        iVar16 = 0;
        if (*piVar25 != -1) {
          iVar16 = *piVar25;
        }
        *(int *)(PTR_DAT_04bbbc78 + 0x40) = iVar16;
        uVar6 = *puVar23;
        if (uVar6 == 0) break;
      } while( true );
    }
LAB_01236a44:
    local_70 = 0;
LAB_01236a48:
    local_6e = 0;
    local_6c = 0;
    FUN_0277d4ac(&local_70);
    local_74 = FUN_011e5fa8(&local_70);
    if (param_2 == '\x01') {
      if (local_74 == 2) goto LAB_01236a98;
      goto LAB_01236864;
    }
    if ((param_2 == '\0') && (local_74 != 1)) goto LAB_01236864;
LAB_01236a98:
    iVar16 = FUN_0277d6c4(&local_70);
    if (iVar16 == 0xed46) {
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
        uVar6 = *puVar23;
        if (uVar6 != 0) {
          cVar21 = *PTR_DAT_04bbbc70;
          do {
            puVar13 = PTR_DAT_04bbbc78;
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)PTR_DAT_04bbbc78 = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
              *(undefined4 *)(puVar13 + 0x60) = 0xffffffff;
              *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
              uVar6 = *puVar23;
              *PTR_DAT_04bbbc70 = 1;
            }
            else {
              uVar11 = *(uint *)(PTR_DAT_04bbbc78 + 0x60);
              if (-1 < (int)uVar11) {
                pcVar26 = (char *)((ulong)uVar11 + (long)puVar23);
                goto LAB_01236bc0;
              }
              if (uVar11 != 0xffffffff) break;
            }
            puVar12 = (uint *)(ulong)uVar6;
            pcVar26 = (char *)0x0;
            if ((puVar12 == (uint *)0x0) || (pcVar26 = (char *)0x0, puVar23 == puVar12))
            goto LAB_01236bc0;
            lVar17 = 0xc;
            if (*(char *)((long)puVar23 + (10 - (long)puVar12)) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar23 + (lVar17 - (long)puVar12);
            pcVar26 = (char *)0x0;
            if (lVar17 == 0) goto LAB_01236bc0;
            uVar18 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar12));
            *(undefined4 *)(PTR_DAT_04bbbc78 + 0x60) = 0xfffffffe;
            if (uVar18 == 0) break;
            piVar25 = (int *)(lVar17 + 4);
            while (piVar25[-1] != 0x48ef0398) {
              piVar25 = piVar25 + 2;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_01236bbc;
            }
            iVar16 = 0;
            if (*piVar25 != -1) {
              iVar16 = *piVar25;
            }
            *(int *)(PTR_DAT_04bbbc78 + 0x60) = iVar16;
            uVar6 = *puVar23;
            if (uVar6 == 0) break;
          } while( true );
        }
LAB_01236bbc:
        pcVar26 = (char *)0x0;
LAB_01236bc0:
        local_c0 = 0x40;
        local_7d = 0;
        pcVar7 = *(char **)PTR_PTR_04bbbc90;
        if (pcVar26 != (char *)0x0) {
          pcVar7 = pcVar26;
        }
        local_c8 = local_bc;
        if (local_bc != pcVar7) {
          lVar17 = 0;
          do {
            iVar16 = (int)lVar17;
            if (pcVar7[lVar17] == '\0') {
joined_r0x01236f68:
              iVar22 = (int)lVar17;
joined_r0x01236f68:
              if (0x3f < iVar16) {
                iVar22 = 0x3f;
              }
              goto LAB_01236824;
            }
            if (pcVar7[lVar17 + 1] == '\0') {
              lVar17 = lVar17 + 1;
              iVar16 = (int)lVar17;
              goto joined_r0x01236f68;
            }
            if (pcVar7[lVar17 + 2] == '\0') {
              iVar22 = iVar16 + 2;
              iVar16 = iVar22;
              goto joined_r0x01236f68;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          iVar22 = 0;
LAB_01236824:
          local_d0 = puVar2;
          memcpy(local_bc,pcVar7,(long)iVar22);
          local_bc[iVar22] = '\0';
        }
        local_d0 = puVar3;
        FUN_00757850(param_1,&local_d0,0);
      }
      goto LAB_01236864;
    }
    uVar6 = *puVar23;
    if (uVar6 != 0) {
      cVar21 = *PTR_DAT_04bbbc70;
      do {
        puVar13 = PTR_DAT_04bbbc78;
        if (cVar21 == '\0') {
          cVar21 = '\x01';
          *(undefined8 *)PTR_DAT_04bbbc78 = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
          *(undefined4 *)(puVar13 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
          uVar6 = *puVar23;
          *PTR_DAT_04bbbc70 = 1;
        }
        else {
          uVar11 = *(uint *)(PTR_DAT_04bbbc78 + 0x60);
          if (-1 < (int)uVar11) {
            pcVar26 = (char *)((ulong)uVar11 + (long)puVar23);
            goto LAB_01236d44;
          }
          if (uVar11 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)uVar6;
        pcVar26 = (char *)0x0;
        if ((puVar12 == (uint *)0x0) || (pcVar26 = (char *)0x0, puVar23 == puVar12))
        goto LAB_01236d44;
        lVar17 = 0xc;
        if (*(char *)((long)puVar23 + (10 - (long)puVar12)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar23 + (lVar17 - (long)puVar12);
        pcVar26 = (char *)0x0;
        if (lVar17 == 0) goto LAB_01236d44;
        uVar18 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar12));
        *(undefined4 *)(PTR_DAT_04bbbc78 + 0x60) = 0xfffffffe;
        if (uVar18 == 0) break;
        piVar25 = (int *)(lVar17 + 4);
        while (piVar25[-1] != 0x48ef0398) {
          piVar25 = piVar25 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_01236d40;
        }
        iVar16 = 0;
        if (*piVar25 != -1) {
          iVar16 = *piVar25;
        }
        *(int *)(PTR_DAT_04bbbc78 + 0x60) = iVar16;
        uVar6 = *puVar23;
        if (uVar6 == 0) break;
      } while( true );
    }
LAB_01236d40:
    pcVar26 = (char *)0x0;
LAB_01236d44:
    local_c0 = 0x40;
    local_7d = 0;
    pcVar7 = *(char **)PTR_PTR_04bbbc90;
    if (pcVar26 != (char *)0x0) {
      pcVar7 = pcVar26;
    }
    local_d0 = PTR_DAT_04bb2f70 + 0x10;
    local_c8 = local_bc;
    if (local_bc != pcVar7) {
      lVar17 = 0;
      do {
        iVar16 = (int)lVar17;
        if (pcVar7[lVar17] == '\0') {
joined_r0x01236dc4:
          iVar22 = (int)lVar17;
joined_r0x01236f38:
          if (0x3f < iVar16) {
            iVar22 = 0x3f;
          }
          goto LAB_01236dcc;
        }
        if (pcVar7[lVar17 + 1] == '\0') {
          iVar22 = iVar16 + 1;
          iVar16 = iVar22;
          goto joined_r0x01236f38;
        }
        if (pcVar7[lVar17 + 2] == '\0') {
          lVar17 = lVar17 + 2;
          iVar16 = (int)lVar17;
          goto joined_r0x01236dc4;
        }
        lVar17 = lVar17 + 3;
      } while (lVar17 != 0x80001);
      iVar22 = 0;
LAB_01236dcc:
      memcpy(local_bc,pcVar7,(long)iVar22);
      local_bc[iVar22] = '\0';
      puVar28 = PTR_DAT_04bb2bc0;
    }
    pcVar26 = local_c8;
    local_d0 = puVar28 + 0x10;
    if (cVar14 == '\x02') {
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,1);
      uVar6 = *puVar23;
      if (uVar6 != 0) {
        cVar21 = *PTR_DAT_04bbbc70;
        do {
          puVar13 = PTR_DAT_04bbbc78;
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)PTR_DAT_04bbbc78 = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
            *(undefined4 *)(puVar13 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
            uVar6 = *puVar23;
            *PTR_DAT_04bbbc70 = 1;
          }
          else {
            uVar11 = *(uint *)(PTR_DAT_04bbbc78 + 0x5c);
            if (-1 < (int)uVar11) {
              if (((byte *)((ulong)uVar11 + (long)puVar23) != (byte *)0x0) &&
                 ((*(byte *)((ulong)uVar11 + (long)puVar23) >> 1 & 1) != 0)) {
                lVar17 = 0;
                local_d8 = "Snow";
                local_c8[(long)local_c0 + -1] = '\0';
                goto LAB_01237014;
              }
              break;
            }
            if (uVar11 != 0xffffffff) break;
          }
          if (((ulong)uVar6 == 0) || (lVar17 = (long)puVar23 - (ulong)uVar6, lVar17 == 0)) break;
          lVar8 = 0xc;
          if (*(char *)(lVar17 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          if (lVar8 + lVar17 == 0) break;
          uVar18 = (ulong)*(ushort *)(lVar17 + 8);
          *(undefined4 *)(PTR_DAT_04bbbc78 + 0x5c) = 0xfffffffe;
          if (uVar18 == 0) break;
          piVar25 = (int *)(lVar8 + lVar17 + 4);
          while (piVar25[-1] != -0x5b4d2993) {
            piVar25 = piVar25 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_01237124;
          }
          iVar16 = 0;
          if (*piVar25 != -1) {
            iVar16 = *piVar25;
          }
          *(int *)(PTR_DAT_04bbbc78 + 0x5c) = iVar16;
          uVar6 = *puVar23;
          if (uVar6 == 0) break;
        } while( true );
      }
    }
    goto LAB_01237124;
  }
  if ((((*(long *)(DAT_05150358 + 0xb0) != 0) &&
       (puVar23 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar23 != (uint *)0x0)) &&
      ((*(uint *)(DAT_05150358 + 200) <= uVar30 ||
       (*(char *)(*(long *)(DAT_05150358 + 0xd0) + (long)(int)uVar30) != '\0')))) &&
     (((uVar30 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
    iVar16 = 0xc;
    if (*(char *)((long)puVar23 + 10) != '\0') {
      iVar16 = 0x1c;
    }
    puVar23 = (uint *)((ulong)(puVar23[1] * uVar30 + (uint)(ushort)puVar23[2] * 8 + iVar16) +
                      (long)puVar23);
    if (puVar23 != (uint *)0x0) goto LAB_012368a0;
  }
  goto LAB_01236864;
  while( true ) {
    if (local_c8[lVar17 + 1] == '\0') {
      lVar17 = lVar17 + 1;
      goto LAB_01237050;
    }
    if (local_c8[lVar17 + 2] == '\0') {
      lVar17 = lVar17 + 2;
      goto LAB_01237050;
    }
    lVar17 = lVar17 + 3;
    if (lVar17 == 0x80001) break;
LAB_01237014:
    if (local_c8[lVar17] == '\0') goto LAB_01237050;
  }
  lVar17 = 0;
LAB_01237050:
  uVar6 = (uint)lVar17 & ((int)(uint)lVar17 >> 0x1f ^ 0xffffffffU);
  local_e0 = puVar4;
  (**(code **)(puVar5 + 0x28))(&local_e0);
  lVar17 = 0;
  do {
    if (local_d8[lVar17] == '\0') goto LAB_012370bc;
    if (local_d8[lVar17 + 1] == '\0') {
      lVar17 = lVar17 + 1;
      goto LAB_012370bc;
    }
    if (local_d8[lVar17 + 2] == '\0') {
      lVar17 = lVar17 + 2;
      goto LAB_012370bc;
    }
    lVar17 = lVar17 + 3;
  } while (lVar17 != 0x80001);
  lVar17 = 0;
LAB_012370bc:
  uVar11 = (uint)lVar17;
  if ((int)(local_c0 - uVar6) <= (int)(uint)lVar17) {
    uVar11 = local_c0 + ~uVar6;
  }
  if (0 < (int)uVar11) {
    (**(code **)(local_e0 + 0x18))(&local_e0);
    memcpy(pcVar26 + uVar6,local_d8,(ulong)uVar11);
    pcVar26[(int)(uVar11 + uVar6)] = '\0';
  }
LAB_01237124:
  FUN_00757850(param_1,&local_d0,1);
  pcVar26 = local_c8;
  if ((byte)(cVar15 - 1U) < 3) {
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,2);
    uVar6 = *puVar23;
    if (uVar6 != 0) {
      cVar21 = *PTR_DAT_04bbbc70;
      do {
        puVar13 = PTR_DAT_04bbbc78;
        if (cVar21 == '\0') {
          cVar21 = '\x01';
          *(undefined8 *)PTR_DAT_04bbbc78 = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
          *(undefined4 *)(puVar13 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
          uVar6 = *puVar23;
          *PTR_DAT_04bbbc70 = 1;
        }
        else {
          uVar11 = *(uint *)(PTR_DAT_04bbbc78 + 0x5c);
          if (-1 < (int)uVar11) {
            if (((byte *)((ulong)uVar11 + (long)puVar23) != (byte *)0x0) &&
               ((*(byte *)((ulong)uVar11 + (long)puVar23) >> 2 & 1) != 0)) {
              local_e0 = PTR_DAT_04bb2020 + 0x10;
              local_d8 = "Sakura";
              (**(code **)(local_d0 + 0x18))(&local_d0);
              lVar17 = 0;
              goto LAB_012372ac;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
        }
        if (((ulong)uVar6 == 0) || (lVar17 = (long)puVar23 - (ulong)uVar6, lVar17 == 0)) break;
        lVar8 = 0xc;
        if (*(char *)(lVar17 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        if (lVar8 + lVar17 == 0) break;
        uVar18 = (ulong)*(ushort *)(lVar17 + 8);
        *(undefined4 *)(PTR_DAT_04bbbc78 + 0x5c) = 0xfffffffe;
        if (uVar18 == 0) break;
        piVar25 = (int *)(lVar8 + lVar17 + 4);
        while (piVar25[-1] != -0x5b4d2993) {
          piVar25 = piVar25 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_01236864;
        }
        iVar16 = 0;
        if (*piVar25 != -1) {
          iVar16 = *piVar25;
        }
        *(int *)(PTR_DAT_04bbbc78 + 0x5c) = iVar16;
        uVar6 = *puVar23;
        if (uVar6 == 0) break;
      } while( true );
    }
  }
LAB_01236864:
  uVar30 = uVar30 + 1;
  if (uVar30 == uVar29) goto LAB_012373c4;
  goto LAB_01236870;
  while( true ) {
    if (local_c8[lVar17 + 1] == '\0') {
      lVar17 = lVar17 + 1;
      goto LAB_012372e8;
    }
    if (local_c8[lVar17 + 2] == '\0') {
      lVar17 = lVar17 + 2;
      goto LAB_012372e8;
    }
    lVar17 = lVar17 + 3;
    if (lVar17 == 0x80001) break;
LAB_012372ac:
    if (local_c8[lVar17] == '\0') goto LAB_012372e8;
  }
  lVar17 = 0;
LAB_012372e8:
  uVar6 = (uint)lVar17 & ((int)(uint)lVar17 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_e0 + 0x18))(&local_e0);
  lVar17 = 0;
  do {
    if (local_d8[lVar17] == '\0') goto LAB_01237354;
    if (local_d8[lVar17 + 1] == '\0') {
      lVar17 = lVar17 + 1;
      goto LAB_01237354;
    }
    if (local_d8[lVar17 + 2] == '\0') {
      lVar17 = lVar17 + 2;
      goto LAB_01237354;
    }
    lVar17 = lVar17 + 3;
  } while (lVar17 != 0x80001);
  lVar17 = 0;
LAB_01237354:
  uVar11 = (uint)lVar17;
  if ((int)(local_c0 - uVar6) <= (int)(uint)lVar17) {
    uVar11 = local_c0 + ~uVar6;
  }
  if (0 < (int)uVar11) {
    (**(code **)(local_e0 + 0x18))(&local_e0);
    memcpy(pcVar26 + uVar6,local_d8,(ulong)uVar11);
    pcVar26[(int)(uVar11 + uVar6)] = '\0';
  }
  FUN_00757850(param_1,&local_d0,1);
  goto LAB_01236864;
}

