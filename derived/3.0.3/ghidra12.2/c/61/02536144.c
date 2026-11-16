
uint FUN_02536144(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  undefined4 local_14;
  
  puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_14 = *puVar5;
  FUN_0071cb58(&local_40,&local_14,PTR_DAT_04bb3238,0);
  plVar4 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_36 = '\0';
    }
  }
  uVar1 = 0;
  if ((((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_36 != '\0')) &&
     (local_37 != '\0')) {
    plVar4 = (long *)local_40[0xc];
    if (plVar4 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar4 = &DAT_05240280;
      }
      else {
        plVar4 = &DAT_05240280;
      }
    }
    uVar3 = (**(code **)(*plVar4 + 0x100))();
    if ((uVar3 & 1) == 0) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_054f0960);
          puVar6 = &DAT_054f0958;
          if (iVar2 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar6 = &DAT_054f0958;
        }
      }
      else {
        puVar6 = (undefined8 *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_1 < 8) {
          puVar6 = puVar6 + *param_1;
        }
      }
      if ((*(uint *)((long)puVar6 + 4) >> 0xf & 1) == 0) {
        uVar1 = 0;
        goto LAB_02536320;
      }
    }
    local_45 = 0;
    local_88 = 0x40;
    puStack_90 = local_84;
    local_84[0] = 0;
    local_98 = PTR_DAT_04bb2bc0 + 0x10;
    uVar3 = FUN_02537880(&local_98,param_2);
    uVar1 = 0;
    if ((uVar3 & 1) != 0) {
      puVar6 = (undefined8 *)local_40[0xc];
      if (puVar6 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_052461c0);
          puVar6 = &DAT_05240280;
          if (iVar2 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar6 = &DAT_05240280;
        }
      }
      uVar1 = FUN_0170acf0(puVar6,&local_98,0);
    }
  }
LAB_02536320:
  return uVar1 & 1;
}

