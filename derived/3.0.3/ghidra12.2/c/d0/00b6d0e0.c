
void FUN_00b6d0e0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined *local_78 [4];
  int local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_34;
  
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar9 = 0;
    cVar2 = DAT_00000028;
  }
  else {
    lVar9 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    cVar2 = *(char *)(lVar9 + 0x28);
  }
  if (cVar2 == '\0') {
    bVar3 = 1;
  }
  else {
    bVar3 = (**(code **)(*(long *)(lVar9 + 0x20) + 0x18))((long *)(lVar9 + 0x20));
    *(undefined1 *)(lVar9 + 0x28) = 0;
  }
  *(byte *)(lVar9 + 0x29) = bVar3 & 1;
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(lVar9 + 0x2c);
  if (*(long *)puVar1 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  local_34 = 2;
  puVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  local_40 = PTR_s_calendar_birthday_present_npc_04a854b8;
  local_48 = PTR_DAT_04bb2020 + 0x10;
  FUN_025ffac8(local_78,&local_48,puVar1);
  local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000);
  puVar1 = PTR_DAT_04bc3250 + 0x10;
  local_50 = local_34;
  local_40 = (undefined *)0xfffe;
  local_78[0] = puVar1;
  FUN_0277d4ac(&local_40);
  local_40 = *(undefined **)(lVar9 + 0x2c);
  local_48._4_4_ = (int)plVar8[0xa1];
  FUN_0259009c(local_78,&local_48);
  local_78[0] = puVar1;
  iVar5 = FUN_02590548(local_78);
  if (((iVar5 == -1) ||
      (local_48._0_4_ = (**(code **)(local_78[0] + 0x20))(local_78), 0xc < (int)local_48)) &&
     (local_54 == 0)) {
    local_54 = 1;
  }
  FUN_02601530(local_78);
  return;
}

