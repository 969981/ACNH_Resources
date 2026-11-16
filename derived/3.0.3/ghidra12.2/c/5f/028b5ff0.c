
undefined8 FUN_028b5ff0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  void *__s;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  undefined *local_188;
  char *local_180;
  int local_178;
  char local_174 [127];
  undefined1 local_f5;
  uint local_ec;
  undefined *local_e8;
  char *local_e0;
  int local_d8;
  char local_d4 [127];
  undefined1 local_55;
  
  puVar1 = PTR_DAT_04bb2d88;
  lVar7 = *(long *)PTR_DAT_04bb46a8;
  if (lVar7 == 0) {
    uVar4 = 5;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    local_e0 = local_d4;
    local_d8 = 0x80;
    local_55 = 0;
    local_d4[0] = '\0';
    local_e8 = PTR_DAT_04bb2d88 + 0x10;
    uVar3 = FUN_02701810(&local_e8,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x68));
    if ((uVar3 & 1) != 0) {
      if (*local_e0 != '\0') {
        (**(code **)(local_e8 + 0x18))(&local_e8);
        lVar6 = 0;
        do {
          if (local_e0[lVar6] == '\0') goto LAB_028b60d4;
          if (local_e0[lVar6 + 1] == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_028b60d4;
          }
          if (local_e0[lVar6 + 2] == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_028b60d4;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_028b60d4:
        if ((int)lVar6 < local_d8 + -1) {
          (local_e0 + (int)lVar6)[0] = '/';
          (local_e0 + (int)lVar6)[1] = '\0';
        }
      }
      FUN_027014c0(&local_e8,uVar4);
    }
    local_188 = (undefined *)((ulong)local_188 & 0xffffffffffffff00);
    FUN_026d0cf0(lVar7,&local_188,&local_e8);
    if ((char)local_188 != '\0') {
      local_188 = (undefined *)((ulong)local_188 & 0xffffffff00000000);
      FUN_026d0950(lVar7,&local_188,&local_e8);
      uVar3 = (ulong)local_188 & 0xffffffff;
      if ((uint)local_188 == 0) {
        uVar4 = 3;
      }
      else if ((uint)local_188 < 0x100) {
        uVar4 = 4;
      }
      else {
        plVar8 = *(long **)(param_1 + 0x40);
        if ((plVar8 != (long *)0x0) &&
           (__s = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar3,4), __s != (void *)0x0)) {
          memset(__s,0,uVar3);
          *(long **)(param_1 + 0x20) = plVar8;
          *(void **)(param_1 + 0x28) = __s;
          *(ulong *)(param_1 + 0x30) = uVar3;
          *(undefined8 *)(param_1 + 0x38) = 4;
        }
        uVar4 = 5;
        if (*(long *)(param_1 + 0x28) != 0) {
          local_ec = FUN_026cf750(lVar7,*(long *)(param_1 + 0x28),(ulong)local_188 & 0xffffffff,
                                  &local_e8,0);
          if (local_ec != 1) {
            uVar4 = 3;
            if (local_ec != 5) {
              uVar4 = 5;
            }
            *(undefined4 *)(param_1 + 0x6c) = uVar4;
            return 0;
          }
          uVar4 = *(undefined4 *)(param_1 + 0x4c);
          local_178 = 0x80;
          local_180 = local_174;
          local_188 = puVar1 + 0x10;
          local_f5 = 0;
          local_174[0] = '\0';
          uVar3 = FUN_02701810(&local_188,*(undefined4 *)(param_1 + 0x48),
                               *(undefined4 *)(param_1 + 0x68));
          if ((uVar3 & 1) != 0) {
            if (*local_180 != '\0') {
              (**(code **)(local_188 + 0x18))(&local_188);
              lVar6 = 0;
              do {
                if (local_180[lVar6] == '\0') goto LAB_028b62a4;
                if (local_180[lVar6 + 1] == '\0') {
                  lVar6 = lVar6 + 1;
                  goto LAB_028b62a4;
                }
                if (local_180[lVar6 + 2] == '\0') {
                  lVar6 = lVar6 + 2;
                  goto LAB_028b62a4;
                }
                lVar6 = lVar6 + 3;
              } while (lVar6 != 0x80001);
              lVar6 = 0;
LAB_028b62a4:
              if ((int)lVar6 < local_178 + -1) {
                (local_180 + (int)lVar6)[0] = '/';
                (local_180 + (int)lVar6)[1] = '\0';
              }
            }
            FUN_02701270(&local_188,uVar4);
          }
          local_ec = local_ec & 0xffffff00;
          FUN_026d0cf0(lVar7,&local_ec,&local_188);
          if ((char)local_ec != '\0') {
            local_ec = 0;
            FUN_026d0950(lVar7,&local_ec,&local_188);
            uStack_198 = (ulong)local_ec;
            if ((local_ec == 0) || (local_ec < 0x100)) {
              uVar4 = 4;
            }
            else {
              local_1a0 = *(undefined8 *)(param_1 + 0x40);
              local_190 = *(undefined8 *)(param_1 + 0x60);
              FUN_026ebb94(param_1,&local_1a0);
              if (*(long *)(param_1 + 8) == 0) {
                *(undefined4 *)(param_1 + 0x6c) = 5;
                return 0;
              }
              iVar2 = FUN_026cf750(lVar7,*(long *)(param_1 + 8),local_ec,&local_188,0);
              if (iVar2 == 1) {
                FUN_028b63c0(param_1);
                puVar5 = *(undefined4 **)(param_1 + 0x28);
                *(undefined4 *)(param_1 + 0x50) = puVar5[1];
                *(undefined4 *)(param_1 + 0x54) = *puVar5;
                *(undefined4 *)(param_1 + 0x58) = puVar5[2];
                *(undefined2 *)(param_1 + 0x5c) = *(undefined2 *)(puVar5 + 3);
                *(undefined4 *)(param_1 + 0x6c) = 2;
                return 1;
              }
              uVar4 = 4;
              if (iVar2 != 5) {
                uVar4 = 5;
              }
            }
            *(undefined4 *)(param_1 + 0x6c) = uVar4;
            return 0;
          }
          uVar4 = 4;
          goto LAB_028b6144;
        }
      }
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      return 0;
    }
    uVar4 = 3;
  }
LAB_028b6144:
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  return 0;
}

