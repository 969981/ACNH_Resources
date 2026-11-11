
uint FUN_00421690(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint ******ppppppuVar2;
  uint ******__s2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint ******ppppppuVar7;
  uint ******ppppppuVar8;
  ulong uVar9;
  uint *****pppppuVar10;
  undefined8 *puVar11;
  uint ******ppppppuVar12;
  ulong local_4f8;
  uint ******local_4f0;
  undefined8 local_4e8;
  undefined8 **ppuStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  int local_4a0;
  undefined8 local_498;
  undefined8 *local_490;
  undefined8 uStack_488;
  undefined8 *local_480;
  undefined8 uStack_478;
  long local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 local_458;
  uint ******local_68;
  uint ******local_60;
  undefined8 local_58;
  
  FUN_0018a58c(param_1 + 0x38,&DAT_0407ebb1);
  local_490 = &uStack_468;
  local_4a0 = 0;
  uStack_488 = 0x10000;
  local_498 = 0;
  local_470 = 0;
  uStack_468 = 1000;
  ppuStack_4e0 = &local_490;
  local_4e8 = 0;
  local_4a8 = 0x400;
  local_68 = (uint ******)*param_2;
  uStack_478 = 0;
  local_460 = 0;
  local_458 = 0;
  local_4f8 = 0;
  local_4f0 = (uint ******)0x0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_480 = local_490;
  local_60 = local_68;
  FUN_00190460(&local_4f8,&local_68);
  uVar6 = 0;
  if (local_4a0 != 0) goto LAB_00421840;
  uVar9 = local_4f8 & 0xffffffff;
  local_60 = (uint ******)0x4094d2d;
  local_58 = 0x405000000000000;
  local_68 = (uint ******)&DAT_00000006;
  if ((int)local_4f8 != 0) {
    ppppppuVar7 = local_4f0;
    ppppppuVar12 = local_4f0;
    do {
      uVar6 = (uint)local_68;
      if ((local_58 & 0x1000000000000000) != 0) {
        uVar6 = 0x15 - local_58._5_1_;
      }
      uVar1 = *(uint *)ppppppuVar12;
      if ((*(ushort *)((long)ppppppuVar12 + 0x16) & 0x1000) != 0) {
        uVar1 = 0x15 - *(byte *)((long)ppppppuVar12 + 0x15);
      }
      if (uVar6 == uVar1) {
        ppppppuVar8 = local_60;
        if ((local_58 & 0x1000000000000000) != 0) {
          ppppppuVar8 = (uint ******)&local_68;
        }
        ppppppuVar2 = (uint ******)ppppppuVar12[1];
        if ((*(ushort *)((long)ppppppuVar12 + 0x16) & 0x1000) != 0) {
          ppppppuVar2 = ppppppuVar12;
        }
        if (ppppppuVar8 == ppppppuVar2) break;
        iVar5 = memcmp(ppppppuVar8,ppppppuVar2,(ulong)uVar6);
        uVar9 = local_4f8 & 0xffffffff;
        ppppppuVar7 = local_4f0;
        if (iVar5 == 0) break;
      }
      ppppppuVar12 = ppppppuVar12 + 6;
    } while (ppppppuVar12 != ppppppuVar7 + uVar9 * 6);
    if ((ppppppuVar12 != ppppppuVar7 + uVar9 * 6) &&
       ((*(ushort *)((long)ppppppuVar12 + 0x2e) >> 4 & 1) != 0)) {
      pppppuVar10 = ppppppuVar12[3];
      *(uint ******)(param_1 + 8) = pppppuVar10;
      if (pppppuVar10 != (uint *****)0x0) {
        uVar6 = FUN_00420560(param_1,param_2);
        goto LAB_00421840;
      }
      local_60 = (uint ******)0x406ac87;
      local_58 = 0x405000000000000;
      local_68 = (uint ******)&DAT_00000006;
      ppppppuVar12 = ppppppuVar7;
      if (uVar9 == 0) {
      }
      else {
        do {
          uVar6 = (uint)local_68;
          if ((local_58 & 0x1000000000000000) != 0) {
            uVar6 = 0x15 - local_58._5_1_;
          }
          uVar1 = *(uint *)ppppppuVar12;
          if ((*(ushort *)((long)ppppppuVar12 + 0x16) & 0x1000) != 0) {
            uVar1 = 0x15 - *(byte *)((long)ppppppuVar12 + 0x15);
          }
          if (uVar6 == uVar1) {
            ppppppuVar8 = local_60;
            if ((local_58 & 0x1000000000000000) != 0) {
              ppppppuVar8 = (uint ******)&local_68;
            }
            ppppppuVar2 = (uint ******)ppppppuVar12[1];
            if ((*(ushort *)((long)ppppppuVar12 + 0x16) & 0x1000) != 0) {
              ppppppuVar2 = ppppppuVar12;
            }
            if (ppppppuVar8 == ppppppuVar2) break;
            iVar5 = memcmp(ppppppuVar8,ppppppuVar2,(ulong)uVar6);
            uVar9 = local_4f8 & 0xffffffff;
            ppppppuVar7 = local_4f0;
            if (iVar5 == 0) break;
          }
          ppppppuVar12 = ppppppuVar12 + 6;
        } while (ppppppuVar12 != ppppppuVar7 + uVar9 * 6);
      }
      if (ppppppuVar12 != ppppppuVar7 + uVar9 * 6) {
        uVar9 = (ulong)*(uint *)(ppppppuVar12 + 3);
        local_60 = (uint ******)0x406ac8e;
        ppppppuVar8 = (uint ******)ppppppuVar12[4];
        local_58 = 0x405000000000000;
        local_68 = (uint ******)&DAT_00000005;
        ppppppuVar7 = ppppppuVar8;
        if (*(uint *)(ppppppuVar12 + 3) == 0) {
          uVar9 = 0;
        }
        else {
          do {
            uVar6 = (uint)local_68;
            if ((local_58 & 0x1000000000000000) != 0) {
              uVar6 = 0x15 - local_58._5_1_;
            }
            uVar1 = *(uint *)ppppppuVar7;
            if ((*(ushort *)((long)ppppppuVar7 + 0x16) & 0x1000) != 0) {
              uVar1 = 0x15 - *(byte *)((long)ppppppuVar7 + 0x15);
            }
            if (uVar6 == uVar1) {
              ppppppuVar2 = local_60;
              if ((local_58 & 0x1000000000000000) != 0) {
                ppppppuVar2 = (uint ******)&local_68;
              }
              __s2 = (uint ******)ppppppuVar7[1];
              if ((*(ushort *)((long)ppppppuVar7 + 0x16) & 0x1000) != 0) {
                __s2 = ppppppuVar7;
              }
              if (ppppppuVar2 == __s2) break;
              iVar5 = memcmp(ppppppuVar2,__s2,(ulong)uVar6);
              ppppppuVar8 = (uint ******)ppppppuVar12[4];
              uVar9 = (ulong)*(uint *)(ppppppuVar12 + 3);
              if (iVar5 == 0) break;
            }
            ppppppuVar7 = ppppppuVar7 + 6;
          } while (ppppppuVar7 != ppppppuVar8 + uVar9 * 6);
        }
        if ((ppppppuVar7 != ppppppuVar8 + uVar9 * 6) &&
           ((*(ushort *)((long)ppppppuVar7 + 0x2e) >> 10 & 1) != 0)) {
          ppppppuVar12 = (uint ******)ppppppuVar7[4];
          if ((*(ushort *)((long)ppppppuVar7 + 0x2e) & 0x1000) != 0) {
            ppppppuVar12 = ppppppuVar7 + 3;
          }
          FUN_0018a58c(param_1 + 0x38,ppppppuVar12);
          uVar6 = 1;
          goto LAB_00421840;
        }
      }
    }
  }
  uVar6 = 0;
LAB_00421840:
  FUN_001fa9b0(&local_4f8);
  bVar4 = local_490 == local_480;
  while ((bVar3 = bVar4, local_490 != (undefined8 *)0x0 && (bVar3 = true, !bVar4))) {
    puVar11 = (undefined8 *)local_490[2];
    FUN_00187e4c(local_490);
    local_490 = puVar11;
    bVar4 = puVar11 == local_480;
  }
  if ((local_490 != (undefined8 *)0x0) && (bVar3)) {
    local_490[1] = 0;
  }
  if (local_470 != 0) {
    FUN_00187e4c();
  }
  return uVar6 & 1;
}

