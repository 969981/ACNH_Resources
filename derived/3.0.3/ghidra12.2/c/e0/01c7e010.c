
void FUN_01c7e010(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  void *__ptr;
  long *plVar16;
  uint uVar17;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  byte local_48 [4];
  byte local_44 [4];
  
  puVar4 = PTR_DAT_04bb39b0;
  if (*param_1 == 0) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_01c7e090:
    if (*pbVar13 < 8) goto LAB_01c7e108;
LAB_01c7e09c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01c7e100:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_01c7e108;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar15 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar13 = (byte *)(lVar15 + 0x471);
      }
    }
    local_44[0] = *pbVar13;
    if (7 < local_44[0]) goto LAB_01c7e100;
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01c7e090;
      }
      goto LAB_01c7e09c;
    }
LAB_01c7e108:
    local_44[0] = *pbVar13;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  local_48[0] = local_44[0];
  if (7 < local_44[0]) {
    local_48[0] = 0xff;
  }
  lVar15 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1);
  puVar1 = PTR_DAT_04bb46b0;
  if (lVar15 != 0) {
    lVar14 = lVar15 + 0x194b0;
    plVar16 = (long *)(lVar15 + 0x194b8);
    lVar11 = lVar14;
    if (*plVar16 == 0) {
      lVar11 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    plVar9 = (long *)(lVar11 + 0x8540);
    lVar12 = *(long *)(lVar11 + 0x8560);
    if (lVar12 == 0) {
      memcpy((void *)(*(long *)(lVar11 + 0x8548) + *plVar9),(void *)*param_1,0xb548);
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
        plVar7 = *(long **)(lVar12 + 0x20);
joined_r0x01c7e26c:
        if (plVar7 != (long *)0x0) {
          local_78 = (undefined *)*plVar9;
          local_70 = *(undefined8 **)(lVar11 + 0x8548);
          local_68 = 0xb548;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        uVar6 = uVar6 & 0xffffffff;
        if (*(long *)(lVar11 + 0x8560) != 0) {
          plVar7 = *(long **)(*(long *)(lVar11 + 0x8560) + 0x20);
          goto joined_r0x01c7e26c;
        }
      }
      memcpy((void *)(*(long *)(lVar11 + 0x8548) + *plVar9),(void *)*param_1,0xb548);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x8560) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x8560) + 0x18), puVar8 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar8)();
      }
    }
    if (*(long *)puVar1 != 0) {
      lVar11 = *(long *)(*(long *)puVar1 + 0x10);
      if (((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 8), lVar11 != 0)) &&
         (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
        lVar12 = *(long *)(lVar11 + 0x28);
        if (lVar12 == 0) {
          memcpy((void *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8)),
                 (void *)(*param_1 + 0xb548),0x4b3a8);
        }
        else {
          if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
            uVar6 = 0;
LAB_01c7e29c:
            plVar9 = *(long **)(lVar12 + 0x20);
            if (plVar9 != (long *)0x0) {
              local_78 = *(undefined **)(lVar11 + 8);
              local_70 = *(undefined8 **)(lVar11 + 0x10);
              local_68 = 0x4b3a8;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
            }
          }
          else {
            uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
            lVar12 = *(long *)(lVar11 + 0x28);
            uVar6 = uVar6 & 0xffffffff;
            if (lVar12 != 0) goto LAB_01c7e29c;
          }
          memcpy((void *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8)),
                 (void *)(*param_1 + 0xb548),0x4b3a8);
          if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 0x18),
             puVar8 != (undefined8 *)0x0)) {
            (**(code **)*puVar8)();
          }
        }
      }
      if (*(long *)puVar1 != 0) {
        lVar12 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar1 + 0x10) + 0x30))();
        lVar11 = 0;
        if (lVar12 != 0) {
          lVar11 = lVar12 + 0x276cb0;
        }
        lVar12 = *(long *)(lVar11 + 0x370);
        if (lVar12 == 0) {
          memcpy((void *)(*(long *)(lVar11 + 0x358) + *(long *)(lVar11 + 0x350)),
                 (void *)(*param_1 + 0x568f0),200);
        }
        else {
          if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
            uVar6 = 0;
LAB_01c7e388:
            plVar9 = *(long **)(lVar12 + 0x20);
            if (plVar9 != (long *)0x0) {
              local_78 = *(undefined **)(lVar11 + 0x350);
              local_70 = *(undefined8 **)(lVar11 + 0x358);
              local_68 = 200;
              (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
            }
          }
          else {
            uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
            lVar12 = *(long *)(lVar11 + 0x370);
            uVar6 = uVar6 & 0xffffffff;
            if (lVar12 != 0) goto LAB_01c7e388;
          }
          memcpy((void *)(*(long *)(lVar11 + 0x358) + *(long *)(lVar11 + 0x350)),
                 (void *)(*param_1 + 0x568f0),200);
          if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x370) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x370) + 0x18),
             puVar8 != (undefined8 *)0x0)) {
            (**(code **)*puVar8)();
          }
        }
      }
    }
    lVar11 = lVar14;
    if (*plVar16 == 0) {
      lVar11 = *(long *)(*(long *)puVar1 + 0x20);
    }
    lVar12 = *(long *)(lVar11 + 0x85d0);
    if (lVar12 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
        plVar9 = *(long **)(lVar12 + 0x20);
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        uVar6 = uVar6 & 0xffffffff;
        if (*(long *)(lVar11 + 0x85d0) == 0) goto LAB_01c7e47c;
        plVar9 = *(long **)(*(long *)(lVar11 + 0x85d0) + 0x20);
      }
      if (plVar9 != (long *)0x0) {
        local_78 = *(undefined **)(lVar11 + 0x85b0);
        local_70 = *(undefined8 **)(lVar11 + 0x85b8);
        local_68 = 1;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
      }
    }
LAB_01c7e47c:
    *(undefined1 *)(*(long *)(lVar11 + 0x85b8) + *(long *)(lVar11 + 0x85b0)) =
         *(undefined1 *)(*param_1 + 0x569b8);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x85d0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x85d0) + 0x18), puVar8 != (undefined8 *)0x0))
    {
      (**(code **)*puVar8)();
    }
    lVar11 = lVar14;
    if (*plVar16 == 0) {
      lVar11 = *(long *)(*(long *)puVar1 + 0x20);
    }
    plVar9 = (long *)(lVar11 + 0x2ae40);
    lVar12 = *(long *)(lVar11 + 0x2ae60);
    if (lVar12 == 0) {
      memcpy((void *)(*(long *)(lVar11 + 0x2ae48) + *plVar9),(void *)(*param_1 + 0x569c0),0x6270);
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
        plVar7 = *(long **)(lVar12 + 0x20);
joined_r0x01c7eac8:
        if (plVar7 != (long *)0x0) {
          local_78 = (undefined *)*plVar9;
          local_70 = *(undefined8 **)(lVar11 + 0x2ae48);
          local_68 = 0x6270;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        uVar6 = uVar6 & 0xffffffff;
        if (*(long *)(lVar11 + 0x2ae60) != 0) {
          plVar7 = *(long **)(*(long *)(lVar11 + 0x2ae60) + 0x20);
          goto joined_r0x01c7eac8;
        }
      }
      memcpy((void *)(*(long *)(lVar11 + 0x2ae48) + *plVar9),(void *)(*param_1 + 0x569c0),0x6270);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x2ae60) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x2ae60) + 0x18), puVar8 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar8)();
      }
    }
    lVar11 = lVar14;
    if (*plVar16 == 0) {
      lVar11 = *(long *)(*(long *)puVar1 + 0x20);
    }
    plVar9 = (long *)(lVar11 + 0x2ae78);
    lVar12 = *(long *)(lVar11 + 0x2ae98);
    if (lVar12 == 0) {
      memcpy((void *)(*(long *)(lVar11 + 0x2ae80) + *plVar9),(void *)(*param_1 + 0x5cc30),0x11f8);
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
        plVar7 = *(long **)(lVar12 + 0x20);
joined_r0x01c7ead8:
        if (plVar7 != (long *)0x0) {
          local_78 = (undefined *)*plVar9;
          local_70 = *(undefined8 **)(lVar11 + 0x2ae80);
          local_68 = 0x11f8;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        uVar6 = uVar6 & 0xffffffff;
        if (*(long *)(lVar11 + 0x2ae98) != 0) {
          plVar7 = *(long **)(*(long *)(lVar11 + 0x2ae98) + 0x20);
          goto joined_r0x01c7ead8;
        }
      }
      memcpy((void *)(*(long *)(lVar11 + 0x2ae80) + *plVar9),(void *)(*param_1 + 0x5cc30),0x11f8);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x2ae98) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x2ae98) + 0x18), puVar8 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar8)();
      }
    }
    lVar11 = lVar14;
    if (*plVar16 == 0) {
      lVar11 = *(long *)(*(long *)puVar1 + 0x20);
    }
    plVar9 = (long *)(lVar11 + 0x2aeb0);
    lVar12 = *(long *)(lVar11 + 0x2aed0);
    if (lVar12 == 0) {
      memcpy((void *)(*(long *)(lVar11 + 0x2aeb8) + *plVar9),(void *)(*param_1 + 0x5de28),800);
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
        plVar7 = *(long **)(lVar12 + 0x20);
joined_r0x01c7eae8:
        if (plVar7 != (long *)0x0) {
          local_78 = (undefined *)*plVar9;
          local_70 = *(undefined8 **)(lVar11 + 0x2aeb8);
          local_68 = 800;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
        }
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        uVar6 = uVar6 & 0xffffffff;
        if (*(long *)(lVar11 + 0x2aed0) != 0) {
          plVar7 = *(long **)(*(long *)(lVar11 + 0x2aed0) + 0x20);
          goto joined_r0x01c7eae8;
        }
      }
      memcpy((void *)(*(long *)(lVar11 + 0x2aeb8) + *plVar9),(void *)(*param_1 + 0x5de28),800);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x2aed0) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x2aed0) + 0x18), puVar8 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar8)();
      }
    }
    if (*plVar16 == 0) {
      lVar14 = *(long *)(*(long *)puVar1 + 0x20);
      lVar15 = *(long *)(lVar14 + 0x1170);
      if (lVar15 != 0) goto LAB_01c7e728;
LAB_01c7e7c8:
      memcpy((void *)(*(long *)(lVar14 + 0x1158) + *(long *)(lVar14 + 0x1150)),
             (void *)(*param_1 + 0x5e148),0x208);
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x1a620);
      if (lVar15 == 0) goto LAB_01c7e7c8;
LAB_01c7e728:
      if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
        plVar16 = *(long **)(lVar15 + 0x20);
joined_r0x01c7eaf8:
        if (plVar16 != (long *)0x0) {
          local_78 = *(undefined **)(lVar14 + 0x1150);
          local_70 = *(undefined8 **)(lVar14 + 0x1158);
          local_68 = 0x208;
          (**(code **)(*plVar16 + 0x20))(plVar16,&local_78);
        }
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        uVar6 = uVar6 & 0xffffffff;
        if (*(long *)(lVar14 + 0x1170) != 0) {
          plVar16 = *(long **)(*(long *)(lVar14 + 0x1170) + 0x20);
          goto joined_r0x01c7eaf8;
        }
      }
      memcpy((void *)(*(long *)(lVar14 + 0x1158) + *(long *)(lVar14 + 0x1150)),
             (void *)(*param_1 + 0x5e148),0x208);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar14 + 0x1170) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar14 + 0x1170) + 0x18), puVar8 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar8)();
      }
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    uVar5 = 0;
    do {
      uVar17 = uVar5 + 7;
      if (-1 < (int)uVar5) {
        uVar17 = uVar5;
      }
      uVar6 = (ulong)(uint)((int)uVar17 >> 3);
      if (6 < (uint)((int)uVar17 >> 3)) {
        uVar6 = 0;
      }
      local_70 = &DAT_0407ebb1;
      if (uVar5 < 0x35) {
        local_70 = (undefined8 *)(&PTR_s_IsFirstExplainedCloudIsland_04a43b28)[uVar5];
      }
      local_78 = puVar1;
      FUN_0274bfe8(local_44,&local_78,
                   (1 << (ulong)(uVar5 & 7) & (uint)*(byte *)(*param_1 + uVar6 + 0x5e350)) != 0);
      uVar17 = 0x35;
      if ((int)uVar5 < 0x35) {
        uVar17 = uVar5 + 1;
      }
      uVar5 = uVar17;
    } while (uVar17 != 0x35);
  }
  FUN_033d5ec0();
  FUN_033d6080();
  pbVar13 = PTR_DAT_04bb32e0;
  puVar10 = (undefined1 *)FUN_033d0598(PTR_DAT_04bb32e0);
  *puVar10 = 0;
  lVar15 = *(long *)puVar4;
  if (lVar15 == 0) {
LAB_01c7e8f0:
    if (*pbVar13 < 8) goto LAB_01c7e968;
LAB_01c7e8fc:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01c7e960:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_01c7e968;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar15 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar13 = (byte *)(lVar15 + 0x471);
      }
    }
    local_44[0] = *pbVar13;
    if (7 < local_44[0]) goto LAB_01c7e960;
LAB_01c7e984:
    uVar5 = FUN_02582d8c(local_44,1);
    puVar4 = PTR_DAT_04bb4fb8;
    if (((uVar5 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) {
      uVar5 = FUN_02582d8c(local_44,1);
      if (uVar5 < 8) {
        lVar14 = *(long *)puVar4 + (ulong)uVar5 * 0x13f0;
        lVar15 = 0;
        if (*(char *)(lVar14 + 0x13d4) != '\0') {
          lVar15 = lVar14;
        }
      }
      else {
        lVar15 = 0;
      }
      lVar14 = 0;
      if (lVar15 != 0) {
        lVar14 = lVar15 + 8;
      }
      goto LAB_01c7ea04;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01c7e8f0;
      }
      goto LAB_01c7e8fc;
    }
LAB_01c7e968:
    local_44[0] = *pbVar13;
    if (local_44[0] < 8) goto LAB_01c7e984;
    local_44[0] = 0xff;
  }
  lVar14 = 0;
LAB_01c7ea04:
  local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
  lVar15 = 0;
  if (lVar14 != 0) {
    lVar15 = lVar14 + 0x4f0;
  }
  FUN_007ef010((long)&local_78 + 4,PTR_DAT_04bb3170);
  *(undefined2 *)(lVar15 + 0x96) = 0;
  *(undefined4 *)(lVar15 + 0x90) = (undefined4)local_78;
  *(undefined2 *)(lVar15 + 0x94) = local_78._4_2_;
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_027c10a4((long)__ptr + 0x56954);
    FUN_027c10a4((long)__ptr + 0x568f0);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar16 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x38))(plVar16,__ptr);
      }
    }
  }
  return;
}

