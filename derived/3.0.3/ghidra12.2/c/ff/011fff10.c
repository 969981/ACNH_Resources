
/* WARNING: Removing unreachable block (ram,0x011fff74) */

void FUN_011fff10(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  undefined4 local_2080;
  undefined4 uStack_207c;
  undefined1 auStack_2078 [8];
  undefined *local_2070;
  int local_2068;
  uint uStack_2064;
  uint local_2058 [1024];
  undefined8 local_1058;
  undefined4 local_1050;
  undefined4 local_104c;
  byte local_1048;
  undefined8 local_58;
  
  local_1058 = (undefined *)CONCAT44(local_1058._4_4_,0x13);
  memset(local_2058,0,0x1000);
  lVar5 = 0;
  do {
    puVar3 = (uint *)(param_2 + 0x270c8 + lVar5);
    lVar1 = lVar5 + 8;
    uVar10 = puVar3[1];
    *(uint *)((long)local_2058 + lVar5 + 0x1000) = *puVar3 | *(uint *)((long)local_2058 + lVar5);
    *(uint *)((long)local_2058 + lVar5 + 0x1004) = uVar10 | *(uint *)((long)local_2058 + lVar5 + 4);
    lVar5 = lVar1;
  } while (lVar1 != 0x1000);
  memcpy(local_2058,&local_1058,0x1000);
  uVar13 = 0;
  do {
    if ((local_2058[uVar13 >> 5] >> (ulong)((uint)uVar13 & 0x1f) & 1) != 0) goto LAB_011ffff0;
    uVar10 = (uint)uVar13 + 1;
    uVar13 = (ulong)uVar10;
  } while (uVar10 != 0x8000);
  uVar13 = 0;
LAB_011ffff0:
  iVar12 = 0x8000;
  do {
    if ((local_2058[iVar12 - 1U >> 5] >> (ulong)(iVar12 - 1U & 0x1f) & 1) != 0) break;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  local_1050 = 1;
  local_104c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_1048 = FUN_017baf44();
  local_1048 = local_1048 & 1;
  local_58 = *(ulong *)(param_1 + 0x10);
  local_1058 = PTR_DAT_04bb6268 + 0x10;
  uVar11 = *(undefined8 *)PTR_DAT_04bb30a0;
  if ((char)(local_58 >> 0x20) < '\x05') {
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
    local_2070 = (undefined *)(lVar5 + -0x15180);
    local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_2070);
  }
  uVar7 = local_58 >> 0x10;
  uVar6 = local_58 >> 0x30;
  uVar8 = local_58 >> 0x18;
  local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
  local_58 = CONCAT26((short)uVar6,(undefined6)local_58) & 0xff00ffffffffffff;
  cVar4 = FUN_00a8ae20(uVar11,uVar7,uVar8,6);
  if (iVar12 == (int)uVar13) {
    return;
  }
  puVar2 = PTR_DAT_04bb2010 + 0x10;
LAB_012000f4:
  local_2068 = ((uint)uVar13 & 0xff) << 1;
  uStack_2064 = (int)(uint)uVar13 >> 7 & 0xfffffffe;
  local_2070 = puVar2;
  FUN_01a5033c(&local_58,&local_1058,0,&local_2070,0);
  local_2080 = (undefined4)local_58;
  uStack_207c = local_58._4_4_;
  FUN_01201bc0(auStack_2078,&local_2080,(int)cVar4);
  uVar6 = FUN_0277d7b4(&local_58,auStack_2078);
  if ((uVar6 & 1) == 0) {
    FUN_011f3390(&local_1058,0,auStack_2078,&local_2070);
  }
  if (((param_3 & 1) != 0) && (uVar6 = FUN_0277d7b4(&local_58,auStack_2078), (uVar6 & 1) != 0)) {
    return;
  }
  do {
    uVar10 = (int)uVar13 + 1;
    uVar13 = (ulong)uVar10;
    if (0x7fff < uVar10) {
      uVar10 = 0x7ffe;
      goto LAB_012001a4;
    }
  } while ((local_2058[uVar10 >> 5] >> (ulong)(uVar10 & 0x1f) & 1) == 0);
  goto LAB_012000ec;
  while (uVar10 = uVar10 - 2, uVar10 != 0xfffffffe) {
LAB_012001a4:
    uVar9 = uVar10 + 1;
    if (((local_2058[uVar9 >> 5] >> (ulong)(uVar9 & 0x1f) & 1) != 0) ||
       (uVar9 = uVar10, (local_2058[uVar10 >> 5] >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
      uVar13 = (ulong)(uVar9 + 1);
      goto LAB_012000ec;
    }
  }
  uVar13 = 0;
LAB_012000ec:
  if (iVar12 == (int)uVar13) {
    return;
  }
  goto LAB_012000f4;
}

