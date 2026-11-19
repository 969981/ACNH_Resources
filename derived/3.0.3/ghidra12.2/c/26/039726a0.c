
void FUN_039726a0(uint *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  puVar4 = PTR_DAT_04bd0f28;
  puVar3 = PTR_DAT_04bb2698;
  uVar10 = *(uint *)PTR_DAT_04bd0f28;
  uVar14 = (ulong)uVar10;
  if ((int)uVar10 < 1) {
LAB_03972854:
    uVar14 = (ulong)param_1[4];
    if ((int)param_1[4] < 1) goto LAB_0397288c;
  }
  else {
    uVar13 = uVar14 << 4 | 8;
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar7 = malloc(uVar13);
joined_r0x03972754:
      if (puVar7 != (ulong *)0x0) {
        puVar8 = puVar7 + 1;
        *puVar7 = uVar14;
        uVar13 = uVar14 & 3;
        puVar7 = puVar8;
        if ((uVar10 & 3) != 0) {
          puVar12 = puVar8;
          do {
            puVar7 = puVar12 + 2;
            *puVar12 = (ulong)&PTR_LAB_048f9770;
            puVar12[1] = (ulong)&DAT_0407ebb1;
            uVar13 = uVar13 - 1;
            puVar12 = puVar7;
          } while (uVar13 != 0);
        }
        if (2 < (uVar14 - 1 & 0xfffffffffffffff)) {
          do {
            *puVar7 = (ulong)&PTR_LAB_048f9770;
            puVar7[1] = (ulong)&DAT_0407ebb1;
            puVar7[2] = (ulong)&PTR_LAB_048f9770;
            puVar7[3] = (ulong)&DAT_0407ebb1;
            puVar7[4] = (ulong)&PTR_LAB_048f9770;
            puVar7[5] = (ulong)&DAT_0407ebb1;
            puVar7[6] = (ulong)&PTR_LAB_048f9770;
            puVar7[7] = (ulong)&DAT_0407ebb1;
            puVar7 = puVar7 + 8;
          } while (puVar7 != puVar8 + uVar14 * 2);
        }
        *param_1 = uVar10;
        *(ulong **)(param_1 + 2) = puVar8;
      }
    }
    else {
      plVar6 = param_3;
      if (param_3 != (long *)0x0) {
LAB_03972728:
        puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar13,8);
        goto joined_r0x03972754;
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar15 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_03972728;
    }
    uVar10 = *(uint *)puVar4;
    uVar14 = (ulong)uVar10;
    if ((int)uVar10 < 1) goto LAB_03972854;
    lVar15 = *(long *)puVar3;
    if (lVar15 == 0) {
      pvVar9 = malloc(uVar14 << 2);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar15 + 8);
        if (lVar5 != 0) {
          puVar2 = (undefined8 *)(lVar5 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) goto LAB_03972854;
      }
      pvVar9 = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar14 << 2,8);
    }
    if (pvVar9 == (void *)0x0) goto LAB_03972854;
    param_1[4] = uVar10;
    *(void **)(param_1 + 6) = pvVar9;
  }
  uVar10 = 0;
  do {
    uVar11 = uVar10 + 1;
    if ((uint)uVar14 <= uVar10) {
      uVar10 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 6) + (long)(int)uVar10 * 4) = 0;
    uVar14 = (ulong)param_1[4];
    uVar10 = uVar11;
  } while ((int)uVar11 < (int)param_1[4]);
LAB_0397288c:
  uVar10 = *param_1;
  if (0 < (int)uVar10) {
    uVar11 = 0;
    do {
      uVar1 = uVar11;
      if (uVar10 <= uVar11) {
        uVar1 = 0;
      }
      uVar11 = uVar11 + 1;
      *(undefined1 **)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x10 + 8) = &DAT_0406a414;
      uVar10 = *param_1;
    } while ((int)uVar11 < (int)uVar10);
  }
  *(undefined8 *)(param_1 + 10) = param_2;
  return;
}

