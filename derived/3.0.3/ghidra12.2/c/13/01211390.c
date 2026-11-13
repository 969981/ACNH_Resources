
/* WARNING: Removing unreachable block (ram,0x01211480) */
/* WARNING: Removing unreachable block (ram,0x01211630) */

void FUN_01211390(long param_1,long param_2,uint param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_2090 [8];
  undefined1 auStack_2088 [8];
  uint local_2080;
  uint local_207c;
  undefined *local_2078;
  uint local_2070 [1025];
  undefined4 local_106c;
  undefined8 local_1068;
  undefined4 local_1060;
  undefined4 local_105c;
  byte local_1058;
  
  if (0 < param_4) {
    local_1068 = (undefined *)CONCAT44(local_1068._4_4_,param_3);
    local_2078 = PTR_DAT_04bbdd38 + 0x10;
    lVar6 = param_2 + (ulong)param_3 * 0x1008;
    if (2 < param_3) {
      lVar6 = param_2;
    }
    memset(local_2070,0,0x1000);
    lVar5 = 0;
    do {
      puVar3 = (uint *)(lVar6 + 8 + lVar5);
      lVar2 = lVar5 + 8;
      uVar7 = puVar3[1];
      *(uint *)((long)local_2070 + lVar5 + 0x1008) = *puVar3 | *(uint *)((long)local_2070 + lVar5);
      *(uint *)((long)&local_1068 + lVar5 + 4) = uVar7 | *(uint *)((long)local_2070 + lVar5 + 4);
      lVar5 = lVar2;
    } while (lVar2 != 0x1000);
    memcpy(local_2070,&local_1068,0x1000);
    local_1068 = (undefined *)CONCAT44(local_1068._4_4_,5);
    lVar6 = 0;
    do {
      puVar3 = (uint *)(param_1 + 0x19058 + lVar6);
      lVar5 = lVar6 + 8;
      uVar7 = puVar3[1];
      *(uint *)((long)local_2070 + lVar6 + 0x1008) = *puVar3 & *(uint *)((long)local_2070 + lVar6);
      *(uint *)((long)&local_1068 + lVar6 + 4) = uVar7 & *(uint *)((long)local_2070 + lVar6 + 4);
      lVar6 = lVar5;
    } while (lVar5 != 0x1000);
    memcpy(local_2070,&local_1068,0x1000);
    uVar7 = 0;
    lVar6 = 2;
    do {
      lVar5 = lVar6 + -2;
      lVar6 = lVar6 + 1;
      uVar4 = local_2070[lVar5] - (local_2070[lVar5] >> 1 & 0x55555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      uVar7 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar7;
    } while (lVar6 != 0x402);
    if (param_4 <= (int)uVar7) {
      local_1060 = 1;
      local_105c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
      local_1058 = FUN_017baf44();
      local_1058 = local_1058 & 1;
      iVar8 = 1;
      local_1068 = PTR_DAT_04bb6268 + 0x10;
      do {
        FUN_01696be0(auStack_2088,&local_2078);
        FUN_01689418(auStack_2090,0);
        FUN_011f3880(&local_1068,0,auStack_2090,auStack_2088);
        if (((DAT_05233970 <= (int)local_2080 && (int)local_2080 <= DAT_05233980) &&
            (DAT_05233974 <= (int)local_207c)) && ((int)local_207c <= DAT_05233984)) {
          uVar4 = (local_207c & 0x1fffffe) * 0x80 + ((int)local_2080 >> 1);
          if (uVar4 >> 0xf == 0) {
            local_2070[uVar4 >> 5] =
                 local_2070[uVar4 >> 5] & (1 << (ulong)(local_2080 >> 1 & 0x1f) ^ 0xffffffffU);
            lVar6 = param_1 + 0x19050 + (ulong)(uVar4 >> 5) * 4;
            *(uint *)(lVar6 + 8) =
                 *(uint *)(lVar6 + 8) & (1 << (ulong)(local_2080 >> 1 & 0x1f) ^ 0xffffffffU);
          }
        }
        local_106c = 5;
        if (param_4 <= iVar8) {
          return;
        }
        iVar8 = iVar8 + 1;
        bVar1 = 1 < uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar1);
    }
  }
  return;
}

