
ulong FUN_0088baf0(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  char cVar9;
  ulong *puVar10;
  short *psVar11;
  undefined *puVar12;
  uint *puVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined8 local_70;
  long local_68;
  
  puVar3 = PTR_DAT_04bb32e8;
  puVar10 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  uVar6 = param_1;
  if (*(short *)puVar10 == 0) {
    local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      uVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      local_70 = uVar6;
    }
    puVar10 = &local_70;
    uVar16 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70 = CONCAT26((short)uVar16,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  uVar16 = *puVar10;
  FUN_0088a148(auStack_80,uVar6,param_2);
  puVar12 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(auStack_80);
  if (*(long *)puVar12 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar15 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (puVar7 = (uint *)FUN_0088a2d0(param_1,auStack_80), puVar7 != (uint *)0x0)) {
      psVar11 = (short *)(*(long *)puVar3 + 0x4068);
      if (*psVar11 == 0) {
        local_70 = *(ulong *)(*(long *)puVar3 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = local_68 + -0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        psVar11 = (short *)&local_70;
        uVar6 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar6,(undefined6)local_70) & 0xff00ffffffffffff;
      }
      uVar16 = FUN_0088b820(param_1,auStack_80,*(undefined8 *)psVar11);
      if ((uVar16 & 0xffff) != 0) {
        local_78 = uVar16;
        local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
        local_68 = local_68 + 0x15180;
        local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        puVar3 = PTR_DAT_04bb57b8;
        iVar18 = 0;
        do {
          uVar6 = local_78;
          if (*puVar7 != 0) {
            cVar9 = DAT_04cea088;
            do {
              puVar12 = PTR_DAT_04bb57b0;
              if (cVar9 == '\0') {
                cVar9 = '\x01';
                *(undefined8 *)puVar3 = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                *puVar12 = 1;
                *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar4 = *(uint *)(puVar3 + 0x1c);
                if (-1 < (int)uVar4) {
                  puVar12 = (undefined *)((ulong)uVar4 + (long)puVar7);
                  goto LAB_0088bd74;
                }
                if (uVar4 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)*puVar7;
              puVar12 = (undefined *)0x0;
              if ((*puVar7 == 0) || (puVar7 == puVar13)) goto LAB_0088bd74;
              lVar15 = 0xc;
              if (*(char *)((long)puVar7 + (10 - (long)puVar13)) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar7 + (lVar15 - (long)puVar13);
              if (lVar15 == 0) break;
              uVar16 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar13));
              *(undefined4 *)(puVar3 + 0x1c) = 0xfffffffe;
              puVar12 = (undefined *)0x0;
              if (uVar16 == 0) goto LAB_0088bd74;
              piVar14 = (int *)(lVar15 + 4);
              while (piVar14[-1] != -0x41d928f2) {
                piVar14 = piVar14 + 2;
                uVar16 = uVar16 - 1;
                if (uVar16 == 0) {
                  puVar12 = (undefined *)0x0;
                  goto LAB_0088bd74;
                }
              }
              iVar1 = 0;
              if (*piVar14 != -1) {
                iVar1 = *piVar14;
              }
              *(int *)(puVar3 + 0x1c) = iVar1;
            } while (*puVar7 != 0);
          }
          puVar12 = (undefined *)0x0;
LAB_0088bd74:
          uVar16 = local_78 >> 0x10;
          uVar17 = local_78 >> 0x18;
          puVar2 = PTR_DAT_04c47d00;
          if (puVar12 != (undefined *)0x0) {
            puVar2 = puVar12;
          }
          uVar5 = FUN_006bd550(puVar2,0);
          local_68 = CONCAT44(local_68._4_4_,uVar5);
          uVar8 = FUN_0088c0d0(param_1 + 8,&local_68);
          uVar6 = FUN_00875c10(param_1,uVar8,uVar6 & 0xffffffff,uVar16 & 0xffffffff,
                               uVar17 & 0xffffffff);
          if ((uVar6 & 1) == 0) {
            local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
            local_68 = local_68 + -0x15180;
            uVar16 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
            break;
          }
          local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
          local_68 = local_68 + 0x15180;
          uVar16 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
          iVar18 = iVar18 + 1;
          local_78 = uVar16;
        } while (iVar18 != 0x16d);
      }
    }
  }
  return uVar16;
}

