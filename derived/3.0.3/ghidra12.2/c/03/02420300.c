
void FUN_02420300(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined *local_a0;
  char *local_98;
  undefined4 local_90;
  char local_8c [8];
  char local_84 [8];
  undefined1 local_7c;
  undefined1 local_4d;
  undefined8 local_48;
  float local_40;
  undefined4 local_3c;
  undefined1 local_38 [6];
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  local_90 = 0x40;
  _local_38 = 0x100000000;
  local_98 = local_8c;
  local_4d = 0;
  uVar4 = 0;
  local_7c = 0;
  local_a0 = PTR_DAT_04bb2bc0 + 0x10;
  local_8c = (char  [8])s_PlayerCandleBlow_04092aa0._0_8_;
  lVar6 = *(long *)(param_1 + 0x68);
  local_84 = (char  [8])s_PlayerCandleBlow_04092aa0._8_8_;
  local_3c = *(undefined4 *)(lVar6 + 0x2b4);
  local_40 = *(float *)(lVar6 + 0x280);
  local_48 = *(undefined8 *)(lVar6 + 0x278);
  if (*(int *)(param_1 + 0x178) != 1) {
    uVar3 = FUN_00a738a0(param_1 + 0x1ee8,0);
    uVar4 = 0;
    if ((uVar3 & 1) != 0) {
      uVar1 = FUN_00a74b78(param_1 + 0x1ee8);
      uVar4 = 1;
      if (uVar1 < 0xf) {
        if ((1 << (ulong)(uVar1 & 0x1f) & 0x600dU) == 0) {
          if ((uVar1 == 7) || (uVar1 == 9)) {
            uVar4 = (uint)((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
          }
        }
        else {
          uVar4 = 2;
        }
      }
    }
  }
  local_38._0_5_ = CONCAT14(0,uVar4);
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  (**(code **)(local_a0 + 0x18))(&local_a0);
  uVar2 = FUN_006bd550(local_98,0);
  *(undefined4 *)(param_1 + 0x1980) = uVar2;
  *(int *)(param_1 + 0x1984) = (int)((float)local_48 * 999.99994);
  iVar5 = (int)(local_48._4_4_ * 4.0);
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x1988) = (short)iVar5;
  *(undefined2 *)(param_1 + 0x198e) = local_3c._2_2_;
  *(int *)(param_1 + 0x198a) = (int)(local_40 * 999.99994);
  *(char *)(param_1 + 0x1990) = (char)_local_38;
  *(undefined2 *)(param_1 + 0x1991) = local_38._4_2_;
  *(undefined1 *)(param_1 + 0x1993) = uStack_32;
  *(undefined1 *)(param_1 + 0x1994) = uStack_31;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar6 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar6,0x8d);
  return;
}

