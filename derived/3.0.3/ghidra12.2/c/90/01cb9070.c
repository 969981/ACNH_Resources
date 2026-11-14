
undefined8 FUN_01cb9070(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  int iVar15;
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  local_7e0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7d8,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_84 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
  local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
  pvVar9 = (void *)FUN_01a451fc(&local_7e0);
  memset(pvVar9,0,0x754);
  memcpy(auStack_7d8,&DAT_0535cbc8,0x754);
  puVar4 = PTR_DAT_04bb43c0;
  uVar7 = 0;
  do {
    (**(code **)(local_7e0 + 0x10))(&local_70,&local_7e0,uVar7);
    lVar10 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    uVar14 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(uint *)(lVar10 + (ulong)(uVar7 >> 5) * 4) & uVar14) != 0) {
      lVar10 = *(long *)puVar4;
      uVar8 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar4 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
           (uVar11 = (**(code **)*param_2)(param_2,&local_70), (uVar11 & 1) != 0))
        goto LAB_01cb9180;
      }
      lVar10 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
      lVar12 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar10 + lVar12) = *(uint *)(lVar10 + lVar12) & (uVar14 ^ 0xffffffff);
    }
LAB_01cb9180:
    uVar7 = uVar7 + 1;
  } while (uVar7 != 15000);
  lVar12 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
  lVar10 = 0;
  uVar7 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar10);
    lVar10 = lVar10 + 4;
    uVar14 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    uVar7 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + uVar7;
  } while (lVar10 != 0x754);
  if (uVar7 != 0) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      pvVar9 = malloc((ulong)(uVar7 * 2));
      if (pvVar9 == (void *)0x0) {
        return 0;
      }
    }
    else {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar10 + 8);
      if (lVar12 != 0) {
        plVar13 = (long *)(lVar12 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        return 0;
      }
      pvVar9 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,(ulong)(uVar7 * 2),8);
      if (pvVar9 == (void *)0x0) {
        return 0;
      }
    }
    *param_1 = uVar7;
    *(void **)(param_1 + 2) = pvVar9;
    lVar10 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    uVar11 = 0;
    do {
      if ((*(uint *)(lVar10 + (uVar11 >> 5) * 4) >> (ulong)((uint)uVar11 & 0x1f) & 1) != 0)
      goto LAB_01cb9330;
      uVar7 = (uint)uVar11 + 1;
      uVar11 = (ulong)uVar7;
    } while (uVar7 != 15000);
    uVar11 = 0;
LAB_01cb9330:
    lVar12 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    puVar5 = PTR_DAT_04bbfe58;
    puVar4 = PTR_DAT_04bb37e0;
    iVar15 = 15000;
    do {
      if ((*(uint *)(lVar12 + (ulong)(iVar15 - 1U >> 5) * 4) >> (ulong)(iVar15 - 1U & 0x1f) & 1) !=
          0) break;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    if (iVar15 != (int)uVar11) {
      uVar7 = 0;
LAB_01cb93c8:
      puVar2 = (undefined4 *)(puVar5 + uVar11 * 8);
      if (0x752 < (uint)(uVar11 >> 3)) {
        puVar2 = (undefined4 *)puVar5;
      }
      puVar3 = (undefined4 *)puVar4;
      if ((uint)uVar11 < 0x3a99) {
        puVar3 = puVar2;
      }
      local_70 = *puVar3;
      uStack_6c = puVar3[1];
      uVar6 = FUN_0277d6c4(&local_70);
      uVar14 = uVar7;
      if (*param_1 <= uVar7) {
        uVar14 = 0;
      }
      *(undefined2 *)(*(long *)(param_1 + 2) + (ulong)uVar14 * 2) = uVar6;
      do {
        uVar14 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar14;
        if (0x752 < uVar14 >> 3) {
          uVar14 = 0x3a95;
          goto LAB_01cb9434;
        }
      } while ((*(uint *)(lVar10 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) == 0);
      goto LAB_01cb93bc;
    }
  }
  return 1;
  while( true ) {
    if ((*(uint *)(lVar10 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
    goto LAB_01cb93b8;
    uVar14 = uVar14 - 3;
    if (uVar14 == 0xfffffffd) break;
LAB_01cb9434:
    uVar8 = uVar14 + 2;
    if (((*(uint *)(lVar10 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0) ||
       (uVar8 = uVar14 + 1,
       (*(uint *)(lVar10 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
      uVar14 = uVar8;
LAB_01cb93b8:
      uVar11 = (ulong)(uVar14 + 1);
      goto LAB_01cb93bc;
    }
  }
  uVar11 = 0;
LAB_01cb93bc:
  uVar7 = uVar7 + 1;
  if (iVar15 == (int)uVar11) {
    return 1;
  }
  goto LAB_01cb93c8;
}

