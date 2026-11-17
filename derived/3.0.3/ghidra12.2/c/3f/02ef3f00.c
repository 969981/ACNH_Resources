
long * FUN_02ef3f00(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_3c [4];
  int local_38;
  int local_34;
  
  lVar3 = *(long *)PTR_DAT_04bb7ff8;
  if (lVar3 != 0) {
    local_3c[0] = *(byte *)(lVar3 + 0xef4);
    if (7 < local_3c[0]) {
      local_3c[0] = 0xff;
    }
    lVar3 = FUN_02ef3b00(*(undefined4 *)(lVar3 + 0xef8),local_3c);
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x228);
      local_34 = 6;
      for (; lVar5 != lVar3 + 0x220; lVar5 = *(long *)(lVar5 + 8)) {
        plVar4 = *(long **)(lVar5 + 0x10);
        local_38 = (**(code **)(*plVar4 + 0x20))(plVar4);
        if (local_38 == local_34) goto LAB_02ef3f9c;
      }
      plVar4 = (long *)0x0;
LAB_02ef3f9c:
      if (((*PTR_DAT_04bc7058 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7058), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc7050 = PTR_DAT_04bc6040 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc7058);
      }
      if ((plVar4 != (long *)0x0) &&
         (uVar2 = (**(code **)*plVar4)(plVar4,PTR_DAT_04bc7050), (uVar2 & 1) != 0)) {
        return plVar4 + 6;
      }
      lVar5 = *(long *)(lVar3 + 0x228);
      local_34 = 6;
      for (; lVar5 != lVar3 + 0x220; lVar5 = *(long *)(lVar5 + 8)) {
        plVar4 = *(long **)(lVar5 + 0x10);
        local_38 = (**(code **)(*plVar4 + 0x20))(plVar4);
        if (local_38 == local_34) goto LAB_02ef4028;
      }
      plVar4 = (long *)0x0;
LAB_02ef4028:
      if (((*PTR_DAT_04bc70d0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc70d0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc70c8 = PTR_DAT_04bc6040 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc70d0);
      }
      if ((plVar4 != (long *)0x0) &&
         (uVar2 = (**(code **)*plVar4)(plVar4,PTR_DAT_04bc70c8), (uVar2 & 1) != 0)) {
        return plVar4 + 6;
      }
    }
  }
  if (((DAT_056b6358 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b6358), iVar1 != 0)) {
    DAT_056b6348 = 0;
    DAT_056b634c = 0xfffe;
    FUN_0277d4ac();
    __cxa_guard_release(&DAT_056b6358);
  }
  return (long *)&DAT_056b6348;
}

