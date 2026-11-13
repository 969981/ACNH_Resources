
/* WARNING: Removing unreachable block (ram,0x012107ec) */
/* WARNING: Removing unreachable block (ram,0x01210a58) */
/* WARNING: Removing unreachable block (ram,0x01210ba0) */

void FUN_012106c0(long param_1,long param_2,uint param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_20a8 [8];
  undefined1 auStack_20a0 [8];
  uint local_2098;
  uint local_2094;
  undefined *local_2090;
  undefined4 local_2088;
  undefined4 uStack_2084;
  byte local_2080;
  undefined *local_2078;
  uint local_2070 [1025];
  undefined4 local_106c;
  uint local_1068 [2];
  undefined1 auStack_1060 [4096];
  
  local_2078 = PTR_DAT_04bbdd38 + 0x10;
  uStack_2084 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_2088 = 1;
  local_2080 = FUN_017baf44();
  local_2080 = local_2080 & 1;
  local_2090 = PTR_DAT_04bb6268 + 0x10;
  lVar9 = param_2 + (ulong)param_3 * 0x1008;
  if (2 < param_3) {
    lVar9 = param_2;
  }
  local_1068[0] = param_3;
  memset(local_2070,0,0x1000);
  lVar8 = 0;
  do {
    puVar3 = (uint *)(lVar9 + 8 + lVar8);
    uVar6 = *(uint *)((long)local_2070 + lVar8 + 4);
    lVar2 = lVar8 + 8;
    uVar4 = puVar3[1];
    *(uint *)((long)local_1068 + lVar8) = *puVar3 | *(uint *)((long)local_2070 + lVar8);
    *(uint *)((long)local_1068 + lVar8 + 4) = uVar4 | uVar6;
    lVar8 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(local_2070,local_1068,0x1000);
  local_1068[0] = 7;
  lVar9 = 0;
  do {
    puVar3 = (uint *)(param_1 + 0x1b068 + lVar9);
    uVar6 = *(uint *)((long)local_2070 + lVar9 + 4);
    lVar8 = lVar9 + 8;
    uVar4 = puVar3[1];
    *(uint *)((long)local_1068 + lVar9) = *puVar3 & *(uint *)((long)local_2070 + lVar9);
    *(uint *)((long)local_1068 + lVar9 + 4) = uVar4 & uVar6;
    lVar9 = lVar8;
  } while (lVar8 != 0x1000);
  memcpy(local_2070,local_1068,0x1000);
  puVar5 = PTR_DAT_04bbbc68;
  iVar10 = 0;
  lVar9 = 2;
  do {
    lVar8 = lVar9 + -2;
    lVar9 = lVar9 + 1;
    uVar6 = local_2070[lVar8] - (local_2070[lVar8] >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 8);
    iVar10 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar10;
  } while (lVar9 != 0x402);
  if (param_4 <= iVar10) {
    iVar11 = 0;
    do {
      FUN_01696be0(auStack_20a0,&local_2078);
      FUN_01a5033c(auStack_20a8,&local_2090,0,auStack_20a0,0);
      lVar9 = *(long *)puVar5;
      if ((((((lVar9 == 0) || (*(long *)(lVar9 + 0xb0) == 0)) ||
            (*(long *)(*(long *)(lVar9 + 0xb0) + 8) == 0)) ||
           ((*(long *)(lVar9 + 0x488) == 0 || (*(long *)(*(long *)(lVar9 + 0x488) + 8) == 0)))) ||
          (*(long *)(lVar9 + 0x2b0) == 0)) || (*(long *)(*(long *)(lVar9 + 0x2b0) + 8) == 0)) {
LAB_01210a80:
        iVar11 = iVar11 + -1;
        if (((DAT_05233970 <= (int)local_2098) &&
            ((((int)local_2098 <= DAT_05233980 && (DAT_05233974 <= (int)local_2094)) &&
             ((int)local_2094 <= DAT_05233984)))) &&
           (uVar6 = (local_2094 & 0x1fffffe) * 0x80 + ((int)local_2098 >> 1), uVar6 >> 0xf == 0)) {
          uVar6 = uVar6 >> 5;
          local_2070[uVar6] =
               local_2070[uVar6] & (1 << (ulong)(local_2098 >> 1 & 0x1f) ^ 0xffffffffU);
        }
      }
      else {
        uVar6 = FUN_0277d6c4(auStack_20a8);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01210a80;
        FUN_0124c030(local_1068,auStack_20a8);
        uVar7 = FUN_012509c0(local_1068,0);
        if ((uVar7 & 1) == 0) {
          if (((DAT_05233970 <= (int)local_2098) && ((int)local_2098 <= DAT_05233980)) &&
             ((DAT_05233974 <= (int)local_2094 &&
              (((int)local_2094 <= DAT_05233984 &&
               (uVar6 = (local_2094 & 0x1fffffe) * 0x80 + ((int)local_2098 >> 1), uVar6 >> 0xf == 0)
               ))))) {
            uVar6 = uVar6 >> 5;
            local_2070[uVar6] =
                 local_2070[uVar6] & (1 << (ulong)(local_2098 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          iVar11 = iVar11 + -1;
        }
        else {
          FUN_01250bf0(local_1068);
          FUN_01250ef0(local_1068,param_5);
          FUN_011f3390(&local_2090,0,auStack_1060,auStack_20a0);
          if ((((DAT_05233970 <= (int)local_2098) && ((int)local_2098 <= DAT_05233980)) &&
              (DAT_05233974 <= (int)local_2094)) && ((int)local_2094 <= DAT_05233984)) {
            uVar6 = (local_2094 & 0x1fffffe) * 0x80 + ((int)local_2098 >> 1);
            if (uVar6 >> 0xf == 0) {
              local_2070[uVar6 >> 5] =
                   local_2070[uVar6 >> 5] & (1 << (ulong)(local_2098 >> 1 & 0x1f) ^ 0xffffffffU);
              lVar9 = param_1 + 0x1b060 + (ulong)(uVar6 >> 5) * 4;
              *(uint *)(lVar9 + 8) =
                   *(uint *)(lVar9 + 8) & (1 << (ulong)(local_2098 >> 1 & 0x1f) ^ 0xffffffffU);
            }
          }
          local_106c = 8;
          if (((DAT_05233970 <= (int)local_2098) && ((int)local_2098 <= DAT_05233980)) &&
             ((DAT_05233974 <= (int)local_2094 &&
              (((int)local_2094 <= DAT_05233984 &&
               (uVar6 = (local_2094 & 0x1fffffe) * 0x80 + ((int)local_2098 >> 1), uVar6 >> 0xf == 0)
               ))))) {
            lVar9 = param_1 + 0x1c068 + (ulong)(uVar6 >> 5) * 4;
            *(uint *)(lVar9 + 8) =
                 *(uint *)(lVar9 + 8) & (1 << (ulong)(local_2098 >> 1 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while ((iVar11 < param_4) && (bVar1 = 1 < iVar10, iVar10 = iVar10 + -1, bVar1));
  }
  return;
}

