
void FUN_02631090(long param_1,long *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ushort uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  undefined *local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  local_7d8 = PTR_DAT_04bbfe60 + 0x10;
  uVar6 = nn::os::GetSystemTick();
  local_7c = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  memcpy(auStack_7d0,param_2 + 1,0x754);
  lVar8 = FUN_01a45204(&local_7d8);
  uVar15 = 0;
  do {
    if ((*(uint *)(lVar8 + (uVar15 >> 5) * 4) >> (ulong)((uint)uVar15 & 0x1f) & 1) != 0)
    goto LAB_02631170;
    uVar6 = (uint)uVar15 + 1;
    uVar15 = (ulong)uVar6;
  } while (uVar6 != 15000);
  uVar15 = 0;
LAB_02631170:
  lVar9 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
  puVar5 = PTR_DAT_04bbfe58;
  puVar4 = PTR_DAT_04bb37e0;
  iVar13 = 15000;
  do {
    if ((*(uint *)(lVar9 + (ulong)(iVar13 - 1U >> 5) * 4) >> (ulong)(iVar13 - 1U & 0x1f) & 1) != 0)
    break;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  iVar14 = (int)uVar15;
joined_r0x026311b0:
  if (iVar13 == iVar14) {
    return;
  }
  puVar1 = (undefined4 *)(puVar5 + uVar15 * 8);
  if (0x752 < (uint)(uVar15 >> 3)) {
    puVar1 = (undefined4 *)puVar5;
  }
  puVar2 = (undefined4 *)puVar4;
  if ((uint)uVar15 < 0x3a99) {
    puVar2 = puVar1;
  }
  local_7e0 = *puVar2;
  uStack_7dc = puVar2[1];
  uVar7 = FUN_0261eff4(&local_7e0);
  uVar6 = uVar7 & 0xffff;
  if ((((uVar6 < 0x800) &&
       ((*(byte *)(param_3 + (ulong)(uVar6 >> 3)) >> (ulong)(uVar7 & 7) & 1) != 0)) &&
      (uVar6 = uVar6 - *(ushort *)(param_1 + 0xea6e0), uVar6 < *(uint *)(param_1 + 0xea6c0))) &&
     (puVar10 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar6 * 8),
     puVar10 != (uint *)0x0)) {
    uVar6 = *puVar10;
    uVar11 = 0;
    if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
      puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
      uVar11 = 0;
      if (*puVar12 != 0) {
        uVar6 = puVar12[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar12 + lVar9 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar9 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_055577a0) &&
               (uVar11 = *(ushort *)(DAT_055577a8 + (long)(int)uVar7 * 2), uVar11 < 3))
            goto LAB_026312f4;
          }
        }
        uVar11 = 0;
      }
    }
LAB_026312f4:
    if (uVar11 != 0) {
      local_7e0 = *puVar2;
      uStack_7dc = puVar2[1];
      lVar9 = (**(code **)(*param_2 + 0x18))();
      uVar6 = FUN_0277d6c4(&local_7e0);
      if ((uVar6 >> 3 & 0x1fff) < 0x753) {
        lVar3 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
        *(uint *)(lVar9 + lVar3) =
             *(uint *)(lVar9 + lVar3) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  do {
    uVar6 = (int)uVar15 + 1;
    uVar15 = (ulong)uVar6;
    if (0x752 < uVar6 >> 3) {
      uVar6 = 0x3a95;
      goto LAB_02631380;
    }
  } while ((*(uint *)(lVar8 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0);
  goto LAB_026311f8;
  while( true ) {
    if ((*(uint *)(lVar8 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0)
    goto LAB_026311f4;
    uVar6 = uVar6 - 3;
    if (uVar6 == 0xfffffffd) break;
LAB_02631380:
    uVar7 = uVar6 + 2;
    if (((*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0) ||
       (uVar7 = uVar6 + 1,
       (*(uint *)(lVar8 + (ulong)(uVar7 >> 5) * 4) >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
      uVar6 = uVar7;
LAB_026311f4:
      uVar15 = (ulong)(uVar6 + 1);
      goto LAB_026311f8;
    }
  }
  uVar15 = 0;
LAB_026311f8:
  iVar14 = (int)uVar15;
  goto joined_r0x026311b0;
}

