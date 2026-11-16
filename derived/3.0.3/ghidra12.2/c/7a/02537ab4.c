
uint FUN_02537ab4(byte *param_1,undefined4 *param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  long *local_48;
  char local_40;
  char local_3f;
  char local_3e;
  undefined4 local_38;
  uint local_34;
  
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_38 = *puVar6;
  FUN_0071c8d0(&local_48,&local_38,PTR_DAT_04bb3238,0);
  plVar5 = local_48;
  if (local_48 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3770);
    if ((uVar4 & 1) == 0) {
      local_3f = '\0';
    }
  }
  uVar2 = 0;
  if ((((local_48 == (long *)0x0) || (local_40 == '\0')) || (local_3f == '\0')) ||
     (local_3e == '\0')) goto LAB_02537d34;
  plVar5 = (long *)local_48[0xc];
  if (plVar5 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar5 = &DAT_05240280;
    }
    else {
      plVar5 = &DAT_05240280;
    }
  }
  uVar4 = (**(code **)(*plVar5 + 0x100))();
  if ((uVar4 & 1) == 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar7 = &DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar7 = &DAT_054f0958;
      }
    }
    else {
      puVar7 = (undefined8 *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar7 = puVar7 + *param_1;
      }
    }
    local_6c = 0x2f;
    if ((*(uint *)((long)puVar7 + 4) >> 0xf & 1) != 0) goto LAB_02537c18;
  }
  else {
LAB_02537c18:
    uVar4 = FUN_00a738a0(param_1,0);
    plVar5 = local_48;
    if (((uVar4 & 1) != 0) ||
       ((*(long *)PTR_DAT_04bb7ff8 != 0 && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0)))) {
      local_6c = *param_2;
      local_5f = 0;
      local_50 = 0;
      local_4c = 0;
      local_58 = 0x3f00000000000000;
      local_68 = 1;
      if (param_3 == 8) {
        if ((int)local_48[0x2f] == 1) {
          local_68 = 0;
        }
        else {
          plVar1 = local_48 + 0x3dd;
          uVar4 = FUN_00a738a0(plVar1,0);
          local_68 = 0;
          if ((uVar4 & 1) != 0) {
            local_34 = FUN_00a74b78(plVar1);
            local_68 = 1;
            if (local_34 < 0xf) {
              if ((1 << (ulong)(local_34 & 0x1f) & 0x600dU) == 0) {
                if ((local_34 == 7) || (local_34 == 9)) {
                  local_68 = (uint)((*(byte *)(plVar5 + 0x2fa) & 6) != 0) << 1;
                }
              }
              else {
                local_68 = 2;
              }
            }
          }
        }
      }
      local_5c = *(undefined4 *)(local_48[0xd] + 0x2b4);
      local_50._0_2_ = CONCAT11(1,(undefined1)local_50);
      local_60 = param_3 - 9U < 0xfffffffd;
      local_64 = param_3;
      uVar2 = FUN_023ca3ec(local_48,&local_6c);
      goto LAB_02537d34;
    }
  }
  uVar2 = 0;
LAB_02537d34:
  return uVar2 & 1;
}

