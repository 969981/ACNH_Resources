
/* WARNING: Type propagation algorithm not settling */

void FUN_01e34f90(long param_1,uint *param_2,uint param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  CalendarTime CVar8;
  ushort uVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  long *plVar24;
  uint *puVar25;
  long lVar26;
  uint uVar27;
  short *psVar28;
  uint uVar29;
  long lVar30;
  char cVar31;
  uint uVar32;
  int *piVar33;
  long lVar34;
  long *plVar35;
  byte bVar36;
  uint *puVar37;
  uint uVar38;
  ulong uVar39;
  int iVar40;
  undefined8 local_f8;
  long local_e8 [10];
  undefined *local_98;
  char *pcStack_90;
  undefined1 local_88 [4];
  CalendarTime local_84 [4];
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  
  iVar40 = 0;
  iVar15 = 0;
  local_f8 = 0xa00000000;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((&DAT_053fee41)[(long)iVar15 * 0xba0] != '\0') {
      iVar40 = iVar40 + 1;
      uVar17 = FUN_0219e890(&DAT_053fe348 + (long)iVar15 * 0xba0);
      if ((uVar17 & 1) != 0) {
        local_78 = CONCAT44(local_78._4_4_,(int)(char)(&DAT_053fee40)[(long)iVar15 * 0xba0]);
        uVar17 = FUN_021dcfe0(&local_78);
        if ((uVar17 & 1) == 0) {
          pcStack_90 = "NnpcHouseBuiltToday";
          local_98 = puVar1;
          iVar14 = FUN_027490f0((long)(char)(&DAT_053fee40)[(long)iVar15 * 0xba0],&local_98);
          if (iVar14 == 0) {
            lVar18 = FUN_0265c2a0((&DAT_053fe85c)[(long)iVar15 * 0x2e8]);
            if (lVar18 != 0) {
              if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
                 (puVar19 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar19 == (undefined8 *)0x0))
              {
                cVar31 = *(char *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1267a);
              }
              else {
                uVar17 = (**(code **)*puVar19)();
                cVar31 = *(char *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1267a);
                if ((((uVar17 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
                   (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8),
                   puVar19 != (undefined8 *)0x0)) {
                  (**(code **)*puVar19)();
                }
              }
              if (cVar31 == '\x02') goto LAB_01e35000;
            }
            uVar17 = FUN_021eb720(&DAT_053fe85c + (long)iVar15 * 0x2e8);
            if ((uVar17 & 1) == 0) {
              if ((int)local_f8 < local_f8._4_4_) {
                local_e8[(int)local_f8] = (long)(&DAT_053fe348 + (long)iVar15 * 0xba0);
                local_f8 = CONCAT44(local_f8._4_4_,(int)local_f8 + 1);
              }
            }
          }
        }
      }
    }
LAB_01e35000:
    plVar24 = (long *)PTR_DAT_04bb32e8;
    iVar15 = iVar15 + 1;
  } while (iVar15 != 10);
  uVar6 = *param_2;
  bVar12 = uVar6 == 0x31;
  if (uVar6 == 0x1e) {
    puVar19 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
    if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
      lVar18 = (**(code **)(*(long *)*puVar19 + 0x38))();
      uVar17 = 0;
      if (lVar18 != 0) {
        uVar17 = lVar18 + 0x70;
      }
    }
    else {
      uVar17 = (**(code **)(*(long *)puVar19[0x26] + 0x38))();
    }
    plVar2 = (long *)(uVar17 + 0x1bf260);
    if ((long *)*plVar2 == (long *)0x0) {
LAB_01e351cc:
      uVar39 = 0;
    }
    else {
      puVar19 = *(undefined8 **)*plVar2;
      uVar17 = 0;
      if (puVar19 == (undefined8 *)0x0) goto LAB_01e351cc;
      uVar17 = (**(code **)*puVar19)();
      uVar39 = uVar17 & 0xffffffff;
    }
    lVar18 = *plVar24;
    psVar28 = (short *)(lVar18 + 0x4068);
    if (*psVar28 == 0) {
      local_78 = *(ulong *)(lVar18 + 0x4060);
      if ((char)(local_78 >> 0x20) < '\x05') {
        lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
        local_98 = (undefined *)(lVar18 + -0x15180);
        uVar17 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
        local_78 = uVar17;
      }
      uVar20 = local_78;
      psVar28 = (short *)&local_78;
      local_78._7_1_ = SUB81(uVar20,7);
      local_78._0_7_ = (uint7)CONCAT24(5,(undefined4)local_78);
      plVar24 = (long *)PTR_DAT_04bb32e8;
    }
    local_98 = *(undefined **)psVar28;
    iVar15 = FUN_028d4550(uVar17,&local_98);
    local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar15);
    if (iVar15 == 2) {
      lVar18 = *plVar24;
      uVar9 = *(ushort *)(lVar18 + 0x4060);
      bVar36 = *(byte *)(lVar18 + 0x4062);
      bVar7 = *(byte *)(lVar18 + 0x4063);
      nn::time::IsValidDate((uint)uVar9,(uint)bVar36,(uint)bVar7);
      FUN_02507c6c(&local_78,1,1,0,0);
      puVar1 = PTR_DAT_04bb5038;
      uVar38 = (uint)(byte)local_78._0_1_;
      bVar10 = 0;
      bVar11 = 0;
      local_80 = local_78._4_4_;
      local_84[0] = (CalendarTime)0xff;
      if ((byte)local_78._0_1_ < 8) {
        local_84[0] = local_78._0_1_;
      }
      local_7c = local_70;
      if ((byte)local_78._0_1_ < 8) {
        bVar11 = 0;
        bVar10 = 0;
        bVar12 = false;
        puVar3 = PTR_DAT_04bb2020 + 0x10;
        while( true ) {
          local_88[0] = (undefined1)uVar38;
          lVar18 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_88,1);
          plVar24 = *(long **)(lVar18 + 0x28);
          if (plVar24 == (long *)0x0) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            if ((undefined8 *)*plVar24 != (undefined8 *)0x0) {
              uVar17 = (*(code *)**(undefined8 **)*plVar24)();
              plVar24 = *(long **)(lVar18 + 0x28);
            }
          }
          uVar16 = *(uint *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x3690a);
          if ((((uVar17 & 1) != 0) && (plVar24 != (long *)0x0)) &&
             ((undefined8 *)plVar24[1] != (undefined8 *)0x0)) {
            (*(code *)**(undefined8 **)plVar24[1])();
            plVar24 = *(long **)(lVar18 + 0x28);
          }
          if ((plVar24 == (long *)0x0) || ((undefined8 *)*plVar24 == (undefined8 *)0x0)) {
            uVar17 = 0;
          }
          else {
            uVar17 = (*(code *)**(undefined8 **)*plVar24)();
            uVar17 = uVar17 & 0xffffffff;
          }
          pcStack_90 = "TkkLiveToday";
          local_98 = puVar3;
          iVar15 = FUN_0274bbb0(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0xc170,&local_98)
          ;
          if ((((uVar17 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
             (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar19 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar19)();
          }
          bVar11 = (((uint)uVar9 == (uVar16 & 0xffff) && (uint)bVar36 == (uVar16 >> 0x10 & 0xff)) &&
                   (uint)bVar7 == uVar16 >> 0x18) | bVar11;
          bVar10 = iVar15 < 1 | bVar10;
          uVar17 = (ulong)uVar38;
          do {
            if (uVar17 == 7) goto LAB_01e354a0;
            uVar17 = uVar17 + 1;
            uVar20 = FUN_02507924(local_84,puVar1 + uVar17);
          } while ((uVar20 & 1) == 0);
          CVar8 = *(CalendarTime *)(puVar1 + uVar17);
          uVar38 = (uint)(byte)CVar8;
          if (7 < uVar38) break;
          local_84[0] = CVar8;
        }
      }
LAB_01e354a0:
      bVar13 = (bool)(bVar11 & bVar10 ^ 1);
      if ((((uVar39 & 1) != 0) && (*plVar2 != 0)) &&
         (puVar19 = *(undefined8 **)(*plVar2 + 8), puVar19 != (undefined8 *)0x0)) {
        (**(code **)*puVar19)();
      }
    }
    else {
      if ((((uVar39 & 1) != 0) && (*plVar2 != 0)) &&
         (puVar19 = *(undefined8 **)(*plVar2 + 8), puVar19 != (undefined8 *)0x0)) {
        (**(code **)*puVar19)();
      }
      bVar36 = *(byte *)(*plVar24 + 0x4064);
      if (bVar36 < 5) {
        iVar15 = 5;
      }
      else if (bVar36 < 8) {
        iVar15 = 0;
      }
      else if (bVar36 < 0xc) {
        iVar15 = 1;
      }
      else if (bVar36 < 0x10) {
        iVar15 = 2;
      }
      else {
        iVar15 = 3;
        if (0x12 < bVar36) {
          iVar15 = 4;
        }
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar15);
      if ((iVar15 == 0) || (iVar15 == 1)) goto LAB_01e35528;
      bVar13 = iVar15 == 2;
    }
  }
  else {
LAB_01e35528:
    bVar13 = true;
  }
  puVar3 = PTR_DAT_04bc1568;
  puVar1 = PTR_DAT_04bc1560;
  lVar18 = *(long *)PTR_DAT_04bb3968;
  if (lVar18 == 0) {
LAB_01e355e4:
    puVar25 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    uVar38 = *(uint *)(param_1 + 0x420);
    if ((int)*(uint *)(lVar18 + 0x16ac8) < 1) {
      if (((*(long *)(lVar18 + 0x169b8) != 0) &&
          (puVar25 = *(uint **)(*(long *)(lVar18 + 0x169b8) + 8), puVar25 != (uint *)0x0)) &&
         (((*(uint *)(lVar18 + 0x169d0) <= uVar38 ||
           (*(char *)(*(long *)(lVar18 + 0x169d8) + (long)(int)uVar38) != '\0')) &&
          (((uVar38 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))))) {
        iVar15 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          iVar15 = 0x1c;
        }
        puVar25 = (uint *)((ulong)(puVar25[1] * uVar38 + (uint)(ushort)puVar25[2] * 8 + iVar15) +
                          (long)puVar25);
        if (puVar25 != (uint *)0x0) goto LAB_01e355ec;
      }
      goto LAB_01e355e4;
    }
    if (*(uint *)(lVar18 + 0x16ac8) <= uVar38) goto LAB_01e355e4;
    if (*(uint *)(lVar18 + 0x16ab8) <= uVar38) {
      uVar38 = 0;
    }
    puVar25 = *(uint **)(*(long *)(lVar18 + 0x16ac0) + (ulong)uVar38 * 8);
    if (puVar25 == (uint *)0x0) goto LAB_01e355e4;
  }
LAB_01e355ec:
  if (*puVar25 == 0) {
LAB_01e35720:
    bVar36 = 0;
  }
  else {
    cVar31 = *PTR_DAT_04bc1560;
    do {
      if (cVar31 == '\0') {
        cVar31 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar38 = *(uint *)(puVar3 + 0x18);
        if (-1 < (int)uVar38) {
          if ((byte *)((ulong)uVar38 + (long)puVar25) == (byte *)0x0) goto LAB_01e35720;
          bVar36 = *(byte *)((ulong)uVar38 + (long)puVar25);
          if (bVar36 < 8) goto LAB_01e35724;
          if (uVar6 != 0x1e) goto LAB_01e3575c;
          goto LAB_01e3572c;
        }
        if (uVar38 != 0xffffffff) goto LAB_01e35720;
      }
      puVar37 = (uint *)(ulong)*puVar25;
      bVar36 = 0;
      if ((*puVar25 == 0) || (puVar25 == puVar37)) goto LAB_01e35724;
      lVar18 = 0xc;
      if (*(char *)((long)puVar25 + (10 - (long)puVar37)) != '\0') {
        lVar18 = 0x1c;
      }
      lVar18 = (long)puVar25 + (lVar18 - (long)puVar37);
      if (lVar18 == 0) goto LAB_01e35720;
      uVar17 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar37));
      *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
      bVar36 = 0;
      if (uVar17 == 0) goto LAB_01e35724;
      piVar33 = (int *)(lVar18 + 4);
      while (piVar33[-1] != -0x422b23f1) {
        piVar33 = piVar33 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          bVar36 = 0;
          goto LAB_01e35724;
        }
      }
      iVar15 = 0;
      if (*piVar33 != -1) {
        iVar15 = *piVar33;
      }
      *(int *)(puVar3 + 0x18) = iVar15;
    } while (*puVar25 != 0);
    bVar36 = 0;
  }
LAB_01e35724:
  if (uVar6 == 0x1e) {
LAB_01e3572c:
    uVar38 = (uint)(bVar13 ^ 1);
    iVar14 = 4;
    bVar12 = bVar13;
LAB_01e35778:
    iVar15 = 2;
    if (!bVar12) {
      iVar15 = iVar14;
    }
  }
  else if (bVar36 == 5) {
    uVar38 = 1;
    iVar15 = 1;
    if (1 < *(int *)(param_1 + 0x418)) {
      iVar15 = 2;
    }
  }
  else {
LAB_01e3575c:
    iVar15 = 1;
    uVar38 = 1;
    if (uVar6 != 0x31) {
      uVar38 = 2;
    }
    if (1 < *(int *)(param_1 + 0x418)) {
      iVar14 = 3;
      goto LAB_01e35778;
    }
  }
  if ((((int)local_f8 < (int)uVar38) && (uVar6 != 0x1e)) && (uVar6 != 0x31)) {
    return;
  }
  puVar25 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar27 = puVar25[3];
  uVar16 = *puVar25 ^ *puVar25 << 0xb;
  *puVar25 = puVar25[1];
  puVar25[1] = puVar25[2];
  uVar16 = uVar16 >> 8 ^ uVar27 >> 0x13 ^ uVar16 ^ uVar27;
  puVar25[2] = uVar27;
  puVar25[3] = uVar16;
  uVar38 = uVar38 + (int)((ulong)uVar16 * (ulong)(((iVar15 - uVar38) * iVar40) / 10 + 1) >> 0x20);
  uVar23 = 1;
  if (uVar6 == 0x1e) {
    uVar23 = 2;
  }
  *(undefined4 *)(param_1 + 0x41c) = uVar23;
  uVar16 = *param_2;
  *(uint *)(param_1 + 0x42c) = uVar38;
  *(uint *)(param_1 + 0x420) = uVar16;
  plVar24 = (long *)PTR_DAT_04bb32e8;
  lVar18 = *(long *)PTR_DAT_04bb32e8;
  pbVar4 = (byte *)(lVar18 + 0x4064);
  bVar36 = *pbVar4;
  if (bVar36 < 5) {
    *(undefined4 *)(param_1 + 0x558) = 5;
  }
  else if (bVar36 < 8) {
    *(undefined4 *)(param_1 + 0x558) = 0;
  }
  else if (bVar36 < 0xc) {
    *(undefined4 *)(param_1 + 0x558) = 1;
  }
  else if (bVar36 < 0x10) {
    *(undefined4 *)(param_1 + 0x558) = 2;
  }
  else {
    uVar23 = 3;
    if (0x12 < bVar36) {
      uVar23 = 4;
    }
    *(undefined4 *)(param_1 + 0x558) = uVar23;
  }
  if (!bVar13) {
    bVar36 = *pbVar4;
    if (bVar36 < 5) {
      uVar16 = 5;
    }
    else if (bVar36 < 8) {
      uVar16 = 0;
    }
    else if (bVar36 < 0xc) {
      uVar16 = 1;
    }
    else if (bVar36 < 0x10) {
      uVar16 = 2;
    }
    else {
      uVar16 = 3;
      if (0x12 < bVar36) {
        uVar16 = 4;
      }
    }
    local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar16);
    uVar17 = (ulong)uVar16;
    *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(lVar18 + 0x4060);
    if (5 < uVar16) {
      uVar17 = 0;
    }
    *(char *)(param_1 + 0x574) = (char)(&DAT_04178d64)[uVar17];
    *(undefined2 *)(param_1 + 0x575) = 0x3b;
  }
  uVar16 = nn::os::GetSystemTick();
  if (1 < (int)local_f8) {
    uVar16 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
    uVar27 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 2;
    uVar29 = (uVar27 ^ uVar27 >> 0x1e) * 0x6c078965 + 3;
    uVar17 = local_f8 & 0xffffffff;
    uVar32 = (uVar29 ^ uVar29 >> 0x1e) * 0x6c078965 + 4;
    do {
      uVar16 = uVar16 ^ uVar16 << 0xb;
      uVar5 = uVar16 >> 8 ^ uVar32 >> 0x13 ^ uVar16 ^ uVar32;
      uVar39 = uVar17 - 1 & 0xffffffff;
      lVar18 = local_e8[uVar39];
      uVar20 = uVar17 * uVar5 >> 0x1d & 0x7fffffff8;
      local_e8[uVar39] = *(long *)((long)local_e8 + uVar20);
      *(long *)((long)local_e8 + uVar20) = lVar18;
      bVar12 = 2 < uVar17;
      uVar17 = uVar17 - 1;
      uVar16 = uVar27;
      uVar27 = uVar29;
      uVar29 = uVar32;
      uVar32 = uVar5;
    } while (bVar12);
  }
  if ((int)local_f8 != 0) {
    plVar2 = (long *)(param_1 + 0x438);
    lVar18 = (long)(int)local_f8 * 8;
    if ((param_3 & 1) == 0) {
      lVar26 = 0;
      do {
        lVar18 = lVar18 + -8;
        lVar30 = local_e8[lVar26];
        if (*(int *)(param_1 + 0x448) < *(int *)(param_1 + 0x460)) {
          cVar31 = *(char *)(lVar30 + 0xaf8);
          piVar33 = *(int **)(param_1 + 0x450);
          if (piVar33 != (int *)0x0) {
            *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)piVar33;
          }
          *piVar33 = (int)cVar31;
          piVar33[4] = 0;
          piVar33[5] = 0;
          plVar35 = (long *)(piVar33 + 2);
          *plVar35 = 0;
          lVar34 = *plVar2;
          *plVar2 = (long)plVar35;
          *(long **)(piVar33 + 4) = plVar2;
          *plVar35 = lVar34;
          if (lVar34 != 0) {
            *(long **)(lVar34 + 8) = plVar35;
          }
          *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
        }
        local_78 = *(undefined8 *)(*plVar24 + 0x4060);
        puVar25 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar16 = *puVar25 ^ *puVar25 << 0xb;
        uVar27 = puVar25[3];
        *puVar25 = puVar25[1];
        puVar25[1] = puVar25[2];
        uVar16 = uVar16 >> 8 ^ uVar27 >> 0x13 ^ uVar16 ^ uVar27;
        puVar25[2] = uVar27;
        puVar25[3] = uVar16;
        if ((short)local_78 == 0) {
          uVar22 = local_78;
        }
        else {
          lVar21 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
          plVar24 = (long *)PTR_DAT_04bb32e8;
          lVar34 = 0;
          if (0x2aaaaaaa < uVar16) {
            lVar34 = ((ulong)uVar16 * 6 >> 0x20) * 0x3c;
          }
          local_98 = (undefined *)(lVar21 + lVar34);
          uVar22 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
        }
        lVar26 = lVar26 + 1;
        *(undefined8 *)(lVar30 + 0x7c2) = uVar22;
      } while (((uint)lVar26 < uVar38) && (lVar18 != 0));
    }
    else {
      lVar26 = 0;
      do {
        lVar18 = lVar18 + -8;
        lVar30 = local_e8[lVar26];
        if (*(int *)(param_1 + 0x448) < *(int *)(param_1 + 0x460)) {
          cVar31 = *(char *)(lVar30 + 0xaf8);
          piVar33 = *(int **)(param_1 + 0x450);
          if (piVar33 != (int *)0x0) {
            *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)piVar33;
          }
          *piVar33 = (int)cVar31;
          piVar33[4] = 0;
          piVar33[5] = 0;
          plVar35 = (long *)(piVar33 + 2);
          *plVar35 = 0;
          lVar34 = *plVar2;
          *plVar2 = (long)plVar35;
          *(long **)(piVar33 + 4) = plVar2;
          *plVar35 = lVar34;
          if (lVar34 != 0) {
            *(long **)(lVar34 + 8) = plVar35;
          }
          *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
        }
        lVar26 = lVar26 + 1;
        *(undefined8 *)(lVar30 + 0x7c2) = *(undefined8 *)(*plVar24 + 0x4060);
      } while (((uint)lVar26 < uVar38) && (lVar18 != 0));
    }
  }
  puVar3 = PTR_DAT_04bc1568;
  puVar1 = PTR_DAT_04bc1560;
  lVar18 = *(long *)PTR_DAT_04bb3968;
  if (lVar18 != 0) {
    uVar38 = *param_2;
    if ((int)*(uint *)(lVar18 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar18 + 0x169b8) != 0) &&
           (puVar25 = *(uint **)(*(long *)(lVar18 + 0x169b8) + 8), puVar25 != (uint *)0x0)) &&
          ((*(uint *)(lVar18 + 0x169d0) <= uVar38 ||
           (*(char *)(*(long *)(lVar18 + 0x169d8) + (long)(int)uVar38) != '\0')))) &&
         (((uVar38 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
        iVar15 = 0xc;
        if (*(char *)((long)puVar25 + 10) != '\0') {
          iVar15 = 0x1c;
        }
        puVar25 = (uint *)((ulong)(puVar25[1] * uVar38 + (uint)(ushort)puVar25[2] * 8 + iVar15) +
                          (long)puVar25);
        goto joined_r0x01e35c6c;
      }
    }
    else if (uVar38 < *(uint *)(lVar18 + 0x16ac8)) {
      if (*(uint *)(lVar18 + 0x16ab8) <= uVar38) {
        uVar38 = 0;
      }
      puVar25 = *(uint **)(*(long *)(lVar18 + 0x16ac0) + (ulong)uVar38 * 8);
joined_r0x01e35c6c:
      if (puVar25 != (uint *)0x0) {
        uVar38 = *puVar25;
        goto joined_r0x01e35c7c;
      }
    }
  }
  uVar38 = *(uint *)PTR_DAT_04bc2828;
  puVar25 = (uint *)PTR_DAT_04bc2828;
joined_r0x01e35c7c:
  if (uVar38 == 0) {
LAB_01e35d6c:
    uVar38 = 0;
  }
  else {
    cVar31 = *PTR_DAT_04bc1560;
    do {
      if (cVar31 == '\0') {
        cVar31 = '\x01';
        *puVar1 = 1;
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar38 = *(uint *)(puVar3 + 0x14);
        if (-1 < (int)uVar38) {
          if ((byte *)((ulong)uVar38 + (long)puVar25) == (byte *)0x0) goto LAB_01e35d6c;
          uVar38 = (uint)*(byte *)((ulong)uVar38 + (long)puVar25);
          goto LAB_01e35d70;
        }
        if (uVar38 != 0xffffffff) goto LAB_01e35d6c;
      }
      puVar37 = (uint *)(ulong)*puVar25;
      uVar38 = 0;
      if ((*puVar25 == 0) || (puVar25 == puVar37)) goto LAB_01e35d70;
      lVar18 = 0xc;
      if (*(char *)((long)puVar25 + (10 - (long)puVar37)) != '\0') {
        lVar18 = 0x1c;
      }
      lVar18 = (long)puVar25 + (lVar18 - (long)puVar37);
      if (lVar18 == 0) goto LAB_01e35d6c;
      uVar17 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar37));
      *(undefined4 *)(puVar3 + 0x14) = 0xfffffffe;
      uVar38 = 0;
      if (uVar17 == 0) goto LAB_01e35d70;
      piVar33 = (int *)(lVar18 + 4);
      while (piVar33[-1] != 0x430dbf65) {
        piVar33 = piVar33 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          uVar38 = 0;
          goto LAB_01e35d70;
        }
      }
      iVar15 = 0;
      if (*piVar33 != -1) {
        iVar15 = *piVar33;
      }
      *(int *)(puVar3 + 0x14) = iVar15;
    } while (*puVar25 != 0);
    uVar38 = 0;
  }
LAB_01e35d70:
  local_78 = CONCAT44(local_78._4_4_,1);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
  if ((uVar38 >> 1 & 1) != 0) {
    lVar18 = *(long *)(param_1 + 0x440);
    *(undefined1 *)(param_1 + 0x430) = 1;
    if (*(int *)(param_1 + 0x448) < 1) {
      lVar18 = 0;
    }
    if ((lVar18 != 0) && ((undefined4 *)(lVar18 + -8) != (undefined4 *)0x0)) {
      *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(lVar18 + -8);
    }
  }
  if (uVar6 == 0x31) {
    FUN_01e32d80(param_1);
  }
  return;
}

