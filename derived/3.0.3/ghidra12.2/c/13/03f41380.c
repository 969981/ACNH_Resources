
undefined8 FUN_03f41380(long param_1,uint *param_2)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  void *pvVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  
  puVar9 = PTR_DAT_04bb2698;
  uVar4 = *param_2;
  uVar19 = (ulong)uVar4;
  if ((int)uVar4 < 1) goto LAB_03f41548;
  lVar20 = *(long *)PTR_DAT_04bb2698;
  __size = (ulong)uVar4 * 0x38 + 8;
  if (lVar20 == 0) {
    puVar13 = malloc(__size);
joined_r0x03f4141c:
    if (puVar13 != (ulong *)0x0) {
      uVar18 = uVar19 * 0x38 - 0x38;
      puVar15 = puVar13 + 1;
      *puVar13 = uVar19;
      puVar2 = PTR_DAT_04bdf1d8;
      puVar10 = PTR_DAT_04bdf0c8;
      puVar16 = puVar15;
      if ((uVar18 / 0x38 & 1) == 0) {
        puVar1 = PTR_DAT_04bdf0c8 + 0x10;
        *(undefined4 *)((long)puVar13 + 0x14) = 0;
        puVar13[7] = 0;
        puVar13[1] = (ulong)puVar1;
        *(undefined1 *)(puVar13 + 2) = 1;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[3] = 0;
        puVar13[4] = (ulong)(puVar2 + 0x10);
        puVar16 = puVar13 + 8;
      }
      if (0x37 < uVar18) {
        puVar2 = puVar2 + 0x10;
        do {
          *puVar16 = (ulong)(puVar10 + 0x10);
          *(undefined1 *)(puVar16 + 1) = 1;
          *(undefined4 *)((long)puVar16 + 0xc) = 0;
          *(undefined1 *)(puVar16 + 8) = 1;
          *(undefined4 *)((long)puVar16 + 0x44) = 0;
          puVar16[0xd] = 0;
          puVar16[2] = 0;
          puVar16[3] = (ulong)puVar2;
          puVar16[4] = 0;
          puVar16[5] = 0;
          puVar16[6] = 0;
          puVar16[7] = (ulong)(puVar10 + 0x10);
          puVar16[9] = 0;
          puVar16[10] = (ulong)puVar2;
          puVar16[0xb] = 0;
          puVar16[0xc] = 0;
          puVar16 = puVar16 + 0xe;
        } while (puVar16 != puVar15 + uVar19 * 7);
      }
      *(uint *)(param_1 + 8) = uVar4;
      *(ulong **)(param_1 + 0x10) = puVar15;
    }
  }
  else {
    plVar11 = *(long **)(param_2 + 2);
    if (plVar11 != (long *)0x0) {
LAB_03f413f8:
      puVar13 = (ulong *)(**(code **)(*plVar11 + 0x30))(plVar11,__size,8);
      goto joined_r0x03f4141c;
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar20 + 8);
    if (lVar12 != 0) {
      plVar11 = (long *)(lVar12 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) goto LAB_03f413f8;
  }
  lVar20 = *(long *)puVar9;
  if (lVar20 == 0) {
    pvVar14 = malloc(uVar19 << 3);
  }
  else {
    plVar11 = *(long **)(param_2 + 2);
    if (plVar11 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar20 + 8);
      if (lVar12 != 0) {
        plVar11 = (long *)(lVar12 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB_03f41548;
    }
    pvVar14 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar19 << 3,8);
  }
  if (pvVar14 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar14;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(uint *)(param_1 + 0x20) = uVar4;
  }
LAB_03f41548:
  iVar5 = *(int *)(param_1 + 8);
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20))) {
    lVar20 = *(long *)(param_1 + 0x10);
    iVar17 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x28);
      iVar7 = *(int *)(param_1 + 0x20);
      if (iVar6 < iVar7) {
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        iVar6 = *(int *)(param_1 + 0x24) + iVar6;
        iVar3 = 0;
        if (iVar7 <= iVar6) {
          iVar3 = iVar7;
        }
        *(long *)(*(long *)(param_1 + 0x18) + (long)(iVar6 - iVar3) * 8) =
             lVar20 + (long)iVar17 * 0x38;
      }
      iVar17 = iVar17 + 1;
    } while (iVar5 != iVar17);
  }
  uVar8 = uVar4 - 1;
  if (0 < (int)uVar4) {
    lVar20 = *(long *)puVar9;
    if (lVar20 == 0) {
      pvVar14 = malloc((long)(int)uVar4 * 0x38);
    }
    else {
      plVar11 = *(long **)(param_2 + 2);
      if (plVar11 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar20 + 8);
        if (lVar12 != 0) {
          plVar11 = (long *)(lVar12 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 1;
        }
      }
      pvVar14 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,(long)(int)uVar4 * 0x38,8);
    }
    if (pvVar14 != (void *)0x0) {
      *(uint *)(param_1 + 0x4c) = uVar4;
      *(void **)(param_1 + 0x38) = pvVar14;
      if (1 < uVar4) {
        if (uVar8 == 1) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          plVar11 = (long *)((long)pvVar14 + 0x38);
          do {
            uVar19 = uVar19 + 2;
            plVar11[-7] = (long)plVar11;
            *plVar11 = (long)(plVar11 + 7);
            plVar11 = plVar11 + 0xe;
          } while (((ulong)uVar8 & 0xfffffffe) != uVar19);
        }
        if ((uVar8 & 1) != 0) {
          plVar11 = (long *)((long)pvVar14 + uVar19 * 0x38);
          *plVar11 = (long)(plVar11 + 7);
        }
      }
      *(undefined8 *)((long)pvVar14 + (long)(int)(uVar8 * 7) * 8) = 0;
      *(void **)(param_1 + 0x40) = pvVar14;
    }
  }
  return 1;
}

