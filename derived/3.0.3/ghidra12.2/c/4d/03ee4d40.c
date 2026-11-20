
undefined8 FUN_03ee4d40(long param_1,long param_2,long *param_3)

{
  size_t __size;
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined1 auStack_a0 [32];
  undefined *local_80;
  byte *local_78;
  
  if (param_2 == 0) {
    return 0;
  }
  param_2 = param_2 + (ulong)*(uint *)(param_2 + 0x14);
  uVar11 = *(uint *)(param_2 + 0x38);
  if (uVar11 < 0x30000) {
    return 0;
  }
  lVar2 = param_2 + 0x30 + ((ulong)uVar11 & 0xffff) * 4;
  FUN_03956720(0,param_1 + 0x1f8,0,lVar2,0,0);
  puVar7 = PTR_DAT_04bb2698;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    plVar9 = malloc(0x30);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar19 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_03ee4e18;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x30,8);
  }
LAB_03ee4e18:
  plVar9[4] = 0;
  plVar9[5] = 0;
  puVar6 = PTR_DAT_04bd1060;
  plVar9[2] = 0;
  plVar9[3] = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[1] = 0;
  puVar1 = PTR_DAT_04bd1140;
  puVar6 = PTR_DAT_04bb2020;
  *(long **)(param_1 + 0x248) = plVar9;
  local_80 = puVar6 + 0x10;
  local_78 = (byte *)0x406f696;
  lVar19 = 0;
  if (*(long *)puVar1 != 0) {
    lVar19 = FUN_03954f70(*(long *)puVar1,&local_80);
  }
  plVar9[5] = lVar19;
  (**(code **)(local_80 + 0x18))(&local_80);
  uVar11 = (uint)*local_78;
  if (*local_78 != 0) {
    uVar14 = 0xffffffff;
    pbVar16 = local_78;
    do {
      pbVar16 = pbVar16 + 1;
      uVar14 = crc32b(uVar14,uVar11,0x4c11db7);
      uVar11 = (uint)*pbVar16;
    } while (uVar11 != 0);
    uVar11 = ~uVar14;
  }
  *(uint *)((long)plVar9 + 0x1c) = uVar11;
  puVar4 = (undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  }
  *puVar4 = plVar9;
  *(long **)(param_1 + 0x38) = plVar9;
  uVar11 = *(uint *)(param_1 + 0x240);
  uVar21 = (ulong)uVar11;
  if ((int)uVar11 < 1) goto LAB_03ee5124;
  lVar19 = *(long *)puVar7;
  __size = uVar21 * 0x28 + 8;
  if (lVar19 == 0) {
    puVar10 = malloc(__size);
joined_r0x03ee4f48:
    if (puVar10 != (ulong *)0x0) {
      uVar3 = crc32b(0xffffffff,100,0x4c11db7);
      uVar3 = crc32b(uVar3,0x65,0x4c11db7);
      uVar3 = crc32b(uVar3,0x66,0x4c11db7);
      uVar3 = crc32b(uVar3,0x61,0x4c11db7);
      uVar3 = crc32b(uVar3,0x75,0x4c11db7);
      uVar18 = uVar21 * 0x28 - 0x28;
      uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
      uVar14 = crc32b(uVar3,0x74,0x4c11db7);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar18;
      uVar14 = ~uVar14;
      puVar13 = puVar10 + 1;
      *puVar10 = uVar21;
      puVar7 = PTR_DAT_04bd1310;
      puVar17 = puVar13;
      if ((SUB164(auVar5 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
        *(uint *)(puVar10 + 2) = uVar14;
        puVar1 = PTR_DAT_04bb2120;
        puVar10[1] = (ulong)(puVar7 + 0x10);
        puVar10[5] = (ulong)puVar1;
        puVar10[3] = 0;
        puVar10[4] = (ulong)(puVar6 + 0x10);
        puVar17 = puVar10 + 6;
      }
      puVar7 = PTR_DAT_04bb2120;
      if (0x27 < uVar18) {
        puVar1 = PTR_DAT_04bd1310 + 0x10;
        do {
          *(uint *)(puVar17 + 1) = uVar14;
          *puVar17 = (ulong)puVar1;
          *(uint *)(puVar17 + 6) = uVar14;
          puVar17[9] = (ulong)puVar7;
          puVar17[2] = 0;
          puVar17[3] = (ulong)(puVar6 + 0x10);
          puVar17[4] = (ulong)puVar7;
          puVar17[5] = (ulong)puVar1;
          puVar17[7] = 0;
          puVar17[8] = (ulong)(puVar6 + 0x10);
          puVar17 = puVar17 + 10;
        } while (puVar17 != puVar13 + uVar21 * 5);
      }
      *(uint *)(param_1 + 0x250) = uVar11;
      *(ulong **)(param_1 + 600) = puVar13;
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_03ee4f20:
      puVar10 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
      goto joined_r0x03ee4f48;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar4 = (undefined8 *)(lVar19 + 8);
    if (lVar8 != 0) {
      puVar4 = (undefined8 *)(lVar8 + 0xa8);
    }
    param_3 = (long *)*puVar4;
    if (param_3 != (long *)0x0) goto LAB_03ee4f20;
  }
  if (0 < *(int *)(param_1 + 0x240)) {
    uVar11 = 0;
    do {
      lVar19 = *(long *)(param_1 + 600);
      uVar14 = uVar11;
      if (*(uint *)(param_1 + 0x250) <= uVar11) {
        uVar14 = 0;
      }
      lVar8 = lVar19 + (ulong)uVar14 * 0x28;
      FUN_03ee5ee8(&local_80,"BoneName%d",uVar11);
      FUN_03ee5ee8(auStack_a0,"BoneName%d",uVar11);
      lVar20 = *(long *)(param_1 + 0x248);
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(local_80 + 0x18))(&local_80);
      uVar12 = (uint)*local_78;
      if (*local_78 != 0) {
        uVar15 = 0xffffffff;
        pbVar16 = local_78;
        do {
          pbVar16 = pbVar16 + 1;
          uVar15 = crc32b(uVar15,uVar12,0x4c11db7);
          uVar12 = (uint)*pbVar16;
        } while (uVar12 != 0);
        uVar12 = ~uVar15;
      }
      *(uint *)(lVar8 + 8) = uVar12;
      if (lVar20 != 0) {
        plVar9 = (long *)(lVar20 + 8);
        if (*(long *)(lVar20 + 0x10) != 0) {
          plVar9 = (long *)(*(long *)(lVar20 + 0x10) + 0x10);
        }
        *plVar9 = lVar8;
        *(long *)(lVar20 + 0x10) = lVar8;
        *(int *)(lVar20 + 0x18) = *(int *)(lVar20 + 0x18) + 1;
      }
      uVar11 = uVar11 + 1;
      *(undefined8 **)(lVar19 + (ulong)uVar14 * 0x28 + 0x20) = &DAT_0407ebb1;
    } while ((int)uVar11 < *(int *)(param_1 + 0x240));
  }
LAB_03ee5124:
  FUN_03956720(0,*(undefined8 *)(param_1 + 0x248),0,lVar2 + 0x10,0,0);
  FUN_03956720(0,param_1 + 0x260,0,lVar2 + 8,0,0);
  return 1;
}

