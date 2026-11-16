
void FUN_027551a0(ushort *param_1,undefined8 param_2,long *param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  ushort uVar11;
  long lVar12;
  ushort *puVar13;
  ulong uVar14;
  char cVar15;
  uint uVar16;
  long *plVar17;
  uint *puVar18;
  int *piVar19;
  undefined *local_a0;
  long local_98;
  int local_7c;
  long local_78;
  undefined8 local_70;
  char *pcStack_68;
  
  lVar12 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar8 = FUN_006bd550(param_3[1],0);
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar8);
  puVar10 = (uint *)FUN_02755c10(lVar12 + 0x1300,&local_a0);
  puVar6 = PTR_DAT_04bb63e0;
  puVar5 = PTR_DAT_04bb63d8;
  if (puVar10 == (uint *)0x0) {
    return;
  }
  puVar13 = param_1;
  if (*puVar10 != 0) {
    cVar15 = *PTR_DAT_04bb63d8;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        uVar16 = *puVar10;
      }
      else {
        uVar16 = *(uint *)(puVar6 + 8);
        if (-1 < (int)uVar16) {
          if (((ushort *)((ulong)uVar16 + (long)puVar10) != (ushort *)0x0) &&
             (uVar2 = *(ushort *)((ulong)uVar16 + (long)puVar10), uVar2 < 0x80)) {
            puVar13 = param_1 + uVar2;
          }
          break;
        }
        if (uVar16 != 0xffffffff) break;
        uVar16 = *puVar10;
      }
      if ((uVar16 == 0) || (puVar18 = (uint *)(ulong)uVar16, puVar10 == puVar18)) break;
      lVar12 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar18)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar10 + (lVar12 - (long)puVar18);
      if (lVar12 == 0) break;
      uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar18));
      *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar19 = (int *)(lVar12 + 4);
      while (piVar19[-1] != 0x54706054) {
        piVar19 = piVar19 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_027552fc;
      }
      iVar9 = 0;
      if (*piVar19 != -1) {
        iVar9 = *piVar19;
      }
      *(int *)(puVar6 + 8) = iVar9;
      if (*puVar10 == 0) break;
    } while( true );
  }
LAB_027552fc:
  uVar2 = *puVar13;
  if (*puVar10 == 0) {
LAB_02755404:
    uVar16 = 0;
  }
  else {
    cVar15 = *puVar5;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      }
      else {
        uVar16 = *(uint *)(puVar6 + 4);
        if (-1 < (int)uVar16) {
          if ((ushort *)((ulong)uVar16 + (long)puVar10) == (ushort *)0x0) goto LAB_02755404;
          uVar16 = (uint)*(ushort *)((ulong)uVar16 + (long)puVar10);
          goto LAB_02755408;
        }
        if (uVar16 != 0xffffffff) goto LAB_02755404;
      }
      puVar18 = (uint *)(ulong)*puVar10;
      uVar16 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar18)) goto LAB_02755408;
      lVar12 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar18)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar10 + (lVar12 - (long)puVar18);
      if (lVar12 == 0) goto LAB_02755404;
      uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar18));
      *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
      uVar16 = 0;
      if (uVar14 == 0) goto LAB_02755408;
      piVar19 = (int *)(lVar12 + 4);
      while (piVar19[-1] != 0x110b14c) {
        piVar19 = piVar19 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          uVar16 = 0;
          goto LAB_02755408;
        }
      }
      iVar9 = 0;
      if (*piVar19 != -1) {
        iVar9 = *piVar19;
      }
      *(int *)(puVar6 + 4) = iVar9;
    } while (*puVar10 != 0);
    uVar16 = 0;
  }
LAB_02755408:
  uVar1 = param_4;
  if ((int)uVar16 <= (int)param_4) {
    uVar1 = uVar16;
  }
  uVar16 = 0;
  if (-1 < (int)param_4) {
    uVar16 = uVar1;
  }
  if (uVar16 != uVar2) {
    if (*puVar10 != 0) {
      cVar15 = *puVar5;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          uVar1 = *puVar10;
        }
        else {
          uVar1 = *(uint *)(puVar6 + 8);
          if (-1 < (int)uVar1) {
            if ((ushort *)((ulong)uVar1 + (long)puVar10) != (ushort *)0x0) {
              uVar3 = *(ushort *)((ulong)uVar1 + (long)puVar10);
              if (0xfffe < uVar16) {
                uVar16 = 0xffff;
              }
              uVar11 = (ushort)uVar16;
              if (0x7f < uVar3) goto LAB_02755510;
              puVar13 = param_1 + uVar3;
              goto LAB_02755514;
            }
            break;
          }
          if (uVar1 != 0xffffffff) break;
          uVar1 = *puVar10;
        }
        if ((uVar1 == 0) || (puVar18 = (uint *)(ulong)uVar1, puVar10 == puVar18)) break;
        lVar12 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar18)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar10 + (lVar12 - (long)puVar18);
        if (lVar12 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar18));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar19 = (int *)(lVar12 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_02755504;
        }
        iVar9 = 0;
        if (*piVar19 != -1) {
          iVar9 = *piVar19;
        }
        *(int *)(puVar6 + 8) = iVar9;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_02755504:
    if (0xfffe < uVar16) {
      uVar16 = 0xffff;
    }
    uVar11 = (ushort)uVar16;
LAB_02755510:
    puVar13 = param_1;
LAB_02755514:
    *puVar13 = uVar11;
    if (*puVar10 != 0) {
      cVar15 = *puVar5;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          uVar16 = *puVar10;
        }
        else {
          uVar16 = *(uint *)(puVar6 + 8);
          if (-1 < (int)uVar16) {
            if (((ushort *)((ulong)uVar16 + (long)puVar10) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar16 + (long)puVar10), uVar3 < 0x80)) {
              param_1 = param_1 + uVar3;
            }
            break;
          }
          if (uVar16 != 0xffffffff) break;
          uVar16 = *puVar10;
        }
        if ((uVar16 == 0) || (puVar18 = (uint *)(ulong)uVar16, puVar10 == puVar18)) break;
        lVar12 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar18)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar10 + (lVar12 - (long)puVar18);
        if (lVar12 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar18));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar19 = (int *)(lVar12 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_027555f4;
        }
        iVar9 = 0;
        if (*piVar19 != -1) {
          iVar9 = *piVar19;
        }
        *(int *)(puVar6 + 8) = iVar9;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_027555f4:
    uVar3 = *param_1;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "save_event_flag_visit";
    FUN_025ffac8(&local_a0,&local_70,param_2);
    puVar7 = PTR_DAT_04bc33e0;
    puVar4 = PTR_DAT_04bb2268;
    local_78 = 0;
    local_a0 = PTR_DAT_04bc33e0 + 0x10;
    if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb1) == '\0') {
      if ((local_98 == 0) || (lVar12 = *(long *)(local_98 + 8), lVar12 == 0)) {
        local_78 = 0;
      }
      else {
        local_78 = FUN_03f2a10c(0x400,**(undefined8 **)PTR_DAT_04bc3578,1);
        if ((local_78 != 0) &&
           (uVar14 = (ulong)*(uint *)(lVar12 + 0x20), 0 < (int)*(uint *)(lVar12 + 0x20))) {
          plVar17 = *(long **)(lVar12 + 0x28);
          do {
            if (*plVar17 == 0) {
              *plVar17 = local_78;
              goto LAB_027556c0;
            }
            plVar17 = plVar17 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        local_78 = 0;
        *(undefined1 *)(*(long *)puVar4 + 0xb1) = 1;
      }
    }
LAB_027556c0:
    pcStack_68 = (char *)CONCAT44(pcStack_68._4_4_,(uint)uVar3);
    if (*puVar10 == 0) {
LAB_02755790:
      local_70._0_4_ = 0;
    }
    else {
      cVar15 = *puVar5;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        }
        else {
          uVar16 = *(uint *)(puVar6 + 8);
          if (-1 < (int)uVar16) {
            if ((ushort *)((ulong)uVar16 + (long)puVar10) == (ushort *)0x0) goto LAB_02755790;
            local_70._0_4_ = (uint)*(ushort *)((ulong)uVar16 + (long)puVar10);
            goto LAB_02755794;
          }
          if (uVar16 != 0xffffffff) goto LAB_02755790;
        }
        puVar18 = (uint *)(ulong)*puVar10;
        local_70._0_4_ = 0;
        if ((*puVar10 == 0) || (puVar10 == puVar18)) goto LAB_02755794;
        lVar12 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar18)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar10 + (lVar12 - (long)puVar18);
        if (lVar12 == 0) goto LAB_02755790;
        uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar18));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        local_70._0_4_ = 0;
        if (uVar14 == 0) goto LAB_02755794;
        piVar19 = (int *)(lVar12 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            local_70._0_4_ = 0;
            goto LAB_02755794;
          }
        }
        iVar9 = 0;
        if (*piVar19 != -1) {
          iVar9 = *piVar19;
        }
        *(int *)(puVar6 + 8) = iVar9;
      } while (*puVar10 != 0);
      local_70._0_4_ = 0;
    }
LAB_02755794:
    local_70._4_4_ = (uint)uVar2;
    FUN_025cf498(&local_a0,&local_70);
    local_a0 = puVar7 + 0x10;
    iVar9 = FUN_025cfb2c(&local_a0);
    if (((iVar9 == -1) ||
        (local_70._0_4_ = (**(code **)(local_a0 + 0x20))(&local_a0), 0xc < (int)(uint)local_70)) &&
       (local_7c == 0)) {
      local_7c = 1;
    }
    FUN_02601530(&local_a0);
  }
  return;
}

