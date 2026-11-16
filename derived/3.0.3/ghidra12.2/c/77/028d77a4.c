
void FUN_028d77a4(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined *local_38;
  char *pcStack_30;
  uint local_24;
  undefined8 local_8;
  
  piVar6 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar6 == 0) {
    local_8 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_8 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_8);
      local_38 = (undefined *)(lVar4 + -0x15180);
      local_8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    piVar6 = (int *)&local_8;
    uVar5 = local_8 >> 0x30;
    local_8._0_6_ = CONCAT24(5,(int)local_8);
    local_8 = CONCAT26((short)uVar5,(undefined6)local_8) & 0xff00ffffffffffff;
  }
  iVar2 = *piVar6;
  local_24 = nn::time::GetDayOfWeek((int)(short)iVar2,(iVar2 << 8) >> 0x18,iVar2 >> 0x18);
  uVar5 = (ulong)local_24;
  if (6 < local_24) {
    uVar5 = 0;
  }
  if (*(int *)(param_1 + uVar5 * 4) != 0) {
    uVar5 = (ulong)local_24;
    if (6 < local_24) {
      uVar5 = 0;
    }
    if (*(int *)(param_1 + uVar5 * 4) != 0) {
      uVar5 = (ulong)local_24;
      if (6 < local_24) {
        uVar5 = 0;
      }
      uVar3 = *(uint *)(param_1 + uVar5 * 4);
      if (0xb < uVar3) {
        uVar3 = 0;
      }
      local_8 = CONCAT44(local_8._4_4_,uVar3);
      puVar1 = (undefined1 *)(param_1 + 0x60) + uVar3;
      if (0xd < uVar3) {
        puVar1 = (undefined1 *)(param_1 + 0x60);
      }
      *puVar1 = 1;
    }
    uVar5 = (ulong)local_24;
    if (6 < local_24) {
      uVar5 = 0;
    }
    *(undefined4 *)(param_1 + uVar5 * 4) = 0;
  }
  if (*(uint *)(param_1 + 0x70) == local_24) {
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  if (*(uint *)(param_1 + 0x74) == local_24) {
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "SpnVisitMainField";
  FUN_0273f3c4(&local_38,0);
  return;
}

