
undefined8 FUN_028b4bc0(long param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined *local_80;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  piVar12 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar12 == 0) {
    local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_80 = (undefined *)(lVar10 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    piVar12 = (int *)&local_68;
    uVar6 = local_68 >> 0x30;
    local_68._0_6_ = CONCAT24(5,(int)local_68);
    local_68 = CONCAT26((short)uVar6,(undefined6)local_68) & 0xff00ffffffffffff;
  }
  iVar4 = *piVar12;
  uVar9 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
  puVar8 = PTR_DAT_04bc0428;
  puVar7 = PTR_DAT_04bb43c0;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar9);
  uVar14 = 0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  lVar10 = param_1 + (ulong)uVar9 * 0x200;
  if (6 < uVar9) {
    lVar10 = param_1;
  }
  do {
    puVar2 = (undefined2 *)(lVar10 + ((long)((ulong)uVar14 << 0x20) >> 0x1d));
    uVar9 = FUN_0277d6c4(puVar2);
    lVar16 = *(long *)puVar7;
    if (lVar16 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_78 = *puVar2;
        lVar15 = lVar10 + (long)(int)uVar14 * 8;
        local_70 = 0;
        local_76 = *(undefined2 *)(lVar15 + 2);
        local_74 = *(undefined4 *)(lVar15 + 4);
        local_80 = puVar1;
        uVar9 = FUN_0277d6c4(&local_78);
        lVar15 = *(long *)puVar7;
        if (lVar15 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar16 = *(long *)puVar8;
            uVar9 = FUN_0277d6c4(puVar2);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            lVar15 = *(long *)puVar7;
            if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
               (((puVar11 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar11 != (uint *)0x0 && (uVar9 = *puVar11, uVar9 != 0)) &&
                (puVar11 != (uint *)(ulong)uVar9)))) {
              puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
              if (((*puVar13 != 0) && (uVar9 = puVar13[1], uVar9 != 0)) &&
                 ((ulong)(ushort)puVar13[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar16 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar11 - lVar16) / (ulong)uVar9);
                  }
                  if (*puVar13 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if (((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                      (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                      uVar5 < 0xbd)) && (uVar5 == 0x14)) {
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
      else {
        lVar15 = lVar16;
      }
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == 0x40) {
      return 0;
    }
  } while( true );
}

