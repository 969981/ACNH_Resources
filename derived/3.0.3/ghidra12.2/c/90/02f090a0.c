
undefined8 FUN_02f090a0(long param_1,byte *param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte bVar6;
  byte *pbVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  char cVar11;
  ulong uVar12;
  char *pcVar13;
  uint *puVar14;
  int *piVar15;
  byte local_4c [4];
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_38;
  int local_34;
  
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_02f09124:
    if (*pbVar7 < 8) goto LAB_02f09190;
LAB_02f09130:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02f09188:
      pbVar7 = PTR_DAT_04bb5038;
      goto LAB_02f09190;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar9 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar8 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar8 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar8 & 8) != 0) {
        pbVar7 = (byte *)(lVar9 + 0x471);
      }
    }
    bVar6 = *pbVar7;
    if (7 < bVar6) goto LAB_02f09188;
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02f09124;
      }
      goto LAB_02f09130;
    }
LAB_02f09190:
    bVar6 = *pbVar7;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
  }
  local_38 = 0;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *(byte *)(param_1 + 0x1f8) = bVar6;
  puVar2 = PTR_DAT_04bb2020;
  local_34 = param_3;
  if (param_3 == 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "MainmenuRndDailyQuest";
    uVar5 = FUN_0274bce0(param_2,&local_48);
    puVar4 = PTR_DAT_04bb6428;
    puVar3 = PTR_DAT_04bb6420;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    lVar9 = *(long *)PTR_DAT_04bb2208;
    if ((int)*(uint *)(lVar9 + 0x1b20) < 1) {
      if ((((*(long *)(lVar9 + 0x1a10) == 0) ||
           (puVar8 = *(uint **)(*(long *)(lVar9 + 0x1a10) + 8), puVar8 == (uint *)0x0)) ||
          ((param_4 < *(uint *)(lVar9 + 0x1a28) &&
           (*(char *)(*(long *)(lVar9 + 0x1a30) + (long)(int)param_4) == '\0')))) ||
         (((*puVar8 <= param_4 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0))))
      goto LAB_02f094b4;
      iVar10 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * param_4 + (uint)(ushort)puVar8[2] * 8 + iVar10) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(lVar9 + 0x1b20) <= param_4) goto LAB_02f094b4;
      uVar1 = param_4;
      if (*(uint *)(lVar9 + 0x1b10) <= param_4) {
        uVar1 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar9 + 0x1b18) + (ulong)uVar1 * 8);
    }
    if (puVar8 != (uint *)0x0) {
      if (*puVar8 != 0) {
        cVar11 = *PTR_DAT_04bb6420;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 0x3c);
            if (-1 < (int)uVar1) {
              pcVar13 = (char *)((ulong)uVar1 + (long)puVar8);
              goto LAB_02f09478;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar8;
          pcVar13 = (char *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_02f09478;
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + (lVar9 - (long)puVar14);
          if (lVar9 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
          *(undefined4 *)(puVar4 + 0x3c) = 0xfffffffe;
          pcVar13 = (char *)0x0;
          if (uVar12 == 0) goto LAB_02f09478;
          piVar15 = (int *)(lVar9 + 4);
          while (piVar15[-1] != 0x45f320f2) {
            piVar15 = piVar15 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              pcVar13 = (char *)0x0;
              goto LAB_02f09478;
            }
          }
          iVar10 = 0;
          if (*piVar15 != -1) {
            iVar10 = *piVar15;
          }
          *(int *)(puVar4 + 0x3c) = iVar10;
        } while (*puVar8 != 0);
      }
      pcVar13 = (char *)0x0;
LAB_02f09478:
      local_48 = puVar2 + 0x10;
      pcStack_40 = *(char **)PTR_PTR_04bb6418;
      if (pcVar13 != (char *)0x0) {
        pcStack_40 = pcVar13;
      }
      local_38 = FUN_0279cda0(&local_48);
    }
  }
  else if (param_3 == 1) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "MainmenuAchievement";
    uVar5 = FUN_0274bce0(param_2,&local_48);
    puVar4 = PTR_DAT_04bb6448;
    puVar3 = PTR_DAT_04bb6440;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    lVar9 = *(long *)PTR_DAT_04bb2208;
    if ((int)*(uint *)(lVar9 + 0x1d40) < 1) {
      if ((((*(long *)(lVar9 + 0x1c30) == 0) ||
           (puVar8 = *(uint **)(*(long *)(lVar9 + 0x1c30) + 8), puVar8 == (uint *)0x0)) ||
          ((param_4 < *(uint *)(lVar9 + 0x1c48) &&
           (*(char *)(*(long *)(lVar9 + 0x1c50) + (long)(int)param_4) == '\0')))) ||
         (((*puVar8 <= param_4 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0))))
      goto LAB_02f094b4;
      iVar10 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar8 = (uint *)((ulong)(puVar8[1] * param_4 + (uint)(ushort)puVar8[2] * 8 + iVar10) +
                       (long)puVar8);
    }
    else {
      if (*(uint *)(lVar9 + 0x1d40) <= param_4) goto LAB_02f094b4;
      uVar1 = param_4;
      if (*(uint *)(lVar9 + 0x1d30) <= param_4) {
        uVar1 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar9 + 0x1d38) + (ulong)uVar1 * 8);
    }
    if (puVar8 != (uint *)0x0) {
      if (*puVar8 != 0) {
        cVar11 = *PTR_DAT_04bb6440;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 0x48);
            if (-1 < (int)uVar1) {
              pcVar13 = (char *)((ulong)uVar1 + (long)puVar8);
              goto LAB_02f09308;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar8;
          pcVar13 = (char *)0x0;
          if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_02f09308;
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + (lVar9 - (long)puVar14);
          if (lVar9 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
          *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
          pcVar13 = (char *)0x0;
          if (uVar12 == 0) goto LAB_02f09308;
          piVar15 = (int *)(lVar9 + 4);
          while (piVar15[-1] != 0x45f320f2) {
            piVar15 = piVar15 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              pcVar13 = (char *)0x0;
              goto LAB_02f09308;
            }
          }
          iVar10 = 0;
          if (*piVar15 != -1) {
            iVar10 = *piVar15;
          }
          *(int *)(puVar4 + 0x48) = iVar10;
        } while (*puVar8 != 0);
      }
      pcVar13 = (char *)0x0;
LAB_02f09308:
      local_48 = puVar2 + 0x10;
      pcStack_40 = *(char **)PTR_PTR_04bb6438;
      if (pcVar13 != (char *)0x0) {
        pcStack_40 = pcVar13;
      }
      local_38 = FUN_0279d000(&local_48);
    }
  }
  else {
    if (param_3 != 2) {
      return 0;
    }
    local_38 = 0;
  }
LAB_02f094b4:
  local_4c[0] = *param_2;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  FUN_0322c488(*(undefined8 *)(param_1 + 0x280),&local_38,local_4c,local_34,param_4);
  return 1;
}

