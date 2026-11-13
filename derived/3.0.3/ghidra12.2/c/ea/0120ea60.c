
/* WARNING: Removing unreachable block (ram,0x0120ea90) */

void FUN_0120ea60(long param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  uint local_64;
  undefined1 auStack_58 [8];
  undefined *local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  byte local_30;
  byte local_24 [4];
  
  local_40 = (undefined *)CONCAT44(local_40._4_4_,4);
  iVar3 = 0;
  lVar6 = 2;
  do {
    uVar4 = *(uint *)(param_1 + 0x4020 + lVar6 * 4);
    lVar6 = lVar6 + 1;
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    iVar3 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar3;
  } while (lVar6 != 0x402);
  if (iVar3 == 0) {
    return;
  }
  local_38 = 0;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar3 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_34 = *(undefined4 *)(puVar8 + 7);
  local_30 = FUN_017baf44();
  local_30 = local_30 & 1;
  local_40 = PTR_DAT_04bb6268 + 0x10;
  local_50 = PTR_DAT_04bb2010 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_0120ebe8:
    if (7 < *pbVar5) {
LAB_0120ebf4:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar6 = **(long **)PTR_DAT_04bb27d0;
        bVar7 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        bVar7 = *pbVar5;
        if (bVar7 < 8) goto LAB_0120ec64;
      }
      pbVar5 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0120ebe8;
      }
      goto LAB_0120ebf4;
    }
  }
  bVar7 = *pbVar5;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
LAB_0120ec64:
  FUN_01696d70(auStack_70,param_1 + 0x4020);
  local_48 = local_68;
  uStack_44 = local_64;
  FUN_01a5033c(auStack_58,&local_40,0,&local_50,0);
  FUN_0124c030(auStack_70,auStack_58);
  local_24[0] = bVar7;
  if (7 < bVar7) {
    local_24[0] = 0xff;
  }
  uVar4 = FUN_02582fe0(local_24);
  if (uVar4 != 0xffffffff) {
    uVar4 = 1 << (ulong)(uVar4 & 0x1f);
    uVar2 = ~uVar4;
    local_64 = local_64 & (uVar2 << 0x12 | (uVar2 & 0xff) << 10 | 0xfc0003ff) | uVar4 & 0xff;
  }
  FUN_011f3390(&local_40,0,&local_68,&local_50);
  return;
}

