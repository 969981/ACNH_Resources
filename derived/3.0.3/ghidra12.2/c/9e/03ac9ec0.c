
void FUN_03ac9ec0(long param_1,uint *param_2,long *param_3)

{
  float *pfVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  size_t __size;
  long lVar17;
  ulong *puVar18;
  float fVar19;
  float fVar20;
  undefined *local_a0;
  byte *local_98;
  uint local_64;
  
  *(uint *)(param_1 + 0x238) = *param_2;
  puVar3 = PTR_DAT_04bb2698;
  uVar10 = *param_2;
  if ((int)uVar10 < 1) {
LAB_03ac9fac:
    uVar16 = (ulong)(*param_2 + 1);
    lVar17 = *(long *)puVar3;
    __size = uVar16 << 2;
    if (lVar17 == 0) goto LAB_03aca024;
    if (param_3 == (long *)0x0) {
LAB_03ac9fe0:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar17 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      pvVar7 = (void *)0x0;
      if (plVar5 != (long *)0x0) goto LAB_03aca00c;
    }
    else {
      plVar5 = param_3;
LAB_03aca00c:
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
  }
  else {
    lVar17 = *(long *)PTR_DAT_04bb2698;
    uVar16 = (ulong)uVar10 * 0x5d0 | 8;
    if (lVar17 == 0) {
      puVar6 = malloc(uVar16);
joined_r0x03ac9f7c:
      if (puVar6 != (ulong *)0x0) {
        lVar17 = (ulong)uVar10 * 0x5d0;
        *puVar6 = (ulong)uVar10;
        puVar18 = puVar6 + 1;
        do {
          FUN_03acbbe8(puVar18);
          puVar18 = puVar18 + 0xba;
          lVar17 = lVar17 + -0x5d0;
        } while (lVar17 != 0);
        *(uint *)(param_1 + 0x370) = uVar10;
        *(ulong **)(param_1 + 0x378) = puVar6 + 1;
      }
      goto LAB_03ac9fac;
    }
    plVar5 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03ac9f50:
      puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar16,8);
      goto joined_r0x03ac9f7c;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar17 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03ac9f50;
    uVar16 = (ulong)(*param_2 + 1);
    lVar17 = *(long *)puVar3;
    __size = uVar16 << 2;
    if (lVar17 != 0) goto LAB_03ac9fe0;
LAB_03aca024:
    pvVar7 = malloc(__size);
  }
  *(void **)(param_1 + 0x318) = pvVar7;
  *(int *)(param_1 + 800) = (int)uVar16;
  *(undefined1 *)(param_1 + 0x324) = 1;
  if ((int)uVar16 != 0) {
    uVar12 = uVar16 & 3;
    if (uVar16 - 1 < 3) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar17 = uVar14 * 4;
        uVar14 = uVar14 + 4;
        *(undefined4 *)(*(long *)(param_1 + 0x318) + lVar17) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x318) + lVar17 + 4) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x318) + lVar17 + 8) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x318) + lVar17 + 0xc) = 0;
      } while ((uVar16 & 0xfffffffc) != uVar14);
    }
    if (uVar12 != 0) {
      lVar17 = uVar14 << 2;
      do {
        uVar12 = uVar12 - 1;
        *(undefined4 *)(*(long *)(param_1 + 0x318) + lVar17) = 0;
        lVar17 = lVar17 + 4;
      } while (uVar12 != 0);
    }
  }
  uVar10 = *param_2;
  uVar16 = (ulong)uVar10;
  lVar17 = *(long *)puVar3;
  if (lVar17 == 0) {
    pvVar7 = malloc(uVar16 << 2);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar17 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      pvVar7 = (void *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_03aca11c;
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar16 << 2,8);
  }
LAB_03aca11c:
  *(void **)(param_1 + 0x360) = pvVar7;
  *(uint *)(param_1 + 0x368) = uVar10;
  *(undefined1 *)(param_1 + 0x36c) = 1;
  if (uVar10 != 0) {
    uVar12 = uVar16 & 3;
    if (uVar10 < 4) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        lVar17 = uVar14 * 4;
        uVar14 = uVar14 + 4;
        *(undefined4 *)(*(long *)(param_1 + 0x360) + lVar17) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x360) + lVar17 + 4) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x360) + lVar17 + 8) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x360) + lVar17 + 0xc) = 0;
      } while ((uVar16 & 0xfffffffc) != uVar14);
    }
    if ((uVar10 & 3) != 0) {
      lVar17 = uVar14 << 2;
      do {
        uVar12 = uVar12 - 1;
        *(undefined4 *)(*(long *)(param_1 + 0x360) + lVar17) = 0;
        lVar17 = lVar17 + 4;
      } while (uVar12 != 0);
    }
  }
  uVar10 = *param_2;
  if (0 < (int)uVar10) {
    **(undefined4 **)(param_1 + 0x318) = 0x41200000;
    FUN_03acecc0(*(long *)(param_1 + 0x378) + 0x78,param_3);
    **(undefined4 **)(param_1 + 0x360) = 0;
    uVar10 = *param_2;
    if (1 < (int)uVar10) {
      uVar16 = 0;
      do {
        pfVar1 = (float *)(*(long *)(param_1 + 0x318) + uVar16 * 4);
        pfVar1[1] = *pfVar1 + 500.0;
        lVar17 = 0;
        if (uVar16 + 1 < (ulong)*(uint *)(param_1 + 0x370)) {
          lVar17 = uVar16 + 1;
        }
        FUN_03acecc0(*(long *)(param_1 + 0x378) + lVar17 * 0x5d0 + 0x78,param_3);
        lVar17 = uVar16 + 2;
        *(undefined4 *)(*(long *)(param_1 + 0x360) + uVar16 * 4 + 4) = 0;
        uVar10 = *param_2;
        uVar16 = uVar16 + 1;
      } while (lVar17 < (int)uVar10);
    }
  }
  lVar17 = param_1 + 0x380;
  pfVar1 = (float *)(*(long *)(param_1 + 0x318) + (long)(int)uVar10 * 4);
  fVar19 = pfVar1[-1] + 500.0;
  fVar20 = 20000.0;
  if (20000.0 <= fVar19) {
    fVar20 = fVar19;
  }
  *pfVar1 = fVar20;
  local_64 = *param_2;
  FUN_03a0f970(lVar17,&local_64,param_3);
  puVar3 = PTR_DAT_04bd1140;
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = (byte *)0x40cc656;
  uVar8 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar8 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_a0);
  }
  *(undefined8 *)(param_1 + 0x218) = uVar8;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  uVar10 = (uint)*local_98;
  if (*local_98 != 0) {
    uVar13 = 0xffffffff;
    pbVar15 = local_98;
    do {
      pbVar15 = pbVar15 + 1;
      uVar13 = crc32b(uVar13,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar15;
    } while (uVar10 != 0);
    uVar10 = ~uVar13;
  }
  *(uint *)(param_1 + 0x20c) = uVar10;
  plVar5 = (long *)(param_1 + 8);
  plVar2 = plVar5;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + 0x20);
  }
  *plVar2 = param_1 + 0x1f0;
  *(long *)(param_1 + 0x10) = param_1 + 0x1f0;
  if (0 < (int)*param_2) {
    uVar10 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x378);
      uVar13 = uVar10;
      if (*(uint *)(param_1 + 0x370) <= uVar10) {
        uVar13 = 0;
      }
      FUN_006d8678(&local_a0,"shadow_unit_%d",uVar10);
      lVar9 = *(long *)puVar3;
      uVar8 = 0;
      if (lVar9 != 0) {
        uVar8 = FUN_03954f70(lVar9,&local_a0);
      }
      lVar4 = lVar4 + (ulong)uVar13 * 0x5d0;
      *(undefined8 *)(lVar4 + 0x28) = uVar8;
      (**(code **)(local_a0 + 0x18))(&local_a0);
      uVar11 = (uint)*local_98;
      uVar13 = 0;
      if (*local_98 != 0) {
        uVar13 = 0xffffffff;
        pbVar15 = local_98;
        do {
          pbVar15 = pbVar15 + 1;
          uVar13 = crc32b(uVar13,uVar11,0x4c11db7);
          uVar11 = (uint)*pbVar15;
        } while (uVar11 != 0);
        uVar13 = ~uVar13;
      }
      *(uint *)(lVar4 + 0x1c) = uVar13;
      uVar10 = uVar10 + 1;
      plVar2 = plVar5;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x10) + 0x20);
      }
      *plVar2 = lVar4;
      *(long *)(param_1 + 0x10) = lVar4;
    } while ((int)uVar10 < (int)*param_2);
  }
  lVar4 = *(long *)puVar3;
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = (byte *)0x409904f;
  uVar8 = 0;
  if (lVar4 != 0) {
    uVar8 = FUN_03954f70(lVar4,&local_a0);
  }
  *(undefined8 *)(param_1 + 0x3a8) = uVar8;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  uVar10 = (uint)*local_98;
  if (*local_98 != 0) {
    uVar13 = 0xffffffff;
    do {
      local_98 = local_98 + 1;
      uVar13 = crc32b(uVar13,uVar10,0x4c11db7);
      uVar10 = (uint)*local_98;
    } while (uVar10 != 0);
    uVar10 = ~uVar13;
  }
  *(uint *)(param_1 + 0x39c) = uVar10;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x10) + 0x20);
  }
  *plVar5 = lVar17;
  *(long *)(param_1 + 0x10) = lVar17;
  return;
}

