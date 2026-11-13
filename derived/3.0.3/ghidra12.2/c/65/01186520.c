
uint FUN_01186520(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *local_3d0;
  undefined1 *puStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  byte *local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  byte *local_388;
  undefined4 local_380;
  undefined8 *local_378;
  undefined8 *puStack_370;
  undefined8 local_368;
  undefined8 local_360 [100];
  
  uVar4 = *(uint *)(param_1 + 9000);
  uVar5 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_1 + 200;
    if (uVar4 == 1) {
      uVar6 = 0;
    }
    else {
      lVar8 = param_1 + 0x120;
      uVar7 = 0;
      do {
        lVar2 = lVar8 + -0x58;
        if (99 < uVar7) {
          lVar2 = lVar1;
        }
        lVar3 = lVar8;
        if (99 < uVar7 + 1) {
          lVar3 = lVar1;
        }
        uVar9 = *(undefined8 *)(lVar3 + 0x48);
        uVar6 = uVar7 + 2;
        lVar8 = lVar8 + 0xb0;
        local_360[uVar7] = *(undefined8 *)(lVar2 + 0x48);
        local_360[uVar7 + 1] = uVar9;
        uVar7 = uVar6;
      } while (uVar6 != (uVar5 & 0xfffffffe));
    }
    if ((uVar4 & 1) != 0) {
      lVar8 = lVar1 + uVar6 * 0x58;
      if (99 < uVar6) {
        lVar8 = lVar1;
      }
      local_360[uVar6] = *(undefined8 *)(lVar8 + 0x48);
    }
  }
  local_378 = local_360;
  puStack_370 = local_378 + uVar5;
  local_368 = 0xffffffff00000000;
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))((long *)(param_1 + 0x18));
  local_3b0 = *(byte **)(param_1 + 0x20);
  if (local_3b0 == (byte *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)*local_3b0;
    if (*local_3b0 != 0) {
      uVar5 = 0;
      do {
        lVar1 = uVar5 + 1;
        uVar5 = uVar5 + 1;
      } while (local_3b0[lVar1] != 0);
    }
  }
  local_3a8 = CONCAT44(local_3a8._4_4_,(int)uVar5);
  (**(code **)(*(long *)(param_1 + 0x70) + 0x18))((long *)(param_1 + 0x70));
  local_388 = *(byte **)(param_1 + 0x78);
  if (local_388 == (byte *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)*local_388;
    if (*local_388 != 0) {
      uVar5 = 0;
      do {
        lVar1 = uVar5 + 1;
        uVar5 = uVar5 + 1;
      } while (local_388[lVar1] != 0);
    }
  }
  local_380 = (undefined4)uVar5;
  uVar5 = FUN_0068e3d0(&local_378,&local_3b0,&local_388);
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    local_3a8 = 0;
    local_3a0 = 0;
    local_398 = 0;
    local_390 = 0;
    local_3d0 = &LAB_011866f0;
    puStack_3c8 = &LAB_01186718;
    local_3c0 = param_3;
    uStack_3b8 = param_3;
    uVar4 = FUN_0068f1e0(&local_378,&local_3b0,param_2,&local_3d0);
  }
  return uVar4 & 1;
}

