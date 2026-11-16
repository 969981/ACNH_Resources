
uint FUN_02538020(byte *param_1,undefined4 *param_2,byte param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  byte local_7c;
  undefined1 local_7b;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  long *local_58;
  char local_50;
  char local_4f;
  char local_4e;
  undefined4 local_44;
  
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_44 = *puVar6;
  FUN_0071c8d0(&local_58,&local_44,PTR_DAT_04bb3238,0);
  plVar5 = local_58;
  if (local_58 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3770);
    if ((uVar4 & 1) == 0) {
      local_4f = '\0';
    }
  }
  uVar3 = 0;
  if ((((local_58 == (long *)0x0) || (local_50 == '\0')) || (local_4f == '\0')) ||
     (local_4e == '\0')) goto LAB_025382b8;
  if ((int)local_58[0x302] != 4) {
    plVar5 = (long *)local_58[0xc];
    if (plVar5 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
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
    if ((uVar4 & 1) != 0) {
      if (local_58[0xe] == 0) {
        uVar3 = 0;
LAB_025381dc:
        local_88 = 0x11e;
        if (uVar3 != 0x11e) {
          uVar1 = FUN_00a738a0(param_1,0);
          uVar3 = 0;
          if ((*(byte *)(local_58 + 0x2fa) & 6) != 0) goto LAB_025382b8;
          iVar2 = FUN_00a74b78(param_1);
          if (iVar2 != 9 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
            local_74 = 0x3f00000000000000;
            local_88 = *param_2;
            local_7b = 0;
            local_6c = 0;
            local_68 = 0;
            local_84 = FUN_02375244(local_58);
            local_6c = CONCAT31(local_6c._1_3_,param_4) & 0xffffff01;
            uStack_80 = 5;
            local_78 = *(undefined4 *)(local_58[0xd] + 0x2b4);
            if ((param_4 & 1) == 0) {
              local_7c = param_3 & 1;
            }
            else {
              local_74 = CONCAT44(local_74._4_4_,0x1f);
              local_7c = 1;
            }
            uVar3 = 0;
            if (local_58[0xe] != 0) {
              uVar1 = *(uint *)(local_58[0xe] + 0x280);
              uVar3 = 0;
              if (uVar1 < 0x149) {
                uVar3 = uVar1;
              }
            }
            if (uVar3 == 0x139) {
              local_6c = CONCAT13(1,(undefined3)local_6c);
              local_84 = 7;
            }
            uVar3 = FUN_023ca3ec(local_58,&local_88);
            goto LAB_025382b8;
          }
          goto LAB_025382b4;
        }
        local_64 = *param_2;
        puVar6 = &local_64;
      }
      else {
        uVar1 = *(uint *)(local_58[0xe] + 0x280);
        uVar3 = 0;
        if (uVar1 < 0x149) {
          uVar3 = uVar1;
        }
        if (uVar3 == 0x18) {
          local_5c = *param_2;
          puVar6 = &local_5c;
        }
        else {
          if (uVar3 != 0x9d) goto LAB_025381dc;
          local_60 = *param_2;
          puVar6 = &local_60;
        }
      }
      local_88 = 5;
      FUN_023c79d0(local_58,puVar6,&local_88);
      uVar3 = 1;
      goto LAB_025382b8;
    }
  }
LAB_025382b4:
  uVar3 = 0;
LAB_025382b8:
  return uVar3 & 1;
}

