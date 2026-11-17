
void FUN_02a8b5d0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [127];
  undefined1 local_3d;
  undefined4 local_38;
  undefined2 local_34;
  undefined8 local_30;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  local_f0 = 0;
  local_ec = 0x3f800000;
  local_100 = 0xdf00000000;
  local_f8 = 0;
  puStack_c8 = local_bc;
  local_c0 = 0x80;
  local_3d = 0;
  local_bc[0] = 0;
  uVar6 = *(undefined4 *)(param_1 + 1);
  local_d0 = PTR_DAT_04bb2d88 + 0x10;
  local_30 = 0;
  local_34 = 0;
  local_38 = 7;
  local_e4 = 0;
  local_dc = 0;
  if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
     (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
    fVar5 = -500.0;
  }
  else {
    local_28[0] = 0;
    if (DAT_04c487d4 == -1) {
      local_24 = 7;
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      local_24 = 7;
      if ((*puVar1 & 2) != 0) {
        local_24 = 5;
      }
    }
    fVar5 = (float)FUN_00962700(*(long *)(DAT_04cfae30 + 0xa8),param_1 + 1,&local_24,1,local_28);
  }
  local_f0 = *(undefined4 *)(param_1 + 2);
  fVar4 = fVar5 + 15.0;
  if (*(int *)((long)param_1 + 4) != 4) {
    fVar4 = fVar5;
  }
  local_f8 = CONCAT44(fVar4,uVar6);
  local_ec = CONCAT44(*(undefined4 *)((long)param_1 + 0x14),(undefined4)local_ec);
  local_e4 = *param_1;
  if (((DAT_04ca5e30 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04ca5e30), iVar3 != 0)) {
    FUN_007a9614(&DAT_04ca5e20);
    __cxa_guard_release(&DAT_04ca5e30);
  }
  uVar2 = *(uint *)(param_1 + 3);
  if (*(uint *)PTR_DAT_04bb4268 <= uVar2) {
    uVar2 = 0;
  }
  local_dc = CONCAT44(*(undefined4 *)((long)param_1 + 0x1c),
                      *(undefined4 *)(*(long *)(PTR_DAT_04bb4268 + 8) + (long)(int)uVar2 * 4));
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_100,local_100 & 0xffffffff,0);
  return;
}

