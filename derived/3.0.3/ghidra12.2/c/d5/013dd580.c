
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_013dd580(long param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 local_114 [4];
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 ***local_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***local_f0;
  undefined8 ***local_e8;
  undefined8 ***local_e0;
  undefined8 ***local_d8;
  undefined8 ***local_d0;
  undefined8 ***local_c8;
  undefined8 ***local_c0;
  undefined8 **local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [80];
  
  local_f0 = &local_e8;
  local_110 = 0;
  local_108 = (undefined1 *)0x0;
  local_e8 = &local_e0;
  local_e0 = &local_d8;
  local_d8 = &local_d0;
  local_d0 = &local_c8;
  local_c8 = &local_c0;
  local_100 = &local_f0;
  local_c0 = &local_b8;
  local_b8 = &local_b0;
  local_b0 = &local_a8;
  local_a8 = 0;
  if (auStack_a0 != (undefined1 *)0x0) {
    local_110 = 0xa00000000;
    local_108 = auStack_a0;
  }
  uVar7 = 0;
  pppuStack_f8 = local_100;
  do {
    if (param_3 < *(uint *)(param_1 + 0x88)) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x90) + (long)(int)param_3 * 8);
      if ((long)*(int *)(lVar6 + 0x1f8) <= (long)uVar7) goto LAB_013dd6e8;
    }
    else {
      if ((long)_DAT_000001f8 <= (long)uVar7) {
LAB_013dd6e8:
        iVar2 = (int)local_110;
        if ((int)local_110 != 0) {
          uVar4 = nn::os::GetSystemTick();
          uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
          uVar4 = uVar1 ^ uVar1 * 0x800;
          uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
          uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
          uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
          *param_2 = **(undefined4 **)
                       (local_108 +
                       ((long)((local_110 & 0xffffffff) *
                              (ulong)(uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1)) >> 0x20) * 8);
        }
        return iVar2 != 0;
      }
      lVar6 = 0;
    }
    if (uVar7 < *(uint *)(lVar6 + 0x1d8)) {
      lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + uVar7 * 8);
    }
    else {
      lVar6 = 0;
    }
    local_114[0] = 1;
    uVar5 = (**(code **)(*(long *)(lVar6 + 0x128) + 0x118))(lVar6 + 0x128,local_114);
    pppuVar3 = local_100;
    if ((uVar5 & 1) != 0) {
      if ((int)local_110 < local_110._4_4_) {
        if (local_100 != (undefined8 ***)0x0) {
          local_100 = (undefined8 ***)*local_100;
        }
        *(int *)pppuVar3 = (int)uVar7;
        if ((int)local_110 < local_110._4_4_) {
          *(undefined8 ****)(local_108 + (long)(int)local_110 * 8) = pppuVar3;
          local_110 = CONCAT44(local_110._4_4_,(int)local_110 + 1);
        }
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

