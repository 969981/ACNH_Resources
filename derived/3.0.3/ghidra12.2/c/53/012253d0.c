
uint FUN_012253d0(undefined4 param_1,undefined4 param_2,float param_3,undefined1 param_4 [16],
                 float param_5,long param_6,long param_7,uint *param_8,undefined4 *param_9,
                 uint param_10)

{
  MutexType *pMVar1;
  undefined2 *puVar2;
  uint *puVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined2 local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined **local_88;
  uint local_80;
  uint local_7c;
  long local_78;
  
  puVar5 = PTR_DAT_04bb43c0;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 & 1) != 0) {
      lVar12 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(param_8);
      lVar11 = *(long *)puVar5;
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_78 = 0;
          local_80 = *param_8;
          local_7c = param_8[1];
          local_88 = &PTR_FUN_04a36b50;
          uVar6 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar5 != 0) {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(param_8);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8), lVar11 != 0)
                 ) {
                local_78 = lVar11;
              }
            }
          }
          iVar7 = FUN_01af93e8(&local_88);
          param_10 = iVar7 == 0x17 | param_10;
        }
      }
    }
  }
  FUN_012257c0(&local_90,param_8);
  pMVar1 = (MutexType *)(param_6 + 0x238);
  nn::os::LockMutex(pMVar1);
  uVar6 = 0;
  lVar11 = param_6 + 600;
  pbVar10 = (byte *)(param_6 + 0x2b0);
  do {
    if ((*(long *)(pbVar10 + -8) == param_7) && ((param_10 & 1) == (*pbVar10 & 8) >> 3))
    goto LAB_0122560c;
    uVar6 = uVar6 + 1;
    pbVar10 = pbVar10 + 0x60;
  } while (uVar6 != 0x50);
  uVar6 = 0;
  lVar12 = lVar11;
  do {
    if (*(long *)(lVar12 + 0x50) == 0) {
LAB_01225608:
      *(long *)(lVar12 + 0x50) = param_7;
LAB_0122560c:
      nn::os::UnlockMutex(pMVar1);
      if (0x4f < uVar6) {
        return 0xffffffff;
      }
      puVar2 = (undefined2 *)(lVar11 + (ulong)uVar6 * 0x60 + 0x30);
      uVar8 = FUN_0277d7b4(puVar2,&local_90);
      if ((uVar8 & 1) == 0) {
        *puVar2 = local_90;
        lVar12 = lVar11 + (ulong)uVar6 * 0x60;
        *(undefined2 *)(lVar12 + 0x32) = local_8e;
        *(undefined4 *)(lVar12 + 0x34) = local_8c;
        bVar9 = *(byte *)(lVar12 + 0x58) | 2;
        *(byte *)(lVar12 + 0x58) = bVar9;
      }
      else {
        lVar12 = lVar11 + (ulong)uVar6 * 0x60;
        bVar9 = *(byte *)(lVar12 + 0x58) | 1;
        *(byte *)(lVar12 + 0x58) = bVar9;
      }
      if ((param_10 & 1) != 0) {
        bVar9 = bVar9 | 8;
        *(byte *)(lVar11 + (ulong)uVar6 * 0x60 + 0x58) = bVar9;
      }
      lVar12 = lVar11 + (ulong)uVar6 * 0x60;
      *(undefined4 *)(lVar12 + 0x38) = *param_9;
      *(undefined4 *)(lVar12 + 0x3c) = param_9[1];
      uVar13 = param_9[2];
      *(byte *)(lVar12 + 0x58) = bVar9 & 0xfb;
      *(undefined4 *)(lVar12 + 0x44) = param_1;
      *(undefined4 *)(lVar12 + 0x48) = param_2;
      local_80 = (int)((float)(int)param_3 / 5.0) - (uint)(param_3 < 0.0);
      local_7c = (int)((float)(int)param_5 / 5.0) - (uint)(param_5 < 0.0);
      *(undefined4 *)(lVar12 + 0x40) = uVar13;
      local_88 = (undefined **)(PTR_DAT_04bbbad8 + 0x10);
      if ((local_80 & 1) != 0) {
        local_80 = local_80 - 1;
      }
      if ((local_7c & 1) != 0) {
        local_7c = local_7c - 1;
      }
      uVar13 = FUN_01224d80(param_6,&local_88);
      *(undefined4 *)(lVar11 + (ulong)uVar6 * 0x60 + 0x4c) = uVar13;
      if (DAT_05150358 == 0) {
        return uVar6;
      }
      if (*(long *)(DAT_05150358 + 0xb0) == 0) {
        return uVar6;
      }
      if (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0) {
        return uVar6;
      }
      if (*(long *)(DAT_05150358 + 0x488) == 0) {
        return uVar6;
      }
      if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
        return uVar6;
      }
      if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
        return uVar6;
      }
      if (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0) {
        return uVar6;
      }
      FUN_0277d6c4(&local_90);
      return uVar6;
    }
    if (*(long *)(lVar12 + 0xb0) == 0) {
      uVar6 = uVar6 + 1;
      lVar12 = lVar12 + 0x60;
      goto LAB_01225608;
    }
    uVar6 = uVar6 + 2;
    lVar12 = lVar12 + 0xc0;
    if (uVar6 == 0x50) {
      nn::os::UnlockMutex(pMVar1);
      return 0xffffffff;
    }
  } while( true );
}

