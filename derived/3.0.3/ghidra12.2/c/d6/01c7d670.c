
void FUN_01c7d670(long *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *__s;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  uint uVar14;
  void *pvVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  undefined *local_70;
  undefined8 *puStack_68;
  byte local_48 [4];
  byte local_44 [4];
  
  lVar12 = DAT_05ae7600;
  if (*param_1 == 0) {
    if (DAT_05ae7600 == 0) {
      __s = malloc(0x5e358);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar12 + 8);
        if (lVar16 != 0) {
          param_2 = (long *)(lVar16 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      __s = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x5e358,8);
    }
    if (__s == (void *)0x0) {
      return;
    }
    memset(__s,0,0xaf00);
    lVar12 = 400;
    pvVar15 = __s;
    do {
      FUN_0276a91c(pvVar15);
      lVar12 = lVar12 + -1;
      pvVar15 = (void *)((long)pvVar15 + 0x70);
    } while (lVar12 != 0);
    memset((void *)((long)__s + 0xaf00),0,0x640);
    iVar6 = 0;
    uVar8 = 0;
    do {
      uVar4 = uVar8 << 2;
      uVar5 = uVar8 >> 0x1f;
      uVar14 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar14;
      *(int *)((long)__s + 0xaf00 + (-uVar5 & 0xfffffffc00000000 | uVar4)) = iVar6;
      iVar6 = iVar6 + 1;
    } while (uVar14 != 400);
    *(undefined8 *)((long)__s + 0xb540) = 0;
    FUN_02785660((long)__s + 0xb548);
    *(undefined1 *)((long)__s + 0x569b8) = 0;
    *(undefined8 *)((long)__s + 0x568f0) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569a8) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569b0) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56998) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x569a0) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56988) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56990) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56978) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56980) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56968) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56970) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56958) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56960) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56948) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56950) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56938) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56940) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56928) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56930) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56918) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56920) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56908) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56910) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x568f8) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x56900) = 0xffffffffffffffff;
    pvVar15 = (void *)((long)__s + 0x569c0);
    memset(pvVar15,0,0x60e0);
    lVar12 = 100;
    do {
      FUN_0275a914(pvVar15);
      lVar12 = lVar12 + -1;
      pvVar15 = (void *)((long)pvVar15 + 0xf8);
    } while (lVar12 != 0);
    pvVar15 = (void *)((long)__s + 0x5caa0);
    memset(pvVar15,0,400);
    iVar6 = 0;
    uVar8 = 0;
    do {
      lVar12 = uVar8 << 0x20;
      iVar1 = iVar6 + 1;
      *(int *)((long)pvVar15 + (-(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2)) = iVar6;
      iVar6 = iVar6 + 2;
      uVar8 = (ulong)((int)uVar8 + 2);
      *(int *)((long)pvVar15 + (lVar12 + 0x100000000 >> 0x1e)) = iVar1;
    } while (iVar6 != 100);
    FUN_028cc6f0((long)__s + 0x5cc30);
    uVar8 = 0;
    do {
      lVar12 = uVar8 << 0x20;
      uVar4 = uVar8 << 3;
      uVar5 = uVar8 >> 0x1f;
      uVar14 = (int)uVar8 + 2;
      uVar8 = (ulong)uVar14;
      *(undefined8 *)((long)__s + (-uVar5 & 0xfffffff800000000 | uVar4) + 0x5de28) = 0;
      *(undefined8 *)((long)__s + (lVar12 + 0x100000000 >> 0x1d) + 0x5de28) = 0;
    } while (uVar14 != 100);
    iVar6 = 0;
    do {
      *(undefined1 *)((long)__s + (long)iVar6 + 0x5e148) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x100);
    iVar6 = 0;
    *(undefined8 *)((long)__s + 0x5e248) = 0;
    do {
      *(undefined1 *)((long)__s + (long)iVar6 + 0x5e250) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x100);
    *(undefined4 *)((long)__s + 0x5e353) = 0;
    *(undefined4 *)((long)__s + 0x5e350) = 0;
    pvVar15 = (void *)*param_1;
    *param_1 = (long)__s;
    if (pvVar15 != (void *)0x0) {
      FUN_027c10a4((long)pvVar15 + 0x56954);
      FUN_027c10a4((long)pvVar15 + 0x568f0);
      if (DAT_05ae7600 == 0) {
        free(pvVar15);
      }
      else {
        plVar17 = (long *)FUN_038cb610(DAT_05ae7600,pvVar15);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x38))(plVar17,pvVar15);
        }
      }
    }
  }
  pbVar10 = &DAT_0548e140;
  if (DAT_04cd19d8 == 0) {
LAB_01c7d6f0:
    if (7 < *pbVar10) {
LAB_01c7d6fc:
      if (DAT_0537d558 != (long *)0x0) {
        lVar12 = *DAT_0537d558;
        bVar13 = *(byte *)(lVar12 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar13 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar3 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar10 = (byte *)(lVar12 + 0x471);
          }
        }
        local_44[0] = *pbVar10;
        if (local_44[0] < 8) goto LAB_01c7d77c;
      }
      pbVar10 = &DAT_0548e168;
    }
  }
  else {
    pbVar10 = &DAT_0548e140;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01c7d6f0;
      }
      goto LAB_01c7d6fc;
    }
  }
  local_44[0] = *pbVar10;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
LAB_01c7d77c:
  local_48[0] = local_44[0];
  if (7 < local_44[0]) {
    local_48[0] = 0xff;
  }
  lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1);
  puVar2 = PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
    return;
  }
  lVar16 = lVar12 + 0x194b0;
  plVar17 = (long *)(lVar12 + 0x194b8);
  lVar11 = lVar16;
  if (*plVar17 == 0) {
    lVar11 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  if ((*(long **)(lVar11 + 0x8560) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar11 + 0x8560), puVar7 == (undefined8 *)0x0)) {
    memcpy((void *)*param_1,(void *)(*(long *)(lVar11 + 0x8548) + *(long *)(lVar11 + 0x8540)),0xb548
          );
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    memcpy((void *)*param_1,(void *)(*(long *)(lVar11 + 0x8548) + *(long *)(lVar11 + 0x8540)),0xb548
          );
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x8560) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x8560) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  if (*(long *)puVar2 != 0) {
    lVar11 = *(long *)(*(long *)puVar2 + 0x10);
    if (((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 8), lVar11 != 0)) &&
       (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar7 == (undefined8 *)0x0)) {
        memcpy((void *)(*param_1 + 0xb548),
               (void *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8)),0x4b3a8);
      }
      else {
        uVar8 = (**(code **)*puVar7)();
        memcpy((void *)(*param_1 + 0xb548),
               (void *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8)),0x4b3a8);
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
          (**(code **)*puVar7)();
        }
      }
    }
    if (*(long *)puVar2 != 0) {
      lVar9 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar2 + 0x10) + 0x30))();
      lVar11 = 0;
      if (lVar9 != 0) {
        lVar11 = lVar9 + 0x276cb0;
      }
      if ((*(long **)(lVar11 + 0x370) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar11 + 0x370), puVar7 == (undefined8 *)0x0)) {
        memcpy((void *)(*param_1 + 0x568f0),
               (void *)(*(long *)(lVar11 + 0x358) + *(long *)(lVar11 + 0x350)),200);
      }
      else {
        uVar8 = (**(code **)*puVar7)();
        memcpy((void *)(*param_1 + 0x568f0),
               (void *)(*(long *)(lVar11 + 0x358) + *(long *)(lVar11 + 0x350)),200);
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x370) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x370) + 8), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
        }
      }
    }
  }
  lVar11 = lVar16;
  if (*plVar17 == 0) {
    lVar11 = *(long *)(*(long *)puVar2 + 0x20);
  }
  if (*(long **)(lVar11 + 0x85d0) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar7 = (undefined8 *)**(long **)(lVar11 + 0x85d0);
    uVar8 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar8 = (**(code **)*puVar7)();
    }
  }
  *(undefined1 *)(*param_1 + 0x569b8) =
       *(undefined1 *)(*(long *)(lVar11 + 0x85b8) + *(long *)(lVar11 + 0x85b0));
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x85d0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x85d0) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  lVar11 = lVar16;
  if (*plVar17 == 0) {
    lVar11 = *(long *)(*(long *)puVar2 + 0x20);
  }
  if ((*(long **)(lVar11 + 0x2ae60) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar11 + 0x2ae60), puVar7 == (undefined8 *)0x0)) {
    memcpy((void *)(*param_1 + 0x569c0),
           (void *)(*(long *)(lVar11 + 0x2ae48) + *(long *)(lVar11 + 0x2ae40)),0x6270);
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    memcpy((void *)(*param_1 + 0x569c0),
           (void *)(*(long *)(lVar11 + 0x2ae48) + *(long *)(lVar11 + 0x2ae40)),0x6270);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x2ae60) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x2ae60) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  lVar11 = lVar16;
  if (*plVar17 == 0) {
    lVar11 = *(long *)(*(long *)puVar2 + 0x20);
  }
  if ((*(long **)(lVar11 + 0x2ae98) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar11 + 0x2ae98), puVar7 == (undefined8 *)0x0)) {
    memcpy((void *)(*param_1 + 0x5cc30),
           (void *)(*(long *)(lVar11 + 0x2ae80) + *(long *)(lVar11 + 0x2ae78)),0x11f8);
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    memcpy((void *)(*param_1 + 0x5cc30),
           (void *)(*(long *)(lVar11 + 0x2ae80) + *(long *)(lVar11 + 0x2ae78)),0x11f8);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x2ae98) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x2ae98) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  lVar11 = lVar16;
  if (*plVar17 == 0) {
    lVar11 = *(long *)(*(long *)puVar2 + 0x20);
  }
  if ((*(long **)(lVar11 + 0x2aed0) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar11 + 0x2aed0), puVar7 == (undefined8 *)0x0)) {
    memcpy((void *)(*param_1 + 0x5de28),
           (void *)(*(long *)(lVar11 + 0x2aeb8) + *(long *)(lVar11 + 0x2aeb0)),800);
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    memcpy((void *)(*param_1 + 0x5de28),
           (void *)(*(long *)(lVar11 + 0x2aeb8) + *(long *)(lVar11 + 0x2aeb0)),800);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0x2aed0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x2aed0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  if (*plVar17 == 0) {
    lVar16 = *(long *)(*(long *)puVar2 + 0x20);
    plVar17 = *(long **)(lVar16 + 0x1170);
  }
  else {
    plVar17 = *(long **)(lVar12 + 0x1a620);
  }
  if ((plVar17 == (long *)0x0) || ((undefined8 *)*plVar17 == (undefined8 *)0x0)) {
    memcpy((void *)(*param_1 + 0x5e148),
           (void *)(*(long *)(lVar16 + 0x1158) + *(long *)(lVar16 + 0x1150)),0x208);
  }
  else {
    uVar8 = (*(code *)**(undefined8 **)*plVar17)();
    memcpy((void *)(*param_1 + 0x5e148),
           (void *)(*(long *)(lVar16 + 0x1158) + *(long *)(lVar16 + 0x1150)),0x208);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar16 + 0x1170) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar16 + 0x1170) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  uVar14 = 0;
  do {
    puStack_68 = &DAT_0407ebb1;
    uVar18 = uVar14 + 7;
    if (-1 < (int)uVar14) {
      uVar18 = uVar14;
    }
    if (uVar14 < 0x35) {
      puStack_68 = (undefined8 *)(&PTR_s_IsFirstExplainedCloudIsland_04a43b28)[uVar14];
    }
    uVar8 = (ulong)(uint)((int)uVar18 >> 3);
    local_70 = puVar2;
    iVar6 = FUN_0274bce0(local_44,&local_70);
    if (6 < (uint)((int)uVar18 >> 3)) {
      uVar8 = 0;
    }
    lVar12 = *param_1 + 0x5e350;
    bVar13 = (byte)(1 << (ulong)(uVar14 & 7));
    if (iVar6 == 0) {
      bVar13 = *(byte *)(lVar12 + uVar8) & (bVar13 ^ 0xff);
    }
    else {
      bVar13 = *(byte *)(lVar12 + uVar8) | bVar13;
    }
    *(byte *)(lVar12 + uVar8) = bVar13;
    uVar18 = 0x35;
    if ((int)uVar14 < 0x35) {
      uVar18 = uVar14 + 1;
    }
    uVar14 = uVar18;
  } while (uVar18 != 0x35);
  return;
}

