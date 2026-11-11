
undefined8 FUN_00420560(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint ******ppppppuVar3;
  uint ******ppppppuVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint ******ppppppuVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint ******ppppppuVar11;
  undefined8 uVar12;
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
  
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_0018a58c(param_1 + 0x10,&DAT_0407ebb1);
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
  uVar12 = 0;
  if (local_4a0 == 0) {
    uVar9 = local_4f8 & 0xffffffff;
    local_60 = (uint ******)0x4094d2d;
    local_58 = 0x405000000000000;
    local_68 = (uint ******)&DAT_00000006;
    if ((int)local_4f8 != 0) {
      ppppppuVar8 = local_4f0;
      ppppppuVar11 = local_4f0;
      do {
        uVar1 = (uint)local_68;
        if ((local_58 & 0x1000000000000000) != 0) {
          uVar1 = 0x15 - local_58._5_1_;
        }
        uVar2 = *(uint *)ppppppuVar11;
        if ((*(ushort *)((long)ppppppuVar11 + 0x16) & 0x1000) != 0) {
          uVar2 = 0x15 - *(byte *)((long)ppppppuVar11 + 0x15);
        }
        if (uVar1 == uVar2) {
          ppppppuVar3 = local_60;
          if ((local_58 & 0x1000000000000000) != 0) {
            ppppppuVar3 = (uint ******)&local_68;
          }
          ppppppuVar4 = (uint ******)ppppppuVar11[1];
          if ((*(ushort *)((long)ppppppuVar11 + 0x16) & 0x1000) != 0) {
            ppppppuVar4 = ppppppuVar11;
          }
          if (ppppppuVar3 == ppppppuVar4) break;
          iVar7 = memcmp(ppppppuVar3,ppppppuVar4,(ulong)uVar1);
          uVar9 = local_4f8 & 0xffffffff;
          ppppppuVar8 = local_4f0;
          if (iVar7 == 0) break;
        }
        ppppppuVar11 = ppppppuVar11 + 6;
      } while (ppppppuVar11 != ppppppuVar8 + uVar9 * 6);
      if ((ppppppuVar11 != ppppppuVar8 + uVar9 * 6) &&
         ((*(ushort *)((long)ppppppuVar11 + 0x2e) >> 4 & 1) != 0)) {
        local_58 = 0x405000000000000;
        local_60 = (uint ******)0x40a4270;
        *(uint ******)(param_1 + 8) = ppppppuVar11[3];
        local_68 = (uint ******)&DAT_0000000c;
        ppppppuVar11 = ppppppuVar8;
        if (uVar9 == 0) {
        }
        else {
          do {
            uVar1 = (uint)local_68;
            if ((local_58 & 0x1000000000000000) != 0) {
              uVar1 = 0x15 - local_58._5_1_;
            }
            uVar2 = *(uint *)ppppppuVar11;
            if ((*(ushort *)((long)ppppppuVar11 + 0x16) & 0x1000) != 0) {
              uVar2 = 0x15 - *(byte *)((long)ppppppuVar11 + 0x15);
            }
            if (uVar1 == uVar2) {
              ppppppuVar3 = local_60;
              if ((local_58 & 0x1000000000000000) != 0) {
                ppppppuVar3 = (uint ******)&local_68;
              }
              ppppppuVar4 = (uint ******)ppppppuVar11[1];
              if ((*(ushort *)((long)ppppppuVar11 + 0x16) & 0x1000) != 0) {
                ppppppuVar4 = ppppppuVar11;
              }
              if (ppppppuVar3 == ppppppuVar4) break;
              iVar7 = memcmp(ppppppuVar3,ppppppuVar4,(ulong)uVar1);
              uVar9 = local_4f8 & 0xffffffff;
              ppppppuVar8 = local_4f0;
              if (iVar7 == 0) break;
            }
            ppppppuVar11 = ppppppuVar11 + 6;
          } while (ppppppuVar11 != ppppppuVar8 + uVar9 * 6);
        }
        if ((ppppppuVar11 != ppppppuVar8 + uVar9 * 6) &&
           ((*(ushort *)((long)ppppppuVar11 + 0x2e) >> 10 & 1) != 0)) {
          ppppppuVar8 = (uint ******)ppppppuVar11[4];
          if ((*(ushort *)((long)ppppppuVar11 + 0x2e) & 0x1000) != 0) {
            ppppppuVar8 = ppppppuVar11 + 3;
          }
          FUN_0018a58c(param_1 + 0x10,ppppppuVar8);
          uVar12 = 1;
          goto LAB_004207cc;
        }
      }
    }
    uVar12 = 0;
  }
LAB_004207cc:
  FUN_001fa9b0(&local_4f8);
  bVar6 = local_490 == local_480;
  while ((bVar5 = bVar6, local_490 != (undefined8 *)0x0 && (bVar5 = true, !bVar6))) {
    puVar10 = (undefined8 *)local_490[2];
    FUN_00187e4c(local_490);
    local_490 = puVar10;
    bVar6 = puVar10 == local_480;
  }
  if ((local_490 != (undefined8 *)0x0) && (bVar5)) {
    local_490[1] = 0;
  }
  if (local_470 != 0) {
    FUN_00187e4c();
  }
  return uVar12;
}

