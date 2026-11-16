
void FUN_0287ab10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  int iVar21;
  uint uVar22;
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_78 = 0x33ab;
  FUN_0277d4ac(&local_78);
  puVar8 = PTR_DAT_04bb43c0;
  bVar6 = false;
  iVar21 = 0;
  uVar22 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar18 = *(long *)puVar8;
    puVar3 = (undefined2 *)(param_1 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
    uVar9 = FUN_0277d6c4(puVar3);
    lVar16 = *(long *)puVar8;
    if (lVar16 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_80 = 0;
        local_88 = (char *)CONCAT62(*(undefined6 *)(param_1 + (long)(int)uVar22 * 8 + 2),*puVar3);
        local_90 = puVar2;
        uVar9 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar8 == 0) {
LAB_0287ad1c:
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x4f);
          uVar9 = 0xbc;
        }
        else {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0287ad1c;
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(puVar3);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
             (puVar13 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar13 == (uint *)0x0)) goto LAB_0287ad1c;
          uVar9 = 0;
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x4f);
          uVar4 = *puVar13;
          if ((uVar4 != 0) && (puVar13 != (uint *)(ulong)uVar4)) {
            puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
            uVar9 = 0;
            if (*puVar14 != 0) {
              uVar9 = puVar14[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar14 + lVar16 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar16 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar13 - lVar16) / (ulong)uVar9);
                  }
                  if (*puVar14 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar9 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                     uVar9 < 0xbd)) goto LAB_0287ad28;
                }
              }
              uVar9 = 0;
            }
          }
        }
LAB_0287ad28:
        local_68 = CONCAT44(local_68._4_4_,uVar9);
        if (uVar9 == (uint)local_a0) {
          iVar21 = iVar21 + 1;
        }
      }
    }
    uVar10 = FUN_0277d7b4(puVar3,&local_78);
    if ((uVar10 & 1) != 0) {
      uVar15 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      uVar17 = uVar15 >> 0x10;
      uVar19 = uVar15 >> 0x18;
      uVar10 = uVar15 & 0xffffffff;
      uVar20 = *(undefined8 *)PTR_DAT_04bb32f0;
      cVar5 = (char)(uVar15 >> 0x20);
      uVar12 = uVar19 & 0xffffffff;
      uVar11 = uVar17 & 0xffffffff;
      local_88 = "Halloween";
      local_90 = puVar1;
      local_68 = uVar15;
      if (cVar5 < '\x05') {
        lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_a0 = (undefined *)(lVar16 + -0x15180);
        uVar10 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
        uVar11 = uVar10 >> 0x10;
        uVar12 = uVar10 >> 0x18;
        local_68 = uVar10;
      }
      uVar7 = local_68 >> 0x30;
      local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
      local_68 = CONCAT26((short)uVar7,(undefined6)local_68) & 0xff00ffffffffffff;
      uVar10 = FUN_0087a8f0(uVar20,&local_90,uVar10,uVar11,uVar12,0);
      if ((uVar10 & 1) == 0) {
        uVar20 = *(undefined8 *)PTR_DAT_04bb32f0;
        local_a0 = PTR_DAT_04bb2020 + 0x10;
        pcStack_98 = "Halloween";
        local_70 = uVar15;
        if (cVar5 < '\x05') {
          lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = lVar16 - 0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
          uVar15 = local_70 & 0xffffffff;
          uVar17 = local_70 >> 0x10;
          uVar19 = local_70 >> 0x18;
        }
        uVar10 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar10,(undefined6)local_70) & 0xff00ffffffffffff;
        uVar10 = FUN_0087b260(uVar20,&local_a0,uVar15 & 0xffffffff,uVar17 & 0xffffffff,
                              uVar19 & 0xffffffff,0);
        if ((uVar10 & 1) == 0) goto LAB_0287ab8c;
      }
      iVar21 = iVar21 + -1;
      bVar6 = true;
    }
LAB_0287ab8c:
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x20);
  if (iVar21 < 1) {
    if (bVar6) {
      uVar22 = 0;
      do {
        puVar3 = (undefined2 *)(param_1 + ((long)((ulong)uVar22 << 0x20) >> 0x1d));
        uVar10 = FUN_0277d7b4(puVar3,&local_78);
        puVar1 = PTR_DAT_04bb37e0;
        if ((uVar10 & 1) != 0) {
          lVar16 = param_1 + (long)(int)uVar22 * 8;
          *puVar3 = *(undefined2 *)PTR_DAT_04bb37e0;
          *(undefined *)(lVar16 + 2) = puVar1[2];
          *(undefined *)(lVar16 + 3) = puVar1[3];
          *(undefined4 *)(lVar16 + 4) = *(undefined4 *)(puVar1 + 4);
          break;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != 0x20);
    }
    FUN_028791b0(param_1);
  }
  return;
}

