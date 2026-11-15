
void FUN_021ac130(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  uint uVar14;
  char cVar15;
  char cVar16;
  uint *puVar17;
  int *piVar18;
  undefined *local_58;
  char *pcStack_50;
  ulong local_48;
  
  puVar6 = PTR_DAT_04bb3968;
  puVar1 = (uint *)(param_1 + 0x92c0);
  uVar14 = *puVar1;
  if (uVar14 != 0xffffffff) {
    lVar12 = *(long *)PTR_DAT_04bb2208;
    lVar3 = param_1 + (ulong)uVar14 * 0xba0;
    if (9 < uVar14) {
      lVar3 = param_1;
    }
    uVar9 = FUN_006bd550("PlayerBirthdayCall",0);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar9);
    puVar10 = (uint *)FUN_021cb820(lVar12 + 0x660,&local_58);
    puVar8 = PTR_DAT_04bb6380;
    puVar7 = PTR_DAT_04bb6378;
    if (puVar10 != (uint *)0x0) {
      puVar13 = (undefined1 *)(lVar3 + 0x818);
      if (*puVar10 != 0) {
        cVar16 = *PTR_DAT_04bb6378;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            uVar14 = *puVar10;
          }
          else {
            uVar14 = *(uint *)(puVar8 + 8);
            if (-1 < (int)uVar14) {
              if (((ushort *)((ulong)uVar14 + (long)puVar10) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar14 + (long)puVar10), uVar4 < 0x80)) {
                puVar13 = puVar13 + uVar4;
              }
              break;
            }
            if (uVar14 != 0xffffffff) break;
            uVar14 = *puVar10;
          }
          if ((uVar14 == 0) || (puVar17 = (uint *)(ulong)uVar14, puVar10 == puVar17)) break;
          lVar3 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar17)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar10 + (lVar3 - (long)puVar17);
          if (lVar3 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar17));
          *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar18 = (int *)(lVar3 + 4);
          while (piVar18[-1] != 0x54706054) {
            piVar18 = piVar18 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_021ac2a4;
          }
          iVar2 = 0;
          if (*piVar18 != -1) {
            iVar2 = *piVar18;
          }
          *(int *)(puVar8 + 8) = iVar2;
          if (*puVar10 == 0) break;
        } while( true );
      }
LAB_021ac2a4:
      *puVar13 = 0;
    }
    uVar14 = *puVar1;
    if (uVar14 != 0xffffffff) {
      lVar3 = param_1 + (ulong)uVar14 * 0xba0;
      if (9 < uVar14) {
        lVar3 = param_1;
      }
      lVar12 = *(long *)(lVar3 + 0xaa0);
      if (((*(uint *)(lVar12 + 4) & 0xfffffffe) == 0x10) &&
         ((*(uint *)(lVar3 + 0xa94) & 0xfffffffe) == 0x10)) {
        *(undefined1 *)(lVar3 + 0xa99) = 1;
        uVar11 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        local_48 = uVar11;
        if ((uVar11 & 0xffff) != 0) {
          lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          local_58 = (undefined *)(lVar12 + -0x3c);
          uVar11 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
          lVar12 = *(long *)(lVar3 + 0xaa0);
        }
        cVar15 = (char)(uVar11 >> 0x20);
        uVar5 = (undefined1)(uVar11 >> 0x28);
        *(undefined1 *)(lVar3 + 0xa93) = uVar5;
        cVar16 = cVar15 + '\x18';
        if ('\x04' < cVar15) {
          cVar16 = cVar15;
        }
        *(char *)(lVar3 + 0xa92) = cVar16;
        if (lVar12 == lVar3 + 0xa90) {
          *(char *)(lVar3 + 0xaa8) = cVar16;
          *(undefined1 *)(lVar3 + 0xaa9) = uVar5;
        }
        uVar14 = *puVar1;
      }
      lVar3 = param_1 + (ulong)uVar14 * 0xba0;
      if (9 < uVar14) {
        lVar3 = param_1;
      }
      uVar11 = (ulong)*(byte *)(lVar3 + 0xaf8);
      local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
      if ((uVar11 < 10) && ((&DAT_053fee41)[uVar11 * 0xba0] != '\0')) {
        FUN_01e2caf8(*(long *)puVar6 + 0xda0,&DAT_053fe850 + uVar11 * 0xba0,1,&local_58,0,0);
      }
    }
  }
  uVar14 = *(uint *)(param_1 + 0x92c4);
  if (uVar14 != 0xffffffff) {
    lVar3 = param_1 + (ulong)uVar14 * 0xba0;
    if (9 < uVar14) {
      lVar3 = param_1;
    }
    lVar12 = *(long *)(lVar3 + 0xaa0);
    if (((*(uint *)(lVar12 + 4) & 0xfffffffe) == 0x10) &&
       ((*(uint *)(lVar3 + 0xa94) & 0xfffffffe) == 0x10)) {
      *(undefined1 *)(lVar3 + 0xa99) = 1;
      uVar11 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_48 = uVar11;
      if ((uVar11 & 0xffff) != 0) {
        lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_58 = (undefined *)(lVar12 + -0x3c);
        uVar11 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
        lVar12 = *(long *)(lVar3 + 0xaa0);
      }
      cVar15 = (char)(uVar11 >> 0x20);
      uVar5 = (undefined1)(uVar11 >> 0x28);
      *(undefined1 *)(lVar3 + 0xa93) = uVar5;
      cVar16 = cVar15 + '\x18';
      if ('\x04' < cVar15) {
        cVar16 = cVar15;
      }
      *(char *)(lVar3 + 0xa92) = cVar16;
      if (lVar12 == lVar3 + 0xa90) {
        *(char *)(lVar3 + 0xaa8) = cVar16;
        *(undefined1 *)(lVar3 + 0xaa9) = uVar5;
      }
      uVar14 = *(uint *)(param_1 + 0x92c4);
    }
    lVar3 = param_1 + (ulong)uVar14 * 0xba0;
    if (9 < uVar14) {
      lVar3 = param_1;
    }
    uVar11 = (ulong)*(byte *)(lVar3 + 0xaf8);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
    if ((uVar11 < 10) && ((&DAT_053fee41)[uVar11 * 0xba0] != '\0')) {
      FUN_01e2caf8(*(long *)puVar6 + 0xda0,&DAT_053fe850 + uVar11 * 0xba0,1,&local_58,0,0);
    }
  }
  uVar14 = *(uint *)(param_1 + 0x92c8);
  if (uVar14 != 0xffffffff) {
    lVar3 = param_1 + (ulong)uVar14 * 0xba0;
    if (9 < uVar14) {
      lVar3 = param_1;
    }
    lVar12 = *(long *)(lVar3 + 0xaa0);
    if (((*(uint *)(lVar12 + 4) & 0xfffffffe) == 0x10) &&
       ((*(uint *)(lVar3 + 0xa94) & 0xfffffffe) == 0x10)) {
      *(undefined1 *)(lVar3 + 0xa99) = 1;
      uVar11 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_48 = uVar11;
      if ((uVar11 & 0xffff) != 0) {
        lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_58 = (undefined *)(lVar12 + -0x3c);
        uVar11 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
        lVar12 = *(long *)(lVar3 + 0xaa0);
      }
      cVar15 = (char)(uVar11 >> 0x20);
      uVar5 = (undefined1)(uVar11 >> 0x28);
      *(undefined1 *)(lVar3 + 0xa93) = uVar5;
      cVar16 = cVar15 + '\x18';
      if ('\x04' < cVar15) {
        cVar16 = cVar15;
      }
      *(char *)(lVar3 + 0xa92) = cVar16;
      if (lVar12 == lVar3 + 0xa90) {
        *(char *)(lVar3 + 0xaa8) = cVar16;
        *(undefined1 *)(lVar3 + 0xaa9) = uVar5;
      }
      uVar14 = *(uint *)(param_1 + 0x92c8);
    }
    lVar3 = param_1 + (ulong)uVar14 * 0xba0;
    if (9 < uVar14) {
      lVar3 = param_1;
    }
    uVar11 = (ulong)*(byte *)(lVar3 + 0xaf8);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
    if ((uVar11 < 10) && ((&DAT_053fee41)[uVar11 * 0xba0] != '\0')) {
      FUN_01e2caf8(*(long *)puVar6 + 0xda0,&DAT_053fe850 + uVar11 * 0xba0,1,&local_58,0,0);
    }
  }
  puVar1[0] = 0xffffffff;
  puVar6 = PTR_DAT_04bb2020;
  puVar1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92c8) = 0xffffffff;
  local_58 = puVar6 + 0x10;
  pcStack_50 = "InPlayerBirthday";
  FUN_02743234(&local_58,0);
  *(undefined8 *)(param_1 + 0x92f0) = 0;
  *(undefined4 *)(param_1 + 0x92e4) = 0xffffffff;
  return;
}

