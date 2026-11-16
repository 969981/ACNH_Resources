
undefined8 FUN_02538610(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  
  puVar4 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar4 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_2c = *puVar4;
  FUN_0071c8d0(&local_40,&local_2c,PTR_DAT_04bb3238,0);
  plVar5 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_37 = '\0';
    }
  }
  if ((((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_37 != '\0')) &&
     (local_36 != '\0')) {
    local_24 = 0x17;
    local_28 = 0;
    if (local_40[0xe] != 0) {
      uVar1 = *(uint *)(local_40[0xe] + 0x280);
      local_28 = 0;
      if (uVar1 < 0x149) {
        local_28 = uVar1;
      }
    }
    if (local_28 != 0x17) {
      FUN_00a738a0(param_1,0);
      plVar5 = (long *)local_40[0xc];
      if (plVar5 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_052461c0);
          plVar5 = &DAT_05240280;
          if (iVar2 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar5 = &DAT_05240280;
        }
      }
      uVar3 = (**(code **)(*plVar5 + 0x100))(plVar5);
      if ((uVar3 & 1) != 0) {
        FUN_023bacf4(local_40,param_2,0,0);
        return 1;
      }
    }
  }
  return 0;
}

