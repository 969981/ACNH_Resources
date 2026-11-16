
undefined8 FUN_025383c0(byte *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float local_58;
  undefined4 uStack_54;
  float local_50;
  byte local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 uStack_40;
  float local_3c;
  long *local_38;
  char local_30;
  char local_2f;
  char local_2e;
  undefined4 local_28;
  uint local_24;
  
  puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_28 = *puVar5;
  FUN_0071c8d0(&local_38,&local_28,param_1 + 4,0);
  plVar4 = local_38;
  if (local_38 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_2f = '\0';
    }
  }
  if ((((local_38 != (long *)0x0) && (local_30 != '\0')) && (local_2f != '\0')) &&
     (local_2e != '\0')) {
    local_58 = 3.08286e-44;
    local_24 = 0;
    if (local_38[0xe] != 0) {
      uVar1 = *(uint *)(local_38[0xe] + 0x280);
      local_24 = 0;
      if (uVar1 < 0x149) {
        local_24 = uVar1;
      }
    }
    if (local_24 != 0x16) {
      FUN_00a738a0(param_1,0);
      plVar4 = (long *)local_38[0xc];
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
      if ((uVar3 & 1) != 0) {
        local_58 = *(float *)(param_1 + 0xc);
        uStack_54 = *(undefined4 *)(param_1 + 0x10);
        local_50 = *(float *)(param_1 + 0x14);
        local_44 = *(float *)(param_1 + 0x18);
        uStack_40 = *(undefined4 *)(param_1 + 0x1c);
        local_3c = *(float *)(param_1 + 0x20);
        if (param_1[8] != 0) {
          fVar6 = *(float *)(local_38[0xd] + 0x278);
          fVar7 = *(float *)(local_38[0xd] + 0x280);
          local_58 = local_58 + fVar6;
          local_50 = local_50 + fVar7;
          if ((local_44 != 0.0) || (local_3c != 0.0)) {
            local_44 = local_44 + fVar6;
            local_3c = local_3c + fVar7;
          }
        }
        local_4c = param_1[0x24];
        local_48 = *(undefined4 *)(param_1 + 0x28);
        FUN_023ba8fc(local_38,&local_58);
        return 1;
      }
    }
  }
  return 0;
}

