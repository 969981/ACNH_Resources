
void FUN_0279fec0(short *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  bool bVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulong uVar14;
  uint extraout_w8;
  uint uVar15;
  long lVar16;
  short *psVar17;
  char cVar18;
  uint *puVar19;
  uint *puVar20;
  int *piVar21;
  uint uVar22;
  short *psVar23;
  undefined8 uVar24;
  short sVar25;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  undefined *local_90;
  char *pcStack_88;
  int local_6c;
  undefined4 local_68;
  
  puVar1 = PTR_DAT_04bb2208;
  lVar16 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_90._0_4_ = FUN_006bd550(param_3[1],0);
  puVar13 = (uint *)FUN_00ad5fc0(lVar16 + 0x1960,&local_90);
  puVar5 = PTR_DAT_04bb6428;
  puVar4 = PTR_DAT_04bb6420;
  if (puVar13 == (uint *)0x0) {
    return;
  }
  psVar23 = param_1 + 0x400;
  psVar17 = psVar23;
  if (*puVar13 != 0) {
    cVar18 = *PTR_DAT_04bb6420;
    do {
      if (cVar18 == '\0') {
        cVar18 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        uVar22 = *puVar13;
      }
      else {
        uVar22 = *(uint *)(puVar5 + 0x20);
        if (-1 < (int)uVar22) {
          if (((ushort *)((ulong)uVar22 + (long)puVar13) != (ushort *)0x0) &&
             (uVar3 = *(ushort *)((ulong)uVar22 + (long)puVar13), uVar3 < 0x200)) {
            psVar17 = (short *)((long)psVar23 + (ulong)uVar3);
          }
          break;
        }
        if (uVar22 != 0xffffffff) break;
        uVar22 = *puVar13;
      }
      if ((uVar22 == 0) || (puVar19 = (uint *)(ulong)uVar22, puVar13 == puVar19)) break;
      lVar16 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar13 + (lVar16 - (long)puVar19);
      if (lVar16 == 0) break;
      uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
      *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar21 = (int *)(lVar16 + 4);
      while (piVar21[-1] != 0x54706054) {
        piVar21 = piVar21 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_027a002c;
      }
      iVar12 = 0;
      if (*piVar21 != -1) {
        iVar12 = *piVar21;
      }
      *(int *)(puVar5 + 0x20) = iVar12;
      if (*puVar13 == 0) break;
    } while( true );
  }
LAB_027a002c:
  puVar5 = PTR_DAT_04bb6428;
  puVar4 = PTR_DAT_04bb6420;
  if ((char)*psVar17 == '\0') {
    if (*puVar13 != 0) {
      cVar18 = *PTR_DAT_04bb6420;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar22 = *(uint *)(puVar5 + 0x3c);
          if (-1 < (int)uVar22) {
            lVar16 = (ulong)uVar22 + (long)puVar13;
            goto LAB_027a0118;
          }
          if (uVar22 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)*puVar13;
        lVar16 = 0;
        if ((*puVar13 == 0) || (puVar13 == puVar19)) goto LAB_027a0118;
        lVar16 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar2 = (long)puVar13 + (lVar16 - (long)puVar19);
        if (lVar2 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
        *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
        lVar16 = 0;
        if (uVar14 == 0) goto LAB_027a0118;
        piVar21 = (int *)(lVar2 + 4);
        while (piVar21[-1] != 0x45f320f2) {
          piVar21 = piVar21 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            lVar16 = 0;
            goto LAB_027a0118;
          }
        }
        iVar12 = 0;
        if (*piVar21 != -1) {
          iVar12 = *piVar21;
        }
        *(int *)(puVar5 + 0x3c) = iVar12;
      } while (*puVar13 != 0);
    }
    lVar16 = 0;
LAB_027a0118:
    puVar4 = PTR_PTR_04bb6418;
    lVar2 = *(long *)PTR_PTR_04bb6418;
    if (lVar16 != 0) {
      lVar2 = lVar16;
    }
    lVar16 = *(long *)puVar1;
    local_90._0_4_ = FUN_006bd550(lVar2,0);
    puVar19 = (uint *)FUN_00ad5fc0(lVar16 + 0x1960,&local_90);
    puVar6 = PTR_DAT_04bb6428;
    puVar5 = PTR_DAT_04bb6420;
    if ((puVar19 != (uint *)0x0) && (*puVar19 != 0)) {
      cVar18 = *PTR_DAT_04bb6420;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar22 = *(uint *)(puVar6 + 0x14);
          if (-1 < (int)uVar22) {
            if ((short *)((ulong)uVar22 + (long)puVar19) == (short *)0x0) break;
            sVar25 = *(short *)((ulong)uVar22 + (long)puVar19);
            goto LAB_027a0280;
          }
          if (uVar22 != 0xffffffff) break;
        }
        puVar20 = (uint *)(ulong)*puVar19;
        sVar25 = 0;
        if ((*puVar19 == 0) || (puVar19 == puVar20)) goto LAB_027a0280;
        lVar16 = 0xc;
        if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar19 + (lVar16 - (long)puVar20);
        if (lVar16 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
        *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar21 = (int *)(lVar16 + 4);
        while (piVar21[-1] != 0x110b14c) {
          piVar21 = piVar21 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_027a027c;
        }
        sVar25 = 0;
        iVar12 = 0;
        if (*piVar21 != -1) {
          iVar12 = *piVar21;
        }
        *(int *)(puVar6 + 0x14) = iVar12;
        if (*puVar19 == 0) goto LAB_027a0280;
      } while( true );
    }
LAB_027a027c:
    sVar25 = 0;
LAB_027a0280:
    puVar6 = PTR_DAT_04bb6428;
    puVar5 = PTR_DAT_04bb6420;
    if (*puVar13 != 0) {
      cVar18 = *PTR_DAT_04bb6420;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar22 = *(uint *)(puVar6 + 0x3c);
          if (-1 < (int)uVar22) {
            lVar16 = (ulong)uVar22 + (long)puVar13;
            goto LAB_027a0358;
          }
          if (uVar22 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)*puVar13;
        lVar16 = 0;
        if ((*puVar13 == 0) || (puVar13 == puVar19)) goto LAB_027a0358;
        lVar16 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar2 = (long)puVar13 + (lVar16 - (long)puVar19);
        if (lVar2 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
        *(undefined4 *)(puVar6 + 0x3c) = 0xfffffffe;
        lVar16 = 0;
        if (uVar14 == 0) goto LAB_027a0358;
        piVar21 = (int *)(lVar2 + 4);
        while (piVar21[-1] != 0x45f320f2) {
          piVar21 = piVar21 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            lVar16 = 0;
            goto LAB_027a0358;
          }
        }
        iVar12 = 0;
        if (*piVar21 != -1) {
          iVar12 = *piVar21;
        }
        *(int *)(puVar6 + 0x3c) = iVar12;
      } while (*puVar13 != 0);
    }
    lVar16 = 0;
LAB_027a0358:
    lVar2 = *(long *)puVar4;
    if (lVar16 != 0) {
      lVar2 = lVar16;
    }
    lVar16 = *(long *)puVar1;
    local_90._0_4_ = FUN_006bd550(lVar2,0);
    puVar19 = (uint *)FUN_00ad5fc0(lVar16 + 0x1960,&local_90);
    puVar5 = PTR_DAT_04bb6428;
    puVar4 = PTR_DAT_04bb6420;
    if (puVar19 == (uint *)0x0) {
      if (sVar25 != 0) {
        return;
      }
    }
    else {
      psVar17 = param_1;
      if (*puVar19 != 0) {
        cVar18 = *PTR_DAT_04bb6420;
        do {
          if (cVar18 == '\0') {
            cVar18 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            uVar22 = *puVar19;
          }
          else {
            uVar22 = *(uint *)(puVar5 + 0x20);
            if (-1 < (int)uVar22) {
              if (((ushort *)((ulong)uVar22 + (long)puVar19) != (ushort *)0x0) &&
                 (uVar3 = *(ushort *)((ulong)uVar22 + (long)puVar19), uVar3 < 0x200)) {
                psVar17 = param_1 + uVar3;
              }
              break;
            }
            if (uVar22 != 0xffffffff) break;
            uVar22 = *puVar19;
          }
          if ((uVar22 == 0) || (puVar20 = (uint *)(ulong)uVar22, puVar19 == puVar20)) break;
          lVar16 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar19 + (lVar16 - (long)puVar20);
          if (lVar16 == 0) break;
          uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
          *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar21 = (int *)(lVar16 + 4);
          while (piVar21[-1] != 0x54706054) {
            piVar21 = piVar21 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_027a0478;
          }
          iVar12 = 0;
          if (*piVar21 != -1) {
            iVar12 = *piVar21;
          }
          *(int *)(puVar5 + 0x20) = iVar12;
          if (*puVar19 == 0) break;
        } while( true );
      }
LAB_027a0478:
      if (sVar25 != *psVar17) {
        return;
      }
    }
    puVar5 = PTR_DAT_04bb6428;
    puVar4 = PTR_DAT_04bb6420;
    if (*puVar13 != 0) {
      cVar18 = *PTR_DAT_04bb6420;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          uVar22 = *puVar13;
        }
        else {
          uVar22 = *(uint *)(puVar5 + 0x20);
          if (-1 < (int)uVar22) {
            if (((ushort *)((ulong)uVar22 + (long)puVar13) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar22 + (long)puVar13), uVar3 < 0x200)) {
              psVar23 = (short *)((long)psVar23 + (ulong)uVar3);
            }
            break;
          }
          if (uVar22 != 0xffffffff) break;
          uVar22 = *puVar13;
        }
        if ((uVar22 == 0) || (puVar19 = (uint *)(ulong)uVar22, puVar13 == puVar19)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar13 + (lVar16 - (long)puVar19);
        if (lVar16 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
        *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar21 = (int *)(lVar16 + 4);
        while (piVar21[-1] != 0x54706054) {
          piVar21 = piVar21 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_027a05c8;
        }
        iVar12 = 0;
        if (*piVar21 != -1) {
          iVar12 = *piVar21;
        }
        *(int *)(puVar5 + 0x20) = iVar12;
        if (*puVar13 == 0) break;
      } while( true );
    }
LAB_027a05c8:
    *(char *)psVar23 = '\x01';
    puVar5 = PTR_DAT_04bb6428;
    puVar4 = PTR_DAT_04bb6420;
    if (*puVar13 != 0) {
      cVar18 = *PTR_DAT_04bb6420;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar22 = *(uint *)(puVar5 + 0x1c);
          if (-1 < (int)uVar22) {
            if ((ushort *)((ulong)uVar22 + (long)puVar13) != (ushort *)0x0) {
              uVar22 = (uint)*(ushort *)((ulong)uVar22 + (long)puVar13);
              goto LAB_027a06cc;
            }
            break;
          }
          if (uVar22 != 0xffffffff) break;
        }
        puVar19 = (uint *)(ulong)*puVar13;
        uVar22 = 0;
        if ((*puVar13 == 0) || (puVar13 == puVar19)) goto LAB_027a06cc;
        lVar16 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar13 + (lVar16 - (long)puVar19);
        if (lVar16 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
        *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar21 = (int *)(lVar16 + 4);
        while (piVar21[-1] != 0x127ccfd9) {
          piVar21 = piVar21 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_027a06c8;
        }
        iVar12 = 0;
        if (*piVar21 != -1) {
          iVar12 = *piVar21;
        }
        *(int *)(puVar5 + 0x1c) = iVar12;
        if (*puVar13 == 0) break;
      } while( true );
    }
LAB_027a06c8:
    uVar22 = 0;
LAB_027a06cc:
    uVar14 = FUN_0279f560(param_1,param_2,param_3);
    puVar4 = PTR_DAT_04bb2020;
    if ((uVar14 & 1) == 0) {
      lVar16 = *(long *)puVar1;
      (**(code **)(*param_3 + 0x18))(param_3);
      uVar10 = FUN_006bd550(param_3[1],0);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
      puVar19 = (uint *)FUN_00ad5fc0(lVar16 + 0x1960,&local_90);
      puVar5 = PTR_DAT_04bb6428;
      puVar1 = PTR_DAT_04bb6420;
      uVar15 = extraout_w8;
      if (puVar19 != (uint *)0x0) {
        psVar17 = param_1 + 0x620;
        if (*puVar19 != 0) {
          cVar18 = *PTR_DAT_04bb6420;
          do {
            if (cVar18 == '\0') {
              cVar18 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar1 = 1;
              *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar15 = *(uint *)(puVar5 + 0x20);
              if (-1 < (int)uVar15) {
                if (((ushort *)((ulong)uVar15 + (long)puVar19) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)((ulong)uVar15 + (long)puVar19), uVar3 < 0x200)) {
                  psVar17 = (short *)((long)psVar17 + (ulong)uVar3);
                }
                break;
              }
              if (uVar15 != 0xffffffff) break;
            }
            puVar20 = (uint *)(ulong)*puVar19;
            if ((*puVar19 == 0) || (puVar19 == puVar20)) break;
            lVar16 = 0xc;
            if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar19 + (lVar16 - (long)puVar20);
            if (lVar16 == 0) break;
            uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
            *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
            if (uVar14 == 0) break;
            piVar21 = (int *)(lVar16 + 4);
            while (piVar21[-1] != 0x54706054) {
              piVar21 = piVar21 + 2;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) goto LAB_027a09cc;
            }
            iVar12 = 0;
            if (*piVar21 != -1) {
              iVar12 = *piVar21;
            }
            *(int *)(puVar5 + 0x20) = iVar12;
            if (*puVar19 == 0) break;
          } while( true );
        }
LAB_027a09cc:
        uVar15 = (uint)((char)*psVar17 != '\0');
      }
      iVar12 = uVar22 << (ulong)(puVar19 != (uint *)0x0 & uVar15);
    }
    else {
      lVar16 = *(long *)puVar1;
      iVar12 = uVar22 * 5;
      (**(code **)(*param_3 + 0x18))(param_3);
      uVar10 = FUN_006bd550(param_3[1],0);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
      puVar19 = (uint *)FUN_00ad5fc0(lVar16 + 0x1960,&local_90);
      if (puVar19 != (uint *)0x0) {
        uVar24 = *(undefined8 *)PTR_DAT_04bb32f0;
        local_90 = puVar4 + 0x10;
        pcStack_88 = "EarthDay";
        local_b8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)((ulong)local_b8 >> 0x20) < '\x05') {
          lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
          local_a8 = (undefined *)(lVar16 + -0x15180);
          local_b8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
        }
        uVar7 = (ulong)local_b8;
        uVar14 = (ulong)local_b8 >> 0x30;
        local_b8._0_6_ = CONCAT24(5,(undefined4)local_b8);
        local_b8 = (undefined *)(CONCAT26((short)uVar14,(undefined6)local_b8) & 0xff00ffffffffffff);
        uVar14 = FUN_00879dd0(uVar24,&local_90,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
        puVar5 = PTR_DAT_04bb6428;
        puVar1 = PTR_DAT_04bb6420;
        if ((uVar14 & 1) != 0) {
          uVar22 = *puVar19;
          psVar17 = param_1 + 0x2a54;
          if (uVar22 != 0) {
            cVar18 = *PTR_DAT_04bb6420;
            do {
              if (cVar18 == '\0') {
                cVar18 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar1 = 1;
                *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                uVar22 = *puVar19;
              }
              else {
                uVar15 = *(uint *)(puVar5 + 0x20);
                if (-1 < (int)uVar15) {
                  if (((ushort *)((ulong)uVar15 + (long)puVar19) != (ushort *)0x0) &&
                     (uVar3 = *(ushort *)((ulong)uVar15 + (long)puVar19), uVar3 < 0x200)) {
                    psVar17 = (short *)((long)psVar17 + (ulong)uVar3);
                  }
                  break;
                }
                if (uVar15 != 0xffffffff) break;
              }
              puVar20 = (uint *)(ulong)uVar22;
              if ((puVar20 == (uint *)0x0) || (puVar19 == puVar20)) break;
              lVar16 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar20)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar19 + (lVar16 - (long)puVar20);
              if (lVar16 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar20));
              *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar21 = (int *)(lVar16 + 4);
              while (piVar21[-1] != 0x54706054) {
                piVar21 = piVar21 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_027a0a08;
              }
              iVar11 = 0;
              if (*piVar21 != -1) {
                iVar11 = *piVar21;
              }
              *(int *)(puVar5 + 0x20) = iVar11;
              uVar22 = *puVar19;
              if (uVar22 == 0) break;
            } while( true );
          }
LAB_027a0a08:
          if ((char)*psVar17 != '\0') {
            puVar1 = puVar4 + 0x10;
            pcStack_88 = "EarthdayDailyClearNum";
            local_90 = puVar1;
            FUN_0274ca70(param_2,&local_90,1);
            pcStack_88 = "EarthdayDailyClearNum";
            local_90 = puVar1;
            iVar11 = FUN_0274bce0(param_2,&local_90);
            if (0 < iVar11) {
              pcStack_88 = "EarthdayDailyAllClear";
              local_90 = puVar1;
              FUN_0274bfe8(param_2,&local_90,1);
            }
          }
        }
        (**(code **)(*param_3 + 0x18))(param_3);
        (**(code **)(*param_3 + 0x18))(param_3);
        if ((char *)param_3[1] == "EDDIYCorolla") {
LAB_027a0ae0:
          pcStack_88 = "EDDIYCorollaOrderYear";
          local_90 = puVar4 + 0x10;
          uVar9 = FUN_0274bce0(param_2,&local_90);
          pcStack_88 = "EDDIYCorollaClearYear";
          local_90 = puVar4 + 0x10;
          FUN_0274bfe8(param_2,&local_90,uVar9);
        }
        else {
          uVar14 = 0;
          bVar8 = true;
          do {
            cVar18 = ((char *)param_3[1])[uVar14];
            if (cVar18 != "EDDIYCorolla"[uVar14]) break;
            if (cVar18 == '\0') {
              if (bVar8) goto LAB_027a0ae0;
              break;
            }
            bVar8 = uVar14 < 0x80000;
            uVar14 = uVar14 + 1;
          } while (uVar14 != 0x80001);
        }
        (**(code **)(*param_3 + 0x18))(param_3);
        (**(code **)(*param_3 + 0x18))(param_3);
        if ((char *)param_3[1] == "EDDIYFlowerWreath") {
LAB_027a0b84:
          pcStack_88 = "EDDIYFlowerWreathOrderYear";
          local_90 = puVar4 + 0x10;
          uVar9 = FUN_0274bce0(param_2,&local_90);
          pcStack_88 = "EDDIYFlowerWreathClearYear";
          local_90 = puVar4 + 0x10;
          FUN_0274bfe8(param_2,&local_90,uVar9);
        }
        else {
          uVar14 = 0;
          bVar8 = true;
          do {
            cVar18 = ((char *)param_3[1])[uVar14];
            if (cVar18 != "EDDIYFlowerWreath"[uVar14]) break;
            if (cVar18 == '\0') {
              if (bVar8) goto LAB_027a0b84;
              break;
            }
            bVar8 = uVar14 < 0x80000;
            uVar14 = uVar14 + 1;
          } while (uVar14 != 0x80001);
        }
      }
    }
    FUN_027a1814(param_2,iVar12);
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,1);
    local_a8 = puVar4 + 0x10;
    local_a0 = (int)PTR_s_get_mile_daily_04a85988;
    local_9c = (undefined4)((ulong)PTR_s_get_mile_daily_04a85988 >> 0x20);
    FUN_025ffac8(&local_90,&local_a8,param_2);
    puVar6 = PTR_DAT_04bc32d0;
    puVar5 = PTR_DAT_04bb6428;
    puVar1 = PTR_DAT_04bb6420;
    local_a8._4_4_ = 0;
    local_90 = PTR_DAT_04bc32d0 + 0x10;
    local_68 = (undefined4)local_b8;
    psVar17 = param_1 + 0x620;
    if (*puVar13 != 0) {
      cVar18 = *PTR_DAT_04bb6420;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          uVar22 = *puVar13;
        }
        else {
          uVar22 = *(uint *)(puVar5 + 0x20);
          if (-1 < (int)uVar22) {
            if (((ushort *)((ulong)uVar22 + (long)puVar13) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar22 + (long)puVar13), uVar3 < 0x200)) {
              psVar17 = (short *)((long)psVar17 + (ulong)uVar3);
            }
            break;
          }
          if (uVar22 != 0xffffffff) break;
          uVar22 = *puVar13;
        }
        if ((uVar22 == 0) || (puVar19 = (uint *)(ulong)uVar22, puVar13 == puVar19)) break;
        lVar16 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar13 + (lVar16 - (long)puVar19);
        if (lVar16 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
        *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar21 = (int *)(lVar16 + 4);
        while (piVar21[-1] != 0x54706054) {
          piVar21 = piVar21 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_027a0d24;
        }
        iVar11 = 0;
        if (*piVar21 != -1) {
          iVar11 = *piVar21;
        }
        *(int *)(puVar5 + 0x20) = iVar11;
        if (*puVar13 == 0) break;
      } while( true );
    }
LAB_027a0d24:
    puVar5 = PTR_DAT_04bb6428;
    puVar1 = PTR_DAT_04bb6420;
    local_9c = CONCAT31((int3)((uint)local_9c >> 8),(char)*psVar17);
    if (*puVar13 == 0) {
LAB_027a0e18:
      local_a8._0_4_ = 0;
    }
    else {
      cVar18 = *PTR_DAT_04bb6420;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar22 = *(uint *)(puVar5 + 0x20);
          if (-1 < (int)uVar22) {
            if ((ushort *)((ulong)uVar22 + (long)puVar13) == (ushort *)0x0) goto LAB_027a0e18;
            local_a8._0_4_ = (uint)*(ushort *)((ulong)uVar22 + (long)puVar13);
            goto LAB_027a0e1c;
          }
          if (uVar22 != 0xffffffff) goto LAB_027a0e18;
        }
        puVar19 = (uint *)(ulong)*puVar13;
        local_a8._0_4_ = 0;
        if ((*puVar13 == 0) || (puVar13 == puVar19)) goto LAB_027a0e1c;
        lVar16 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar13 + (lVar16 - (long)puVar19);
        if (lVar16 == 0) goto LAB_027a0e18;
        uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
        *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
        local_a8._0_4_ = 0;
        if (uVar14 == 0) goto LAB_027a0e1c;
        piVar21 = (int *)(lVar16 + 4);
        while (piVar21[-1] != 0x54706054) {
          piVar21 = piVar21 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            local_a8._0_4_ = 0;
            goto LAB_027a0e1c;
          }
        }
        iVar11 = 0;
        if (*piVar21 != -1) {
          iVar11 = *piVar21;
        }
        *(int *)(puVar5 + 0x20) = iVar11;
      } while (*puVar13 != 0);
      local_a8._0_4_ = 0;
    }
LAB_027a0e1c:
    uVar22 = *(uint *)(param_1 + 0x2a4c);
    local_98 = 0;
    if ((*(byte *)((long)param_1 + 0x549f) != 0 ||
         (((ulong)uVar22 != 0 || param_1[0x2a4e] != 0) || *(byte *)(param_1 + 0x2a4f) != 0)) &&
       ((uint)*(byte *)((long)param_1 + 0x549f) ==
        ((uVar22 + (uVar22 >> 0x10) + (uVar22 >> 0x18) + (uVar22 >> 8)) - 0x2d & 0xff))) {
      lVar16 = (ulong)uVar22 << ((ulong)(0x1d - *(byte *)(param_1 + 0x2a4f)) & 0x3f);
      local_98 = ((int)lVar16 - (uint)(ushort)param_1[0x2a4e]) + (int)((ulong)lVar16 >> 0x20) +
                 -0x7f1cd4ef;
    }
    local_a0 = iVar12;
    FUN_025a1d7c(&local_90,&local_a8);
    pcStack_b0 = "AchieveAppQuest";
    local_b8 = puVar4 + 0x10;
    FUN_0279a9f0(param_2,&local_b8,1);
    (**(code **)(*param_3 + 0x18))(param_3);
    (**(code **)(*param_3 + 0x18))(param_3);
    if ((char *)param_3[1] == "TalkVillager") {
LAB_027a0f30:
      pcStack_b0 = "TalkVillagerClearToday";
      local_b8 = puVar4 + 0x10;
      FUN_0274bfe8(param_2,&local_b8,1);
    }
    else {
      uVar14 = 0;
      bVar8 = true;
      do {
        cVar18 = ((char *)param_3[1])[uVar14];
        if (cVar18 != "TalkVillager"[uVar14]) break;
        if (cVar18 == '\0') {
          if (bVar8) goto LAB_027a0f30;
          break;
        }
        bVar8 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
    }
    local_90 = puVar6 + 0x10;
    iVar12 = FUN_025a1ff0(&local_90);
    if (((iVar12 == -1) ||
        (local_a8._0_4_ = (**(code **)(local_90 + 0x20))(&local_90), 0xc < (int)(uint)local_a8)) &&
       (local_6c == 0)) {
      local_6c = 1;
    }
    FUN_02601530(&local_90);
  }
  return;
}

