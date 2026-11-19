
void FUN_03c0a150(uint *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong __size;
  size_t __size_00;
  ulong uVar11;
  long lVar12;
  
  *param_1 = param_2;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  if ((int)param_2 < 1) goto LAB_03c0a300;
  uVar11 = (ulong)param_2;
  __size = (uVar11 + (ulong)param_2 * 4) * 0x10 | 8;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    puVar5 = malloc(__size);
joined_r0x03c0a1ec:
    if (puVar5 != (ulong *)0x0) {
      puVar6 = puVar5 + 1;
      *puVar5 = uVar11;
      puVar5 = puVar6;
      do {
        *puVar5 = 0;
        *(undefined2 *)(puVar5 + 1) = 0;
        *(undefined2 *)((long)puVar5 + 0x24) = 0;
        *(undefined4 *)(puVar5 + 4) = 0x11;
        *(undefined2 *)((long)puVar5 + 0x44) = 0;
        puVar5[2] = (ulong)&DAT_04b7ca30;
        puVar5[3] = (ulong)((long)puVar5 + 0x24);
        puVar5 = puVar5 + 10;
      } while (puVar5 != puVar6 + uVar11 * 10);
      param_1[2] = param_2;
      *(ulong **)(param_1 + 4) = puVar6;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar12 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      puVar5 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
      goto joined_r0x03c0a1ec;
    }
  }
  lVar12 = *(long *)puVar1;
  __size_00 = (size_t)(int)(param_2 << 3);
  if (lVar12 == 0) {
    pvVar7 = malloc(__size_00);
joined_r0x03c0a298:
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 8) = pvVar7;
      param_1[6] = 0;
      param_1[7] = param_2;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar12 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      pvVar7 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size_00,8);
      goto joined_r0x03c0a298;
    }
  }
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar7 = malloc(__size_00);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar12 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_03c0a300;
    pvVar7 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size_00,8);
  }
  if (pvVar7 != (void *)0x0) {
    *(void **)(param_1 + 0xc) = pvVar7;
    param_1[0xb] = param_2;
  }
LAB_03c0a300:
  uVar10 = *param_1;
  param_1[6] = 0;
  param_1[10] = 0;
  if ((0 < (int)uVar10) && (0 < (int)param_1[0xb])) {
    uVar9 = 0;
    uVar8 = 0;
    do {
      if ((int)uVar9 < (int)param_1[0xb]) {
        uVar10 = uVar8;
        if (param_1[2] <= uVar8) {
          uVar10 = 0;
        }
        *(ulong *)(*(long *)(param_1 + 0xc) + (long)(int)uVar9 * 8) =
             *(long *)(param_1 + 4) + (ulong)uVar10 * 0x50;
        uVar10 = *param_1;
        uVar9 = param_1[10] + 1;
        param_1[10] = uVar9;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar10);
  }
  return;
}

