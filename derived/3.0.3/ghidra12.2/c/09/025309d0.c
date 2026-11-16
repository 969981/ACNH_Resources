
uint FUN_025309d0(byte *param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_45;
  undefined1 local_41;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  undefined4 local_14;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar8 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_14 = *puVar8;
  FUN_0071c8d0(&local_40,&local_14,PTR_DAT_04bb3238,0);
  plVar7 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3770);
    if ((uVar6 & 1) == 0) {
      local_37 = '\0';
    }
  }
  uVar5 = 0;
  if ((((local_40 == (long *)0x0) || (local_38 == '\0')) || (local_37 == '\0')) ||
     (local_36 == '\0')) goto LAB_02530c10;
  plVar7 = (long *)local_40[0xc];
  if (plVar7 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar7 = &DAT_05240280;
    }
    else {
      plVar7 = &DAT_05240280;
    }
  }
  uVar6 = (**(code **)(*plVar7 + 0x100))();
  if ((uVar6 & 1) == 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar10 = &DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar10 = &DAT_054f0958;
      }
    }
    else {
      puVar10 = (undefined8 *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar10 = puVar10 + *param_1;
      }
    }
    local_54 = 0x2f;
    if ((*(uint *)((long)puVar10 + 4) >> 0xf & 1) != 0) goto LAB_02530b30;
  }
  else {
LAB_02530b30:
    uVar6 = FUN_00a738a0(param_1,0);
    if ((((uVar6 & 1) != 0) ||
        ((*(long *)PTR_DAT_04bb7ff8 != 0 && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0)))) &&
       (iVar4 = FUN_00a74b78(param_1), iVar4 != 4)) {
      sVar2 = *(short *)PTR_DAT_04bb6298;
      if (sVar2 != -1) {
        local_54 = 0x15;
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
        if (0xff < (uint)(int)sVar2) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar1 >> 0x15 & 1) != 0) && (uVar6 = FUN_025273b8(param_1), (uVar6 & 1) != 0))
        goto LAB_02530b68;
      }
      bVar9 = *param_1;
      uStack_4c = *(undefined4 *)puVar3;
      local_48 = 0x100;
      local_41 = 0;
      local_46 = 0;
      local_50 = 0x2b;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      local_54 = CONCAT31(local_54._1_3_,bVar9);
      local_45 = 0x100;
      uVar5 = FUN_02530cec(&local_54);
      goto LAB_02530c10;
    }
  }
LAB_02530b68:
  uVar5 = 0;
LAB_02530c10:
  return uVar5 & 1;
}

