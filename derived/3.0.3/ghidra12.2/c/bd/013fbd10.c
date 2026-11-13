
void FUN_013fbd10(undefined8 param_1,int *param_2,ulong *param_3,long param_4,uint *param_5,
                 ulong param_6)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  void *__s;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  int local_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined1 local_90 [4];
  uint local_8c;
  undefined **local_88;
  undefined4 *local_80;
  
  if (param_2 != (int *)0x0) {
    if (0 < *param_2) {
      lVar13 = 0;
      puVar14 = *(undefined8 **)(param_2 + 4);
      do {
        puVar17 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar13 * 8);
        lVar13 = lVar13 + 1;
        *puVar17 = puVar14;
        *(undefined8 **)(param_2 + 4) = puVar17;
        puVar14 = puVar17;
      } while (lVar13 < *param_2);
    }
    *param_2 = 0;
    puVar1 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if (param_3 != (ulong *)0x0) {
      puVar1 = param_3;
    }
    uVar20 = *puVar1;
    if (param_4 == 0) {
      bVar12 = 0x17;
    }
    else {
      bVar12 = *(byte *)(param_4 + 4);
    }
    uVar16 = uVar20 >> 0x20;
    local_8c = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
    if (1 < local_8c) {
      local_8c = 0;
    }
    if (param_5 != (uint *)0x0) {
      local_8c = *param_5;
    }
    local_90[0] = 0;
    uVar8 = (uint)(uVar20 >> 0x20);
    if ((uVar8 & 0xff) <= (uint)bVar12) {
      uVar18 = 1;
      if (6 < (uVar8 - 9 & 0xff)) {
        uVar18 = (uint)(4 < (uVar8 - 0x10 & 0xff)) << 1;
      }
      uVar19 = 0;
      if (4 < (uVar8 - 4 & 0xff)) {
        uVar19 = uVar18;
      }
      uVar8 = 1 << (ulong)uVar19;
      if (2 < uVar19) {
        uVar8 = 0;
      }
      uVar18 = uVar8;
      do {
        iVar15 = (int)uVar16;
        if ((iVar15 - 4U & 0xff) < 5) {
          uVar19 = 0;
        }
        else {
          uVar19 = 1;
          if (6 < (iVar15 - 9U & 0xff)) {
            uVar19 = (uint)(4 < (iVar15 - 0x10U & 0xff)) << 1;
          }
        }
        uVar16 = (ulong)(iVar15 + 1U);
        uVar4 = uVar18 | 1 << (ulong)uVar19;
        uVar7 = uVar4;
        if (2 < uVar19) {
          uVar4 = uVar18;
          uVar7 = uVar8;
        }
        uVar8 = uVar7;
        uVar18 = uVar4;
      } while ((iVar15 + 1U & 0xff) <= (uint)bVar12);
      local_90[0] = (undefined1)uVar8;
    }
    local_800 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7f8,0,0x754);
    uVar8 = nn::os::GetSystemTick();
    local_a4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
    local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_800);
    memset(__s,0,0x754);
    local_808 = 0x6a;
    local_88 = &PTR_FUN_049ff448;
    local_80 = &local_808;
    FUN_008a1ba0(&local_800,&local_88);
    if ((param_6 & 1) != 0) {
      local_808 = 99;
      local_88 = &PTR_FUN_049ff448;
      local_80 = &local_808;
      FUN_008a1ba0(&local_800,&local_88);
      local_808 = 0x60;
      local_88 = &PTR_FUN_049ff448;
      local_80 = &local_808;
      FUN_008a1ba0(&local_800,&local_88);
    }
    lVar13 = (**(code **)(local_800 + 0x20))(&local_800);
    uVar16 = 0;
    do {
      if ((*(uint *)(lVar13 + (uVar16 >> 5) * 4) >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0)
      goto LAB_013fbfe0;
      uVar8 = (uint)uVar16 + 1;
      uVar16 = (ulong)uVar8;
    } while (uVar8 != 15000);
    uVar16 = 0;
LAB_013fbfe0:
    lVar10 = (**(code **)(local_800 + 0x20))(&local_800);
    puVar6 = PTR_DAT_04bbfe58;
    puVar5 = PTR_DAT_04bb37e0;
    iVar15 = 15000;
    do {
      if ((*(uint *)(lVar10 + (ulong)(iVar15 - 1U >> 5) * 4) >> (ulong)(iVar15 - 1U & 0x1f) & 1) !=
          0) break;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    if (iVar15 != (int)uVar16) {
LAB_013fc074:
      local_88 = (undefined **)CONCAT35(local_88._5_3_,0xfffe);
      puVar2 = (undefined4 *)(puVar6 + uVar16 * 8);
      if (0x752 < (uint)(uVar16 >> 3)) {
        puVar2 = (undefined4 *)puVar6;
      }
      puVar3 = (undefined4 *)puVar5;
      if ((uint)uVar16 < 0x3a99) {
        puVar3 = puVar2;
      }
      local_80 = (undefined4 *)((ulong)local_80 & 0xffff000000000000);
      local_808 = *puVar3;
      uStack_804 = puVar3[1];
      uVar9 = FUN_0277d6c4(&local_808);
      local_80c = ((uint)uVar20 >> 0x10 & 0xff) - 1;
      uVar11 = FUN_013fc880(param_1,&local_88,uVar9,&local_8c,local_90,&local_80c);
      if (((uVar11 & 1) != 0) && (*param_2 < param_2[1])) {
        puVar14 = *(undefined8 **)(param_2 + 4);
        if (puVar14 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar14;
        }
        *puVar14 = local_88;
        puVar14[1] = local_80;
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar14;
          *param_2 = *param_2 + 1;
        }
      }
      do {
        uVar8 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar8;
        if (0x752 < uVar8 >> 3) {
          uVar8 = 0x3a95;
          goto LAB_013fc150;
        }
      } while ((*(uint *)(lVar13 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0);
      goto LAB_013fc06c;
    }
  }
  return;
  while( true ) {
    uVar18 = uVar8 + 1;
    if ((*(uint *)(lVar13 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
    goto LAB_013fc064;
    if ((*(uint *)(lVar13 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)
    goto LAB_013fc068;
    uVar8 = uVar8 - 3;
    if (uVar8 == 0xfffffffd) break;
LAB_013fc150:
    uVar18 = uVar8 + 2;
    if ((*(uint *)(lVar13 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
LAB_013fc064:
      uVar8 = uVar18;
LAB_013fc068:
      uVar16 = (ulong)(uVar8 + 1);
      goto LAB_013fc06c;
    }
  }
  uVar16 = 0;
LAB_013fc06c:
  if (iVar15 == (int)uVar16) {
    return;
  }
  goto LAB_013fc074;
}

