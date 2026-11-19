
undefined8 FUN_03832e10(byte *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong __size;
  long lVar16;
  
  *param_1 = *param_1 & 0xfe;
  puVar6 = PTR_DAT_04bb2698;
  uVar12 = *param_2;
  if ((int)uVar12 < 1) {
    return 1;
  }
  __size = (ulong)uVar12 * 0x2e0 | 8;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    puVar9 = malloc(__size);
joined_r0x03832ebc:
    if (puVar9 != (ulong *)0x0) {
      *puVar9 = (ulong)uVar12;
      puVar14 = puVar9 + 0x4f;
      puVar1 = PTR_DAT_04bc4348 + 0x10;
      puVar2 = PTR_DAT_04bdf1d8 + 0x10;
      puVar13 = puVar9 + 6;
      do {
        *(undefined1 *)(puVar13 + -5) = 1;
        *(undefined8 *)((long)puVar13 + -0x24) = 0;
        puVar13[-3] = (ulong)puVar1;
        *(undefined1 *)(puVar13 + -2) = 0;
        puVar13[-1] = 0;
        *puVar13 = 0;
        puVar13[0x1f] = (ulong)(puVar13 + 0x26);
        puVar13[0x18] = (ulong)(puVar13 + 0x1f);
        puVar13[0x11] = (ulong)(puVar13 + 0x18);
        puVar13[10] = (ulong)(puVar13 + 0x11);
        puVar15 = puVar13 + 3;
        *puVar15 = (ulong)(puVar13 + 10);
        puVar13[0x26] = (ulong)(puVar13 + 0x2d);
        puVar13[0x2d] = (ulong)(puVar13 + 0x34);
        puVar13[0x34] = (ulong)(puVar13 + 0x3b);
        puVar13[0x3b] = (ulong)(puVar13 + 0x42);
        puVar13[0x42] = 0;
        puVar13[1] = (ulong)puVar15;
        puVar13[2] = (ulong)puVar15;
        if (puVar14 != (ulong *)0x0) {
          *puVar13 = (ulong)puVar14;
          *(undefined4 *)((long)puVar13 + -4) = 10;
        }
        puVar15 = puVar13 + 0x57;
        puVar13[0x53] = (ulong)puVar2;
        puVar14 = puVar14 + 0x5c;
        puVar13[0x54] = 0;
        puVar13[0x55] = 0;
        puVar13[0x56] = 0;
        puVar13 = puVar13 + 0x5c;
      } while (puVar15 != puVar9 + 1 + (ulong)uVar12 * 0x5c);
      *(uint *)(param_1 + 8) = uVar12;
      *(ulong **)(param_1 + 0x10) = puVar9 + 1;
    }
  }
  else {
    plVar7 = *(long **)(param_2 + 2);
    if (plVar7 != (long *)0x0) {
LAB_03832e98:
      puVar9 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
      goto joined_r0x03832ebc;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar16 + 8);
    if (lVar8 != 0) {
      plVar7 = (long *)(lVar8 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03832e98;
  }
  uVar12 = *param_2;
  if ((int)uVar12 < 1) {
    return 1;
  }
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    pvVar10 = malloc((ulong)uVar12 << 3);
  }
  else {
    plVar7 = *(long **)(param_2 + 2);
    if (plVar7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar16 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_03833014;
    }
    pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)uVar12 << 3,8);
  }
  if (pvVar10 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar10;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    *(uint *)(param_1 + 0x20) = uVar12;
  }
LAB_03833014:
  uVar12 = *param_2;
  if ((0 < (int)uVar12) && (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20))) {
    uVar11 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x20);
      if (iVar4 < iVar5) {
        uVar12 = uVar11;
        if (*(uint *)(param_1 + 8) <= uVar11) {
          uVar12 = 0;
        }
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        iVar3 = 0;
        if (iVar5 <= *(int *)(param_1 + 0x24) + iVar4) {
          iVar3 = iVar5;
        }
        *(ulong *)(*(long *)(param_1 + 0x18) +
                  (long)((*(int *)(param_1 + 0x24) + iVar4) - iVar3) * 8) =
             *(long *)(param_1 + 0x10) + (ulong)uVar12 * 0x2e0;
        uVar12 = *param_2;
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar12);
  }
  return 1;
}

