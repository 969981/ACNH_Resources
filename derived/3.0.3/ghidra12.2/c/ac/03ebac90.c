
void FUN_03ebac90(long param_1,ulong param_2,undefined4 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  size_t __size;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  uVar9 = (uint)param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 0x1c) = uVar9;
  puVar2 = PTR_DAT_04bb2698;
  if ((int)uVar9 < 1) {
LAB_03ebad38:
    uVar10 = *(uint *)(param_1 + 0x28);
    if (uVar10 == 0) goto LAB_03ebad78;
    pvVar6 = *(void **)(param_1 + 0x30);
  }
  else {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    __size = (param_2 & 0xffffffff) << 6;
    if (lVar14 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      plVar5 = param_4;
      if (param_4 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar14 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03ebad38;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (pvVar6 == (void *)0x0) goto LAB_03ebad38;
    *(uint *)(param_1 + 0x28) = uVar9;
    *(void **)(param_1 + 0x30) = pvVar6;
    uVar10 = uVar9;
  }
  uVar11 = 0;
  do {
    uVar13 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar3 = (undefined8 *)((long)pvVar6 + ((long)(uVar13 << 0x20) >> 0x1a));
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
  } while (uVar10 != uVar11);
LAB_03ebad78:
  if (0 < (int)uVar9) {
    lVar14 = *(long *)puVar2;
    uVar15 = param_2 & 0xffffffff;
    uVar13 = uVar15 << 4 | 8;
    if (lVar14 == 0) {
      puVar7 = malloc(uVar13);
    }
    else {
      if (param_4 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar3 = (undefined8 *)(lVar14 + 8);
        if (lVar4 != 0) {
          puVar3 = (undefined8 *)(lVar4 + 0xa8);
        }
        param_4 = (long *)*puVar3;
        if (param_4 == (long *)0x0) {
          return;
        }
      }
      puVar7 = (ulong *)(**(code **)(*param_4 + 0x30))(param_4,uVar13,8);
    }
    if (puVar7 != (ulong *)0x0) {
      param_2 = param_2 & 3;
      puVar8 = puVar7 + 1;
      *puVar7 = uVar15;
      puVar2 = PTR_DAT_04bb2020;
      puVar7 = puVar8;
      if (param_2 != 0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        puVar12 = puVar8;
        do {
          puVar7 = puVar12 + 2;
          *puVar12 = (ulong)puVar1;
          puVar12[1] = (ulong)&DAT_0419b684;
          param_2 = param_2 - 1;
          puVar12 = puVar7;
        } while (param_2 != 0);
      }
      if (2 < (uVar15 - 1 & 0xfffffffffffffff)) {
        puVar2 = puVar2 + 0x10;
        do {
          *puVar7 = (ulong)puVar2;
          puVar7[1] = (ulong)&DAT_0419b684;
          puVar7[2] = (ulong)puVar2;
          puVar7[3] = (ulong)&DAT_0419b684;
          puVar7[4] = (ulong)puVar2;
          puVar7[5] = (ulong)&DAT_0419b684;
          puVar7[6] = (ulong)puVar2;
          puVar7[7] = (ulong)&DAT_0419b684;
          puVar7 = puVar7 + 8;
        } while (puVar7 != puVar8 + uVar15 * 2);
      }
      *(uint *)(param_1 + 0x38) = uVar9;
      *(ulong **)(param_1 + 0x40) = puVar8;
    }
  }
  return;
}

