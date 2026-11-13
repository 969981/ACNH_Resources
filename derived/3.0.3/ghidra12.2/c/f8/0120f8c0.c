
/* WARNING: Removing unreachable block (ram,0x0120f908) */
/* WARNING: Removing unreachable block (ram,0x0120f968) */

void FUN_0120f8c0(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined *local_50;
  undefined8 local_48;
  
  local_68 = (undefined *)CONCAT44((int)((ulong)local_68 >> 0x20),10);
  iVar9 = 0;
  lVar8 = param_1 + 0xa050;
  lVar7 = 2;
  do {
    uVar2 = *(uint *)(lVar8 + lVar7 * 4);
    lVar7 = lVar7 + 1;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    iVar9 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar9;
  } while (lVar7 != 0x402);
  local_60 = 0;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar4 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar10 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  local_68 = PTR_DAT_04bb6268 + 0x10;
  if ((param_2 & 1) != 0) {
    lVar7 = *(long *)PTR_DAT_04bb39b0;
    pbVar5 = PTR_DAT_04bb32e0;
    if (lVar7 == 0) {
LAB_0120fa58:
      if (*pbVar5 < 8) goto LAB_0120fad0;
LAB_0120fa64:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0120fac8:
        pbVar5 = PTR_DAT_04bb5038;
        goto LAB_0120fad0;
      }
      lVar7 = **(long **)PTR_DAT_04bb27d0;
      bVar6 = *(byte *)(lVar7 + 0x473);
      pbVar5 = PTR_DAT_04bb5038;
      if ((long)(char)bVar6 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
        if (7 < bVar6) {
          puVar1 = (uint *)(lVar7 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar5 = (byte *)(lVar7 + 0x471);
        }
      }
      bVar6 = *pbVar5;
      bVar3 = 7 < bVar6;
      if (bVar3) {
        bVar6 = 0xff;
      }
      local_70 = CONCAT71(local_70._1_7_,bVar6);
      if (bVar3) goto LAB_0120fac8;
    }
    else {
      if (*(int *)(lVar7 + 0x15c) != 0) {
        pbVar5 = (byte *)(lVar7 + 0x158);
      }
      if (7 < *pbVar5) {
        if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0120fa58;
        }
        goto LAB_0120fa64;
      }
LAB_0120fad0:
      bVar6 = *pbVar5;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      local_70 = CONCAT71(local_70._1_7_,bVar6);
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "TodayFortune";
    iVar4 = FUN_0274bce0(&local_70,&local_50);
    if (iVar4 == 6) {
      local_70 = 0xc12;
      FUN_0277d4ac(&local_70);
      FUN_01696d70(&local_50,lVar8);
      FUN_01a50ae4(&local_68,&local_70,&local_50);
      if ((((DAT_05233970 <= (int)(uint)local_48) && ((int)(uint)local_48 <= DAT_05233980)) &&
          (DAT_05233974 <= (int)local_48._4_4_)) &&
         (((int)local_48._4_4_ <= DAT_05233984 &&
          (uVar2 = (local_48._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_48 >> 1),
          uVar2 >> 0xf == 0)))) {
        lVar7 = param_1 + (ulong)(uVar2 >> 5) * 4;
        *(uint *)(lVar7 + 8) =
             *(uint *)(lVar7 + 8) & (1 << (ulong)((uint)local_48 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      if ((int)(uint)local_48 < DAT_05233970) {
        return;
      }
      if (DAT_05233980 < (int)(uint)local_48) {
        return;
      }
      if ((int)local_48._4_4_ < DAT_05233974) {
        return;
      }
      if (DAT_05233984 < (int)local_48._4_4_) {
        return;
      }
      goto LAB_0120fce0;
    }
  }
  local_70 = 0x38d2;
  FUN_0277d4ac(&local_70);
  if (iVar9 == 0) {
    return;
  }
  FUN_01696d70(&local_50,lVar8);
  FUN_01a50ae4(&local_68,&local_70,&local_50);
  if (((DAT_05233970 <= (int)(uint)local_48) && ((int)(uint)local_48 <= DAT_05233980)) &&
     ((DAT_05233974 <= (int)local_48._4_4_ &&
      (((int)local_48._4_4_ <= DAT_05233984 &&
       (uVar2 = (local_48._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_48 >> 1), uVar2 >> 0xf == 0)
       ))))) {
    lVar7 = param_1 + (ulong)(uVar2 >> 5) * 4;
    *(uint *)(lVar7 + 8) =
         *(uint *)(lVar7 + 8) & (1 << (ulong)((uint)local_48 >> 1 & 0x1f) ^ 0xffffffffU);
  }
  if ((int)(uint)local_48 < DAT_05233970) {
    return;
  }
  if (DAT_05233980 < (int)(uint)local_48) {
    return;
  }
  if ((int)local_48._4_4_ < DAT_05233974) {
    return;
  }
  if (DAT_05233984 < (int)local_48._4_4_) {
    return;
  }
LAB_0120fce0:
  uVar2 = (local_48._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_48 >> 1);
  if (uVar2 >> 0xf == 0) {
    lVar7 = (ulong)(uVar2 >> 5) * 4;
    *(uint *)(param_1 + 0xa058 + lVar7) =
         *(uint *)(param_1 + 0xa058 + lVar7) &
         (1 << (ulong)((uint)local_48 >> 1 & 0x1f) ^ 0xffffffffU);
  }
  return;
}

