
undefined8 FUN_02a03270(long param_1,int param_2,uint param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  size_t __size;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  
  puVar3 = PTR_DAT_04bb2698;
  uVar15 = (ulong)param_3;
  if ((param_2 < 1) || ((int)param_3 < 1)) {
    if ((int)param_3 < 1) goto LAB_02a0348c;
  }
  else {
    uVar8 = param_3 * param_2;
    lVar16 = *(long *)PTR_DAT_04bb2698;
    __size = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3;
    if ((int)uVar8 < 0) {
      __size = 0xffffffffffffffff;
    }
    if (lVar16 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      plVar5 = param_4;
      if (param_4 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar16 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_02a03330;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(int *)(param_1 + 0x10) = param_2;
      *(uint *)(param_1 + 0x14) = param_3;
      *(void **)(param_1 + 0x18) = pvVar6;
    }
  }
LAB_02a03330:
  lVar16 = *(long *)puVar3;
  if (lVar16 == 0) {
    puVar7 = malloc(uVar15 * 0x30);
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar7 = (undefined8 *)(lVar16 + 8);
      if (lVar4 != 0) {
        puVar7 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_4 = (long *)*puVar7;
      if (param_4 == (long *)0x0) goto LAB_02a0348c;
    }
    puVar7 = (undefined8 *)(**(code **)(*param_4 + 0x30))(param_4,uVar15 * 0x30,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar13 = uVar15 * 0x30 - 0x30;
    uVar8 = ((uint)(uVar13 / 0x30) & 0x7ffffff) + 1;
    uVar14 = (ulong)uVar8 & 7;
    puVar11 = puVar7;
    if ((uVar8 & 7) != 0) {
      puVar10 = puVar7;
      do {
        *(undefined4 *)(puVar10 + 5) = 0;
        uVar14 = uVar14 - 1;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar11 = puVar10 + 6;
        *puVar10 = 0;
        puVar10 = puVar11;
      } while (uVar14 != 0);
    }
    if (0x14f < uVar13) {
      do {
        *(undefined4 *)(puVar11 + 5) = 0;
        *puVar11 = 0;
        puVar11[10] = 0;
        *(undefined4 *)(puVar11 + 0xb) = 0;
        puVar11[0x10] = 0;
        *(undefined4 *)(puVar11 + 0x11) = 0;
        *(undefined4 *)(puVar11 + 0x17) = 0;
        puVar11[0x12] = 0;
        *(undefined4 *)(puVar11 + 0x1d) = 0;
        puVar11[0x18] = 0;
        *(undefined4 *)(puVar11 + 0x23) = 0;
        puVar11[0x1e] = 0;
        *(undefined4 *)(puVar11 + 0x29) = 0;
        puVar11[0x24] = 0;
        *(undefined4 *)(puVar11 + 0x2f) = 0;
        puVar11[0x2a] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[0xc] = 0;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        puVar11[0xf] = 0;
        puVar11[0x15] = 0;
        puVar11[0x16] = 0;
        puVar11[0x13] = 0;
        puVar11[0x14] = 0;
        puVar11[0x1b] = 0;
        puVar11[0x1c] = 0;
        puVar11[0x19] = 0;
        puVar11[0x1a] = 0;
        puVar11[0x21] = 0;
        puVar11[0x22] = 0;
        puVar11[0x1f] = 0;
        puVar11[0x20] = 0;
        puVar11[0x27] = 0;
        puVar11[0x28] = 0;
        puVar11[0x25] = 0;
        puVar11[0x26] = 0;
        puVar11[0x2d] = 0;
        puVar11[0x2e] = 0;
        puVar11[0x2b] = 0;
        puVar11[0x2c] = 0;
        puVar11 = puVar11 + 0x30;
      } while (puVar11 != puVar7 + uVar15 * 6);
    }
    *(undefined8 **)(param_1 + 0x20) = puVar7;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(uint *)(param_1 + 0x28) = param_3;
  }
LAB_02a0348c:
  iVar12 = *(int *)(param_1 + 0x28);
  if (0 < iVar12) {
    if (param_2 < 1) {
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 1;
        iVar1 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        iVar2 = 0;
        if (iVar12 <= iVar1) {
          iVar2 = iVar12;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)(iVar1 - iVar2) * 0x30 + 0x24) = 0;
        iVar12 = *(int *)(param_1 + 0x28);
      } while (iVar9 < iVar12);
    }
    else {
      uVar8 = 0;
      do {
        iVar9 = *(int *)(param_1 + 0x30);
        if (iVar9 < iVar12) {
          *(int *)(param_1 + 0x30) = iVar9 + 1;
          iVar9 = *(int *)(param_1 + 0x2c) + iVar9;
          iVar1 = 0;
          if (iVar12 <= iVar9) {
            iVar1 = iVar12;
          }
          lVar16 = *(long *)(param_1 + 0x20) + (long)(iVar9 - iVar1) * 0x30;
          iVar12 = *(int *)(param_1 + 0x10);
        }
        else {
          lVar16 = 0;
          iVar12 = *(int *)(param_1 + 0x10);
        }
        if (((iVar12 != 0) && (uVar8 < *(uint *)(param_1 + 0x14))) &&
           (lVar4 = *(long *)(param_1 + 0x18), lVar4 != 0)) {
          *(int *)(lVar16 + 0x20) = param_2;
          *(long *)(lVar16 + 0x18) = lVar4 + (long)(int)(iVar12 * uVar8) * 8;
        }
        *(undefined8 *)(lVar16 + 0x24) = 0;
        uVar8 = uVar8 + 1;
        iVar12 = *(int *)(param_1 + 0x28);
      } while ((int)uVar8 < iVar12);
    }
  }
  return 1;
}

