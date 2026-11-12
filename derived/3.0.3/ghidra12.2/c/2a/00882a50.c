
bool FUN_00882a50(undefined8 param_1,ulong *param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  uint uVar16;
  byte local_74 [4];
  undefined8 local_70;
  long local_68;
  
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  if (lVar15 == 0) {
    pbVar14 = &DAT_0548e140;
LAB_00882ad4:
    if (7 < *pbVar14) {
LAB_00882ae0:
      if (DAT_0537d558 != (long *)0x0) {
        lVar15 = *DAT_0537d558;
        bVar3 = *(byte *)(lVar15 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar14 = (byte *)(lVar15 + 0x471);
          }
        }
        local_74[0] = *pbVar14;
        if (local_74[0] < 8) goto LAB_00882b50;
      }
      pbVar14 = &DAT_0548e168;
    }
  }
  else {
    pbVar14 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar14 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_00882ad4;
      }
      goto LAB_00882ae0;
    }
  }
  local_74[0] = *pbVar14;
  if (7 < local_74[0]) {
    local_74[0] = 0xff;
  }
LAB_00882b50:
  if (7 < local_74[0]) {
    local_74[0] = 0xff;
  }
  bVar10 = true;
  lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_74,1);
  puVar6 = PTR_DAT_04bb46b0;
  uVar16 = 0;
  do {
    lVar11 = *(long *)puVar6;
    if ((lVar11 != 0) && (lVar11 = FUN_026eec4c(lVar11,uVar16), lVar11 != 0 && lVar11 != lVar15)) {
      local_70 = *param_2;
      if ((char)(local_70 >> 0x20) < '\x05') {
        local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_68 = local_68 + -0x15180;
        local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      uVar8 = local_70;
      lVar11 = *(long *)puVar6;
      uVar7 = (uint)local_70;
      local_70._7_1_ = SUB81(uVar8,7);
      local_70._0_7_ = (uint7)CONCAT24(5,(uint)local_70);
      if ((lVar11 != 0) && (lVar11 = FUN_026eec4c(lVar11,uVar16), lVar11 != 0)) {
        if (*(long **)(lVar11 + 0x18390) == (long *)0x0) {
          uVar13 = 0;
        }
        else {
          puVar12 = (undefined8 *)**(long **)(lVar11 + 0x18390);
          uVar13 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            uVar13 = (**(code **)*puVar12)();
          }
        }
        pbVar14 = (byte *)(*(long *)(lVar11 + 0x18378) + *(long *)(lVar11 + 0x18370));
        bVar3 = *pbVar14;
        if ((bVar3 - 1 < 0xc) &&
           (bVar2 = pbVar14[1], (byte)(bVar2 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
          uVar4 = uVar7 >> 0x10 & 0xff;
          uVar5 = (uint)(uVar8 >> 0x18);
          if (((bVar3 == 2) && (bVar2 == 0x1d)) &&
             (((uVar8 & 3) != 0 ||
              ((((uVar7 & 0xffff) * -0x3d70a3d7 >> 2 | uVar7 * 0x40000000) < 0x28f5c29 &&
               ((uVar8 & 0xf) != 0)))))) {
            bVar9 = uVar4 == 2 && (uVar5 & 0xff) == 0x1c;
          }
          else {
            bVar9 = bVar3 == uVar4 && (uint)bVar2 == (uVar5 & 0xff);
          }
        }
        else {
          bVar9 = false;
        }
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar11 + 0x18390) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x18390) + 8),
           puVar12 != (undefined8 *)0x0)) {
          (**(code **)*puVar12)();
        }
        if (bVar9) {
          return bVar10;
        }
      }
    }
    bVar10 = uVar16 < 7;
    uVar16 = uVar16 + 1;
    if (uVar16 == 8) {
      return bVar10;
    }
  } while( true );
}

