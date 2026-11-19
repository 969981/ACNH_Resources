
void FUN_038906c0(long param_1,uint *param_2)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  size_t __size;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar10 = *param_2;
  uVar11 = (ulong)(uVar10 - 1);
  if ((int)uVar10 < 1) goto LAB_038907fc;
  __size = (ulong)uVar10 << 4;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    pvVar5 = malloc(__size);
joined_r0x0389074c:
    if (pvVar5 != (void *)0x0) {
      *(void **)(param_1 + 0x20) = pvVar5;
      if (uVar10 < 2) {
        uVar11 = 0;
      }
      else {
        uVar6 = uVar11 & 3;
        if (uVar11 - 1 < 3) {
          lVar3 = 0;
        }
        else {
          lVar12 = 0;
          lVar3 = 0;
          do {
            puVar9 = (undefined8 *)((long)pvVar5 + lVar12);
            lVar12 = lVar12 + 0x20;
            lVar3 = lVar3 + 4;
            puVar9[3] = puVar9 + 4;
            puVar9[2] = puVar9 + 3;
            puVar9[1] = puVar9 + 2;
            *puVar9 = puVar9 + 1;
          } while ((uVar11 & 0xfffffffc) * 8 != lVar12);
        }
        if ((uVar10 - 1 & 3) != 0) {
          puVar9 = (void *)((long)pvVar5 + lVar3 * 8);
          do {
            *puVar9 = puVar9 + 1;
            uVar6 = uVar6 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar6 != 0);
        }
      }
      pvVar1 = (void *)((long)pvVar5 + (ulong)uVar10 * 8);
      *(undefined8 *)((long)pvVar5 + uVar11 * 8) = 0;
      *(void **)(param_1 + 0x28) = pvVar5;
      if (pvVar1 != (void *)0x0) {
        *(void **)(param_1 + 0x18) = pvVar1;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(uint *)(param_1 + 0x14) = uVar10;
      }
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar12 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
      goto joined_r0x0389074c;
    }
  }
  uVar10 = *param_2;
LAB_038907fc:
  if (uVar10 != 0) {
    puVar9 = *(undefined8 **)(param_2 + 2);
    do {
      iVar2 = (**(code **)(*(long *)*puVar9 + 0x28))();
      if (*(int *)(param_1 + 0x10) != 0) {
        puVar7 = *(undefined8 **)(param_1 + 0x18);
        lVar12 = (long)*(int *)(param_1 + 0x10) << 3;
        do {
          if (iVar2 == *(int *)*puVar7) goto LAB_03890814;
          puVar7 = puVar7 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
      piVar8 = *(int **)(param_1 + 0x20);
      if (piVar8 != (int *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)piVar8;
      }
      *piVar8 = 0;
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
        *(int **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = piVar8;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      *piVar8 = iVar2;
LAB_03890814:
      puVar9 = puVar9 + 1;
    } while (puVar9 != (undefined8 *)(*(long *)(param_2 + 2) + (long)(int)*param_2 * 8));
  }
  return;
}

