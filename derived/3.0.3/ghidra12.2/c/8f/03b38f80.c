
void FUN_03b38f80(byte *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *__dest;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  ulong *puVar11;
  ulong *puVar12;
  void *pvVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 *__src;
  
  if (DAT_05aebc00 == '\0') {
    return;
  }
  lVar14 = *(long *)PTR_DAT_04bd1e70;
  if (lVar14 == 0) {
    return;
  }
  bVar6 = *(byte *)(lVar14 + 0x1f0);
  *param_1 = bVar6 ^ 1;
  if (bVar6 != 0) {
    return;
  }
  if (*(long *)(lVar14 + 0x178) == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return;
  }
  uVar5 = *(uint *)(*(long *)(lVar14 + 0x178) + 0x3c);
  *(uint *)(param_1 + 4) = uVar5;
  plVar15 = (long *)PTR_DAT_04bb2698;
  if ((int)uVar5 < 1) {
    return;
  }
  uVar16 = (ulong)uVar5 * 0x180 | 8;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    puVar11 = malloc(uVar16);
  }
  else {
    plVar10 = param_2;
    if (param_2 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_03b391c8;
    }
    puVar11 = (ulong *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar16,8);
  }
  if (puVar11 != (ulong *)0x0) {
    puVar12 = puVar11 + 1;
    *puVar11 = (ulong)uVar5;
    puVar8 = PTR_PTR_04bb2238;
    puVar1 = PTR_DAT_04bb2f70 + 0x10;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    puVar11 = puVar12;
    do {
      __dest = (undefined4 *)((long)puVar11 + 0x1c);
      *(undefined1 *)((long)puVar11 + 0x5b) = 0;
      *(undefined4 *)puVar11 = 0xffff;
      *(undefined4 *)(puVar11 + 3) = 0x40;
      lVar14 = *(long *)puVar8;
      puVar11[1] = (ulong)puVar1;
      puVar11[2] = (ulong)__dest;
      (**(code **)(lVar14 + 0x18))(puVar8);
      __src = *(undefined4 **)(puVar8 + 8);
      if (__dest != __src) {
        (**(code **)(*(long *)puVar8 + 0x18))(puVar8);
        lVar14 = 0;
        do {
          if (*(char *)(*(long *)(puVar8 + 8) + lVar14) == '\0') goto LAB_03b390d4;
          lVar9 = *(long *)(puVar8 + 8) + lVar14;
          if (*(char *)(lVar9 + 1) == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_03b390d4;
          }
          if (*(char *)(lVar9 + 2) == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_03b390d4;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_03b390d4:
        iVar3 = (int)lVar14;
        if ((int)puVar11[3] <= (int)lVar14) {
          iVar3 = (int)puVar11[3] + -1;
        }
        memcpy(__dest,__src,(long)iVar3);
        *(undefined1 *)((long)__dest + (long)iVar3) = 0;
      }
      puVar11[1] = (ulong)puVar2;
      *(undefined4 *)(puVar11 + 0xc) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0xf) = 0;
      puVar11[0xd] = (ulong)((long)puVar11 + 0x7c);
      puVar11[0xe] = 0x10;
      puVar11 = puVar11 + 0x30;
    } while (puVar11 != puVar12 + (ulong)uVar5 * 0x30);
    *(uint *)(param_1 + 0x188) = uVar5;
    *(ulong **)(param_1 + 400) = puVar12;
    plVar15 = (long *)PTR_DAT_04bb2698;
  }
LAB_03b391c8:
  uVar5 = *(uint *)(param_1 + 4);
  uVar7 = uVar5 - 1;
  if (0 < (int)uVar5) {
    lVar14 = *plVar15;
    if (lVar14 == 0) {
      pvVar13 = malloc((long)(int)uVar5 * 0x88);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar4 = (undefined8 *)(lVar14 + 8);
        if (lVar9 != 0) {
          puVar4 = (undefined8 *)(lVar9 + 0xa8);
        }
        param_2 = (long *)*puVar4;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      pvVar13 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(long)(int)uVar5 * 0x88,8);
    }
    if (pvVar13 != (void *)0x0) {
      *(uint *)(param_1 + 0x1b4) = uVar5;
      *(void **)(param_1 + 0x1a0) = pvVar13;
      if (1 < uVar5) {
        if (uVar7 == 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          plVar15 = (long *)((long)pvVar13 + 0x88);
          do {
            uVar16 = uVar16 + 2;
            plVar15[-0x11] = (long)plVar15;
            *plVar15 = (long)(plVar15 + 0x11);
            plVar15 = plVar15 + 0x22;
          } while (((ulong)uVar7 & 0xfffffffe) != uVar16);
        }
        if ((uVar7 & 1) != 0) {
          plVar15 = (long *)((long)pvVar13 + uVar16 * 0x88);
          *plVar15 = (long)(plVar15 + 0x11);
        }
      }
      *(undefined8 *)((long)pvVar13 + (long)(int)(uVar7 * 0x11) * 8) = 0;
      *(void **)(param_1 + 0x1a8) = pvVar13;
    }
  }
  return;
}

