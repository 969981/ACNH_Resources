
/* WARNING: Removing unreachable block (ram,0x02f07868) */

bool FUN_02f07834(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,0xd);
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "/L_HotelTicket_00";
    lVar3 = FUN_02c12c24(**(long **)(*(long *)(*(long *)(puVar4[0x51] + 0x230) + 0x210) + 0x3f8) +
                         0x38,&local_30);
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x260) == *(int *)(lVar3 + 0x264) && *(char *)(lVar3 + 0x290) == '\0';
    }
  }
  return true;
}

