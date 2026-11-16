
/* WARNING: Type propagation algorithm not settling */

void FUN_02796b20(long param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  uint *puVar16;
  char *pcVar17;
  undefined2 uVar18;
  long lVar19;
  undefined1 *puVar20;
  char *__src;
  uint uVar21;
  undefined1 *puVar22;
  char cVar23;
  int *piVar24;
  char *pcVar25;
  short sVar26;
  undefined *puVar27;
  undefined2 *puVar28;
  undefined8 local_278;
  char *local_270;
  int local_268;
  char local_264 [63];
  undefined1 local_225;
  undefined8 local_220;
  char *local_218;
  undefined4 local_210;
  char local_20c [8];
  undefined4 local_204;
  undefined1 local_200;
  undefined1 local_18d;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  int iStack_104;
  long *local_100;
  long alStack_f8 [8];
  undefined8 local_b8;
  long *local_b0;
  long alStack_a8 [9];
  
  puVar10 = PTR_DAT_04bb6428;
  puVar9 = PTR_DAT_04bb6420;
  if (*(short *)(param_1 + 0xe44) == -1) {
    lVar19 = 0;
LAB_02796bc8:
    uVar21 = *param_3;
    if (uVar21 != 0) {
      cVar23 = *PTR_DAT_04bb6420;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          uVar21 = *param_3;
        }
        else {
          uVar5 = *(uint *)(puVar10 + 0x20);
          if (-1 < (int)uVar5) {
            if ((undefined2 *)((ulong)uVar5 + (long)param_3) != (undefined2 *)0x0) {
              uVar18 = *(undefined2 *)((ulong)uVar5 + (long)param_3);
              goto LAB_02796cb0;
            }
            break;
          }
          if (uVar5 != 0xffffffff) break;
        }
        puVar16 = (uint *)(ulong)uVar21;
        uVar18 = 0;
        if ((puVar16 == (uint *)0x0) || (uVar18 = 0, param_3 == puVar16)) goto LAB_02796cb0;
        lVar4 = 0xc;
        if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)param_3 + (lVar4 - (long)puVar16);
        uVar18 = 0;
        if (lVar4 == 0) goto LAB_02796cb0;
        uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
        *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar24 = (int *)(lVar4 + 4);
        while (piVar24[-1] != 0x54706054) {
          piVar24 = piVar24 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02796cac;
        }
        iVar12 = 0;
        if (*piVar24 != -1) {
          iVar12 = *piVar24;
        }
        *(int *)(puVar10 + 0x20) = iVar12;
        uVar21 = *param_3;
        if (uVar21 == 0) break;
      } while( true );
    }
LAB_02796cac:
    uVar18 = 0;
LAB_02796cb0:
    *(undefined2 *)(param_1 + 0xe44 + lVar19 * 2) = uVar18;
    puVar20 = (undefined1 *)(param_1 + 0x400);
    uVar21 = *param_3;
    if (uVar21 != 0) {
      cVar23 = *puVar9;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          uVar21 = *param_3;
        }
        else {
          uVar5 = *(uint *)(puVar10 + 0x20);
          if (-1 < (int)uVar5) {
            if (((ushort *)((ulong)uVar5 + (long)param_3) != (ushort *)0x0) &&
               (uVar6 = *(ushort *)((ulong)uVar5 + (long)param_3), uVar6 < 0x200)) {
              puVar20 = puVar20 + uVar6;
            }
            break;
          }
          if (uVar5 != 0xffffffff) break;
        }
        if (((ulong)uVar21 == 0) || (lVar19 = (long)param_3 - (ulong)uVar21, lVar19 == 0)) break;
        lVar4 = 0xc;
        if (*(char *)(lVar19 + 10) != '\0') {
          lVar4 = 0x1c;
        }
        if (lVar4 + lVar19 == 0) break;
        uVar15 = (ulong)*(ushort *)(lVar19 + 8);
        *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar24 = (int *)(lVar4 + lVar19 + 4);
        while (piVar24[-1] != 0x54706054) {
          piVar24 = piVar24 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02796d98;
        }
        iVar12 = 0;
        if (*piVar24 != -1) {
          iVar12 = *piVar24;
        }
        *(int *)(puVar10 + 0x20) = iVar12;
        uVar21 = *param_3;
        if (uVar21 == 0) break;
      } while( true );
    }
LAB_02796d98:
    *puVar20 = 1;
  }
  else {
    if (*(short *)(param_1 + 0xe46) == -1) {
      lVar19 = 1;
      goto LAB_02796bc8;
    }
    if (*(short *)(param_1 + 0xe48) == -1) {
      lVar19 = 2;
      goto LAB_02796bc8;
    }
    if (*(short *)(param_1 + 0xe4a) == -1) {
      lVar19 = 3;
      goto LAB_02796bc8;
    }
    if (*(short *)(param_1 + 0xe4c) == -1) {
      lVar19 = 4;
      goto LAB_02796bc8;
    }
  }
  puVar27 = PTR_DAT_04bb2020;
  if (0 < *(int *)(param_1 + 0xe40)) {
    uVar21 = *param_3;
    puVar20 = (undefined1 *)(param_1 + 0xc40);
    puVar22 = (undefined1 *)(param_1 + 0x54a8);
    if (uVar21 != 0) {
      cVar23 = *puVar9;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          uVar21 = *param_3;
        }
        else {
          uVar5 = *(uint *)(puVar10 + 0x20);
          if (-1 < (int)uVar5) {
            if (((ushort *)((ulong)uVar5 + (long)param_3) != (ushort *)0x0) &&
               (uVar6 = *(ushort *)((ulong)uVar5 + (long)param_3), uVar6 < 0x200)) {
              puVar20 = puVar20 + uVar6;
            }
            break;
          }
          if (uVar5 != 0xffffffff) break;
        }
        if (((ulong)uVar21 == 0) || (lVar19 = (long)param_3 - (ulong)uVar21, lVar19 == 0)) break;
        lVar4 = 0xc;
        if (*(char *)(lVar19 + 10) != '\0') {
          lVar4 = 0x1c;
        }
        if (lVar4 + lVar19 == 0) break;
        uVar15 = (ulong)*(ushort *)(lVar19 + 8);
        *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar24 = (int *)(lVar4 + lVar19 + 4);
        while (piVar24[-1] != 0x54706054) {
          piVar24 = piVar24 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02796ea8;
        }
        iVar12 = 0;
        if (*piVar24 != -1) {
          iVar12 = *piVar24;
        }
        *(int *)(puVar10 + 0x20) = iVar12;
        uVar21 = *param_3;
        if (uVar21 == 0) break;
      } while( true );
    }
LAB_02796ea8:
    *puVar20 = 1;
    *(int *)(param_1 + 0xe40) = *(int *)(param_1 + 0xe40) + -1;
    if (0 < *(int *)(param_1 + 0x56a8)) {
      uVar21 = *param_3;
      if (uVar21 != 0) {
        cVar23 = *puVar9;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *(undefined8 *)puVar10 = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
            *puVar9 = 1;
            *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
            uVar21 = *param_3;
          }
          else {
            uVar5 = *(uint *)(puVar10 + 0x20);
            if (-1 < (int)uVar5) {
              if (((ushort *)((ulong)uVar5 + (long)param_3) != (ushort *)0x0) &&
                 (uVar6 = *(ushort *)((ulong)uVar5 + (long)param_3), uVar6 < 0x200)) {
                puVar22 = puVar22 + uVar6;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          if (((ulong)uVar21 == 0) || (lVar19 = (long)param_3 - (ulong)uVar21, lVar19 == 0)) break;
          lVar4 = 0xc;
          if (*(char *)(lVar19 + 10) != '\0') {
            lVar4 = 0x1c;
          }
          if (lVar4 + lVar19 == 0) break;
          uVar15 = (ulong)*(ushort *)(lVar19 + 8);
          *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar24 = (int *)(lVar4 + lVar19 + 4);
          while (piVar24[-1] != 0x54706054) {
            piVar24 = piVar24 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02796f98;
          }
          iVar12 = 0;
          if (*piVar24 != -1) {
            iVar12 = *piVar24;
          }
          *(int *)(puVar10 + 0x20) = iVar12;
          uVar21 = *param_3;
          if (uVar21 == 0) break;
        } while( true );
      }
LAB_02796f98:
      *puVar22 = 1;
      *(int *)(param_1 + 0x56a8) = *(int *)(param_1 + 0x56a8) + -1;
      local_218 = "EarthDayFirstQuestSystem";
      local_220 = puVar27 + 0x10;
      FUN_0274bfe8(param_2,&local_220,0);
      local_218 = "EarthDayFirstQuestTalk";
      local_220 = puVar27 + 0x10;
      FUN_0274bfe8(param_2,&local_220,0);
    }
    puVar1 = puVar27 + 0x10;
    local_218 = "DailyQuestFivePointDay";
    local_220 = puVar1;
    iVar12 = FUN_0274bce0(param_2,&local_220);
    if (iVar12 != 0) {
      local_218 = "DailyQuestFivePointQuest";
      local_220 = puVar1;
      iVar12 = FUN_0274bce0(param_2,&local_220);
      local_270 = "DailyQuestFivePointQuest";
      local_278 = puVar1;
      iVar13 = FUN_0274f6e0(&local_278);
      puVar27 = PTR_DAT_04bb2020;
      if (iVar12 == iVar13) {
        uVar21 = *param_3;
        local_220 = PTR_DAT_04bb2020 + 0x10;
        local_218 = "DailyQuestFivePointQuest";
        if (uVar21 != 0) {
          cVar23 = *puVar9;
          do {
            if (cVar23 == '\0') {
              cVar23 = '\x01';
              *(undefined8 *)puVar10 = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
              *puVar9 = 1;
              *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
              uVar21 = *param_3;
            }
            else {
              uVar5 = *(uint *)(puVar10 + 0x20);
              if (-1 < (int)uVar5) {
                if ((undefined2 *)((ulong)uVar5 + (long)param_3) != (undefined2 *)0x0) {
                  uVar18 = *(undefined2 *)((ulong)uVar5 + (long)param_3);
                  goto LAB_02797154;
                }
                break;
              }
              if (uVar5 != 0xffffffff) break;
            }
            puVar16 = (uint *)(ulong)uVar21;
            uVar18 = 0;
            if ((puVar16 == (uint *)0x0) || (uVar18 = 0, param_3 == puVar16)) goto LAB_02797154;
            lVar19 = 0xc;
            if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)param_3 + (lVar19 - (long)puVar16);
            if (lVar19 == 0) break;
            uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
            *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
            if (uVar15 == 0) break;
            piVar24 = (int *)(lVar19 + 4);
            while (piVar24[-1] != 0x54706054) {
              piVar24 = piVar24 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_02797150;
            }
            iVar12 = 0;
            if (*piVar24 != -1) {
              iVar12 = *piVar24;
            }
            *(int *)(puVar10 + 0x20) = iVar12;
            uVar21 = *param_3;
            if (uVar21 == 0) break;
          } while( true );
        }
LAB_02797150:
        uVar18 = 0;
LAB_02797154:
        FUN_0274bfe8(param_2,&local_220,uVar18);
      }
    }
    uVar21 = *param_3;
    if (uVar21 != 0) {
      cVar23 = *puVar9;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          uVar21 = *param_3;
        }
        else {
          uVar5 = *(uint *)(puVar10 + 0x3c);
          if (-1 < (int)uVar5) {
            lVar19 = (ulong)uVar5 + (long)param_3;
            goto LAB_0279724c;
          }
          if (uVar5 != 0xffffffff) goto LAB_02797238;
        }
        puVar16 = (uint *)(ulong)uVar21;
        lVar19 = 0;
        if ((puVar16 == (uint *)0x0) || (lVar19 = 0, param_3 == puVar16)) goto LAB_0279724c;
        lVar19 = 0xc;
        if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
          lVar19 = 0x1c;
        }
        lVar4 = (long)param_3 + (lVar19 - (long)puVar16);
        lVar19 = 0;
        if (lVar4 == 0) goto LAB_0279724c;
        uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
        *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
        if (uVar15 == 0) goto LAB_02797238;
        piVar24 = (int *)(lVar4 + 4);
        while (piVar24[-1] != 0x45f320f2) {
          piVar24 = piVar24 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02797238;
        }
        iVar12 = 0;
        if (*piVar24 != -1) {
          iVar12 = *piVar24;
        }
        *(int *)(puVar10 + 0x3c) = iVar12;
        uVar21 = *param_3;
        if (uVar21 == 0) goto LAB_02797238;
      } while( true );
    }
    lVar19 = 0;
    goto LAB_0279724c;
  }
  goto LAB_02797448;
LAB_02797b68:
  pcVar25 = (char *)0x0;
  goto LAB_02797b7c;
LAB_02797238:
  lVar19 = 0;
LAB_0279724c:
  local_220 = puVar27 + 0x10;
  local_218 = (char *)*(long *)PTR_PTR_04bb6418;
  if (lVar19 != 0) {
    local_218 = (char *)lVar19;
  }
  uVar15 = FUN_0279f560(param_1,param_2,&local_220);
  if ((uVar15 & 1) == 0) {
    uVar21 = *param_3;
    if (uVar21 != 0) {
      cVar23 = *puVar9;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          uVar21 = *param_3;
        }
        else {
          uVar5 = *(uint *)(puVar10 + 0x3c);
          if (-1 < (int)uVar5) {
            lVar19 = (ulong)uVar5 + (long)param_3;
            goto LAB_02797348;
          }
          if (uVar5 != 0xffffffff) break;
        }
        puVar16 = (uint *)(ulong)uVar21;
        lVar19 = 0;
        if ((puVar16 == (uint *)0x0) || (lVar19 = 0, param_3 == puVar16)) goto LAB_02797348;
        lVar19 = 0xc;
        if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
          lVar19 = 0x1c;
        }
        lVar4 = (long)param_3 + (lVar19 - (long)puVar16);
        lVar19 = 0;
        if (lVar4 == 0) goto LAB_02797348;
        uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
        *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar24 = (int *)(lVar4 + 4);
        while (piVar24[-1] != 0x45f320f2) {
          piVar24 = piVar24 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02797344;
        }
        iVar12 = 0;
        if (*piVar24 != -1) {
          iVar12 = *piVar24;
        }
        *(int *)(puVar10 + 0x3c) = iVar12;
        uVar21 = *param_3;
        if (uVar21 == 0) break;
      } while( true );
    }
LAB_02797344:
    lVar19 = 0;
LAB_02797348:
    lVar4 = *(long *)PTR_PTR_04bb6418;
    if (lVar19 != 0) {
      lVar4 = lVar19;
    }
    lVar19 = *(long *)PTR_DAT_04bb2208;
    uVar14 = FUN_006bd550(lVar4,0);
    local_220 = (undefined *)CONCAT44(local_220._4_4_,uVar14);
    puVar16 = (uint *)FUN_00ad5fc0(lVar19 + 0x1960,&local_220);
    if ((puVar16 != (uint *)0x0) && (uVar21 = *puVar16, uVar21 != 0)) {
      cVar23 = *puVar9;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          uVar21 = *puVar16;
        }
        else if (*(int *)(puVar10 + 0x20) != -1) break;
        puVar8 = (uint *)(ulong)uVar21;
        if ((puVar8 == (uint *)0x0) || (puVar16 == puVar8)) break;
        lVar19 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar8)) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar16 + (lVar19 - (long)puVar8);
        if (lVar19 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar8));
        *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar24 = (int *)(lVar19 + 4);
        while (piVar24[-1] != 0x54706054) {
          piVar24 = piVar24 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02797448;
        }
        iVar12 = 0;
        if (*piVar24 != -1) {
          iVar12 = *piVar24;
        }
        *(int *)(puVar10 + 0x20) = iVar12;
        uVar21 = *puVar16;
        if (uVar21 == 0) break;
      } while( true );
    }
  }
LAB_02797448:
  puVar2 = (undefined8 *)(param_1 + 0xe54);
  local_218 = (char *)&local_210;
  local_220 = (undefined *)0x800000000;
  local_270 = (char *)&local_268;
  local_278 = (undefined *)0x800000000;
  lVar19 = 0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 8;
  local_b0 = alStack_a8;
  local_108 = 0;
  iStack_104 = 8;
  local_100 = alStack_f8;
  local_188 = *puVar2;
  uStack_180 = *(undefined8 *)(param_1 + 0xe5c);
  local_178 = *(undefined8 *)(param_1 + 0xe64);
  uStack_170 = *(undefined8 *)(param_1 + 0xe6c);
  local_128 = *(undefined8 *)(param_1 + 0xc20);
  uStack_120 = *(undefined8 *)(param_1 + 0xc28);
  local_118 = *(undefined8 *)(param_1 + 0xc30);
  uStack_110 = *(undefined8 *)(param_1 + 0xc38);
  local_148 = *(undefined8 *)(param_1 + 0xc00);
  uStack_140 = *(undefined8 *)(param_1 + 0xc08);
  local_138 = *(undefined8 *)(param_1 + 0xc10);
  uStack_130 = *(undefined8 *)(param_1 + 0xc18);
  local_168 = *(undefined8 *)(param_1 + 0xe74);
  uStack_160 = *(undefined8 *)(param_1 + 0xe7c);
  local_158 = *(undefined8 *)(param_1 + 0xe84);
  uStack_150 = *(undefined8 *)(param_1 + 0xe8c);
  cVar23 = *puVar9;
  do {
    sVar7 = ((undefined2 *)(param_1 + 0xc00))[lVar19];
    if (sVar7 != -1) {
      uVar21 = *param_3;
      sVar26 = 0;
      if (uVar21 != 0) {
        do {
          puVar16 = (uint *)(ulong)uVar21;
          if (cVar23 != '\0') {
            uVar21 = *(uint *)(puVar10 + 0xc);
            if ((int)uVar21 < 0) {
              if (uVar21 == 0xffffffff) {
                if (puVar16 != (uint *)0x0) goto LAB_02797568;
                sVar26 = 0;
              }
              else {
LAB_027975dc:
                sVar26 = 0;
              }
            }
            else {
              sVar26 = 0;
              if ((short *)((ulong)uVar21 + (long)param_3) != (short *)0x0) {
                sVar26 = *(short *)((ulong)uVar21 + (long)param_3);
              }
            }
            goto LAB_027975e0;
          }
          cVar23 = '\x01';
          *(undefined8 *)puVar10 = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
          *puVar9 = 1;
          *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
          puVar16 = (uint *)(ulong)*param_3;
          sVar26 = 0;
          if (puVar16 == (uint *)0x0) goto LAB_027975e0;
LAB_02797568:
          if (param_3 == puVar16) goto LAB_027975dc;
          lVar4 = 0xc;
          if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)param_3 + (lVar4 - (long)puVar16);
          if (lVar4 == 0) goto LAB_027975dc;
          uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
          *(undefined4 *)(puVar10 + 0xc) = 0xfffffffe;
          sVar26 = 0;
          if (uVar15 == 0) goto LAB_027975e0;
          piVar24 = (int *)(lVar4 + 4);
          while (piVar24[-1] != 0x7eabefae) {
            piVar24 = piVar24 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              sVar26 = 0;
              goto LAB_027975e0;
            }
          }
          iVar12 = 0;
          if (*piVar24 != -1) {
            iVar12 = *piVar24;
          }
          *(int *)(puVar10 + 0xc) = iVar12;
          uVar21 = *param_3;
        } while (uVar21 != 0);
        sVar26 = 0;
      }
LAB_027975e0:
      if ((sVar26 == *(short *)((long)puVar2 + lVar19 * 2)) ||
         ((((*(short *)(param_1 + 0xe44) != sVar7 && (*(short *)(param_1 + 0xe46) != sVar7)) &&
           (*(short *)(param_1 + 0xe48) != sVar7)) &&
          ((*(short *)(param_1 + 0xe4a) != sVar7 && (*(short *)(param_1 + 0xe4c) != sVar7)))))) {
        if ((int)local_278 < local_278._4_4_) {
          *(long *)((long)local_270 + (long)(int)local_278 * 8) =
               (long)alStack_f8 + lVar19 * 2 + -0x50;
          local_278 = (undefined *)CONCAT44(local_278._4_4_,(int)local_278 + 1);
        }
        if (local_108 < iStack_104) {
          alStack_f8[local_108] = (long)&local_188 + lVar19 * 2;
          local_108 = local_108 + 1;
        }
      }
      else {
        if ((int)local_220 < local_220._4_4_) {
          *(long *)((long)local_218 + (long)(int)local_220 * 8) =
               (long)alStack_f8 + lVar19 * 2 + -0x50;
          local_220 = (undefined *)CONCAT44(local_220._4_4_,(int)local_220 + 1);
        }
        if ((int)local_b8 < local_b8._4_4_) {
          alStack_a8[(int)local_b8] = (long)&local_188 + lVar19 * 2;
          local_b8._0_4_ = (int)local_b8 + 1;
        }
      }
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 8);
  iVar12 = (int)local_278;
  if ((int)local_278 != 0) {
    iVar13 = local_108;
    do {
      if ((uint)(iVar12 + (int)local_220) < 8) break;
      if (0 < iVar12) {
        local_278 = (undefined *)CONCAT44(local_278._4_4_,iVar12 + -1);
        iVar12 = iVar12 + -1;
      }
      if (0 < iVar13) {
        local_108 = iVar13 + -1;
        iVar13 = iVar13 + -1;
      }
    } while (iVar12 != 0);
  }
  if ((int)local_220 < 1) {
    uVar21 = 1;
  }
  else {
    uVar15 = 0;
    do {
      uVar3 = uVar15 + 1;
      puVar28 = *(undefined2 **)local_218;
      memmove(local_218,(undefined8 *)((long)local_218 + 8),(long)((int)local_220 * 8 + -8));
      lVar19 = param_1 + uVar15 * 2;
      local_220 = (undefined *)CONCAT44(local_220._4_4_,(int)local_220 + -1);
      *(undefined2 *)(lVar19 + 0xc02) = *puVar28;
      puVar28 = (undefined2 *)*local_b0;
      memmove(local_b0,local_b0 + 1,(long)((int)local_b8 * 8 + -8));
      local_b8._0_4_ = (int)local_b8 + -1;
      *(undefined2 *)(lVar19 + 0xe56) = *puVar28;
      if (6 < uVar3) break;
      uVar15 = uVar3;
    } while (0 < (int)local_220);
    uVar21 = (int)uVar3 + 1;
    iVar12 = (int)local_278;
  }
  if ((0 < iVar12) && (uVar21 < 8)) {
    uVar15 = (ulong)uVar21;
    do {
      puVar28 = *(undefined2 **)local_270;
      memmove(local_270,(undefined8 *)((long)local_270 + 8),(long)(iVar12 * 8 + -8));
      local_278 = (undefined *)CONCAT44(local_278._4_4_,(int)local_278 + -1);
      lVar19 = param_1 + uVar15 * 2;
      *(undefined2 *)(lVar19 + 0xc00) = *puVar28;
      puVar28 = (undefined2 *)*local_100;
      memmove(local_100,local_100 + 1,(long)(local_108 * 8 + -8));
      local_108 = local_108 + -1;
      *(undefined2 *)(lVar19 + 0xe54) = *puVar28;
      if (6 < uVar15) break;
      uVar15 = uVar15 + 1;
      iVar12 = (int)local_278;
    } while (0 < (int)local_278);
  }
  puVar9 = PTR_DAT_04bb6420;
  uVar21 = *param_3;
  if (uVar21 == 0) {
    uVar18 = 0;
  }
  else {
    cVar23 = *PTR_DAT_04bb6420;
    do {
      puVar16 = (uint *)(ulong)uVar21;
      if (cVar23 != '\0') {
        uVar21 = *(uint *)(puVar10 + 0xc);
        if ((int)uVar21 < 0) {
          if (uVar21 == 0xffffffff) {
            uVar18 = 0;
            if (puVar16 != (uint *)0x0) goto LAB_027978e4;
            goto LAB_0279797c;
          }
        }
        else if ((undefined2 *)((ulong)uVar21 + (long)param_3) != (undefined2 *)0x0) {
          uVar18 = *(undefined2 *)((ulong)uVar21 + (long)param_3);
          goto LAB_0279797c;
        }
LAB_02797978:
        uVar18 = 0;
        goto LAB_0279797c;
      }
      cVar23 = '\x01';
      *(undefined8 *)puVar10 = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
      *puVar9 = 1;
      *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
      puVar16 = (uint *)(ulong)*param_3;
      uVar18 = 0;
      if (puVar16 == (uint *)0x0) goto LAB_0279797c;
LAB_027978e4:
      uVar18 = 0;
      if (param_3 == puVar16) goto LAB_0279797c;
      lVar19 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)param_3 + (lVar19 - (long)puVar16);
      uVar18 = 0;
      if (lVar19 == 0) goto LAB_0279797c;
      uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
      *(undefined4 *)(puVar10 + 0xc) = 0xfffffffe;
      if (uVar15 == 0) goto LAB_02797978;
      piVar24 = (int *)(lVar19 + 4);
      while (piVar24[-1] != 0x7eabefae) {
        piVar24 = piVar24 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02797978;
      }
      iVar12 = 0;
      if (*piVar24 != -1) {
        iVar12 = *piVar24;
      }
      *(int *)(puVar10 + 0xc) = iVar12;
      uVar21 = *param_3;
    } while (uVar21 != 0);
    uVar18 = 0;
  }
LAB_0279797c:
  *(undefined2 *)puVar2 = uVar18;
  uVar21 = *param_3;
  if (uVar21 == 0) {
    uVar18 = 0;
  }
  else {
    cVar23 = *puVar9;
LAB_027979a8:
    if (cVar23 == '\0') {
      cVar23 = '\x01';
      *(undefined8 *)puVar10 = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
      *puVar9 = 1;
      *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
      uVar21 = *param_3;
joined_r0x027979f8:
      puVar16 = (uint *)(ulong)uVar21;
      uVar18 = 0;
      if ((puVar16 == (uint *)0x0) || (uVar18 = 0, param_3 == puVar16)) goto LAB_02797a90;
      lVar19 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)param_3 + (lVar19 - (long)puVar16);
      uVar18 = 0;
      if (lVar19 == 0) goto LAB_02797a90;
      uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
      *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
      if (uVar15 == 0) goto LAB_02797a8c;
      piVar24 = (int *)(lVar19 + 4);
      while (piVar24[-1] != 0x54706054) {
        piVar24 = piVar24 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02797a8c;
      }
      iVar12 = 0;
      if (*piVar24 != -1) {
        iVar12 = *piVar24;
      }
      *(int *)(puVar10 + 0x20) = iVar12;
      uVar21 = *param_3;
      if (uVar21 == 0) goto LAB_02797a8c;
      goto LAB_027979a8;
    }
    uVar5 = *(uint *)(puVar10 + 0x20);
    if ((int)uVar5 < 0) {
      if (uVar5 != 0xffffffff) goto LAB_02797a8c;
      goto joined_r0x027979f8;
    }
    if ((undefined2 *)((ulong)uVar5 + (long)param_3) != (undefined2 *)0x0) {
      uVar18 = *(undefined2 *)((ulong)uVar5 + (long)param_3);
      goto LAB_02797a90;
    }
LAB_02797a8c:
    uVar18 = 0;
  }
LAB_02797a90:
  *(undefined2 *)(param_1 + 0xc00) = uVar18;
  puVar27 = PTR_DAT_04bb2020;
  uVar21 = *param_3;
  if (uVar21 != 0) {
    cVar23 = *puVar9;
    do {
      if (cVar23 == '\0') {
        cVar23 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
        uVar21 = *param_3;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x3c);
        if (-1 < (int)uVar5) {
          pcVar25 = (char *)((ulong)uVar5 + (long)param_3);
          goto LAB_02797b7c;
        }
        if (uVar5 != 0xffffffff) goto LAB_02797b68;
      }
      puVar16 = (uint *)(ulong)uVar21;
      pcVar25 = (char *)0x0;
      if ((puVar16 == (uint *)0x0) || (pcVar25 = (char *)0x0, param_3 == puVar16))
      goto LAB_02797b7c;
      lVar19 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)param_3 + (lVar19 - (long)puVar16);
      pcVar25 = (char *)0x0;
      if (lVar19 == 0) goto LAB_02797b7c;
      uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
      *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
      if (uVar15 == 0) goto LAB_02797b68;
      piVar24 = (int *)(lVar19 + 4);
      while (piVar24[-1] != 0x45f320f2) {
        piVar24 = piVar24 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02797b68;
      }
      iVar12 = 0;
      if (*piVar24 != -1) {
        iVar12 = *piVar24;
      }
      *(int *)(puVar10 + 0x3c) = iVar12;
      uVar21 = *param_3;
      if (uVar21 == 0) goto LAB_02797b68;
    } while( true );
  }
  pcVar25 = (char *)0x0;
LAB_02797b7c:
  local_200 = 0;
  local_210 = 0x80;
  local_204 = 0x72656761;
  local_20c[0] = s_TalkVillager_0405d363[0];
  local_20c[1] = s_TalkVillager_0405d363[1];
  local_20c[2] = s_TalkVillager_0405d363[2];
  local_20c[3] = s_TalkVillager_0405d363[3];
  local_20c[4] = s_TalkVillager_0405d363[4];
  local_20c[5] = s_TalkVillager_0405d363[5];
  local_20c[6] = s_TalkVillager_0405d363[6];
  local_20c[7] = s_TalkVillager_0405d363[7];
  __src = *(char **)PTR_PTR_04bb6418;
  local_218 = local_20c;
  local_220 = PTR_DAT_04bb2d88 + 0x10;
  local_18d = 0;
  pcVar17 = __src;
  if (pcVar25 != (char *)0x0) {
    pcVar17 = pcVar25;
  }
  if (local_218 == pcVar17) {
LAB_02797c20:
    *(undefined2 *)(param_1 + 0xe94) = 0;
  }
  else {
    uVar15 = 0;
    bVar11 = true;
    do {
      if (local_218[uVar15] != pcVar17[uVar15]) break;
      if (local_218[uVar15] == '\0') {
        if (bVar11) goto LAB_02797c20;
        break;
      }
      bVar11 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
  }
  uVar21 = *param_3;
  if (uVar21 != 0) {
    cVar23 = *puVar9;
    do {
      if (cVar23 == '\0') {
        cVar23 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
        uVar21 = *param_3;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x3c);
        if (-1 < (int)uVar5) {
          pcVar25 = (char *)((ulong)uVar5 + (long)param_3);
          goto LAB_02797cfc;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar16 = (uint *)(ulong)uVar21;
      pcVar25 = (char *)0x0;
      if ((puVar16 == (uint *)0x0) || (pcVar25 = (char *)0x0, param_3 == puVar16))
      goto LAB_02797cfc;
      lVar19 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)param_3 + (lVar19 - (long)puVar16);
      pcVar25 = (char *)0x0;
      if (lVar19 == 0) goto LAB_02797cfc;
      uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
      *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar24 = (int *)(lVar19 + 4);
      while (piVar24[-1] != 0x45f320f2) {
        piVar24 = piVar24 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02797cf8;
      }
      iVar12 = 0;
      if (*piVar24 != -1) {
        iVar12 = *piVar24;
      }
      *(int *)(puVar10 + 0x3c) = iVar12;
      uVar21 = *param_3;
      if (uVar21 == 0) break;
    } while( true );
  }
LAB_02797cf8:
  pcVar25 = (char *)0x0;
LAB_02797cfc:
  local_225 = 0;
  if (pcVar25 != (char *)0x0) {
    __src = pcVar25;
  }
  local_268 = 0x40;
  local_278 = PTR_DAT_04bb2f70 + 0x10;
  local_270 = local_264;
  if (local_264 != __src) {
    lVar19 = 0;
    do {
      if (__src[lVar19] == '\0') {
LAB_02797d68:
        iVar12 = (int)lVar19;
joined_r0x02797d6c:
        if (0x3f < iVar12) {
          iVar12 = 0x3f;
        }
        goto LAB_02797d74;
      }
      if (__src[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_02797d68;
      }
      if (__src[lVar19 + 2] == '\0') {
        iVar12 = (int)lVar19 + 2;
        goto joined_r0x02797d6c;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    iVar12 = 0;
LAB_02797d74:
    memcpy(local_264,__src,(long)iVar12);
    local_264[iVar12] = '\0';
    __src = local_270;
    puVar27 = PTR_DAT_04bb2020;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  local_278 = PTR_DAT_04bb2bc0 + 0x10;
  uVar18 = *(undefined2 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_b8 = puVar27 + 0x10;
  local_b0 = (long *)0x40e03ff;
  __src[(long)local_268 + -1] = '\0';
  (**(code **)(puVar1 + 0x28))(&local_278);
  pcVar25 = local_270;
  (**(code **)(local_b8 + 0x18))(&local_b8);
  if ((long *)pcVar25 == local_b0) {
LAB_02797e40:
    local_b8 = puVar27 + 0x10;
    local_b0 = (long *)0x40633fe;
    FUN_0274bfe8(param_2,&local_b8,uVar18);
  }
  else {
    uVar15 = 0;
    bVar11 = true;
    do {
      if (local_270[uVar15] != *(char *)((long)local_b0 + uVar15)) break;
      if (local_270[uVar15] == '\0') {
        if (bVar11) goto LAB_02797e40;
        break;
      }
      bVar11 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
  }
  local_b8 = puVar27 + 0x10;
  local_b0 = (long *)0x40e59d7;
  (**(code **)(local_278 + 0x18))(&local_278);
  (**(code **)(local_278 + 0x18))(&local_278);
  pcVar25 = local_270;
  (**(code **)(local_b8 + 0x18))(&local_b8);
  if ((long *)pcVar25 == local_b0) {
LAB_02797f00:
    local_b8 = puVar27 + 0x10;
    local_b0 = (long *)0x40cb2bc;
    FUN_0274bfe8(param_2,&local_b8,uVar18);
  }
  else {
    uVar15 = 0;
    bVar11 = true;
    do {
      if (local_270[uVar15] != *(char *)((long)local_b0 + uVar15)) break;
      if (local_270[uVar15] == '\0') {
        if (bVar11) goto LAB_02797f00;
        break;
      }
      bVar11 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
  }
  uVar21 = *param_3;
  if (uVar21 != 0) {
    cVar23 = *puVar9;
    do {
      if (cVar23 == '\0') {
        cVar23 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
        uVar21 = *param_3;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x3c);
        if (-1 < (int)uVar5) {
          pcVar25 = (char *)((ulong)uVar5 + (long)param_3);
          goto LAB_02797ffc;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar16 = (uint *)(ulong)uVar21;
      pcVar25 = (char *)0x0;
      if ((puVar16 == (uint *)0x0) || (pcVar25 = (char *)0x0, param_3 == puVar16))
      goto LAB_02797ffc;
      lVar19 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)param_3 + (lVar19 - (long)puVar16);
      pcVar25 = (char *)0x0;
      if (lVar19 == 0) goto LAB_02797ffc;
      uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
      *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar24 = (int *)(lVar19 + 4);
      while (piVar24[-1] != 0x45f320f2) {
        piVar24 = piVar24 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02797ff8;
      }
      iVar12 = 0;
      if (*piVar24 != -1) {
        iVar12 = *piVar24;
      }
      *(int *)(puVar10 + 0x3c) = iVar12;
      uVar21 = *param_3;
      if (uVar21 == 0) break;
    } while( true );
  }
LAB_02797ff8:
  pcVar25 = (char *)0x0;
LAB_02797ffc:
  local_225 = 0;
  pcVar17 = *(char **)PTR_PTR_04bb6418;
  if (pcVar25 != (char *)0x0) {
    pcVar17 = pcVar25;
  }
  local_268 = 0x40;
  local_270 = local_264;
  if (local_264 == pcVar17) {
    lVar19 = 0x3f;
  }
  else {
    lVar19 = 0;
    do {
      if (pcVar17[lVar19] == '\0') {
LAB_02798070:
        iVar12 = (int)lVar19;
joined_r0x02798074:
        if (0x3f < iVar12) {
          iVar12 = 0x3f;
        }
        goto LAB_0279807c;
      }
      if (pcVar17[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_02798070;
      }
      if (pcVar17[lVar19 + 2] == '\0') {
        iVar12 = (int)lVar19 + 2;
        goto joined_r0x02798074;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    iVar12 = 0;
LAB_0279807c:
    memcpy(local_264,pcVar17,(long)iVar12);
    local_264[iVar12] = '\0';
    lVar19 = (long)local_268 + -1;
    pcVar17 = local_270;
    puVar27 = PTR_DAT_04bb2020;
  }
  local_278 = puVar1 + 0x10;
  pcVar17[lVar19] = '\0';
  (**(code **)(puVar1 + 0x28))(&local_278);
  if (local_270 == "DoRadioGymnastics") {
LAB_02798110:
    local_b8 = puVar27 + 0x10;
    local_b0 = (long *)0x40869f8;
    FUN_0274bfe8(param_2,&local_b8,2);
  }
  else {
    uVar15 = 0;
    bVar11 = true;
    do {
      if (local_270[uVar15] != "DoRadioGymnastics"[uVar15]) break;
      if (local_270[uVar15] == '\0') {
        if (bVar11) goto LAB_02798110;
        break;
      }
      bVar11 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
  }
  uVar21 = *param_3;
  if (uVar21 != 0) {
    cVar23 = *puVar9;
    do {
      if (cVar23 == '\0') {
        cVar23 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
        uVar21 = *param_3;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x3c);
        if (-1 < (int)uVar5) {
          pcVar25 = (char *)((ulong)uVar5 + (long)param_3);
          goto LAB_0279820c;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar16 = (uint *)(ulong)uVar21;
      pcVar25 = (char *)0x0;
      if ((puVar16 == (uint *)0x0) || (pcVar25 = (char *)0x0, param_3 == puVar16))
      goto LAB_0279820c;
      lVar19 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar16)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)param_3 + (lVar19 - (long)puVar16);
      pcVar25 = (char *)0x0;
      if (lVar19 == 0) goto LAB_0279820c;
      uVar15 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar16));
      *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar24 = (int *)(lVar19 + 4);
      while (piVar24[-1] != 0x45f320f2) {
        piVar24 = piVar24 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02798208;
      }
      iVar12 = 0;
      if (*piVar24 != -1) {
        iVar12 = *piVar24;
      }
      *(int *)(puVar10 + 0x3c) = iVar12;
      uVar21 = *param_3;
      if (uVar21 == 0) break;
    } while( true );
  }
LAB_02798208:
  pcVar25 = (char *)0x0;
LAB_0279820c:
  local_225 = 0;
  pcVar17 = *(char **)PTR_PTR_04bb6418;
  if (pcVar25 != (char *)0x0) {
    pcVar17 = pcVar25;
  }
  local_268 = 0x40;
  local_270 = local_264;
  if (local_264 == pcVar17) {
    lVar19 = 0x3f;
  }
  else {
    lVar19 = 0;
    do {
      if (pcVar17[lVar19] == '\0') {
LAB_02798280:
        iVar12 = (int)lVar19;
joined_r0x02798284:
        if (0x3f < iVar12) {
          iVar12 = 0x3f;
        }
        goto LAB_0279828c;
      }
      if (pcVar17[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_02798280;
      }
      if (pcVar17[lVar19 + 2] == '\0') {
        iVar12 = (int)lVar19 + 2;
        goto joined_r0x02798284;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    iVar12 = 0;
LAB_0279828c:
    memcpy(local_264,pcVar17,(long)iVar12);
    local_264[iVar12] = '\0';
    lVar19 = (long)local_268 + -1;
    pcVar17 = local_270;
  }
  local_278 = puVar1 + 0x10;
  pcVar17[lVar19] = '\0';
  (**(code **)(puVar1 + 0x28))(&local_278);
  if (local_270 == "GotoCafe") {
LAB_02798314:
    local_b8 = puVar27 + 0x10;
    local_b0 = (long *)0x409149d;
    FUN_0274bfe8(param_2,&local_b8,1);
  }
  else {
    uVar15 = 0;
    bVar11 = true;
    do {
      if (local_270[uVar15] != "GotoCafe"[uVar15]) {
        return;
      }
      if (local_270[uVar15] == '\0') {
        if (!bVar11) {
          return;
        }
        goto LAB_02798314;
      }
      bVar11 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
  }
  return;
}

