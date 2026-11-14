
void FUN_0164f2f0(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  size_t __size;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  undefined *local_88;
  long lStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar4 = PTR_DAT_04bb3350;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar11 = *(long **)(lVar5 + 0xa8);
  plVar6 = (long *)param_1[9];
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_1[9];
  }
  uVar10 = *(uint *)(param_1 + 0xf);
  if ((int)uVar10 < 2) {
    uVar10 = 1;
  }
  __size = (ulong)uVar10 * 0x3f8;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar8 = malloc(__size);
  }
  else {
    if (plVar11 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar2 = (undefined8 *)(lVar5 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar11 = (long *)*puVar2;
      if (plVar11 == (long *)0x0) goto LAB_0164f448;
    }
    pvVar8 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,__size,8);
  }
  if (pvVar8 != (void *)0x0) {
    uVar3 = uVar10 - 1;
    param_1[0xd] = (long)pvVar8;
    if (1 < uVar10) {
      if (uVar3 == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        plVar6 = (long *)((long)pvVar8 + 0x3f0);
        do {
          uVar12 = uVar12 + 2;
          plVar6[-0x7e] = (long)plVar6;
          *plVar6 = (long)(plVar6 + 0x7e);
          plVar6 = plVar6 + 0xfc;
        } while (((ulong)uVar3 & 0xfffffffe) != uVar12);
      }
      if ((uVar3 & 1) != 0) {
        plVar6 = (long *)((long)pvVar8 + uVar12 * 0x3f0);
        *plVar6 = (long)(plVar6 + 0x7e);
      }
    }
    *(undefined8 *)((long)pvVar8 + (long)(int)(uVar3 * 0x7e) * 8) = 0;
    param_1[0xe] = (long)pvVar8;
    pvVar8 = (void *)((long)pvVar8 + (ulong)uVar10 * 0x3f0);
    if (pvVar8 != (void *)0x0) {
      param_1[0xc] = (long)pvVar8;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar10;
    }
  }
LAB_0164f448:
  lVar5 = param_1[0xf];
  uVar9 = (**(code **)(*param_1 + 0x60))(param_1,0);
  puVar4 = PTR_PTR_04bb2238;
  uVar10 = *(uint *)(param_1 + 0xb);
  iVar13 = (int)lVar5 - uVar10;
  if (iVar13 != 0 && (int)uVar10 <= (int)lVar5) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lStack_80 = param_1[5];
      uStack_70 = *(undefined8 *)(puVar4 + 8);
      local_58 = (undefined4)param_1[8];
      plVar6 = (long *)param_1[0xd];
      if (plVar6 != (long *)0x0) {
        param_1[0xd] = *plVar6;
      }
      local_88 = puVar1;
      local_78 = puVar1;
      local_68 = puVar1;
      uStack_60 = uStack_70;
      FUN_0164cd88(plVar6,&local_88,uVar9);
      *plVar6 = (long)&PTR_FUN_049b7800;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar6;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      }
      iVar13 = iVar13 + -1;
      *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
    } while (iVar13 != 0);
    uVar10 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar10) {
    uVar12 = 0;
    do {
      plVar6 = *(long **)(param_1[0xc] + uVar12 * 8);
      (**(code **)(*plVar6 + 0x38))(plVar6,param_1 + 4);
      uVar12 = uVar12 + 1;
    } while (uVar10 != uVar12);
  }
  return;
}

