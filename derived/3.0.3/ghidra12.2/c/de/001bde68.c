
uint FUN_001bde68(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_48 [4];
  undefined8 local_38;
  
  FUN_0019742c(param_3);
  local_48[0]._0_1_ = 0xf5;
  FUN_00193030(*(undefined8 *)(param_3 + 0x10),local_48,1,0xffffffffffffffff);
  if (*(char *)(param_2 + 0x40) != -0x30) {
    uVar1 = 0;
LAB_001bdffc:
    return uVar1 & 1;
  }
  local_48[0] = CONCAT31(local_48[0]._1_3_,0xd0);
  FUN_00193030(*(undefined8 *)(param_3 + 0x10),local_48,1,0xffffffffffffffff);
  local_48[0] = CONCAT22(local_48[0]._2_2_,*(undefined2 *)(param_2 + 0xfa));
  FUN_00193030(*(undefined8 *)(param_3 + 0x10),local_48,2,0xffffffffffffffff);
  local_48[0] = *(uint *)(param_2 + 0xfc);
  FUN_00193030(*(undefined8 *)(param_3 + 0x10),local_48,4,0xffffffffffffffff);
  local_48[0] = *(uint *)(param_2 + 0x100);
  FUN_00193030(*(undefined8 *)(param_3 + 0x10),local_48,4,0xffffffffffffffff);
  local_48[0]._0_2_ = *(undefined2 *)(param_2 + 0x104);
  FUN_00193030(*(undefined8 *)(param_3 + 0x10),local_48,2,0xffffffffffffffff);
  local_48[0] = CONCAT22(local_48[0]._2_2_,*(undefined2 *)(param_2 + 0x106));
  FUN_00193030(*(undefined8 *)(param_3 + 0x10),local_48,2,0xffffffffffffffff);
  local_48[0] = *(uint *)(param_2 + 0x108) ^ 0xdb319579;
  uVar2 = FUN_001abe94(param_3,local_48);
  if ((uVar2 & 1) != 0) {
    local_48[0] = *(uint *)(param_2 + 0x10c) ^ 0xbee17d2f;
    uVar2 = FUN_001abe94(param_3,local_48);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_001abe94(param_3,param_2 + 0x110), (uVar2 & 1) != 0)) {
      local_38 = 0;
      lVar4 = *(long *)(param_2 + 0x138);
      if (lVar4 == 0) {
        lVar4 = 0;
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar4 + 0x18);
        lVar4 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28);
      }
      FUN_001bd4ac(local_48,*(ushort *)(param_2 + 0xfa) & 0xf,param_4,param_5,
                   *(long *)(*(long *)(param_3 + 0x10) + 0x10) +
                   *(long *)(*(long *)(param_3 + 0x10) + 0x28),lVar4,uVar3);
      uVar1 = FUN_00197478(param_3,local_48,local_38);
      if (((uVar1 & 1) != 0) && (*(long *)(param_2 + 0x138) != 0)) {
        FUN_001975b8(param_3);
        return uVar1 & 1;
      }
      goto LAB_001bdffc;
    }
  }
  return 0;
}

