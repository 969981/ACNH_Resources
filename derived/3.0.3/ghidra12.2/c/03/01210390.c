
/* WARNING: Removing unreachable block (ram,0x01210640) */
/* WARNING: Removing unreachable block (ram,0x01210510) */
/* WARNING: Removing unreachable block (ram,0x01210590) */
/* WARNING: Removing unreachable block (ram,0x01210648) */
/* WARNING: Removing unreachable block (ram,0x01210638) */
/* WARNING: Removing unreachable block (ram,0x01210664) */

void FUN_01210390(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_90 [8];
  uint local_88;
  uint local_84;
  undefined **local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  byte local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  uStack_74 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_78 = 1;
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_80 = &PTR_LAB_0492e760;
  lVar6 = 2;
  iVar2 = 0;
  do {
    iVar7 = iVar2;
    uVar4 = *(uint *)(param_1 + lVar6 * 4);
    lVar6 = lVar6 + 1;
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    uVar4 = uVar4 + (uVar4 >> 0x10);
    iVar2 = (uVar4 & 0x3f) + iVar7;
  } while (lVar6 != 0x402);
  if (iVar2 != 0) {
    uVar8 = 5;
    do {
      FUN_01696be0(auStack_90,param_1);
      iVar2 = (int)local_88 >> 1;
      if ((((DAT_05233970 <= (int)local_88 && (int)local_88 <= DAT_05233980) &&
           (DAT_05233974 <= (int)local_84)) && ((int)local_84 <= DAT_05233984)) &&
         (uVar3 = (local_84 & 0x1fffffe) * 0x80 + iVar2, uVar3 >> 0xf == 0)) {
        lVar6 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(param_1 + 8 + lVar6) =
             *(uint *)(param_1 + 8 + lVar6) & (1 << (ulong)(local_88 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      if (((DAT_05233970 <= (int)local_88) && ((int)local_88 <= DAT_05233980)) &&
         ((DAT_05233974 <= (int)local_84 &&
          (((int)local_84 <= DAT_05233984 &&
           (uVar3 = (local_84 & 0x1fffffe) * 0x80 + iVar2, uVar3 >> 0xf == 0)))))) {
        lVar6 = param_2 + 0x1e078 + (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar6 + 8) =
             *(uint *)(lVar6 + 8) & (1 << (ulong)(local_88 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      local_64 = 6;
      if ((((DAT_05233970 <= (int)local_88) && ((int)local_88 <= DAT_05233980)) &&
          (DAT_05233974 <= (int)local_84)) &&
         (((int)local_84 <= DAT_05233984 &&
          (uVar3 = (local_84 & 0x1fffffe) * 0x80 + iVar2, uVar3 >> 0xf == 0)))) {
        lVar6 = param_2 + 0x1a058 + (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar6 + 8) =
             *(uint *)(lVar6 + 8) & (1 << (ulong)(local_88 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      uVar5 = FUN_01a4f798(&local_80,0,auStack_90);
      if ((uVar5 & 1) != 0) {
        local_68 = 1;
        local_64 = 0;
        lVar6 = *(long *)(*(long *)(DAT_0519d040 + 0x38) + 0xd0);
        if (lVar6 != 0) {
          FUN_012e5af4(lVar6,auStack_90);
        }
      }
    } while ((1 < (iVar7 + (uVar4 & 0x3f) + uVar8) - 5) &&
            (bVar1 = 1 < uVar8, uVar8 = uVar8 - 1, bVar1));
  }
  return;
}

