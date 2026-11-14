
void FUN_0169821c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_40;
  long local_38;
  
  lVar4 = DAT_05234ef0;
  lVar1 = DAT_05234ef0 + 0x10;
  *(undefined8 *)(DAT_05234ef0 + 8) = *(undefined8 *)(param_1 + 0x10);
  FUN_01697ecc(lVar1);
  FUN_01697ecc(lVar4 + 0x170);
  FUN_01697ecc(lVar4 + 0x2d0);
  FUN_01697ecc(lVar4 + 0x430);
  FUN_01697ecc(lVar4 + 0x590);
  FUN_01697ecc(lVar4 + 0x6f0);
  FUN_01697ecc(lVar4 + 0x850);
  FUN_01697ecc(lVar4 + 0x9b0);
  lVar1 = DAT_05234ef0;
  puVar3 = PTR_DAT_04bb30a0;
  *(undefined2 *)(DAT_05234ef0 + 0xb10) = 2;
  local_40 = *(ulong *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)puVar3;
  if ((char)(local_40 >> 0x20) < '\x05') {
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = local_38 + -0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
  }
  uVar6 = local_40 >> 0x10;
  uVar2 = local_40 >> 0x30;
  uVar7 = local_40 >> 0x18;
  local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
  local_40 = CONCAT26((short)uVar2,(undefined6)local_40) & 0xff00ffffffffffff;
  cVar5 = FUN_00a8ae20(uVar8,uVar6,uVar7);
  if ((uint)(int)cVar5 < 4) {
    *(ushort *)(lVar1 + 0xb10) =
         *(ushort *)(lVar1 + 0xb10) |
         (ushort)(0x20001000080004 >> (((ulong)(uint)(int)cVar5 & 3) << 4));
  }
  *(undefined1 *)(DAT_05234ef0 + 0xb28) = 0;
  return;
}

