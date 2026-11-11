
uint FUN_00420b10(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint ******ppppppuVar2;
  uint ******ppppppuVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint ******ppppppuVar8;
  ulong uVar9;
  uint *****pppppuVar10;
  undefined8 *puVar11;
  uint ******ppppppuVar12;
  uint ******local_508;
  uint ******local_500;
  undefined8 local_4f8;
  uint ******local_4f0;
  undefined8 uStack_4e8;
  ulong local_4e0;
  uint ******local_4d8;
  undefined8 local_4d0;
  undefined8 **ppuStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  int local_488;
  undefined8 local_480;
  undefined8 *local_478;
  undefined8 uStack_470;
  undefined8 *local_468;
  undefined8 uStack_460;
  long local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  
  local_478 = &uStack_450;
  local_488 = 0;
  uStack_460 = 0;
  uStack_470 = 0x10000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  local_480 = 0;
  local_458 = 0;
  uStack_450 = 1000;
  ppuStack_4c8 = &local_478;
  local_4d0 = 0;
  local_490 = 0x400;
  local_508 = (uint ******)*param_2;
  local_448 = 0;
  local_440 = 0;
  local_4e0 = 0;
  local_4d8 = (uint ******)0x0;
  local_4c0 = 0;
  uStack_4b8 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4a0 = 0;
  uStack_498 = 0;
  local_500 = local_508;
  local_468 = local_478;
  FUN_00190460(&local_4e0,&local_508);
  uVar7 = 0;
  if (local_488 != 0) goto LAB_00420cb0;
  uVar9 = local_4e0 & 0xffffffff;
  local_500 = (uint ******)0x4094d2d;
  local_4f8 = 0x405000000000000;
  local_508 = (uint ******)&DAT_00000006;
  if ((int)local_4e0 != 0) {
    ppppppuVar8 = local_4d8;
    ppppppuVar12 = local_4d8;
    do {
      uVar7 = (uint)local_508;
      if ((local_4f8 & 0x1000000000000000) != 0) {
        uVar7 = 0x15 - local_4f8._5_1_;
      }
      uVar1 = *(uint *)ppppppuVar12;
      if ((*(ushort *)((long)ppppppuVar12 + 0x16) & 0x1000) != 0) {
        uVar1 = 0x15 - *(byte *)((long)ppppppuVar12 + 0x15);
      }
      if (uVar7 == uVar1) {
        ppppppuVar2 = local_500;
        if ((local_4f8 & 0x1000000000000000) != 0) {
          ppppppuVar2 = (uint ******)&local_508;
        }
        ppppppuVar3 = (uint ******)ppppppuVar12[1];
        if ((*(ushort *)((long)ppppppuVar12 + 0x16) & 0x1000) != 0) {
          ppppppuVar3 = ppppppuVar12;
        }
        if (ppppppuVar2 == ppppppuVar3) break;
        iVar6 = memcmp(ppppppuVar2,ppppppuVar3,(ulong)uVar7);
        uVar9 = local_4e0 & 0xffffffff;
        ppppppuVar8 = local_4d8;
        if (iVar6 == 0) break;
      }
      ppppppuVar12 = ppppppuVar12 + 6;
    } while (ppppppuVar12 != ppppppuVar8 + uVar9 * 6);
    if ((ppppppuVar12 != ppppppuVar8 + uVar9 * 6) &&
       ((*(ushort *)((long)ppppppuVar12 + 0x2e) >> 4 & 1) != 0)) {
      pppppuVar10 = ppppppuVar12[3];
      *(uint ******)(param_1 + 8) = pppppuVar10;
      if (pppppuVar10 != (uint *****)0x0) {
        uVar7 = FUN_00420560(param_1,param_2);
        goto LAB_00420cb0;
      }
      local_500 = (uint ******)0x406ac87;
      local_4f8 = 0x405000000000000;
      local_508 = (uint ******)&DAT_00000006;
      ppppppuVar12 = ppppppuVar8;
      if (uVar9 == 0) {
      }
      else {
        do {
          uVar7 = (uint)local_508;
          if ((local_4f8 & 0x1000000000000000) != 0) {
            uVar7 = 0x15 - local_4f8._5_1_;
          }
          uVar1 = *(uint *)ppppppuVar12;
          if ((*(ushort *)((long)ppppppuVar12 + 0x16) & 0x1000) != 0) {
            uVar1 = 0x15 - *(byte *)((long)ppppppuVar12 + 0x15);
          }
          if (uVar7 == uVar1) {
            ppppppuVar2 = local_500;
            if ((local_4f8 & 0x1000000000000000) != 0) {
              ppppppuVar2 = (uint ******)&local_508;
            }
            ppppppuVar3 = (uint ******)ppppppuVar12[1];
            if ((*(ushort *)((long)ppppppuVar12 + 0x16) & 0x1000) != 0) {
              ppppppuVar3 = ppppppuVar12;
            }
            if (ppppppuVar2 == ppppppuVar3) break;
            iVar6 = memcmp(ppppppuVar2,ppppppuVar3,(ulong)uVar7);
            uVar9 = local_4e0 & 0xffffffff;
            ppppppuVar8 = local_4d8;
            if (iVar6 == 0) break;
          }
          ppppppuVar12 = ppppppuVar12 + 6;
        } while (ppppppuVar12 != ppppppuVar8 + uVar9 * 6);
      }
      if ((ppppppuVar12 != ppppppuVar8 + uVar9 * 6) && (*(short *)((long)ppppppuVar12 + 0x2e) == 3))
      {
        local_500 = (uint ******)((ulong)local_500 & 0xffffffffffffff00);
        ppppppuVar8 = (uint ******)(PTR_DAT_04bc0ec8 + 0x10);
        local_4f0 = (uint ******)&local_500;
        uStack_4e8 = 0x10;
        local_508 = ppppppuVar8;
        FUN_0018b070(&local_508,"interval",0xffffffffffffffff);
        uVar7 = FUN_00420870(&local_4e0,ppppppuVar12 + 3,&local_508,(undefined4 *)(param_1 + 0x38));
        local_508 = ppppppuVar8;
        FUN_0018b1a0(&local_508);
        goto LAB_00420cb0;
      }
    }
  }
  uVar7 = 0;
LAB_00420cb0:
  FUN_001fa9b0(&local_4e0);
  bVar5 = local_478 == local_468;
  while ((bVar4 = bVar5, local_478 != (undefined8 *)0x0 && (bVar4 = true, !bVar5))) {
    puVar11 = (undefined8 *)local_478[2];
    FUN_00187e4c(local_478);
    local_478 = puVar11;
    bVar5 = puVar11 == local_468;
  }
  if ((local_478 != (undefined8 *)0x0) && (bVar4)) {
    local_478[1] = 0;
  }
  if (local_458 != 0) {
    FUN_00187e4c();
  }
  return uVar7 & 1;
}

