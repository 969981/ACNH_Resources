
ulong FUN_0088b820(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  char cVar9;
  short *psVar10;
  undefined *puVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined8 local_70;
  long local_68;
  
  FUN_0088a148(auStack_80);
  puVar3 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(auStack_80);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (puVar6 = (uint *)FUN_0088a2d0(param_1,auStack_80), puVar6 != (uint *)0x0)) {
      psVar10 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*psVar10 == 0) {
        local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = local_68 + -0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        uVar8 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar8,(undefined6)local_70) & 0xff00ffffffffffff;
        psVar10 = (short *)&local_70;
      }
      local_78 = *(ulong *)psVar10;
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_68 = local_68 + -0x83d600;
      local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      puVar3 = PTR_DAT_04bb57b8;
      iVar17 = 0;
      do {
        uVar8 = local_78;
        if (*puVar6 != 0) {
          cVar9 = DAT_04cea088;
          do {
            puVar11 = PTR_DAT_04bb57b0;
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar11 = 1;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar4 = *(uint *)(puVar3 + 0x1c);
              if (-1 < (int)uVar4) {
                puVar11 = (undefined *)((ulong)uVar4 + (long)puVar6);
                goto LAB_0088ba34;
              }
              if (uVar4 != 0xffffffff) break;
            }
            puVar12 = (uint *)(ulong)*puVar6;
            puVar11 = (undefined *)0x0;
            if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_0088ba34;
            lVar14 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar6 + (lVar14 - (long)puVar12);
            if (lVar14 == 0) break;
            uVar15 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
            *(undefined4 *)(puVar3 + 0x1c) = 0xfffffffe;
            puVar11 = (undefined *)0x0;
            if (uVar15 == 0) goto LAB_0088ba34;
            piVar13 = (int *)(lVar14 + 4);
            while (piVar13[-1] != -0x41d928f2) {
              piVar13 = piVar13 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                puVar11 = (undefined *)0x0;
                goto LAB_0088ba34;
              }
            }
            iVar1 = 0;
            if (*piVar13 != -1) {
              iVar1 = *piVar13;
            }
            *(int *)(puVar3 + 0x1c) = iVar1;
          } while (*puVar6 != 0);
        }
        puVar11 = (undefined *)0x0;
LAB_0088ba34:
        uVar15 = local_78 >> 0x10;
        uVar16 = local_78 >> 0x18;
        puVar2 = PTR_DAT_04c47d00;
        if (puVar11 != (undefined *)0x0) {
          puVar2 = puVar11;
        }
        uVar5 = FUN_006bd550(puVar2,0);
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        uVar7 = FUN_0088c0d0(param_1 + 8,&local_68);
        uVar8 = FUN_00875c10(param_1,uVar7,uVar8 & 0xffffffff,uVar15 & 0xffffffff,
                             uVar16 & 0xffffffff);
        if ((uVar8 & 1) != 0) {
          return local_78;
        }
        local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
        local_68 = local_68 + 0x15180;
        param_3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        iVar17 = iVar17 + 1;
        local_78 = param_3;
      } while (iVar17 != 0x16d);
    }
  }
  return param_3;
}

