
void FUN_0240a150(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 local_94;
  byte local_90 [4];
  undefined4 local_8c;
  undefined2 local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  char cStack_70;
  char cStack_6f;
  undefined2 uStack_6e;
  undefined8 local_6c;
  
  plVar15 = *(long **)(param_4 + 0x60);
  if (plVar15 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      plVar15 = &DAT_05240280;
      if (iVar10 != 0) {
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
  plVar15 = *(long **)(param_4 + 0x60);
  if (plVar15 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      plVar15 = &DAT_05240280;
      if (iVar10 != 0) {
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
  FUN_02507c6c(&local_84,1,1,1,0);
  puVar9 = PTR_DAT_04bb5038;
  puVar8 = PTR_DAT_04bb4718;
  puVar7 = PTR_DAT_04bb3778;
  puVar6 = PTR_DAT_04bb3770;
  puVar5 = PTR_DAT_04bb3238;
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
        puVar3 = (undefined4 *)puVar5;
        if (*(long *)puVar8 != 0) {
          puVar3 = (undefined4 *)(*(long *)puVar8 + (ulong)uVar16 * 4 + 0xde8);
        }
        local_94 = *puVar3;
        FUN_0071c8d0(&local_78,&local_94,puVar5,0);
        plVar15 = (long *)CONCAT44(uStack_74,local_78);
        if (plVar15 != (long *)0x0) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(puVar7);
          }
          uVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,puVar6);
          if ((uVar12 & 1) == 0) {
            cStack_6f = '\0';
          }
        }
        if (((CONCAT44(uStack_74,local_78) != 0) && (cStack_70 != '\0')) && (cStack_6f != '\0')) {
          puVar14 = *(undefined8 **)(CONCAT44(uStack_74,local_78) + 0x60);
          if ((puVar14 == (undefined8 *)0x0) && (puVar14 = &DAT_05240280, (DAT_052461c0 & 1) == 0))
          {
            iVar10 = __cxa_guard_acquire(&DAT_052461c0);
            if (iVar10 == 0) {
              puVar14 = &DAT_05240280;
            }
            else {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
              puVar14 = &DAT_05240280;
            }
          }
          *(undefined1 *)((long)puVar14 + 0x5f02) = 0;
        }
        uVar16 = (uint)local_90[0];
      }
      if (7 < uVar16) break;
      uVar12 = (ulong)uVar16;
      if (uVar12 + 1 == 8) break;
      pbVar17 = puVar9 + uVar12 + 1;
      uVar13 = FUN_02507924(local_90,pbVar17);
      if ((uVar13 & 1) == 0) {
        if (uVar12 + 2 == 8) break;
        pbVar17 = puVar9 + uVar12 + 2;
        uVar13 = FUN_02507924(local_90,pbVar17);
        if ((uVar13 & 1) == 0) {
          if (uVar12 + 3 == 8) break;
          pbVar17 = puVar9 + uVar12 + 3;
          uVar13 = FUN_02507924(local_90,pbVar17);
          if ((uVar13 & 1) == 0) {
            if (uVar12 + 4 == 8) break;
            pbVar17 = puVar9 + uVar12 + 4;
            uVar13 = FUN_02507924(local_90,pbVar17);
            if ((uVar13 & 1) == 0) {
              if (uVar12 + 5 == 8) break;
              pbVar17 = puVar9 + uVar12 + 5;
              uVar13 = FUN_02507924(local_90,pbVar17);
              if ((uVar13 & 1) == 0) {
                if (uVar12 + 6 == 8) break;
                pbVar17 = puVar9 + uVar12 + 6;
                uVar13 = FUN_02507924(local_90,pbVar17);
                if ((uVar13 & 1) == 0) {
                  if (uVar12 + 7 == 8) break;
                  pbVar17 = puVar9 + uVar12 + 7;
                  uVar13 = FUN_02507924(local_90,pbVar17);
                  if ((uVar13 & 1) == 0) {
                    if (uVar16 == 0) break;
                    pbVar17 = puVar9 + uVar12 + 8;
                    FUN_02507924(local_90,pbVar17);
                  }
                }
              }
            }
          }
        }
      }
      uVar16 = (uint)*pbVar17;
      if (7 < uVar16) break;
      local_90[0] = *pbVar17;
    }
  }
  if (((*(long *)PTR_DAT_04bb3968 != 0) && (*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) != 0)) &&
     (lVar11 = FUN_02121bec(), lVar11 != 0)) {
    FUN_01f7273c(lVar11,0);
  }
  uVar12 = FUN_016dc334();
  if ((uVar12 & 1) == 0) {
    return;
  }
  local_84 = FUN_02409d50();
  sVar4 = *(short *)PTR_DAT_04bb6298;
  local_80 = param_2;
  local_7c = param_3;
  if (sVar4 != -1) {
    local_78 = 0x1a;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 0x1a & 1) != 0) && (local_78 = 1, (*puVar2 >> 1 & 1) != 0)) {
      local_78 = 0x80000000;
      goto LAB_0240a574;
    }
  }
  local_6c = 0;
  uStack_74 = 0;
  cStack_70 = '\0';
  cStack_6f = '\0';
  uStack_6e = 0;
  FUN_016e70c0(&local_78);
  local_78 = local_6c._4_4_;
LAB_0240a574:
  (**(code **)(**(long **)(param_4 + 0x68) + 0x140))(*(long **)(param_4 + 0x68),&local_84,1);
  (**(code **)(**(long **)(param_4 + 0x68) + 0x160))(*(long **)(param_4 + 0x68),&local_78);
  return;
}

