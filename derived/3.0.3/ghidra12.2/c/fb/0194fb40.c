
undefined8 FUN_0194fb40(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  uint local_2054 [3];
  undefined *local_2048;
  uint local_2040 [2048];
  
  uVar7 = FUN_01950840();
  puVar5 = PTR_DAT_04bb30a0;
  if ((int)uVar7 != 0xfffe) {
    return uVar7;
  }
  if ((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) &&
     (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) {
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar6 = *puVar8 ^ *puVar8 << 0xb;
    uVar3 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar6 = uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3;
    puVar8[2] = uVar3;
    puVar8[3] = uVar6;
    if ((0x60 < (uint)((ulong)uVar6 * 100 >> 0x20)) &&
       (((uVar6 = FUN_00a86724(*(undefined8 *)puVar5), (uVar6 & 0xfffffffe) != 4 &&
         (uVar6 = FUN_00a86724(*(undefined8 *)puVar5), (uVar6 & 0xfffffffe) != 6)) &&
        (*PTR_DAT_04bbbb88 != '\0')))) {
      local_2048 = PTR_DAT_04bbdd38 + 0x10;
      memset(local_2040,0,0x1000);
      puVar2 = PTR_DAT_04bbbb68;
      lVar10 = 0;
      do {
        lVar1 = lVar10 + 8;
        uVar6 = *(uint *)((long)(PTR_DAT_04bbbb68 + lVar10 + 0xf080) + 4);
        *(uint *)((long)local_2040 + lVar10 + 0x1000) =
             *(uint *)(PTR_DAT_04bbbb68 + lVar10 + 0xf080) | *(uint *)((long)local_2040 + lVar10);
        *(uint *)((long)local_2040 + lVar10 + 0x1004) =
             uVar6 | *(uint *)((long)local_2040 + lVar10 + 4);
        lVar10 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_2040,local_2040 + 0x400,0x1000);
      lVar10 = 0;
      do {
        lVar1 = lVar10 + 8;
        uVar6 = *(uint *)((long)(puVar2 + lVar10 + 0xe078) + 4);
        *(uint *)((long)local_2040 + lVar10 + 0x1000) =
             *(uint *)(puVar2 + lVar10 + 0xe078) | *(uint *)((long)local_2040 + lVar10);
        *(uint *)((long)local_2040 + lVar10 + 0x1004) =
             uVar6 | *(uint *)((long)local_2040 + lVar10 + 4);
        lVar10 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_2040,local_2040 + 0x400,0x1000);
      uVar9 = FUN_011e09c0(local_2054,&local_2048,1,0);
      if ((uVar9 & 1) != 0) {
        return 0x255;
      }
    }
  }
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_2048 = (undefined *)CONCAT44(local_2048._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      lVar10 = FUN_00a8c18c(*(undefined8 *)puVar5);
      goto LAB_0194fda4;
    }
  }
  lVar10 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
LAB_0194fda4:
  uVar6 = *(uint *)(lVar10 + 4);
  local_2048 = (undefined *)CONCAT44(local_2048._4_4_,*(byte *)(lVar10 + 2) - 1);
  if ((uVar6 & 0xfc) == 4) {
    local_2040[0x400] = 1;
  }
  else {
    uVar3 = uVar6 & 0xff;
    if ((uVar6 & 0xf8) == 8) {
      local_2040[0x400] = 2;
    }
    else if (uVar3 == 0x10) {
      local_2040[0x400] = 3;
    }
    else if (uVar3 - 0x11 < 2) {
      local_2040[0x400] = 4;
    }
    else {
      local_2040[0x400] = 5;
      if (3 < uVar3 - 0x13) {
        local_2040[0x400] = 0;
      }
    }
  }
  local_2054[0] = 0;
  if ((*(long *)puVar5 != 0) &&
     (local_2054[0] = *(uint *)(*(long *)puVar5 + 0x65204), 1 < local_2054[0])) {
    local_2054[0] = 0;
  }
  uVar7 = FUN_01950d30(param_1,local_2054);
  uVar7 = FUN_019583d0(param_1,uVar7,&local_2048,local_2040 + 0x400);
  return uVar7;
}

