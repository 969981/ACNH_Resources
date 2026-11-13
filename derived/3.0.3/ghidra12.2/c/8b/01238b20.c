
uint FUN_01238b20(long *param_1,ulong *param_2,uint param_3,float *param_4,uint param_5)

{
  undefined *puVar1;
  undefined1 *__src;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  ushort *puVar10;
  ulong uVar11;
  char *__src_00;
  ulong uVar12;
  ushort uVar13;
  long lVar14;
  uint *puVar15;
  int *piVar16;
  char cVar17;
  undefined *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  char *pcVar22;
  undefined *puVar23;
  long lVar24;
  undefined1 *__dest;
  uint uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined1 *local_88;
  undefined *local_80;
  undefined4 local_78;
  uint local_74;
  uint *local_70;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar26 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar14 = DAT_05150358;
  lVar24 = *(long *)puVar1;
  if (lVar24 == 0) {
LAB_01238ce0:
    uVar4 = FUN_0277d6c4(param_2);
    puVar28 = (undefined8 *)PTR_DAT_04bb30a0;
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar4) ||
       (puVar20 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8),
       puVar20 == (uint *)0x0)) {
      uVar4 = 0;
      goto LAB_01239c38;
    }
    uVar27 = *(undefined8 *)PTR_DAT_04bb30a0;
    local_90 = (undefined *)FUN_00a8c31c(uVar27);
    if ((char)((ulong)local_90 >> 0x20) < '\x05') {
      lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_80 = (undefined *)(lVar14 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    uVar11 = (ulong)local_90 >> 0x10;
    uVar8 = (ulong)local_90 >> 0x30;
    uVar12 = (ulong)local_90 >> 0x18;
    local_90._0_6_ = CONCAT24(5,(int)local_90);
    local_90 = (undefined *)(CONCAT26((short)uVar8,(undefined6)local_90) & 0xff00ffffffffffff);
    cVar2 = FUN_00a8ae20(uVar27,uVar11,uVar12,4);
    FUN_0124c030(&local_80,param_2);
    iVar5 = FUN_0123db50(&local_78,local_70);
    puVar23 = PTR_DAT_04bbbc78;
    puVar1 = PTR_DAT_04bbbc70;
    if (iVar5 - 0xbU < 7) {
      if ((local_70 != (uint *)0x0) && (uVar4 = *local_70, uVar4 != 0)) {
        cVar17 = *PTR_DAT_04bbbc70;
        do {
          if (cVar17 == '\0') {
            *(undefined8 *)puVar23 = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 8) = 0xffffffffffffffff;
            cVar17 = '\x01';
            *(undefined4 *)(puVar23 + 0x60) = 0xffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar23 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x58) = 0xffffffffffffffff;
            uVar4 = *local_70;
          }
          else {
            uVar25 = *(uint *)(puVar23 + 0x4c);
            if (-1 < (int)uVar25) {
              if ((byte *)((ulong)uVar25 + (long)local_70) == (byte *)0x0) break;
              bVar3 = *(byte *)((ulong)uVar25 + (long)local_70);
              goto LAB_012392c8;
            }
            if (uVar25 != 0xffffffff) break;
          }
          puVar15 = (uint *)(ulong)uVar4;
          bVar3 = 0;
          if ((puVar15 == (uint *)0x0) || (bVar3 = 0, local_70 == puVar15)) goto LAB_012392c8;
          lVar14 = 0xc;
          if (*(char *)((long)local_70 + (10 - (long)puVar15)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)local_70 + (lVar14 - (long)puVar15);
          if (lVar14 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)local_70 + (8 - (long)puVar15));
          *(undefined4 *)(puVar23 + 0x4c) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar16 = (int *)(lVar14 + 4);
          while (piVar16[-1] != -0xa58ccc9) {
            piVar16 = piVar16 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_012392c4;
          }
          bVar3 = 0;
          iVar5 = 0;
          if (*piVar16 != -1) {
            iVar5 = *piVar16;
          }
          *(int *)(puVar23 + 0x4c) = iVar5;
          uVar4 = *local_70;
          if (uVar4 == 0) goto LAB_012392c8;
        } while( true );
      }
LAB_012392c4:
      bVar3 = 0;
LAB_012392c8:
      if (((2 < bVar3) && (iVar5 = FUN_0123db50(&local_78), cVar2 == '\x02')) &&
         (iVar5 - 0x11U < 0xfffffffe)) {
        if (bVar3 == 4) {
          puVar10 = (ushort *)FUN_01246470(puVar20,0xb,0x2c6a189e,DAT_05151398);
          if (puVar10 != (ushort *)0x0) goto LAB_0123933c;
LAB_01239488:
          uVar13 = 0xfffe;
        }
        else {
          if (bVar3 != 3) goto LAB_01239344;
          puVar10 = (ushort *)FUN_01246470(puVar20,7,0x76e7fe08,DAT_05151390);
          if (puVar10 == (ushort *)0x0) goto LAB_01239488;
LAB_0123933c:
          uVar13 = *puVar10;
        }
        local_68 = (ulong)uVar13;
        FUN_0277d4ac(&local_68);
        local_90 = (undefined *)local_68;
        uVar4 = FUN_01238b20(param_1,&local_90,param_3 & 1,param_4,param_5 & 1);
        goto LAB_01239c38;
      }
LAB_01239344:
      puVar28 = (undefined8 *)PTR_DAT_04bb30a0;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = 0.0;
      lVar14 = DAT_05150358;
      uVar4 = FUN_0277d6c4(param_2);
      puVar23 = PTR_DAT_04bbbc78;
      puVar1 = PTR_DAT_04bbbc70;
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
          (puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8),
          puVar15 != (uint *)0x0)) && (*puVar15 != 0)) {
        cVar17 = *PTR_DAT_04bbbc70;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar23 = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar23 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar23 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x58) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar23 + 0x44);
            if (-1 < (int)uVar4) {
              if (((byte *)((ulong)uVar4 + (long)puVar15) != (byte *)0x0) &&
                 (bVar3 = *(byte *)((ulong)uVar4 + (long)puVar15), bVar3 < 0x10)) {
                *param_4 = (float)(int)(char)bVar3 * 0.0625 + 0.03125;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar19 = (uint *)(ulong)*puVar15;
          if ((*puVar15 == 0) || (puVar15 == puVar19)) break;
          lVar14 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar19)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar15 + (lVar14 - (long)puVar19);
          if (lVar14 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar19));
          *(undefined4 *)(puVar23 + 0x44) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar16 = (int *)(lVar14 + 4);
          while (piVar16[-1] != 0x64b8fff8) {
            piVar16 = piVar16 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_012394f4;
          }
          iVar5 = 0;
          if (*piVar16 != -1) {
            iVar5 = *piVar16;
          }
          *(int *)(puVar23 + 0x44) = iVar5;
          if (*puVar15 == 0) break;
        } while( true );
      }
    }
LAB_012394f4:
    puVar23 = PTR_DAT_04bbbc78;
    puVar1 = PTR_DAT_04bbbc70;
    if (*puVar20 != 0) {
      cVar17 = *PTR_DAT_04bbbc70;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar23 = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar23 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar23 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar23 + 0x58) = 0xffffffffffffffff;
        }
        else {
          uVar4 = *(uint *)(puVar23 + 0x54);
          if (-1 < (int)uVar4) {
            puVar18 = (undefined *)((ulong)uVar4 + (long)puVar20);
            goto LAB_012395d8;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)*puVar20;
        puVar18 = (undefined *)0x0;
        if ((*puVar20 == 0) || (puVar20 == puVar15)) goto LAB_012395d8;
        lVar14 = 0xc;
        if (*(char *)((long)puVar20 + (10 - (long)puVar15)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar20 + (lVar14 - (long)puVar15);
        if (lVar14 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar15));
        *(undefined4 *)(puVar23 + 0x54) = 0xfffffffe;
        puVar18 = (undefined *)0x0;
        if (uVar8 == 0) goto LAB_012395d8;
        piVar16 = (int *)(lVar14 + 4);
        while (piVar16[-1] != 0x39b5a93d) {
          piVar16 = piVar16 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            puVar18 = (undefined *)0x0;
            goto LAB_012395d8;
          }
        }
        iVar5 = 0;
        if (*piVar16 != -1) {
          iVar5 = *piVar16;
        }
        *(int *)(puVar23 + 0x54) = iVar5;
      } while (*puVar20 != 0);
    }
    puVar18 = (undefined *)0x0;
LAB_012395d8:
    puVar23 = (undefined *)param_1[1];
    puVar1 = PTR_DAT_04c47fb0;
    if (puVar18 != (undefined *)0x0) {
      puVar1 = puVar18;
    }
    if (puVar23 != puVar1) {
      lVar14 = 0;
      do {
        if (puVar1[lVar14] == '\0') goto LAB_0123963c;
        if (puVar1[lVar14 + 1] == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_0123963c;
        }
        if (puVar1[lVar14 + 2] == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_0123963c;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_0123963c:
      iVar5 = (int)lVar14;
      if ((int)param_1[2] <= (int)lVar14) {
        iVar5 = (int)param_1[2] + -1;
      }
      memcpy(puVar23,puVar1,(long)iVar5);
      puVar23[iVar5] = 0;
    }
    FUN_0124c030(&local_80,param_2);
    iVar5 = FUN_0123db50(&local_78,local_70);
    puVar23 = PTR_DAT_04bbbc78;
    puVar1 = PTR_DAT_04bbbc70;
    if (iVar5 - 0x12U < 6) {
      local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
      if (*puVar20 != 0) {
        cVar17 = *PTR_DAT_04bbbc70;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar23 = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar23 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar23 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x58) = 0xffffffffffffffff;
            uVar4 = *puVar20;
          }
          else {
            uVar4 = *(uint *)(puVar23 + 0x58);
            if (-1 < (int)uVar4) {
              if (((byte *)((ulong)uVar4 + (long)puVar20) != (byte *)0x0) &&
                 ((*(byte *)((ulong)uVar4 + (long)puVar20) & 1) != 0)) goto LAB_012397e4;
              break;
            }
            if (uVar4 != 0xffffffff) break;
            uVar4 = *puVar20;
          }
          if ((uVar4 == 0) || (puVar15 = (uint *)(ulong)uVar4, puVar20 == puVar15)) break;
          lVar14 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar15)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar20 + (lVar14 - (long)puVar15);
          if (lVar14 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar15));
          *(undefined4 *)(puVar23 + 0x58) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar16 = (int *)(lVar14 + 4);
          while (piVar16[-1] != 0x623dc307) {
            piVar16 = piVar16 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_012397b0;
          }
          iVar5 = 0;
          if (*piVar16 != -1) {
            iVar5 = *piVar16;
          }
          *(int *)(puVar23 + 0x58) = iVar5;
          if (*puVar20 == 0) break;
        } while( true );
      }
LAB_012397b0:
      iVar7 = FUN_0123db50(&local_78,local_70);
      iVar5 = 1;
      if (iVar7 - 0x12U < 6) {
        iVar5 = (local_74 >> 5 & 7) + 1;
      }
      FUN_038d13f0(param_1,&DAT_0406c946,iVar5);
    }
LAB_012397e4:
    puVar23 = PTR_DAT_04bbbc78;
    puVar1 = PTR_DAT_04bbbc70;
    if (cVar2 == '\x02') {
      local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
      if (*puVar20 != 0) {
        cVar2 = *PTR_DAT_04bbbc70;
        do {
          if (cVar2 == '\0') {
            cVar2 = '\x01';
            *(undefined8 *)puVar23 = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar23 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar23 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x58) = 0xffffffffffffffff;
            uVar4 = *puVar20;
          }
          else {
            uVar4 = *(uint *)(puVar23 + 0x5c);
            if (-1 < (int)uVar4) {
              if ((((byte *)((ulong)uVar4 + (long)puVar20) != (byte *)0x0) &&
                  ((*(byte *)((ulong)uVar4 + (long)puVar20) >> 1 & 1) != 0)) &&
                 (iVar5 = FUN_0123db50(&local_78,local_70), iVar5 != 0x2d)) {
                iVar5 = FUN_0277d6c4(param_2);
                if ((iVar5 == 0xed14) || (iVar5 = FUN_0277d6c4(param_2), iVar5 == 0xed15)) {
                  pcVar22 = "PltWeedLight1A";
LAB_0123995c:
                  FUN_038d1270(param_1,pcVar22);
                }
                else {
                  iVar5 = FUN_0277d6c4(param_2);
                  if ((iVar5 == 0xed11) || (iVar5 = FUN_0277d6c4(param_2), iVar5 == 0xed10)) {
                    pcVar22 = "PltWeedLight2A";
                    goto LAB_0123995c;
                  }
                }
                local_90 = PTR_DAT_04bb2020 + 0x10;
                local_88 = &DAT_040cf099;
                FUN_00958800(param_1,&local_90,0xffffffff);
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
            uVar4 = *puVar20;
          }
          if ((uVar4 == 0) || (puVar15 = (uint *)(ulong)uVar4, puVar20 == puVar15)) break;
          lVar14 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar15)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar20 + (lVar14 - (long)puVar15);
          if (lVar14 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar15));
          *(undefined4 *)(puVar23 + 0x5c) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar16 = (int *)(lVar14 + 4);
          while (piVar16[-1] != -0x5b4d2993) {
            piVar16 = piVar16 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_0123998c;
          }
          iVar5 = 0;
          if (*piVar16 != -1) {
            iVar5 = *piVar16;
          }
          *(int *)(puVar23 + 0x5c) = iVar5;
          if (*puVar20 == 0) break;
        } while( true );
      }
    }
LAB_0123998c:
    uVar27 = *puVar28;
    local_68 = FUN_00a8c31c(uVar27);
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_90 = (undefined *)(lVar14 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
    }
    uVar11 = local_68 >> 0x10;
    uVar8 = local_68 >> 0x30;
    uVar12 = local_68 >> 0x18;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68 = CONCAT26((short)uVar8,(undefined6)local_68) & 0xff00ffffffffffff;
    cVar2 = FUN_00a8ae20(uVar27,uVar11,uVar12,8);
    puVar23 = PTR_DAT_04bbbc78;
    puVar1 = PTR_DAT_04bbbc70;
    if ((byte)(cVar2 - 1U) < 3) {
      local_90 = (undefined *)CONCAT44(local_90._4_4_,2);
      if (*puVar20 != 0) {
        cVar2 = *PTR_DAT_04bbbc70;
        do {
          if (cVar2 == '\0') {
            cVar2 = '\x01';
            *(undefined8 *)puVar23 = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar23 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar23 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar23 + 0x58) = 0xffffffffffffffff;
            uVar4 = *puVar20;
          }
          else {
            uVar4 = *(uint *)(puVar23 + 0x5c);
            if (-1 < (int)uVar4) {
              if (((byte *)((ulong)uVar4 + (long)puVar20) != (byte *)0x0) &&
                 ((*(byte *)((ulong)uVar4 + (long)puVar20) >> 2 & 1) != 0)) {
                lVar24 = param_1[1];
                (**(code **)(*param_1 + 0x18))(param_1);
                lVar14 = 0;
                goto LAB_01239b38;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
            uVar4 = *puVar20;
          }
          if ((uVar4 == 0) || (puVar15 = (uint *)(ulong)uVar4, puVar20 == puVar15)) break;
          lVar14 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar15)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar20 + (lVar14 - (long)puVar15);
          if (lVar14 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar15));
          *(undefined4 *)(puVar23 + 0x5c) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar16 = (int *)(lVar14 + 4);
          while (piVar16[-1] != -0x5b4d2993) {
            piVar16 = piVar16 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_01239c34;
          }
          iVar5 = 0;
          if (*piVar16 != -1) {
            iVar5 = *piVar16;
          }
          *(int *)(puVar23 + 0x5c) = iVar5;
          if (*puVar20 == 0) break;
        } while( true );
      }
    }
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((*(uint *)(lVar26 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01238ce0;
    local_70 = (uint *)0x0;
    local_78 = (undefined4)*param_2;
    local_74 = *(undefined4 *)((long)param_2 + 4);
    local_80 = PTR_DAT_04bc0510 + 0x10;
    uVar4 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar1 != 0) {
      lVar14 = *(long *)(lVar24 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar4 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8);
          if (lVar14 != 0) {
            local_70 = (uint *)lVar14;
          }
        }
      }
    }
    if ((param_3 & 1) == 0) {
      uVar8 = FUN_01ae59b0(&local_80);
      bVar3 = local_78._2_1_ >> 2 & 1;
      if ((uVar8 & 1) == 0) {
        bVar3 = local_78._2_1_ & 4;
      }
      if (bVar3 == 0) goto LAB_01238ea8;
      pcVar22 = (char *)param_1[1];
      (**(code **)(DAT_05150360 + 0x18))(&DAT_05150360);
      __src_00 = DAT_05150368;
      if (pcVar22 == DAT_05150368) goto LAB_01239c34;
      (**(code **)(DAT_05150360 + 0x18))(&DAT_05150360);
      lVar14 = 0;
      do {
        if (DAT_05150368[lVar14] == '\0') goto LAB_0123926c;
        if (DAT_05150368[lVar14 + 1] == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_0123926c;
        }
        if (DAT_05150368[lVar14 + 2] == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_0123926c;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_0123926c:
      iVar5 = (int)lVar14;
      if ((int)param_1[2] <= (int)lVar14) {
        iVar5 = (int)param_1[2] + -1;
      }
LAB_01239284:
      memcpy(pcVar22,__src_00,(long)iVar5);
      pcVar22[iVar5] = '\0';
    }
    else {
LAB_01238ea8:
      local_90 = (undefined *)CONCAT44(local_90._4_4_,0x62);
      iVar5 = FUN_01af93e8(&local_80);
      local_68 = CONCAT44(local_68._4_4_,iVar5);
      if ((iVar5 == (int)local_90) && ((param_5 & 1) != 0)) {
        pcVar22 = (char *)param_1[1];
        if (pcVar22 != "UnitIconPltFlowerSeeding") {
          __src_00 = "UnitIconPltFlowerSeeding";
          iVar5 = 0x18;
          if ((int)param_1[2] < 0x19) {
            iVar5 = (int)param_1[2] + -1;
          }
          goto LAB_01239284;
        }
      }
      else {
        FUN_01af9d70(&local_90,&local_80);
        __dest = (undefined1 *)param_1[1];
        (**(code **)((long)local_90 + 0x18))(&local_90);
        __src = local_88;
        if (__dest != local_88) {
          (**(code **)((long)local_90 + 0x18))(&local_90);
          lVar14 = 0;
          do {
            if (local_88[lVar14] == '\0') goto LAB_01238f90;
            if (local_88[lVar14 + 1] == '\0') {
              lVar14 = lVar14 + 1;
              goto LAB_01238f90;
            }
            if (local_88[lVar14 + 2] == '\0') {
              lVar14 = lVar14 + 2;
              goto LAB_01238f90;
            }
            lVar14 = lVar14 + 3;
          } while (lVar14 != 0x80001);
          lVar14 = 0;
LAB_01238f90:
          iVar5 = (int)lVar14;
          if ((int)param_1[2] <= (int)lVar14) {
            iVar5 = (int)param_1[2] + -1;
          }
          memcpy(__dest,__src,(long)iVar5);
          __dest[iVar5] = 0;
        }
        if (param_4 != (float *)0x0) {
          local_68 = *param_2;
          uVar8 = FUN_01239cf0(&local_68,param_2,0,1);
          if ((uVar8 & 1) == 0) {
LAB_0123903c:
            local_98 = (undefined4)*param_2;
            uStack_94 = *(undefined4 *)((long)param_2 + 4);
            lVar14 = *(long *)puVar1;
            uVar4 = FUN_0277d6c4(&local_98);
            puVar23 = PTR_DAT_04bbbc78;
            if (*(long *)puVar1 != 0) {
              lVar14 = *(long *)(lVar14 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if (((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
                 ((uVar4 = *(uint *)(DAT_05150358 + 0x1c0), 0 < (int)uVar4 ||
                  (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
                    (puVar20 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8),
                    puVar20 != (uint *)0x0)) && (uVar4 = *puVar20, uVar4 != 0)))))) {
                uVar25 = 0;
                lVar14 = DAT_05150358;
                do {
                  if ((int)*(uint *)(lVar14 + 0x1c0) < 1) {
                    if (((*(long *)(lVar14 + 0xb0) != 0) &&
                        (puVar20 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar20 != (uint *)0x0)
                        ) && (((*(uint *)(lVar14 + 200) <= uVar25 ||
                               (*(char *)(*(long *)(lVar14 + 0xd0) + (long)(int)uVar25) != '\0')) &&
                              (((uVar25 < *puVar20 && (puVar20[1] != 0)) &&
                               ((ushort)puVar20[2] != 0)))))) {
                      iVar5 = 0xc;
                      if (*(char *)((long)puVar20 + 10) != '\0') {
                        iVar5 = 0x1c;
                      }
                      puVar20 = (uint *)((ulong)(puVar20[1] * uVar25 + (uint)(ushort)puVar20[2] * 8
                                                + iVar5) + (long)puVar20);
                      goto joined_r0x01239228;
                    }
                  }
                  else if (uVar25 < *(uint *)(lVar14 + 0x1c0)) {
                    uVar21 = uVar25;
                    if (*(uint *)(lVar14 + 0x1b0) <= uVar25) {
                      uVar21 = 0;
                    }
                    puVar20 = *(uint **)(*(long *)(lVar14 + 0x1b8) + (ulong)uVar21 * 8);
joined_r0x01239228:
                    if (puVar20 != (uint *)0x0) {
                      if (*puVar20 != 0) {
                        cVar2 = *PTR_DAT_04bbbc70;
                        do {
                          puVar1 = PTR_DAT_04bbbc70;
                          if (cVar2 == '\0') {
                            cVar2 = '\x01';
                            *(undefined8 *)puVar23 = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 8) = 0xffffffffffffffff;
                            *(undefined4 *)(puVar23 + 0x60) = 0xffffffff;
                            *puVar1 = 1;
                            *(undefined8 *)(puVar23 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 0x18) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 0x20) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 0x28) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 0x30) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 0x38) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 0x40) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 0x48) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 0x50) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar23 + 0x58) = 0xffffffffffffffff;
                          }
                          else {
                            uVar21 = *(uint *)(puVar23 + 0x34);
                            if (-1 < (int)uVar21) {
                              if ((ushort *)((ulong)uVar21 + (long)puVar20) != (ushort *)0x0) {
                                uVar21 = (uint)*(ushort *)((ulong)uVar21 + (long)puVar20);
                                goto LAB_01239244;
                              }
                              break;
                            }
                            if (uVar21 != 0xffffffff) break;
                          }
                          puVar15 = (uint *)(ulong)*puVar20;
                          uVar21 = 0xfffe;
                          if ((*puVar20 == 0) || (puVar20 == puVar15)) goto LAB_01239244;
                          lVar14 = 0xc;
                          if (*(char *)((long)puVar20 + (10 - (long)puVar15)) != '\0') {
                            lVar14 = 0x1c;
                          }
                          lVar14 = (long)puVar20 + (lVar14 - (long)puVar15);
                          if (lVar14 == 0) goto LAB_01239244;
                          uVar8 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar15));
                          *(undefined4 *)(puVar23 + 0x34) = 0xfffffffe;
                          if (uVar8 == 0) goto LAB_01239244;
                          piVar16 = (int *)(lVar14 + 4);
                          while (piVar16[-1] != -0x485b96aa) {
                            piVar16 = piVar16 + 2;
                            uVar8 = uVar8 - 1;
                            if (uVar8 == 0) goto LAB_01239240;
                          }
                          iVar5 = 0;
                          if (*piVar16 != -1) {
                            iVar5 = *piVar16;
                          }
                          *(int *)(puVar23 + 0x34) = iVar5;
                          if (*puVar20 == 0) break;
                        } while( true );
                      }
LAB_01239240:
                      uVar21 = 0xfffe;
LAB_01239244:
                      uVar6 = FUN_0277d6c4(&local_98);
                      if (uVar6 == uVar21) {
                        puVar10 = (ushort *)FUN_01246470(puVar20,0x10,0x54706054,DAT_05151388);
                        if (puVar10 == (ushort *)0x0) {
                          uVar13 = 0;
                        }
                        else {
                          uVar13 = *puVar10;
                        }
                        local_90 = (undefined *)(ulong)uVar13;
                        FUN_0277d4ac(&local_90);
                        *param_4 = 0.0;
                        lVar14 = DAT_05150358;
                        local_68 = (ulong)local_90;
                        uVar4 = FUN_0277d6c4(&local_68);
                        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                        if (((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
                            (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8),
                            lVar14 != 0)) &&
                           ((pbVar9 = (byte *)FUN_01246470(lVar14,0x11,0x64b8fff8,DAT_05151380),
                            pbVar9 != (byte *)0x0 && (bVar3 = *pbVar9, bVar3 < 0x10))))
                        goto LAB_01239c1c;
                        break;
                      }
                      lVar14 = DAT_05150358;
                    }
                  }
                  uVar25 = uVar25 + 1;
                } while (uVar25 != uVar4);
              }
            }
            bVar3 = FUN_01af9f50(&local_80);
          }
          else {
            *param_4 = 0.0;
            lVar14 = DAT_05150358;
            uVar4 = FUN_0277d6c4(&local_68);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((((*(uint *)(lVar14 + 0x1d8) <= uVar4) ||
                 (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8), lVar14 == 0)
                 ) || (pbVar9 = (byte *)FUN_01246470(lVar14,0x11,0x64b8fff8,DAT_05151380),
                      pbVar9 == (byte *)0x0)) || (bVar3 = *pbVar9, 0xf < bVar3)) goto LAB_0123903c;
          }
LAB_01239c1c:
          *param_4 = (float)(int)(char)bVar3 * 0.0625 + 0.03125;
        }
      }
    }
  }
LAB_01239c34:
  uVar4 = 1;
LAB_01239c38:
  return uVar4 & 1;
  while( true ) {
    lVar26 = param_1[1] + lVar14;
    if (*(char *)(lVar26 + 1) == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_01239c70;
    }
    if (*(char *)(lVar26 + 2) == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_01239c70;
    }
    lVar14 = lVar14 + 3;
    if (lVar14 == 0x80001) break;
LAB_01239b38:
    if (*(char *)(param_1[1] + lVar14) == '\0') goto LAB_01239c70;
  }
  lVar14 = 0;
LAB_01239c70:
  uVar4 = (uint)lVar14 & ((int)(uint)lVar14 >> 0x1f ^ 0xffffffffU);
  uVar25 = 6;
  if ((int)((int)param_1[2] - uVar4) < 7) {
    uVar25 = (int)param_1[2] + ~uVar4;
  }
  if (0 < (int)uVar25) {
    memcpy((void *)(lVar24 + (ulong)uVar4),&DAT_040bae5e,(ulong)uVar25);
    *(undefined1 *)(lVar24 + (ulong)uVar25 + (ulong)uVar4) = 0;
  }
  goto LAB_01239c34;
}

