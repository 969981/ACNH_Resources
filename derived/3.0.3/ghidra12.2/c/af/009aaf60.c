
void FUN_009aaf60(long *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  uint uVar11;
  long *plVar12;
  size_t __size;
  ulong uVar13;
  int iVar14;
  undefined *local_88;
  long lStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar5 = PTR_DAT_04bb3350;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar12 = *(long **)(lVar6 + 0xa8);
  plVar7 = (long *)param_1[9];
  while (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x40))();
    plVar7 = (long *)param_1[9];
  }
  uVar11 = *(uint *)(param_1 + 0xf);
  if ((int)uVar11 < 2) {
    uVar11 = 1;
  }
  __size = (ulong)uVar11 * 0x108;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar9 = malloc(__size);
  }
  else {
    if (plVar12 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      puVar3 = (undefined8 *)(lVar6 + 8);
      if (lVar8 != 0) {
        puVar3 = (undefined8 *)(lVar8 + 0xa8);
      }
      plVar12 = (long *)*puVar3;
      if (plVar12 == (long *)0x0) goto LAB_009ab0a8;
    }
    pvVar9 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,__size,8);
  }
  if (pvVar9 != (void *)0x0) {
    uVar4 = uVar11 - 1;
    param_1[0xd] = (long)pvVar9;
    if (1 < uVar11) {
      if (uVar4 == 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        plVar7 = (long *)((long)pvVar9 + 0x100);
        do {
          uVar13 = uVar13 + 2;
          plVar7[-0x20] = (long)plVar7;
          *plVar7 = (long)(plVar7 + 0x20);
          plVar7 = plVar7 + 0x40;
        } while (((ulong)uVar4 & 0xfffffffe) != uVar13);
      }
      if ((uVar4 & 1) != 0) {
        plVar7 = (long *)((long)pvVar9 + uVar13 * 0x100);
        *plVar7 = (long)(plVar7 + 0x20);
      }
    }
    *(undefined8 *)((long)pvVar9 + (long)(int)(uVar4 * 0x20) * 8) = 0;
    pvVar2 = (void *)((long)pvVar9 + (ulong)uVar11 * 0x100);
    param_1[0xe] = (long)pvVar9;
    if (pvVar2 != (void *)0x0) {
      param_1[0xc] = (long)pvVar2;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar11;
    }
  }
LAB_009ab0a8:
  lVar6 = param_1[0xf];
  uVar10 = (**(code **)(*param_1 + 0x60))(param_1,0);
  puVar5 = PTR_PTR_04bb2238;
  uVar11 = *(uint *)(param_1 + 0xb);
  iVar14 = (int)lVar6 - uVar11;
  if (iVar14 != 0 && (int)uVar11 <= (int)lVar6) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lStack_80 = param_1[5];
      uStack_70 = *(undefined8 *)(puVar5 + 8);
      local_58 = (undefined4)param_1[8];
      plVar7 = (long *)param_1[0xd];
      if (plVar7 != (long *)0x0) {
        param_1[0xd] = *plVar7;
      }
      local_88 = puVar1;
      local_78 = puVar1;
      local_68 = puVar1;
      uStack_60 = uStack_70;
      FUN_0099c14c(plVar7,&local_88,uVar10);
      *plVar7 = (long)&PTR_FUN_0492c4e8;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar7;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      }
      iVar14 = iVar14 + -1;
      *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffffc;
    } while (iVar14 != 0);
    uVar11 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar11) {
    uVar13 = 0;
    do {
      plVar7 = *(long **)(param_1[0xc] + uVar13 * 8);
      (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 4);
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
  }
  return;
}

