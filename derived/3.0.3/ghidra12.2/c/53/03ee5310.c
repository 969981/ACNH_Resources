
undefined8 FUN_03ee5310(long param_1,long *param_2)

{
  size_t __size;
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auStack_a0 [32];
  undefined *local_80;
  byte *local_78;
  
  puVar6 = PTR_DAT_04bb2698;
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar8 = malloc(0x30);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar18 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_03ee53a0;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
  }
LAB_03ee53a0:
  plVar8[4] = 0;
  plVar8[5] = 0;
  puVar5 = PTR_DAT_04bd1060;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[1] = 0;
  puVar1 = PTR_DAT_04bd1140;
  puVar5 = PTR_DAT_04bb2020;
  *(long **)(param_1 + 0x248) = plVar8;
  local_80 = puVar5 + 0x10;
  local_78 = (byte *)0x406f696;
  lVar18 = 0;
  if (*(long *)puVar1 != 0) {
    lVar18 = FUN_03954f70(*(long *)puVar1,&local_80);
  }
  plVar8[5] = lVar18;
  (**(code **)(local_80 + 0x18))(&local_80);
  uVar10 = (uint)*local_78;
  if (*local_78 != 0) {
    uVar13 = 0xffffffff;
    pbVar15 = local_78;
    do {
      pbVar15 = pbVar15 + 1;
      uVar13 = crc32b(uVar13,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar15;
    } while (uVar10 != 0);
    uVar10 = ~uVar13;
  }
  *(uint *)((long)plVar8 + 0x1c) = uVar10;
  puVar3 = (undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  }
  *puVar3 = plVar8;
  *(long **)(param_1 + 0x38) = plVar8;
  uVar10 = *(uint *)(param_1 + 0x240);
  uVar19 = (ulong)uVar10;
  if ((int)uVar10 < 1) {
    return 1;
  }
  lVar18 = *(long *)puVar6;
  __size = uVar19 * 0x28 + 8;
  if (lVar18 == 0) {
    puVar9 = malloc(__size);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar3 = (undefined8 *)(lVar18 + 8);
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*puVar3;
      if (param_2 == (long *)0x0) goto LAB_03ee55b0;
    }
    puVar9 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
  }
  if (puVar9 != (ulong *)0x0) {
    uVar2 = crc32b(0xffffffff,100,0x4c11db7);
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar2 = crc32b(uVar2,0x66,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar2 = crc32b(uVar2,0x75,0x4c11db7);
    uVar17 = uVar19 * 0x28 - 0x28;
    uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
    uVar13 = crc32b(uVar2,0x74,0x4c11db7);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar17;
    uVar13 = ~uVar13;
    puVar12 = puVar9 + 1;
    *puVar9 = uVar19;
    puVar6 = PTR_DAT_04bd1310;
    puVar16 = puVar12;
    if ((SUB164(auVar4 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
      *(uint *)(puVar9 + 2) = uVar13;
      puVar1 = PTR_DAT_04bb2120;
      puVar9[1] = (ulong)(puVar6 + 0x10);
      puVar9[5] = (ulong)puVar1;
      puVar9[3] = 0;
      puVar9[4] = (ulong)(puVar5 + 0x10);
      puVar16 = puVar9 + 6;
    }
    puVar6 = PTR_DAT_04bb2120;
    if (0x27 < uVar17) {
      puVar1 = PTR_DAT_04bd1310 + 0x10;
      do {
        *(uint *)(puVar16 + 1) = uVar13;
        *puVar16 = (ulong)puVar1;
        *(uint *)(puVar16 + 6) = uVar13;
        puVar16[9] = (ulong)puVar6;
        puVar16[2] = 0;
        puVar16[3] = (ulong)(puVar5 + 0x10);
        puVar16[4] = (ulong)puVar6;
        puVar16[5] = (ulong)puVar1;
        puVar16[7] = 0;
        puVar16[8] = (ulong)(puVar5 + 0x10);
        puVar16 = puVar16 + 10;
      } while (puVar16 != puVar12 + uVar19 * 5);
    }
    *(uint *)(param_1 + 0x250) = uVar10;
    *(ulong **)(param_1 + 600) = puVar12;
  }
LAB_03ee55b0:
  if (0 < *(int *)(param_1 + 0x240)) {
    uVar10 = 0;
    do {
      lVar18 = *(long *)(param_1 + 600);
      uVar13 = uVar10;
      if (*(uint *)(param_1 + 0x250) <= uVar10) {
        uVar13 = 0;
      }
      lVar7 = lVar18 + (ulong)uVar13 * 0x28;
      FUN_03ee5ee8(&local_80,"BoneName%d",uVar10);
      FUN_03ee5ee8(auStack_a0,"BoneName%d",uVar10);
      lVar20 = *(long *)(param_1 + 0x248);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(local_80 + 0x18))(&local_80);
      uVar11 = (uint)*local_78;
      if (*local_78 != 0) {
        uVar14 = 0xffffffff;
        pbVar15 = local_78;
        do {
          pbVar15 = pbVar15 + 1;
          uVar14 = crc32b(uVar14,uVar11,0x4c11db7);
          uVar11 = (uint)*pbVar15;
        } while (uVar11 != 0);
        uVar11 = ~uVar14;
      }
      *(uint *)(lVar7 + 8) = uVar11;
      if (lVar20 != 0) {
        plVar8 = (long *)(lVar20 + 8);
        if (*(long *)(lVar20 + 0x10) != 0) {
          plVar8 = (long *)(*(long *)(lVar20 + 0x10) + 0x10);
        }
        *plVar8 = lVar7;
        *(long *)(lVar20 + 0x10) = lVar7;
        *(int *)(lVar20 + 0x18) = *(int *)(lVar20 + 0x18) + 1;
      }
      uVar10 = uVar10 + 1;
      *(undefined8 **)(lVar18 + (ulong)uVar13 * 0x28 + 0x20) = &DAT_0407ebb1;
    } while ((int)uVar10 < *(int *)(param_1 + 0x240));
  }
  return 1;
}

