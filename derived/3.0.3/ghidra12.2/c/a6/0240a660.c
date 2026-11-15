
void FUN_0240a660(long param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  byte *pbVar14;
  long *local_90;
  char local_88;
  char local_87;
  undefined4 local_7c;
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  plVar12 = *(long **)(param_1 + 0x60);
  if (plVar12 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      plVar12 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar12 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar12 + 0x4e8))(plVar12,1);
  FUN_02507c6c(local_6c,1,1,1,0);
  puVar7 = PTR_DAT_04bb5038;
  puVar6 = PTR_DAT_04bb4718;
  puVar5 = PTR_DAT_04bb3778;
  puVar4 = PTR_DAT_04bb3770;
  puVar3 = PTR_DAT_04bb3238;
  uVar13 = (uint)local_6c[0];
  local_74 = local_68;
  local_78[0] = 0xff;
  if (local_6c[0] < 8) {
    local_78[0] = local_6c[0];
  }
  local_70 = local_64;
  if (local_6c[0] < 8) {
    puVar1 = PTR_DAT_04bb3780 + 0x10;
    while( true ) {
      if (7 < *(byte *)(param_1 + 0x1ee8) || *(byte *)(param_1 + 0x1ee8) != uVar13) {
        puVar2 = (undefined4 *)puVar3;
        if (*(long *)puVar6 != 0) {
          puVar2 = (undefined4 *)(*(long *)puVar6 + (ulong)uVar13 * 4 + 0xde8);
        }
        local_7c = *puVar2;
        FUN_0071c8d0(&local_90,&local_7c,puVar3,0);
        plVar12 = local_90;
        if (local_90 != (long *)0x0) {
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            *(undefined **)puVar4 = puVar1;
            __cxa_guard_release(puVar5);
          }
          uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar4);
          if ((uVar9 & 1) == 0) {
            local_87 = '\0';
          }
        }
        if (((local_90 != (long *)0x0) && (local_88 != '\0')) && (local_87 != '\0')) {
          puVar11 = (undefined8 *)local_90[0xc];
          if ((puVar11 == (undefined8 *)0x0) && (puVar11 = &DAT_05240280, (DAT_052461c0 & 1) == 0))
          {
            iVar8 = __cxa_guard_acquire(&DAT_052461c0);
            if (iVar8 == 0) {
              puVar11 = &DAT_05240280;
            }
            else {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
              puVar11 = &DAT_05240280;
            }
          }
          *(undefined1 *)((long)puVar11 + 0x5f02) = 0;
        }
        uVar13 = (uint)local_78[0];
      }
      if (7 < uVar13) break;
      uVar9 = (ulong)uVar13;
      if (uVar9 + 1 == 8) {
        return;
      }
      pbVar14 = puVar7 + uVar9 + 1;
      uVar10 = FUN_02507924(local_78,pbVar14);
      if ((uVar10 & 1) == 0) {
        if (uVar9 + 2 == 8) {
          return;
        }
        pbVar14 = puVar7 + uVar9 + 2;
        uVar10 = FUN_02507924(local_78,pbVar14);
        if ((uVar10 & 1) == 0) {
          if (uVar9 + 3 == 8) {
            return;
          }
          pbVar14 = puVar7 + uVar9 + 3;
          uVar10 = FUN_02507924(local_78,pbVar14);
          if ((uVar10 & 1) == 0) {
            if (uVar9 + 4 == 8) {
              return;
            }
            pbVar14 = puVar7 + uVar9 + 4;
            uVar10 = FUN_02507924(local_78,pbVar14);
            if ((uVar10 & 1) == 0) {
              if (uVar9 + 5 == 8) {
                return;
              }
              pbVar14 = puVar7 + uVar9 + 5;
              uVar10 = FUN_02507924(local_78,pbVar14);
              if ((uVar10 & 1) == 0) {
                if (uVar9 + 6 == 8) {
                  return;
                }
                pbVar14 = puVar7 + uVar9 + 6;
                uVar10 = FUN_02507924(local_78,pbVar14);
                if ((uVar10 & 1) == 0) {
                  if (uVar9 + 7 == 8) {
                    return;
                  }
                  pbVar14 = puVar7 + uVar9 + 7;
                  uVar10 = FUN_02507924(local_78,pbVar14);
                  if ((uVar10 & 1) == 0) {
                    if (uVar13 == 0) {
                      return;
                    }
                    pbVar14 = puVar7 + uVar9 + 8;
                    FUN_02507924(local_78,pbVar14);
                  }
                }
              }
            }
          }
        }
      }
      local_78[0] = *pbVar14;
      uVar13 = (uint)local_78[0];
      if (7 < uVar13) {
        return;
      }
    }
  }
  return;
}

