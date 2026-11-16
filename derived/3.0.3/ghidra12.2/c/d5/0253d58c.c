
undefined8 FUN_0253d58c(byte *param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_56;
  long local_50;
  long *local_48;
  char local_40;
  char local_3f;
  char local_3e;
  undefined4 local_34;
  
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_34 = *puVar6;
  FUN_0071c8d0(&local_48,&local_34,PTR_DAT_04bb3238,0);
  plVar2 = local_48;
  if (local_48 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar4 & 1) == 0) {
      local_3f = '\0';
    }
  }
  uVar8 = 0;
  if ((((local_48 != (long *)0x0) && (local_40 != '\0')) && (local_3f != '\0')) &&
     (local_3e != '\0')) {
    uVar4 = FUN_00a738a0(param_1,0);
    plVar2 = local_48;
    uVar8 = 0;
    if ((uVar4 & 1) != 0) {
      local_8c = 0x5b;
      uVar7 = 0;
      if (local_48[0xe] != 0) {
        uVar1 = *(uint *)(local_48[0xe] + 0x280);
        uVar7 = 0;
        if (uVar1 < 0x149) {
          uVar7 = uVar1;
        }
      }
      if (uVar7 == 0x5b) {
        local_50 = 0xfffe;
        FUN_0277d4ac(&local_50);
        local_50 = plVar2[800];
        uVar8 = 1;
        local_5c = 0x3f800000;
        local_58 = 0;
        local_56 = 0;
        local_78 = 1;
        local_88 = (undefined4)((ulong)local_50 >> 0x20);
        local_8c = (undefined4)local_50;
        local_84 = 0x100000004;
        local_60 = *(undefined4 *)(local_48[0xd] + 0x280);
        local_68 = *(undefined8 *)(local_48[0xd] + 0x278);
        lVar5 = FUN_0251e98c(1);
        puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0xf00) + 0xf0))(lVar5 + 0xf00);
        uVar9 = *puVar6;
        puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0xf30) + 0xf0))(lVar5 + 0xf30);
        uVar10 = *puVar6;
        puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0xf60) + 0xf0))(lVar5 + 0xf60);
        local_6c = *puVar6;
        local_7c = 0;
        local_57 = 0;
        local_74 = uVar9;
        uStack_70 = uVar10;
        FUN_0236cba0(local_48,&local_8c);
      }
      else {
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}

