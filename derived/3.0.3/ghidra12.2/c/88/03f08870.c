
void FUN_03f08870(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  size_t sVar15;
  ulong *puVar16;
  undefined *__dest;
  long lVar17;
  ulong uVar18;
  undefined *local_a0;
  byte *local_98;
  long local_68;
  
  FUN_03964240(&local_68);
  puVar1 = PTR_DAT_04bb2698;
  uVar4 = *(uint *)(local_68 + (ulong)*(uint *)(local_68 + 0x14) + 0x38);
  if (uVar4 < 0x10000) {
    return;
  }
  uVar4 = uVar4 >> 0x10;
  uVar18 = (ulong)uVar4;
  sVar15 = uVar18 * 0x228 + 8;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    puVar7 = malloc(sVar15);
joined_r0x03f08938:
    if (puVar7 != (ulong *)0x0) {
      lVar17 = uVar18 * 0x228;
      *puVar7 = uVar18;
      puVar16 = puVar7 + 1;
      do {
        FUN_03f08d70(puVar16);
        puVar16 = puVar16 + 0x45;
        lVar17 = lVar17 + -0x228;
      } while (lVar17 != 0);
      *(uint *)(param_1 + 0x20) = uVar4;
      *(ulong **)(param_1 + 0x28) = puVar7 + 1;
    }
    lVar17 = *(long *)puVar1;
    sVar15 = uVar18 * 0x1d8 + 8;
    if (lVar17 == 0) goto LAB_03f089f8;
    if (param_4 == (long *)0x0) {
LAB_03f089a8:
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar3 = (undefined8 *)(lVar17 + 8);
      if (lVar5 != 0) {
        puVar3 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_4 = (long *)*puVar3;
      if (param_4 == (long *)0x0) goto LAB_03f08a44;
    }
    puVar7 = (ulong *)(**(code **)(*param_4 + 0x30))(param_4,sVar15,8);
  }
  else {
    plVar6 = param_4;
    if (param_4 != (long *)0x0) {
LAB_03f0890c:
      puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,sVar15,8);
      goto joined_r0x03f08938;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar17 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_03f0890c;
    lVar17 = *(long *)puVar1;
    sVar15 = uVar18 * 0x1d8 + 8;
    if (lVar17 != 0) goto LAB_03f089a8;
LAB_03f089f8:
    puVar7 = malloc(sVar15);
  }
  if (puVar7 != (ulong *)0x0) {
    lVar17 = uVar18 * 0x1d8;
    *puVar7 = uVar18;
    puVar16 = puVar7 + 1;
    do {
      FUN_03955650(puVar16);
      *puVar16 = (ulong)&PTR_LAB_04ba7a78;
      puVar16 = puVar16 + 0x3b;
      lVar17 = lVar17 + -0x1d8;
    } while (lVar17 != 0);
    *(uint *)(param_1 + 0x30) = uVar4;
    *(ulong **)(param_1 + 0x38) = puVar7 + 1;
  }
LAB_03f08a44:
  uVar4 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar4) {
    uVar14 = 0;
    do {
      lVar17 = *(long *)(param_1 + 0x28);
      uVar9 = uVar14;
      if (*(uint *)(param_1 + 0x20) <= uVar14) {
        uVar9 = 0;
      }
      FUN_006d8678(&local_a0,"Preset_%d",uVar14);
      uVar8 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar8 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_a0);
      }
      lVar17 = lVar17 + (ulong)uVar9 * 0x228;
      *(undefined8 *)(lVar17 + 0x28) = uVar8;
      (**(code **)(local_a0 + 0x18))(&local_a0);
      uVar10 = (uint)*local_98;
      uVar9 = 0;
      if (*local_98 != 0) {
        uVar9 = 0xffffffff;
        pbVar12 = local_98;
        do {
          pbVar12 = pbVar12 + 1;
          uVar9 = crc32b(uVar9,uVar10,0x4c11db7);
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
        uVar9 = ~uVar9;
      }
      *(uint *)(lVar17 + 0x1c) = uVar9;
      uVar14 = uVar14 + 1;
      plVar6 = (long *)(param_1 + 0x48);
      if (*(long *)(param_1 + 0x50) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 0x50) + 0x20);
      }
      *plVar6 = lVar17;
      *(long *)(param_1 + 0x50) = lVar17;
    } while (uVar14 != uVar4);
  }
  plVar6 = (long *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(local_68 + 0xc);
  if (*(int *)(param_1 + 0xe0) != *(int *)(local_68 + 0x10)) {
    (**(code **)(*plVar6 + 0x60))(plVar6,local_68);
  }
  FUN_03955fe0(0,plVar6,0,local_68 + (ulong)*(uint *)(local_68 + 0x14) + 0x30,0);
  uVar4 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar4) {
    uVar14 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar17 = *(long *)(param_1 + 0x48);
      uVar9 = uVar14;
      if (*(uint *)(param_1 + 0x20) <= uVar14) {
        uVar9 = 0;
      }
      if (lVar17 != 0) {
        lVar5 = *(long *)(param_1 + 0x28) + (ulong)uVar9 * 0x228;
        if (lVar17 == lVar5) {
          lVar13 = 0;
        }
        else {
          do {
            lVar13 = lVar17;
            lVar17 = *(long *)(lVar13 + 0x20);
            if (lVar17 == 0) goto LAB_03f08c6c;
          } while (lVar17 != lVar5);
        }
        puVar3 = (undefined8 *)(param_1 + 0x48);
        if (lVar13 != 0) {
          puVar3 = (undefined8 *)(lVar13 + 0x20);
        }
        *puVar3 = *(undefined8 *)(lVar5 + 0x20);
        if (*(long *)(lVar5 + 0x20) == 0) {
          *(long *)(param_1 + 0x50) = lVar13;
        }
        *(undefined8 *)(lVar5 + 0x20) = 0;
      }
LAB_03f08c6c:
      uVar9 = uVar14;
      if (*(uint *)(param_1 + 0x30) <= uVar14) {
        uVar9 = 0;
      }
      lVar17 = *(long *)(param_1 + 0x38) + (ulong)uVar9 * 0x1d8;
      __dest = *(undefined **)(lVar17 + 0x50);
      if (__dest != &DAT_04064cd3) {
        iVar2 = 4;
        if (*(int *)(lVar17 + 0x58) < 5) {
          iVar2 = *(int *)(lVar17 + 0x58) + -1;
        }
        memcpy(__dest,&DAT_04064cd3,(long)iVar2);
        __dest[iVar2] = 0;
      }
      *(undefined4 *)(lVar17 + 0xa0) = 0;
      lVar17 = *(long *)(param_1 + 0x38);
      lVar5 = *(long *)(param_1 + 0x28);
      uVar9 = uVar14;
      if (*(uint *)(param_1 + 0x30) <= uVar14) {
        uVar9 = 0;
      }
      local_98 = (byte *)0x40e6f73;
      uVar10 = uVar14;
      if (*(uint *)(param_1 + 0x20) <= uVar14) {
        uVar10 = 0;
      }
      uVar8 = 0;
      local_a0 = puVar1;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar8 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_a0);
      }
      lVar5 = lVar5 + (ulong)uVar10 * 0x228;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      (**(code **)(local_a0 + 0x18))(&local_a0);
      uVar11 = (uint)*local_98;
      uVar10 = 0;
      if (*local_98 != 0) {
        uVar10 = 0xffffffff;
        pbVar12 = local_98;
        do {
          pbVar12 = pbVar12 + 1;
          uVar10 = crc32b(uVar10,uVar11,0x4c11db7);
          uVar11 = (uint)*pbVar12;
        } while (uVar11 != 0);
        uVar10 = ~uVar10;
      }
      lVar17 = lVar17 + (ulong)uVar9 * 0x1d8;
      *(uint *)(lVar5 + 0x1c) = uVar10;
      plVar6 = (long *)(lVar17 + 8);
      if (*(long *)(lVar17 + 0x10) != 0) {
        plVar6 = (long *)(*(long *)(lVar17 + 0x10) + 0x20);
      }
      *plVar6 = lVar5;
      *(long *)(lVar17 + 0x10) = lVar5;
      uVar9 = uVar14;
      if (*(uint *)(param_1 + 0x20) <= uVar14) {
        uVar9 = 0;
      }
      uVar10 = uVar14;
      if (*(uint *)(param_1 + 0x30) <= uVar14) {
        uVar10 = 0;
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(*(long *)(param_1 + 0x38) + (ulong)uVar10 * 0x1d8 + 0x1d0) =
           *(long *)(param_1 + 0x28) + (ulong)uVar9 * 0x228;
    } while (uVar14 != uVar4);
  }
  return;
}

