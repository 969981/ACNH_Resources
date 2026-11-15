
void FUN_0204a4d8(uint *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  uint *puVar10;
  undefined8 local_38;
  long local_18;
  
  puVar2 = (undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (*(short *)PTR_DAT_04bc3a10 != 0) {
    puVar2 = (undefined8 *)PTR_DAT_04bc3a10;
  }
  puVar10 = (uint *)*puVar2;
  cVar5 = (char)((ulong)puVar10 >> 0x20);
  local_38 = puVar10;
  if (cVar5 < '\x05') {
    local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = local_18 + -0x15180;
    param_1 = (uint *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    local_38 = param_1;
  }
  uVar6 = (ulong)local_38 >> 0x30;
  local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
  local_38 = (uint *)(CONCAT26((short)uVar6,(undefined6)local_38) & 0xff00ffffffffffff);
  iVar9 = (int)((ulong)puVar10 >> 0x20);
  iVar1 = iVar9 + 0x18;
  if ('\x04' < cVar5) {
    iVar1 = iVar9;
  }
  bVar7 = false;
  if ((iVar1 - 0x16U & 0xff) < 3) {
    param_1 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = *param_1 ^ *param_1 << 0xb;
    uVar4 = param_1[3];
    *param_1 = param_1[1];
    param_1[1] = param_1[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    param_1[2] = uVar4;
    param_1[3] = uVar3;
    bVar7 = (uint)((ulong)uVar3 * 100 >> 0x20) < 0x32;
  }
  uVar8 = FUN_0204a5e4(param_1,bVar7);
  FUN_0204a8c8(uVar8,bVar7);
  return;
}

