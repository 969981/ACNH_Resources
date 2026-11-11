
uint FUN_0041ca50(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint ******__s1;
  uint ******__s2;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint ******ppppppuVar6;
  uint *****pppppuVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint ******ppppppuVar10;
  ulong local_4e8;
  uint ******local_4e0;
  undefined8 local_4d8;
  undefined8 **ppuStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  int local_490;
  undefined8 local_488;
  undefined8 *local_480;
  undefined8 uStack_478;
  undefined8 *local_470;
  undefined8 uStack_468;
  long local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 local_448;
  uint ******local_58;
  uint ******local_50;
  undefined8 local_48;
  
  local_480 = &uStack_458;
  local_490 = 0;
  uStack_468 = 0;
  local_488 = 0;
  uStack_478 = 0x10000;
  local_460 = 0;
  uStack_458 = 1000;
  ppuStack_4d0 = &local_480;
  local_4d8 = 0;
  local_498 = 0x400;
  local_58 = (uint ******)*param_2;
  local_450 = 0;
  local_448 = 0;
  local_4e8 = 0;
  local_4e0 = (uint ******)0x0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_470 = local_480;
  local_50 = local_58;
  FUN_00190460(&local_4e8,&local_58);
  uVar5 = 0;
  if (local_490 == 0) {
    uVar8 = local_4e8 & 0xffffffff;
    local_48 = 0x405000000000000;
    local_50 = (uint ******)0x4094d2d;
    local_58 = (uint ******)&DAT_00000006;
    if ((int)local_4e8 != 0) {
      ppppppuVar6 = local_4e0;
      ppppppuVar10 = local_4e0;
      do {
        uVar5 = (uint)local_58;
        if ((local_48 & 0x1000000000000000) != 0) {
          uVar5 = 0x15 - local_48._5_1_;
        }
        uVar1 = *(uint *)ppppppuVar10;
        if ((*(ushort *)((long)ppppppuVar10 + 0x16) & 0x1000) != 0) {
          uVar1 = 0x15 - *(byte *)((long)ppppppuVar10 + 0x15);
        }
        if (uVar5 == uVar1) {
          __s1 = local_50;
          if ((local_48 & 0x1000000000000000) != 0) {
            __s1 = (uint ******)&local_58;
          }
          __s2 = (uint ******)ppppppuVar10[1];
          if ((*(ushort *)((long)ppppppuVar10 + 0x16) & 0x1000) != 0) {
            __s2 = ppppppuVar10;
          }
          if (__s1 == __s2) break;
          iVar4 = memcmp(__s1,__s2,(ulong)uVar5);
          uVar8 = local_4e8 & 0xffffffff;
          ppppppuVar6 = local_4e0;
          if (iVar4 == 0) break;
        }
        ppppppuVar10 = ppppppuVar10 + 6;
      } while (ppppppuVar10 != ppppppuVar6 + uVar8 * 6);
      if ((ppppppuVar10 != ppppppuVar6 + uVar8 * 6) &&
         ((*(ushort *)((long)ppppppuVar10 + 0x2e) >> 4 & 1) != 0)) {
        pppppuVar7 = ppppppuVar10[3];
        *(uint ******)(param_1 + 8) = pppppuVar7;
        if (pppppuVar7 == (uint *****)0x0) {
          uVar5 = 1;
        }
        else {
          uVar5 = FUN_00420560(param_1,param_2);
        }
        goto LAB_0041cbf8;
      }
    }
    uVar5 = 0;
  }
LAB_0041cbf8:
  FUN_001fa9b0(&local_4e8);
  bVar3 = local_480 == local_470;
  while ((bVar2 = bVar3, local_480 != (undefined8 *)0x0 && (bVar2 = true, !bVar3))) {
    puVar9 = (undefined8 *)local_480[2];
    FUN_00187e4c(local_480);
    local_480 = puVar9;
    bVar3 = puVar9 == local_470;
  }
  if ((local_480 != (undefined8 *)0x0) && (bVar2)) {
    local_480[1] = 0;
  }
  if (local_460 != 0) {
    FUN_00187e4c();
  }
  return uVar5 & 1;
}

