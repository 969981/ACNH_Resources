
undefined8 FUN_012aa334(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 local_48;
  byte local_40;
  undefined8 local_3c;
  uint local_34;
  
  if (*(long *)(param_3 + 8) == 0) {
    return 0;
  }
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x244db4da;
  local_34 = 0;
  uVar4 = FUN_012726c0(param_3,0);
  uVar8 = 0;
  if ((uVar4 & 1) != 0) {
    uVar8 = 1 << (ulong)((uint)local_48 & 0x1f);
    if (7 < (uint)local_48) {
      uVar8 = 0;
    }
  }
  local_48._0_4_ = 1;
  uVar4 = FUN_012726c0(param_3,1);
  if (((uVar4 & 1) != 0) && ((uint)local_48 < 8)) {
    uVar8 = 1 << (ulong)((uint)local_48 & 0x1f) | uVar8;
  }
  local_48._0_4_ = 2;
  uVar4 = FUN_012726c0(param_3,2);
  if (((uVar4 & 1) != 0) && ((uint)local_48 < 8)) {
    uVar8 = 1 << (ulong)((uint)local_48 & 0x1f) | uVar8;
  }
  local_48._0_4_ = 3;
  uVar4 = FUN_012726c0(param_3,3);
  if (((uVar4 & 1) != 0) && ((uint)local_48 < 8)) {
    uVar8 = 1 << (ulong)((uint)local_48 & 0x1f) | uVar8;
  }
  local_48._0_4_ = 4;
  uVar4 = FUN_012726c0(param_3,4);
  if (((uVar4 & 1) != 0) && ((uint)local_48 < 8)) {
    uVar8 = 1 << (ulong)((uint)local_48 & 0x1f) | uVar8;
  }
  local_48._0_4_ = 5;
  uVar4 = FUN_012726c0(param_3);
  if (((uVar4 & 1) != 0) && ((uint)local_48 < 8)) {
    uVar8 = 1 << (ulong)((uint)local_48 & 0x1f) | uVar8;
  }
  local_48._0_4_ = 6;
  uVar4 = FUN_012726c0(param_3,6);
  if (((uVar4 & 1) != 0) && ((uint)local_48 < 8)) {
    uVar8 = 1 << (ulong)((uint)local_48 & 0x1f) | uVar8;
  }
  local_48 = CONCAT44(local_48._4_4_,7);
  uVar4 = FUN_012726c0(param_3,7);
  if (((uVar4 & 1) != 0) && ((uint)local_48 < 8)) {
    uVar8 = 1 << (ulong)((uint)local_48 & 0x1f) | uVar8;
  }
  local_48._4_4_ = uVar8;
  local_40 = FUN_012725c0(param_3);
  local_40 = local_40 & 1;
  uVar3 = FUN_012724b0(param_3);
  local_3c = CONCAT44(local_3c._4_4_,uVar3);
  local_48 = (ulong)local_48._4_4_ << 0x20;
  uVar4 = FUN_01272800(param_3,&local_48);
  if ((uVar4 & 1) != 0) {
    local_3c = CONCAT44((uint)local_48,(undefined4)local_3c);
  }
  puVar6 = *(uint **)(param_3 + 8);
  if (puVar6 != (uint *)0x0) {
    uVar8 = *puVar6;
    local_34 = 0;
    if ((uVar8 == 0) || (puVar6 == (uint *)(ulong)uVar8)) goto LAB_012aa5b8;
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar8);
    local_34 = 0;
    if (*puVar7 == 0) goto LAB_012aa5b8;
    uVar8 = puVar7[1];
    if ((uVar8 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar8 != 0) {
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar8);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_051600b8) &&
           (local_34 = (uint)*(ushort *)(DAT_051600c0 + (long)(int)uVar2 * 2), local_34 < 6))
        goto LAB_012aa5b8;
      }
    }
  }
  local_34 = 0;
LAB_012aa5b8:
  uVar5 = FUN_012aa5e8(param_1,param_2,(long)&local_48 + 4);
  return uVar5;
}

