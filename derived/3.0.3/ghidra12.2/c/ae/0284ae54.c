
void FUN_0284ae54(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_40;
  ulong local_38;
  
  if (*(char *)(param_1 + 0x2f) != '\x02') {
    return;
  }
  if (*(char *)(param_1 + 0x2e) == '\x02') {
    local_38 = *(ulong *)(param_1 + 0x24);
    if ((local_38 & 0xffff) != 0) {
      lVar8 = *(long *)PTR_DAT_04bb32e8;
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar8 + 0x4060));
      if ((lVar5 <= lVar6) &&
         (lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar8 + 0x4060)), lVar6 != lVar5))
      goto LAB_0284b080;
    }
    local_40 = *(undefined8 *)(param_1 + 0x1c);
    if ((char)(local_40 >> 0x20) < '\x05') {
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      local_38 = lVar5 - 0x15180;
      local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar7 = local_40 >> 0x30;
    local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
    local_40 = CONCAT26((short)uVar7,(undefined6)local_40) & 0xff00ffffffffffff;
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = lVar5 + 0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    uVar7 = FUN_00a80d84(&local_40,1);
    if ((uVar7 & 1) != 0) {
      bVar3 = *(byte *)(param_1 + 0x2c);
      uVar11 = (uint)(char)bVar3;
      if ((bVar3 < 10) && ((&DAT_053fee41)[(ulong)uVar11 * 0xba0] != '\0')) {
        cVar4 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
        uVar12 = (int)cVar4 + 0x18;
        if (4 < cVar4) {
          uVar12 = (int)cVar4;
        }
        if (((1 < *(uint *)(&DAT_053fec08 + (ulong)uVar11 * 0xba0)) &&
            (lVar5 = *(long *)((&DAT_053fec00)[(ulong)uVar11 * 0x174] + 8), lVar5 != 0)) &&
           ((byte *)(lVar5 + -0x10) != (byte *)0x0)) {
          bVar1 = *(byte *)(lVar5 + -0x10);
          uVar12 = uVar12 & 0xff;
          uVar10 = (uint)bVar1;
          bVar2 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
          if (uVar10 <= uVar12 && uVar12 != bVar1) {
            return;
          }
          if (bVar2 == *(byte *)(lVar5 + -0xf) && uVar12 == uVar10) {
            return;
          }
          if (*(byte *)(lVar5 + -0xf) < bVar2 && uVar12 == uVar10) {
            return;
          }
        }
      }
      puVar9 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
      uVar12 = (uint)(char)bVar3;
      if (9 < bVar3) {
        puVar9 = &DAT_053fe348;
      }
      puVar9 = puVar9 + 0x8b0;
      FUN_0214ee50(puVar9,uVar11);
      FUN_0214d690(puVar9,uVar12,0,0);
      uVar7 = FUN_02152f30(puVar9);
      if ((uVar7 & 1) != 0) {
        local_38 = local_38 & 0xffffffff00000000;
        if ((bVar3 < 10) && ((&DAT_053fee41)[(ulong)uVar12 * 0xba0] != '\0')) {
          FUN_01e2caf8(*(long *)PTR_DAT_04bb3968 + 0xda0,&DAT_053fe850 + (ulong)uVar12 * 0xba0,1,
                       &local_38,0,0);
        }
      }
    }
  }
LAB_0284b080:
  *(undefined1 *)(param_1 + 0x35) = 1;
  return;
}

