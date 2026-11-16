
undefined8 FUN_025506ac(byte *param_1,ulong param_2,undefined4 param_3,ulong param_4,uint param_5)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  char local_48;
  char local_47;
  char local_46;
  int local_28;
  undefined4 local_24;
  
  local_24 = param_3;
  uVar4 = FUN_00a738a0(param_1,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if ((param_5 & 1) != 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar6 = (uint *)&DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar6 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar6 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar6 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar6 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*param_1 * 2;
      }
    }
    local_50 = 0xb;
    if ((*puVar6 >> 0xb & 1) != 0) {
      return 0;
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
        puVar6 = &DAT_054f08d0;
        if (iVar3 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
          puVar6 = &DAT_054f08d0;
        }
      }
      else {
        puVar6 = &DAT_054f08d0;
      }
    }
    else {
      puVar6 = (uint *)(DAT_054f5738 + 0x200);
    }
    local_50 = 0;
    if ((*puVar6 & 1) != 0) {
      return 0;
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar6 = (uint *)&DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar6 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar6 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar6 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar6 = puVar6 + (ulong)*param_1 * 2;
      }
    }
    local_50 = 0x17;
    if ((*puVar6 >> 0x17 & 1) != 0) {
      return 0;
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar6 = (uint *)&DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar6 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar6 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar6 = puVar6 + (ulong)*param_1 * 2;
      }
    }
    local_50 = 0x18;
    if ((*puVar6 >> 0x18 & 1) != 0) {
      return 0;
    }
  }
  if ((((param_2 & 1) == 0) || (*(long *)PTR_DAT_04bb7ff8 == 0)) ||
     (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
    if ((param_4 & 1) != 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f08d8 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
          puVar6 = &DAT_054f08d0;
          if (iVar3 != 0) {
            DAT_054f08d0 = 0;
            __cxa_guard_release(&DAT_054f08d8);
          }
        }
        else {
          puVar6 = &DAT_054f08d0;
        }
      }
      else {
        puVar6 = (uint *)(DAT_054f5738 + 0x200);
      }
      local_50 = 1;
      if ((*puVar6 >> 1 & 1) != 0) {
        return 0;
      }
    }
    uVar2 = FUN_02582d8c(param_1,1);
    if (((uVar2 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
       (-1 < *(int *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d8))) {
      if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
        piVar5 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
      }
      else {
        piVar5 = (int *)PTR_DAT_04bb3238;
      }
      local_28 = *piVar5;
      if (local_28 != 0) {
        FUN_0071cb58(&local_50,&local_28,&local_24,0);
        plVar1 = (long *)CONCAT44(uStack_4c,local_50);
        if (plVar1 != (long *)0x0) {
          if (((*PTR_DAT_04bb3778 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
            *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb3778);
          }
          uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
          if ((uVar4 & 1) == 0) {
            local_46 = '\0';
          }
        }
        if ((((CONCAT44(uStack_4c,local_50) != 0) && (local_48 != '\0')) && (local_46 != '\0')) &&
           ((local_47 != '\0' && (uVar4 = FUN_0231f6e4(), (uVar4 & 1) == 0)))) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

