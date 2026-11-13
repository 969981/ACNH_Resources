
ulong FUN_011c74a0(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  uint uVar6;
  short sVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte bVar21;
  float *pfVar22;
  int *piVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  uint *puVar28;
  char *pcVar29;
  long lVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  uint *local_68;
  
  puVar1 = (undefined8 *)(param_4 + 0x278);
  piVar18 = (int *)(param_4 + 0x374);
  uVar24 = 1;
  do {
    if (*piVar18 == 4) {
      uVar24 = uVar24 - 1;
LAB_011c7514:
      piVar18 = (int *)(param_4 + 0x46790);
      uVar15 = (uint)uVar24;
      if (*piVar18 <= (int)uVar15) {
        *piVar18 = uVar15 + 1;
      }
      if ((int)uVar15 < 0) goto LAB_011c7d3c;
      plVar25 = *(long **)(param_4 + 0x60);
      if (((*PTR_DAT_04bb36e0 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb36e0), iVar14 != 0)) {
        *(undefined **)PTR_DAT_04bb36d8 = PTR_DAT_04bb36e8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb36e0);
      }
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x10))(plVar25,PTR_DAT_04bb36d8);
      }
      iVar14 = *piVar18;
      puVar3 = puVar1 + (uVar24 & 0xffffffff) * 0x24;
      if (999 < uVar15) {
        puVar3 = puVar1;
      }
      if (*(int *)((long)puVar3 + 0xfc) != 4) goto LAB_011c7d3c;
      FUN_011cc6d8(puVar3);
      *(undefined2 *)puVar3 = *(undefined2 *)(param_5 + 5);
      *(undefined1 *)((long)puVar3 + 2) = *(undefined1 *)((long)param_5 + 0x16);
      *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)param_5 + 0x17);
      *(undefined4 *)((long)puVar3 + 4) = param_5[6];
      *(undefined4 *)(puVar3 + 0x16) = param_5[10];
      *(undefined4 *)((long)puVar3 + 0xb4) = param_5[0xb];
      *(undefined4 *)(puVar3 + 0x17) = *param_5;
      *(undefined4 *)((long)puVar3 + 0xbc) = param_5[1];
      *(undefined4 *)(puVar3 + 0x18) = param_5[2];
      puVar9 = PTR_DAT_04bbbc68;
      if ((((((*(char *)((long)param_5 + 0x4d) != '\0') ||
             (lVar26 = *(long *)PTR_DAT_04bbbc68, lVar26 == 0)) || (*(long *)(lVar26 + 0xb0) == 0))
           || ((*(long *)(*(long *)(lVar26 + 0xb0) + 8) == 0 || (*(long *)(lVar26 + 0x488) == 0))))
          || (*(long *)(*(long *)(lVar26 + 0x488) + 8) == 0)) ||
         ((*(long *)(lVar26 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar26 + 0x2b0) + 8) == 0))))
      goto LAB_011c75e8;
      uVar13 = FUN_0277d6c4(puVar3);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((*(uint *)(lVar26 + 0x1d8) <= uVar13) ||
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_011c75e8;
      FUN_0124c030(&local_78,puVar3);
      iVar12 = FUN_0123db50(&local_70,local_68);
      puVar10 = PTR_DAT_04bbbc78;
      puVar4 = PTR_DAT_04bbbc70;
      if (((6 < iVar12 - 0xbU) || (local_68 == (uint *)0x0)) || (uVar13 = *local_68, uVar13 == 0))
      goto LAB_011c75e8;
      cVar11 = *PTR_DAT_04bbbc70;
      goto LAB_011c7748;
    }
    if (piVar18[0x48] == 4) goto LAB_011c7514;
    uVar24 = uVar24 + 2;
    piVar18 = piVar18 + 0x90;
  } while (uVar24 != 0x3e9);
  uVar24 = 0xffffffff;
  goto LAB_011c7d40;
LAB_011c7748:
  if (cVar11 == '\0') {
    cVar11 = '\x01';
    *(undefined8 *)puVar10 = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined4 *)(puVar10 + 0x60) = 0xffffffff;
    *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
    uVar13 = *local_68;
LAB_011c7788:
    puVar28 = (uint *)(ulong)uVar13;
    if ((puVar28 == (uint *)0x0) || (local_68 == puVar28)) goto LAB_011c75e8;
    lVar26 = 0xc;
    if (*(char *)((long)local_68 + (10 - (long)puVar28)) != '\0') {
      lVar26 = 0x1c;
    }
    lVar26 = (long)local_68 + (lVar26 - (long)puVar28);
    if (lVar26 == 0) goto LAB_011c75e8;
    uVar19 = (ulong)*(ushort *)((long)local_68 + (8 - (long)puVar28));
    *(undefined4 *)(puVar10 + 0x4c) = 0xfffffffe;
    if (uVar19 == 0) goto LAB_011c75e8;
    piVar23 = (int *)(lVar26 + 4);
    while (piVar23[-1] != -0xa58ccc9) {
      piVar23 = piVar23 + 2;
      uVar19 = uVar19 - 1;
      if (uVar19 == 0) goto LAB_011c75e8;
    }
    iVar12 = 0;
    if (*piVar23 != -1) {
      iVar12 = *piVar23;
    }
    *(int *)(puVar10 + 0x4c) = iVar12;
    uVar13 = *local_68;
    if (uVar13 == 0) goto LAB_011c75e8;
    goto LAB_011c7748;
  }
  uVar6 = *(uint *)(puVar10 + 0x4c);
  if ((int)uVar6 < 0) {
    if (uVar6 != 0xffffffff) goto LAB_011c75e8;
    goto LAB_011c7788;
  }
  if (((byte *)((ulong)uVar6 + (long)local_68) != (byte *)0x0) &&
     (1 < *(byte *)((ulong)uVar6 + (long)local_68))) {
    param_3 = *(float *)((long)puVar3 + 0xbc);
    param_2 = param_3 + -0.3;
    *(float *)((long)puVar3 + 0xbc) = param_2;
    *(float *)(puVar3 + 0x18) = *(float *)(puVar3 + 0x18) + 2.0;
  }
LAB_011c75e8:
  bVar21 = *(byte *)(param_5 + 0xc);
  if (7 < bVar21) {
    bVar21 = 0xff;
  }
  *(byte *)(puVar3 + 0x22) = bVar21;
  *(undefined4 *)((long)puVar3 + 0xec) = param_5[3];
  bVar21 = *(byte *)((long)param_5 + 0x49);
  *(byte *)((long)puVar3 + 0x114) = bVar21;
  if ((long)(char)bVar21 != 0xffffffffffffffff) {
    puVar4 = PTR_DAT_04bbbcc8;
    if (bVar21 < 0x28) {
      puVar4 = PTR_DAT_04bbbcc8 + ((long)(char)bVar21 & 0xffffffffU) * 0x48;
    }
    if ((*(int *)(puVar4 + 0x3c) < 0x24) && (((byte)puVar4[0x45] >> 1 & 1) != 0)) {
      puVar3[0x21] = puVar3[0x21] | 0x8000000;
    }
  }
  *(undefined1 *)((long)puVar3 + 0x116) = *(undefined1 *)((long)param_5 + 0x4a);
  cVar11 = *(char *)(param_5 + 0x12);
  if (cVar11 == -2) {
    pfVar22 = (float *)&DAT_050d89d0;
    *(undefined1 *)((long)puVar3 + 0x119) = 0xff;
    lVar26 = 1;
    do {
      param_2 = pfVar22[-10];
      if (pfVar22[-0xb] == param_2) {
        lVar26 = lVar26 + -1;
LAB_011c7850:
        uVar13 = (uint)lVar26 & 0xff;
        *(char *)((long)puVar3 + 0x11a) = (char)lVar26;
        if (uVar13 == 0xff) goto LAB_011c78ac;
        puVar20 = &DAT_050d8988 + (ulong)(uint)(int)(char)lVar26 * 5;
        if (0x77 < uVar13) {
          puVar20 = &DAT_050d8988;
        }
        local_78 = PTR_DAT_04bb2020 + 0x10;
        local_70 = "PlantPick";
        FUN_0359e360(puVar20,&local_78);
        uVar19 = puVar3[0x21] & 0xffffffefffffffff;
        goto LAB_011c78a8;
      }
      param_2 = *pfVar22;
      if (pfVar22[-1] == param_2) goto LAB_011c7850;
      lVar26 = lVar26 + 2;
      pfVar22 = pfVar22 + 0x14;
    } while (lVar26 != 0x79);
    *(undefined1 *)((long)puVar3 + 0x11a) = 0xff;
  }
  else if (cVar11 == -3) {
    *(undefined1 *)((long)puVar3 + 0x119) = 0xff;
    uVar19 = puVar3[0x21] | 0x200000;
LAB_011c78a8:
    puVar3[0x21] = uVar19;
  }
  else {
    *(char *)((long)puVar3 + 0x119) = cVar11;
  }
LAB_011c78ac:
  *(undefined4 *)((long)puVar3 + 0x104) = param_5[0xd];
  *(undefined1 *)(puVar3 + 0x23) = *(undefined1 *)((long)param_5 + 0x4b);
  iVar12 = FUN_0277d6c4(puVar3);
  if (iVar12 == 0x8f0) {
    uVar19 = puVar3[0x21];
    puVar3[0x21] = uVar19 | 0x800;
    if (*(char *)((long)puVar3 + 0x119) != -1) {
      puVar3[0x21] = uVar19 | 0x1800;
    }
  }
  iVar12 = param_5[0x10];
  if (iVar12 != 0) {
    puVar3[0x21] = puVar3[0x21] | 3;
  }
  *(int *)(puVar3 + 0x20) = iVar12;
  if (param_5[0xf] == 1) {
    puVar3[0x21] = puVar3[0x21] | 4;
  }
  puVar20 = puVar3 + 0x15;
  if (*(char *)((long)puVar3 + 0x119) != -1) {
    uVar19 = puVar3[0x21];
    puVar3[0x21] = uVar19 | 0x100;
    if (*(char *)((long)puVar3 + 0x119) == '\x02') {
      puVar3[0x21] = uVar19 | 0x8100;
    }
  }
  if ((((*(byte *)((long)puVar3 + 6) & 0x18) == 0) &&
      (uVar19 = FUN_0123b020(puVar3,0,0,0), (uVar19 & 1) != 0)) &&
     (uVar19 = puVar3[0x21], puVar3[0x21] = uVar19 | 0x80, ((uint)uVar19 >> 0x15 & 1) != 0)) {
    lVar26 = *(long *)puVar9;
    if (lVar26 != 0) {
      if ((((*(long *)(lVar26 + 0xb0) != 0) && (*(long *)(*(long *)(lVar26 + 0xb0) + 8) != 0)) &&
          ((*(long *)(lVar26 + 0x488) != 0 &&
           ((*(long *)(*(long *)(lVar26 + 0x488) + 8) != 0 && (*(long *)(lVar26 + 0x2b0) != 0))))))
         && (*(long *)(*(long *)(lVar26 + 0x2b0) + 8) != 0)) {
        uVar13 = FUN_0277d6c4(puVar3);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if (((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) &&
           (param_2 = 1.0, (float)param_5[3] == 1.0)) {
          FUN_0124c030(&local_78,puVar3);
          local_90 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_90);
          iVar12 = FUN_0123db50(&local_70,local_68);
          if (iVar12 == 0x20) {
            local_80 = (undefined *)0x84b;
            FUN_0277d4ac(&local_80);
            local_90 = local_80;
          }
          else {
            local_90 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_90);
            if ((*(byte *)((long)puVar3 + 6) & 0x18) == 0) {
              FUN_0123b020(puVar3,&local_90,0,0);
            }
          }
          puVar4 = PTR_DAT_04bb43c0;
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          uVar13 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar4 != 0) {
            lVar26 = *(long *)(lVar26 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if (((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) &&
               (uVar19 = FUN_01238b20(puVar3 + 0xe,&local_90,0,0,0), (uVar19 & 1) != 0)) {
              puVar3[0x21] = puVar3[0x21] | 0x400000000;
            }
          }
        }
      }
      goto LAB_011c7984;
    }
LAB_011c7c08:
    puVar4 = PTR_DAT_04bb43c0;
    lVar26 = *(long *)PTR_DAT_04bb43c0;
    uVar13 = FUN_0277d6c4(puVar3);
    lVar30 = *(long *)puVar4;
    if (lVar30 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
        if (*(char *)((long)param_5 + 0x4e) != '\0') {
          puVar3[0x21] = puVar3[0x21] | 0x1000000;
          FUN_011cefcc(puVar3);
          lVar30 = *(long *)puVar4;
        }
        local_68 = (uint *)0x0;
        bVar21 = *(byte *)((long)puVar3 + 2);
        local_78 = PTR_DAT_04bc0510 + 0x10;
        local_70 = (char *)*puVar3;
        uVar13 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar4 == 0) {
LAB_011c7d64:
          puVar28 = (uint *)0x0;
        }
        else {
          lVar26 = *(long *)(lVar30 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if (*(uint *)(lVar26 + 0x1d8) <= uVar13) goto LAB_011c7d64;
          if (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) == 0) {
LAB_011c7d70:
            puVar28 = (uint *)0x0;
          }
          else {
            lVar26 = *(long *)PTR_DAT_04bc0428;
            uVar13 = FUN_0277d6c4(puVar3);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if (*(uint *)(lVar26 + 0x1d8) <= uVar13) goto LAB_011c7d70;
            puVar28 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8);
            if (puVar28 != (uint *)0x0) {
              local_68 = puVar28;
            }
          }
        }
        iVar14 = FUN_0277d6c4(puVar3);
        if (iVar14 == 0x38d2) {
          uVar19 = FUN_01ae59b0(&local_78);
          bVar2 = bVar21 >> 2 & 1;
          if ((uVar19 & 1) == 0) {
            bVar2 = bVar21 & 4;
          }
          if (bVar2 != 0) {
            sVar7 = *(short *)PTR_DAT_04bb6298;
            if (sVar7 == -1) {
LAB_011c7dfc:
              uVar19 = FUN_0122a4e0();
              uVar27 = 1;
              if ((uVar19 & 1) == 0) {
                uVar27 = 2;
              }
            }
            else {
              local_90 = (undefined *)CONCAT44(local_90._4_4_,3);
              puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
              if (0xff < (uint)(int)sVar7) {
                puVar8 = (uint *)PTR_DAT_04bc39f8;
              }
              if ((*puVar8 >> 3 & 1) == 0) goto LAB_011c7dfc;
              uVar27 = 0;
            }
            uVar19 = FUN_0122ade0(puVar20,uVar27);
            if ((uVar19 & 1) != 0) {
              FUN_011c91b8(puVar3);
            }
          }
        }
        if (*(char *)((long)param_5 + 0x4d) == '\0') {
          uVar19 = FUN_01ae59b0(&local_78);
          bVar2 = bVar21 >> 2 & 1;
          if ((uVar19 & 1) == 0) {
            bVar2 = bVar21 & 4;
          }
          if (bVar2 != 0) {
            *(undefined4 *)((long)puVar3 + 0xfc) = 1;
            uVar27 = *(undefined8 *)PTR_DAT_04bb30a0;
            local_80 = (undefined *)FUN_00a8c31c(uVar27);
            if ((char)((ulong)local_80 >> 0x20) < '\x05') {
              lVar26 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
              local_90 = (undefined *)(lVar26 + -0x15180);
              local_80 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
            }
            uVar16 = (ulong)local_80 >> 0x10;
            uVar19 = (ulong)local_80 >> 0x30;
            uVar17 = (ulong)local_80 >> 0x18;
            local_80._0_6_ = CONCAT24(5,(undefined4)local_80);
            local_80 = (undefined *)
                       (CONCAT26((short)uVar19,(undefined6)local_80) & 0xff00ffffffffffff);
            cVar11 = FUN_00a8ae20(uVar27,uVar16,uVar17,4);
            if (cVar11 == '\x02') {
              FUN_0137d59c(&local_90,puVar20);
              FUN_009784a0(&local_90,(undefined4 *)((long)puVar3 + 0xdc));
            }
            else {
              FUN_0137d59c(&local_90,puVar20);
              FUN_00978230(&local_90,(undefined4 *)((long)puVar3 + 0xdc));
            }
            pcVar29 = (char *)puVar3[8];
            if (pcVar29 != "UnitIconHoleOff") {
              iVar14 = 0xf;
              if (*(int *)(puVar3 + 9) < 0x10) {
                iVar14 = *(int *)(puVar3 + 9) + -1;
              }
              memcpy(pcVar29,"UnitIconHoleOff",(long)iVar14);
              pcVar29[iVar14] = '\0';
              puVar28 = local_68;
            }
            if (puVar28 != (uint *)0x0) {
              puVar8 = (uint *)((long)puVar28 - (ulong)*puVar28);
              if ((((*puVar28 != 0) && (puVar8 != (uint *)0x0)) && (*puVar8 != 0)) &&
                 ((uVar13 = puVar8[1], uVar13 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
                lVar26 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar8 + lVar26 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar26 != 0) {
                  uVar6 = 0;
                  if ((ulong)uVar13 != 0) {
                    uVar6 = (uint)((ulong)((long)puVar28 - lVar26) / (ulong)uVar13);
                  }
                  if (*puVar8 <= uVar6) {
                    uVar6 = 0xffffffff;
                  }
                  if (((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                      (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2) == 0x86))
                     && (uVar19 = FUN_0122cbac(puVar20), (uVar19 & 1) != 0)) {
                    puVar3[0x21] = puVar3[0x21] | 8;
                  }
                }
              }
            }
            goto LAB_011c864c;
          }
        }
        *(undefined4 *)((long)puVar3 + 0xfc) = 0;
        if (((*(byte *)((long)puVar3 + 0x109) & 1) == 0) &&
           (uVar19 = FUN_0277e158(puVar3), (uVar19 & 1) != 0)) {
          iVar14 = FUN_01afa5ec(&local_78);
          *(int *)(puVar3 + 0x1a) = (int)(long)((float)iVar14 * 90.0 * 11930465.0);
        }
        goto LAB_011c864c;
      }
    }
    FUN_011cc6d8(puVar3);
LAB_011c7d3c:
    uVar24 = 0xffffffff;
  }
  else {
LAB_011c7984:
    lVar26 = *(long *)puVar9;
    if (((lVar26 == 0) || (*(long *)(lVar26 + 0xb0) == 0)) ||
       ((*(long *)(*(long *)(lVar26 + 0xb0) + 8) == 0 ||
        ((((*(long *)(lVar26 + 0x488) == 0 || (*(long *)(*(long *)(lVar26 + 0x488) + 8) == 0)) ||
          (*(long *)(lVar26 + 0x2b0) == 0)) || (*(long *)(*(long *)(lVar26 + 0x2b0) + 8) == 0))))))
    goto LAB_011c7c08;
    uVar13 = FUN_0277d6c4(puVar3);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((*(uint *)(lVar26 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_011c7c08;
    FUN_0124c030(&local_78,puVar3);
    uVar19 = FUN_0123d890(local_68,4);
    if ((uVar19 & 1) != 0) {
      puVar3[0x21] = puVar3[0x21] | 0x100000000;
    }
    iVar12 = FUN_0123db50(&local_70,local_68);
    if (iVar12 == 5) {
      puVar3[0x21] = puVar3[0x21] | 0x800000000;
    }
    uVar19 = FUN_0123d710(puVar3,6,0);
    if ((uVar19 & 1) == 0) {
      iVar12 = FUN_0123db50(&local_70,local_68);
      if (iVar12 == 0x2d) {
        *(undefined4 *)((long)puVar3 + 0xfc) = 2;
        if (*(char *)((long)param_5 + 0x4f) == '\0') {
          FUN_011ce200(puVar3,puVar1,iVar14,1);
        }
        else {
          bVar21 = *(byte *)(param_5 + 0x13);
          if (10 < (ulong)bVar21) goto LAB_011c81f4;
          if (((DAT_050de718 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_050de718), iVar14 != 0)) {
            FUN_011cdb74(&DAT_050de6f0,0);
            FUN_011cdb74(&DAT_050de6f4,3);
            FUN_011cdb74(&DAT_050de6f8,4);
            FUN_011cdb74(&DAT_050de6fc,5);
            FUN_011cdb74(&DAT_050de700,6);
            FUN_011cdb74(&DAT_050de704,7);
            FUN_011cdb74(&DAT_050de708,8);
            FUN_011cdb74(&DAT_050de70c,9);
            FUN_011cdb74(&DAT_050de710,10);
            FUN_011cdb74(&DAT_050de714,0xb);
            __cxa_guard_release(&DAT_050de718);
          }
          *(undefined4 *)(puVar3 + 0x1f) = *(undefined4 *)(&DAT_050de6f0 + (ulong)bVar21 * 4);
        }
        FUN_011ce780(puVar3,0);
      }
      else {
        *(undefined4 *)((long)puVar3 + 0xfc) = 0;
        *(undefined8 *)((long)puVar3 + 0xdc) = 0x3f80000000000000;
        *(undefined8 *)((long)puVar3 + 0xe4) = 0x3f80000000000000;
        uVar19 = FUN_0123d890(local_68,4);
        if (((uVar19 & 1) == 0) &&
           (iVar14 = FUN_0123db50(&local_70,local_68), (iVar14 - 2U & 0xfffffff9) != 0)) {
          iVar14 = FUN_0123db50(&local_70,local_68);
          if ((iVar14 == 0x2d) || (iVar14 = FUN_0123db50(&local_70,local_68), iVar14 == 0x2e))
          goto LAB_011c81f4;
          uVar32 = FUN_0163fb94(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x70));
        }
        else if (*(char *)((long)param_5 + 0x4d) == '\0') {
          uVar32 = FUN_01224d80(*(undefined8 *)PTR_DAT_04bb4778,puVar20);
        }
        else {
          uVar32 = param_5[4];
        }
        *(undefined4 *)((long)puVar3 + 0xe4) = uVar32;
      }
    }
    else {
      *(undefined4 *)((long)puVar3 + 0xfc) = 1;
      uVar27 = *(undefined8 *)PTR_DAT_04bb30a0;
      local_80 = (undefined *)FUN_00a8c31c(uVar27);
      if ((char)((ulong)local_80 >> 0x20) < '\x05') {
        lVar26 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
        local_90 = (undefined *)(lVar26 + -0x15180);
        local_80 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
      }
      uVar16 = (ulong)local_80 >> 0x10;
      uVar19 = (ulong)local_80 >> 0x30;
      uVar17 = (ulong)local_80 >> 0x18;
      local_80._0_6_ = CONCAT24(5,(undefined4)local_80);
      local_80 = (undefined *)(CONCAT26((short)uVar19,(undefined6)local_80) & 0xff00ffffffffffff);
      cVar11 = FUN_00a8ae20(uVar27,uVar16,uVar17,4);
      if (cVar11 == '\x02') {
        param_3 = 0.5;
        local_90 = PTR_DAT_04bb2018 + 0x10;
        fVar31 = (float)*(int *)(puVar3 + 0x16) * 0.5;
        uVar13 = 0;
        if (fVar31 != (float)(int)fVar31) {
          uVar13 = (uint)(fVar31 < 0.0);
        }
        local_88 = (int)fVar31 - uVar13;
        fVar31 = (float)*(int *)((long)puVar3 + 0xb4) * 0.5;
        param_2 = (float)(int)fVar31;
        uVar13 = 0;
        if (fVar31 != param_2) {
          uVar13 = (uint)(fVar31 < 0.0);
        }
        iStack_84 = (int)fVar31 - uVar13;
        FUN_009784a0(&local_90);
      }
      else {
        param_3 = 0.5;
        local_90 = PTR_DAT_04bb2018 + 0x10;
        fVar31 = (float)*(int *)(puVar3 + 0x16) * 0.5;
        uVar13 = 0;
        if (fVar31 != (float)(int)fVar31) {
          uVar13 = (uint)(fVar31 < 0.0);
        }
        local_88 = (int)fVar31 - uVar13;
        fVar31 = (float)*(int *)((long)puVar3 + 0xb4) * 0.5;
        param_2 = (float)(int)fVar31;
        uVar13 = 0;
        if (fVar31 != param_2) {
          uVar13 = (uint)(fVar31 < 0.0);
        }
        iStack_84 = (int)fVar31 - uVar13;
        FUN_00978230(&local_90,(undefined4 *)((long)puVar3 + 0xdc));
      }
      pcVar29 = (char *)puVar3[8];
      if (pcVar29 != "UnitIconHoleOn") {
        iVar14 = 0xe;
        if (*(int *)(puVar3 + 9) < 0xf) {
          iVar14 = *(int *)(puVar3 + 9) + -1;
        }
        memcpy(pcVar29,"UnitIconHoleOn",(long)iVar14);
        pcVar29[iVar14] = '\0';
      }
    }
LAB_011c81f4:
    iVar14 = FUN_0123db50(&local_70,local_68);
    sVar7 = *(short *)PTR_DAT_04bb6298;
    if (sVar7 == -1) {
      uVar13 = 0;
    }
    else {
      local_90 = (undefined *)CONCAT44(local_90._4_4_,3);
      puVar28 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar28 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar13 = *puVar28 >> 3 & 1;
    }
    lVar26 = **(long **)PTR_DAT_04bb27d0;
    bVar21 = *(byte *)(lVar26 + 0x473);
    if ((long)(char)bVar21 == 0xffffffffffffffff) {
LAB_011c829c:
      iVar14 = FUN_0123db50(&local_70,local_68);
      if ((iVar14 - 0x23U < 9) || (iVar14 = FUN_0123db50(&local_70,local_68), iVar14 - 0x12U < 6)) {
        if (((uVar13 == 0) || (uVar19 = FUN_0124f668(&local_78,puVar20), (uVar19 & 1) == 0)) &&
           (uVar19 = FUN_0124f7e0(&local_78,puVar20), (uVar19 & 1) == 0)) {
          iVar14 = FUN_0123db50(&local_70,local_68);
          if (iVar14 - 0x23U < 9) {
            if (local_70._6_1_ < '\0') goto LAB_011c8398;
          }
          else {
            iVar14 = FUN_0123db50(&local_70,local_68);
            if ((iVar14 - 0x12U < 6) && (((ulong)local_70 & 0x10000000000) != 0)) goto LAB_011c8398;
          }
        }
        else {
LAB_011c8398:
          puVar3[0x21] = puVar3[0x21] | 0x400;
          uVar13 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
          DAT_0514cb58 = DAT_0514cb5c;
          DAT_0514cb5c = DAT_0514cb60;
          uVar13 = uVar13 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar13 ^ DAT_0514cb64;
          DAT_0514cb60 = DAT_0514cb64;
          DAT_0514cb64 = uVar13;
          *(char *)((long)puVar3 + 0x117) = (char)((ulong)uVar13 * 100 >> 0x20) + 'd';
        }
      }
    }
    else {
      pbVar5 = (byte *)(lVar26 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x80;
      if (7 < bVar21) {
        pbVar5 = (byte *)(lVar26 + 0x48);
      }
      if (((*pbVar5 >> 3 & 1) == 0) || (*(byte *)(lVar26 + 0x472) == bVar21)) goto LAB_011c829c;
      if (iVar14 - 0x23U < 9) goto LAB_011c8398;
      iVar14 = FUN_0123db50(&local_70,local_68);
      if (((iVar14 - 0x23U < 9) || (iVar14 = FUN_0123db50(&local_70,local_68), iVar14 - 0x12U < 6))
         && (uVar19 = FUN_0124f668(&local_78,puVar20), (uVar19 & 1) != 0)) {
        puVar3[0x21] = puVar3[0x21] | 0x400;
        FUN_011c91b8(puVar3);
      }
    }
    iVar14 = FUN_0123db50(&local_70,local_68);
    if (iVar14 - 0x12U < 6) {
      puVar3[0x21] = puVar3[0x21] | 0x400000;
    }
    local_98 = *(undefined4 *)puVar3;
    uStack_94 = *(undefined4 *)((long)puVar3 + 4);
    iVar12 = FUN_01241ca0(&local_98);
    iVar14 = DAT_05233970;
    if (iVar12 - 6U < 4) {
      uVar19 = puVar3[0x21] | 0x10000;
LAB_011c84d0:
      puVar3[0x21] = uVar19;
    }
    else if (iVar12 - 1U < 4) {
      uVar19 = puVar3[0x21];
      uVar13 = *(uint *)(puVar3 + 0x16);
      puVar3[0x21] = uVar19 | 0x20000;
      if ((((((int)uVar13 < iVar14) || (DAT_05233980 < (int)uVar13)) ||
           (uVar6 = *(uint *)((long)puVar3 + 0xb4), (int)uVar6 < DAT_05233974)) ||
          ((DAT_05233984 < (int)uVar6 ||
           (uVar6 = (uVar6 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar6 >> 0xf != 0)))) ||
         ((*(uint *)(PTR_DAT_04bbbb80 + (ulong)(uVar6 >> 5) * 4 + 8) >> (ulong)(uVar13 >> 1 & 0x1f)
          & 1) == 0)) {
        uVar19 = uVar19 | 0x60000;
      }
      else {
        uVar19 = uVar19 & 0xfffffffffffbffff | 0x20000;
      }
      goto LAB_011c84d0;
    }
    iVar14 = FUN_0123db50(&local_70,local_68);
    if (iVar14 == 0x21) {
      iVar14 = FUN_0123db50(&local_70,local_68);
      if (((iVar14 == 0x21) || (iVar14 = FUN_0123db50(&local_70,local_68), iVar14 == 0x22)) &&
         ((iVar14 = FUN_0123db50(&local_70,local_68), iVar14 == 0x21 ||
          (iVar14 = FUN_0123db50(&local_70,local_68), iVar14 == 0x22)))) {
        param_2 = 11930465.0;
        uVar32 = (undefined4)(long)((float)(local_70._2_1_ >> 2 & 7) * 45.0 * 11930465.0);
      }
      else {
        uVar32 = 0;
      }
      *(undefined4 *)(puVar3 + 0x1a) = uVar32;
      if (*(char *)((long)param_5 + 0x4d) == '\0') {
        uVar32 = FUN_0124fa64(0,&local_78,puVar20);
        *(undefined4 *)(puVar3 + 0x17) = uVar32;
        *(float *)((long)puVar3 + 0xbc) = param_2;
        *(float *)(puVar3 + 0x18) = param_3;
      }
    }
    iVar14 = FUN_0123db50(&local_70,local_68);
    if (iVar14 == 0x22) {
      iVar14 = FUN_0123db50(&local_70,local_68);
      if (((iVar14 == 0x21) || (iVar14 = FUN_0123db50(&local_70,local_68), iVar14 == 0x22)) &&
         ((iVar14 = FUN_0123db50(&local_70,local_68), iVar14 == 0x21 ||
          (iVar14 = FUN_0123db50(&local_70,local_68), iVar14 == 0x22)))) {
        param_2 = 11930465.0;
        uVar32 = (undefined4)(long)((float)(local_70._2_1_ >> 2 & 7) * 45.0 * 11930465.0);
      }
      else {
        uVar32 = 0;
      }
      *(undefined4 *)(puVar3 + 0x1a) = uVar32;
      if (*(char *)((long)param_5 + 0x4d) == '\0') {
        uVar32 = FUN_0124fa64(0,&local_78,puVar20);
        *(undefined4 *)(puVar3 + 0x17) = uVar32;
        *(float *)((long)puVar3 + 0xbc) = param_2;
        *(float *)(puVar3 + 0x18) = param_3;
      }
    }
LAB_011c864c:
    if (*(int *)((long)puVar3 + 0xfc) == 0) {
      uVar19 = FUN_01238b20(puVar3 + 7,puVar3,*(undefined1 *)((long)param_5 + 0x4d),
                            (undefined4 *)((long)puVar3 + 0xdc),*(int *)(puVar3 + 0x20) == 3);
      if ((uVar19 & 1) == 0) goto LAB_011c7d3c;
    }
    else if (*(int *)((long)puVar3 + 0xfc) == 2) {
      FUN_012342a0(puVar3,(undefined4 *)((long)puVar3 + 0xdc));
      *(undefined4 *)(puVar3 + 0x1c) = 0x3f800000;
    }
    if (*(int *)(puVar3 + 0x20) == 0x1a) {
      puVar3[0x21] = puVar3[0x21] | 8;
    }
    FUN_011cc92c(puVar3);
    if (param_6 != (undefined8 *)0x0) {
      uVar32 = param_5[3];
      *(undefined4 *)(puVar3 + 0x17) = *(undefined4 *)((long)param_6 + 0xc);
      *(undefined4 *)((long)puVar3 + 0xbc) = *(undefined4 *)((long)param_6 + 0x1c);
      uVar33 = *(undefined4 *)((long)param_6 + 0x2c);
      *(undefined4 *)((long)puVar3 + 0xec) = uVar32;
      *(undefined8 *)((long)puVar3 + 0xc4) = 0;
      *(undefined4 *)((long)puVar3 + 0xcc) = 0;
      *(undefined4 *)(puVar3 + 0x18) = uVar33;
      uVar27 = *param_6;
      puVar3[2] = param_6[1];
      puVar3[1] = uVar27;
      uVar27 = param_6[2];
      puVar3[4] = param_6[3];
      puVar3[3] = uVar27;
      uVar27 = param_6[4];
      puVar3[6] = param_6[5];
      puVar3[5] = uVar27;
    }
    iVar14 = *piVar18;
    if (iVar14 <= (int)uVar15) {
      iVar14 = uVar15 + 1;
      *piVar18 = iVar14;
    }
    cVar11 = *(char *)((long)param_5 + 0x52);
    if ((*(int *)(puVar3 + 0x20) == 3) && (lVar26 = *(long *)puVar9, lVar26 != 0)) {
      if (((*(long *)(lVar26 + 0xb0) != 0) &&
          (((*(long *)(*(long *)(lVar26 + 0xb0) + 8) != 0 && (*(long *)(lVar26 + 0x488) != 0)) &&
           (*(long *)(*(long *)(lVar26 + 0x488) + 8) != 0)))) &&
         ((*(long *)(lVar26 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar26 + 0x2b0) + 8) != 0)))) {
        uVar15 = FUN_0277d6c4(puVar3);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          FUN_0124c030(&local_78,puVar3);
          iVar12 = FUN_0123db50(&local_70,local_68);
          if (iVar12 - 0xbU < 7) {
            FUN_0124c030(&local_78,puVar3);
            uVar19 = FUN_0124eb80(&local_78);
            uVar32 = 0x3eeeccc4;
            if ((uVar19 & 1) == 0) {
              uVar32 = 0x3f4ccccd;
            }
            *(undefined4 *)((long)puVar3 + 0xec) = uVar32;
          }
        }
      }
      if ((((*(int *)(puVar3 + 0x20) == 3) && (lVar26 = *(long *)puVar9, lVar26 != 0)) &&
          ((*(long *)(lVar26 + 0xb0) != 0 &&
           (((*(long *)(*(long *)(lVar26 + 0xb0) + 8) != 0 && (*(long *)(lVar26 + 0x488) != 0)) &&
            (*(long *)(*(long *)(lVar26 + 0x488) + 8) != 0)))))) &&
         ((*(long *)(lVar26 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar26 + 0x2b0) + 8) != 0)))) {
        uVar15 = FUN_0277d6c4(puVar3);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar26 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          FUN_0124c030(&local_78,puVar3);
          iVar12 = FUN_0123db50(&local_70,local_68);
          if (iVar12 - 0x12U < 6) {
            *(undefined4 *)((long)puVar3 + 0xec) = 0x3eeeccc4;
          }
        }
      }
    }
    if ((*(int *)((long)puVar3 + 0xfc) == 2) && ((*(byte *)((long)puVar3 + 0x10b) >> 4 & 1) == 0)) {
      FUN_011cf0c0(puVar3,puVar1,iVar14,1,cVar11 != '\0');
    }
    if ((*(char *)((long)param_5 + 0x51) != '\0') && (*(int *)((long)puVar3 + 0xfc) != 4)) {
      uVar19 = puVar3[0x21];
      iVar14 = *piVar18;
      puVar3[0x21] = uVar19 | 0x80000;
      if ((*(int *)((long)puVar3 + 0xfc) == 2) && (((uint)uVar19 >> 0x1c & 1) == 0)) {
        FUN_011cf0c0(puVar3,puVar1,iVar14,0,0);
      }
    }
  }
LAB_011c7d40:
  return uVar24 & 0xffffffff;
}

