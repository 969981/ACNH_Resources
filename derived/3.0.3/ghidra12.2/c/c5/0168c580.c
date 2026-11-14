
uint FUN_0168c580(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined *local_2080;
  undefined4 local_2078;
  undefined4 uStack_2074;
  byte local_2070;
  undefined1 auStack_2068 [8];
  int local_2060;
  int iStack_205c;
  undefined **local_2058;
  uint local_2050 [1024];
  undefined8 local_1050;
  undefined *local_1048;
  int local_1040;
  int local_103c;
  undefined *local_1038;
  int local_1030;
  int local_102c;
  
  local_2058 = &PTR_LAB_049bb2c8;
  memset(local_2050,0,0x1000);
  lVar8 = 0;
  do {
    uVar5 = *(uint *)(param_1 + 0x18050 + lVar8 + 4);
    lVar1 = lVar8 + 8;
    *(uint *)((long)local_2050 + lVar8 + 0x1000) =
         *(uint *)(param_1 + 0x18050 + lVar8) | *(uint *)((long)local_2050 + lVar8);
    *(uint *)((long)local_2050 + lVar8 + 0x1004) = uVar5 | *(uint *)((long)local_2050 + lVar8 + 4);
    lVar8 = lVar1;
  } while (lVar1 != 0x1000);
  memcpy(local_2050,&local_1050,0x1000);
  lVar8 = 0;
  do {
    uVar5 = *(uint *)(param_1 + 0x2b0e8 + lVar8 + 4);
    lVar1 = lVar8 + 8;
    *(uint *)((long)local_2050 + lVar8 + 0x1000) =
         *(uint *)(param_1 + 0x2b0e8 + lVar8) & *(uint *)((long)local_2050 + lVar8);
    *(uint *)((long)local_2050 + lVar8 + 0x1004) = uVar5 & *(uint *)((long)local_2050 + lVar8 + 4);
    lVar8 = lVar1;
  } while (lVar1 != 0x1000);
  memcpy(local_2050,&local_1050,0x1000);
  iVar7 = 0;
  lVar8 = 2;
  do {
    uVar5 = *(uint *)((long)&local_2058 + lVar8 * 4);
    lVar8 = lVar8 + 1;
    uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    iVar7 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar7;
  } while (lVar8 != 0x402);
  if (iVar7 != 0) {
    FUN_01696be0(auStack_2068,&local_2058);
    puVar4 = PTR_DAT_04bbc1a0;
    puVar2 = PTR_DAT_04bb2010;
    local_1040 = local_2060;
    local_103c = iStack_205c;
    local_1050 = PTR_DAT_04bbc1a0 + 0x10;
    local_1030 = local_2060 + 1;
    local_102c = iStack_205c + 1;
    local_1048 = PTR_DAT_04bb2010 + 0x10;
    local_1038 = local_1048;
    uVar6 = FUN_01675930(&local_1050,1);
    puVar3 = PTR_DAT_04bb43c0;
    if ((uVar6 & 1) != 0) {
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(param_2);
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          uStack_2074 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
          local_2078 = 1;
          local_2070 = FUN_017baf44();
          local_2070 = local_2070 & 1;
          local_2080 = PTR_DAT_04bb6268 + 0x10;
          uVar5 = FUN_01a50ae4(&local_2080,param_2,auStack_2068);
          if ((uVar5 & 1) != 0) {
            local_1050 = puVar4 + 0x10;
            local_1048 = puVar2 + 0x10;
            local_1030 = local_2060 + 1;
            local_102c = iStack_205c + 1;
            local_1040 = local_2060;
            local_103c = iStack_205c;
            local_1038 = local_1048;
            FUN_01686550(param_1,&local_1050);
            if (param_3 != 0) {
              *(int *)(param_3 + 8) = local_2060;
              *(int *)(param_3 + 0xc) = iStack_205c;
            }
          }
          goto LAB_0168c81c;
        }
      }
    }
  }
  uVar5 = 0;
LAB_0168c81c:
  return uVar5 & 1;
}

