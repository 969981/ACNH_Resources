
void FUN_01391a80(long param_1,long *param_2,uint param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  void *pvVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  
  puVar4 = (uint *)(param_1 + 0x20) + (ulong)param_3 * 4;
  if (0x1d < param_3) {
    puVar4 = (uint *)(param_1 + 0x20);
  }
  if ((int)param_4 < 1) {
    return;
  }
  uVar15 = (ulong)param_4;
  uVar13 = (uVar15 + (ulong)param_4 * 2) * 0x10 | 8;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    puVar8 = malloc(uVar13);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar16 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto joined_r0x01391ce8;
    }
    puVar8 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar13,8);
  }
  if (puVar8 != (ulong *)0x0) {
    uVar13 = uVar15 * 0x30 - 0x30;
    puVar11 = puVar8 + 1;
    *puVar8 = uVar15;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar13;
    puVar12 = puVar11;
    if ((SUB164(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 5 & 1) == 0) {
      *(undefined4 *)(puVar8 + 3) = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      *(undefined4 *)(puVar8 + 6) = 0;
      puVar8[1] = (ulong)&PTR_LAB_04993b30;
      puVar8[2] = 0;
      puVar12 = puVar8 + 7;
    }
    if (0x2f < uVar13) {
      puVar1 = PTR_DAT_04bbc600 + 0x10;
      do {
        *puVar12 = (ulong)puVar1;
        puVar12[1] = 0;
        *(undefined4 *)(puVar12 + 2) = 0;
        *(undefined4 *)(puVar12 + 5) = 0;
        *(undefined4 *)(puVar12 + 8) = 0;
        *(undefined4 *)(puVar12 + 0xb) = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[6] = (ulong)puVar1;
        puVar12[7] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0;
        puVar12 = puVar12 + 0xc;
      } while (puVar12 != puVar11 + uVar15 * 6);
    }
    *puVar4 = param_4;
    *(ulong **)(puVar4 + 2) = puVar11;
  }
joined_r0x01391ce8:
  if ((int)param_5 < 1) {
    uVar14 = 0;
    do {
      uVar2 = uVar14;
      if (*puVar4 <= uVar14) {
        uVar2 = 0;
      }
      *(uint *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x30 + 8) = param_3;
      uVar2 = uVar14;
      if (*puVar4 <= uVar14) {
        uVar2 = 0;
      }
      *(uint *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x30 + 0xc) = uVar14;
      uVar2 = uVar14;
      if (*puVar4 <= uVar14) {
        uVar2 = 0;
      }
      uVar14 = uVar14 + 1;
      *(undefined4 *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x30 + 0x10) = 0;
    } while (param_4 != uVar14);
  }
  else {
    uVar14 = 0;
    do {
      uVar2 = uVar14;
      if (*puVar4 <= uVar14) {
        uVar2 = 0;
      }
      *(uint *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x30 + 8) = param_3;
      uVar2 = uVar14;
      if (*puVar4 <= uVar14) {
        uVar2 = 0;
      }
      *(uint *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x30 + 0xc) = uVar14;
      uVar2 = uVar14;
      if (*puVar4 <= uVar14) {
        uVar2 = 0;
      }
      *(undefined4 *)(*(long *)(puVar4 + 2) + (ulong)uVar2 * 0x30 + 0x10) = 0;
      uVar2 = *puVar4;
      lVar16 = *(long *)(puVar4 + 2);
      lVar6 = *(long *)PTR_DAT_04bb2698;
      if (lVar6 == 0) {
        pvVar10 = malloc((ulong)param_5 * 0x18);
joined_r0x01391c1c:
        if (pvVar10 != (void *)0x0) {
          uVar3 = uVar14;
          if (uVar2 <= uVar14) {
            uVar3 = 0;
          }
          lVar16 = lVar16 + (ulong)uVar3 * 0x30;
          *(void **)(lVar16 + 0x18) = pvVar10;
          *(undefined8 *)(lVar16 + 0x24) = 0;
          *(uint *)(lVar16 + 0x20) = param_5;
        }
      }
      else {
        plVar7 = param_2;
        if (param_2 != (long *)0x0) {
LAB_01391bf8:
          pvVar10 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(ulong)param_5 * 0x18,8);
          goto joined_r0x01391c1c;
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar6 + 8);
        if (lVar9 != 0) {
          plVar7 = (long *)(lVar9 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 != (long *)0x0) goto LAB_01391bf8;
      }
      uVar14 = uVar14 + 1;
    } while (param_4 != uVar14);
  }
  return;
}

