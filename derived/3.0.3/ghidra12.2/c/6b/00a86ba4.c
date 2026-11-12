
/* WARNING: Removing unreachable block (ram,0x00a86ccc) */

int FUN_00a86ba4(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined8 local_48;
  long local_28;
  
  if (*(char *)(param_1 + 0x653dd) == '\0') {
    iVar10 = 0;
  }
  else {
    uVar5 = FUN_00a8cc54();
    uVar9 = 0;
    if (*(long *)PTR_DAT_04bb4928 != 0) {
      uVar9 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320;
      if (((uVar9 < DAT_0534e300) &&
          (lVar6 = *(long *)(DAT_0534e308 + (long)(int)uVar9 * 8), lVar6 != 0)) &&
         (puVar7 = (ushort *)FUN_01c560f0(lVar6,4,0x6b3738e0,*(undefined8 *)PTR_DAT_04bc0e70),
         puVar7 != (ushort *)0x0)) {
        uVar9 = (uint)*puVar7;
      }
      else {
        uVar9 = 0;
      }
    }
    cVar4 = (char)(uVar5 >> 0x20);
    local_48 = CONCAT44(local_48._4_4_,uVar9);
    uVar1 = (int)cVar4 + 0x18;
    if (-1 < cVar4) {
      uVar1 = (int)cVar4;
    }
    uVar2 = uVar1 - 0x18;
    if ((int)uVar1 < 0x18) {
      uVar2 = uVar1;
    }
    iVar10 = 0;
    if (((int)uVar9 < *(int *)(param_1 + 0x653a0)) && (uVar2 < 0x18)) {
      local_28._0_4_ = uVar9;
      piVar8 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                  (long)(int)uVar9 * 8) + 0xd8) +
                                              (ulong)uVar2 * 8) + 0xf0))();
      iVar10 = *piVar8;
      local_28 = CONCAT44(local_28._4_4_,iVar10);
    }
    local_48 = uVar5;
    if (cVar4 < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_28 = local_28 + -0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar3 = local_48;
    uVar5 = local_48 >> 0x30;
    local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
    local_48 = CONCAT26((short)uVar5,(undefined6)local_48) & 0xff00ffffffffffff;
    cVar4 = FUN_00a8ae20(param_1,uVar3 >> 0x10,uVar3 >> 0x18,4);
    if ('\0' < cVar4) {
      if (iVar10 == 4) {
        iVar10 = 6;
      }
      else if (iVar10 == 5) {
        iVar10 = 7;
      }
    }
  }
  return iVar10;
}

