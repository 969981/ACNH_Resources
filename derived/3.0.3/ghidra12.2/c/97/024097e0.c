
void FUN_024097e0(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_94;
  byte local_90 [4];
  undefined4 local_8c;
  undefined2 local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  char local_70;
  char local_6f;
  undefined2 uStack_6e;
  undefined8 local_6c;
  
  lVar14 = *(long *)(param_4 + 0x68);
  uVar18 = *(undefined4 *)(lVar14 + 0x278);
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_4 + 0x4c8);
  }
  *(undefined4 *)(param_4 + 0xba4) = uVar18;
  *(undefined4 *)(param_4 + 0xba8) = *(undefined4 *)(lVar14 + 0x27c);
  uVar19 = *(undefined4 *)(lVar14 + 0x280);
  *(undefined1 *)(param_4 + 0xba0) = 1;
  *(undefined4 *)(param_4 + 0xbac) = uVar19;
  *(undefined4 *)(puVar2 + 0x5d) = uVar18;
  *(undefined1 *)((long)puVar2 + 0x2e4) = 1;
  uVar18 = *(undefined4 *)(param_4 + 0xba8);
  *(undefined1 *)((long)puVar2 + 0x2e5) = 1;
  *(undefined4 *)((long)puVar2 + 0x2ec) = uVar18;
  uVar18 = *(undefined4 *)(param_4 + 0xbac);
  *(undefined1 *)((long)puVar2 + 0x2e6) = 1;
  *(undefined4 *)(puVar2 + 0x5e) = uVar18;
  FUN_023164ec(param_4,6);
  plVar15 = *(long **)(param_4 + 0x60);
  if (plVar15 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      plVar15 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar15 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar15 + 0x4e8))(plVar15,1);
  uVar12 = FUN_016dc334();
  if ((uVar12 & 1) == 0) goto LAB_0240997c;
  local_84 = FUN_02409d50();
  sVar5 = *(short *)PTR_DAT_04bb6298;
  local_80 = uVar19;
  local_7c = param_3;
  if (sVar5 == -1) {
LAB_02409930:
    uStack_74 = 0;
    local_70 = '\0';
    local_6f = '\0';
    uStack_6e = 0;
    local_78 = 0xffffffff;
    local_6c = 0;
    FUN_016e70c0(&local_78);
    local_78 = local_6c._4_4_;
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar3 >> 0x1a & 1) == 0) || ((*puVar3 >> 1 & 1) == 0)) goto LAB_02409930;
    local_78 = 0x80000000;
  }
  (**(code **)(**(long **)(param_4 + 0x68) + 0x140))(*(long **)(param_4 + 0x68),&local_84,1);
  (**(code **)(**(long **)(param_4 + 0x68) + 0x160))(*(long **)(param_4 + 0x68),&local_78);
LAB_0240997c:
  FUN_0231ade8(param_4,0);
  plVar15 = *(long **)(param_4 + 0x60);
  *(undefined4 *)(param_4 + 0x1810) = 1;
  if (plVar15 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      plVar15 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar15 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar15 + 0x4e8))(plVar15,0);
  FUN_02507c6c(&local_84,1,1,1,0);
  puVar10 = PTR_DAT_04bb5038;
  puVar9 = PTR_DAT_04bb4718;
  puVar8 = PTR_DAT_04bb3778;
  puVar7 = PTR_DAT_04bb3770;
  puVar6 = PTR_DAT_04bb3238;
  uVar16 = local_84 & 0xff;
  local_8c = local_80;
  local_90[0] = 0xff;
  if ((local_84 & 0xff) < 8) {
    local_90[0] = (byte)local_84;
  }
  local_88 = (undefined2)local_7c;
  if ((local_84 & 0xff) < 8) {
    puVar1 = PTR_DAT_04bb3780 + 0x10;
    while( true ) {
      if (7 < *(byte *)(param_4 + 0x1ee8) || *(byte *)(param_4 + 0x1ee8) != uVar16) {
        puVar4 = (undefined4 *)puVar6;
        if (*(long *)puVar9 != 0) {
          puVar4 = (undefined4 *)(*(long *)puVar9 + (ulong)uVar16 * 4 + 0xde8);
        }
        local_94 = *puVar4;
        FUN_0071c8d0(&local_78,&local_94,puVar6,0);
        plVar15 = (long *)CONCAT44(uStack_74,local_78);
        if (plVar15 != (long *)0x0) {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            *(undefined **)puVar7 = puVar1;
            __cxa_guard_release(puVar8);
          }
          uVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,puVar7);
          if ((uVar12 & 1) == 0) {
            local_6f = '\0';
          }
        }
        if (((CONCAT44(uStack_74,local_78) != 0) && (local_70 != '\0')) && (local_6f != '\0')) {
          plVar15 = *(long **)(CONCAT44(uStack_74,local_78) + 0x60);
          if ((plVar15 == (long *)0x0) && (plVar15 = &DAT_05240280, (DAT_052461c0 & 1) == 0)) {
            iVar11 = __cxa_guard_acquire(&DAT_052461c0);
            if (iVar11 == 0) {
              plVar15 = &DAT_05240280;
            }
            else {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
              plVar15 = &DAT_05240280;
            }
          }
          *(undefined1 *)((long)plVar15 + 0x5f02) = 1;
          (**(code **)(*plVar15 + 0x4e8))(plVar15,0);
        }
        uVar16 = (uint)local_90[0];
      }
      if (7 < uVar16) break;
      uVar12 = (ulong)uVar16;
      if (uVar12 + 1 == 8) {
        return;
      }
      pbVar17 = puVar10 + uVar12 + 1;
      uVar13 = FUN_02507924(local_90,pbVar17);
      if ((uVar13 & 1) == 0) {
        if (uVar12 + 2 == 8) {
          return;
        }
        pbVar17 = puVar10 + uVar12 + 2;
        uVar13 = FUN_02507924(local_90,pbVar17);
        if ((uVar13 & 1) == 0) {
          if (uVar12 + 3 == 8) {
            return;
          }
          pbVar17 = puVar10 + uVar12 + 3;
          uVar13 = FUN_02507924(local_90,pbVar17);
          if ((uVar13 & 1) == 0) {
            if (uVar12 + 4 == 8) {
              return;
            }
            pbVar17 = puVar10 + uVar12 + 4;
            uVar13 = FUN_02507924(local_90,pbVar17);
            if ((uVar13 & 1) == 0) {
              if (uVar12 + 5 == 8) {
                return;
              }
              pbVar17 = puVar10 + uVar12 + 5;
              uVar13 = FUN_02507924(local_90,pbVar17);
              if ((uVar13 & 1) == 0) {
                if (uVar12 + 6 == 8) {
                  return;
                }
                pbVar17 = puVar10 + uVar12 + 6;
                uVar13 = FUN_02507924(local_90,pbVar17);
                if ((uVar13 & 1) == 0) {
                  if (uVar12 + 7 == 8) {
                    return;
                  }
                  pbVar17 = puVar10 + uVar12 + 7;
                  uVar13 = FUN_02507924(local_90,pbVar17);
                  if ((uVar13 & 1) == 0) {
                    if (uVar16 == 0) {
                      return;
                    }
                    pbVar17 = puVar10 + uVar12 + 8;
                    FUN_02507924(local_90,pbVar17);
                  }
                }
              }
            }
          }
        }
      }
      local_90[0] = *pbVar17;
      uVar16 = (uint)local_90[0];
      if (7 < uVar16) {
        return;
      }
    }
  }
  return;
}

