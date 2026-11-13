
void FUN_0141d4c0(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined *local_88;
  long lStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar1 = (uint *)(param_1 + 0xb);
  if (param_1[0xc] != 0) {
    uVar13 = *(uint *)(param_1 + 0xf);
    if (*(int *)((long)param_1 + 0x5c) < (int)uVar13) {
      return;
    }
    plVar5 = (long *)param_1[9];
    if (plVar5 != (long *)0x0) {
      do {
        (**(code **)(*plVar5 + 0x40))();
        plVar5 = (long *)param_1[9];
      } while (plVar5 != (long *)0x0);
      uVar13 = *(uint *)(param_1 + 0xf);
    }
    uVar6 = (**(code **)(*param_1 + 0x60))(param_1,0);
    puVar4 = PTR_PTR_04bb2238;
    uVar9 = *(uint *)(param_1 + 0xb);
    iVar10 = uVar13 - uVar9;
    if ((int)uVar13 < (int)uVar9) {
      if (uVar13 < uVar9 || iVar10 == 0) {
        lVar14 = (long)(int)uVar13;
        do {
          plVar5 = *(long **)(param_1[0xc] + lVar14 * 8);
          (**(code **)*plVar5)(plVar5);
          lVar14 = lVar14 + 1;
          *plVar5 = param_1[0xd];
          param_1[0xd] = (long)plVar5;
        } while (lVar14 < (int)param_1[0xb]);
        *puVar1 = uVar13;
        uVar9 = uVar13;
      }
    }
    else {
      local_38 = uVar6;
      if (iVar10 != 0 && (int)uVar9 <= (int)uVar13) {
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        do {
          lStack_80 = param_1[5];
          local_58 = (undefined4)param_1[8];
          uStack_70 = *(undefined8 *)(puVar4 + 8);
          local_88 = puVar2;
          local_78 = puVar2;
          local_68 = puVar2;
          uStack_60 = uStack_70;
          lVar14 = FUN_0141cd60(puVar1,&local_88,&local_38);
          iVar10 = iVar10 + -1;
          *(uint *)(lVar14 + 0x20) = *(uint *)(lVar14 + 0x20) & 0xfffffffc;
        } while (iVar10 != 0);
        uVar9 = *puVar1;
      }
    }
    if ((int)uVar9 < 1) {
      return;
    }
    uVar12 = 0;
    do {
      plVar5 = *(long **)(param_1[0xc] + uVar12 * 8);
      (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 4);
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
    return;
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar11 = *(long **)(lVar14 + 0xa8);
  plVar5 = (long *)param_1[9];
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[9];
  }
  uVar13 = *(uint *)(param_1 + 0xf);
  if ((int)uVar13 < 2) {
    uVar13 = 1;
  }
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    pvVar8 = malloc((ulong)uVar13 * 0x98);
  }
  else {
    if (plVar11 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar3 = (undefined8 *)(lVar14 + 8);
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar11 = (long *)*puVar3;
      if (plVar11 == (long *)0x0) goto LAB_0141d754;
    }
    pvVar8 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,(ulong)uVar13 * 0x98,8);
  }
  if (pvVar8 != (void *)0x0) {
    uVar9 = uVar13 - 1;
    param_1[0xd] = (long)pvVar8;
    if (1 < uVar13) {
      if (uVar9 == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        plVar5 = (long *)((long)pvVar8 + 0x90);
        do {
          uVar12 = uVar12 + 2;
          plVar5[-0x12] = (long)plVar5;
          *plVar5 = (long)(plVar5 + 0x12);
          plVar5 = plVar5 + 0x24;
        } while (((ulong)uVar9 & 0xfffffffe) != uVar12);
      }
      if ((uVar9 & 1) != 0) {
        plVar5 = (long *)((long)pvVar8 + uVar12 * 0x90);
        *plVar5 = (long)(plVar5 + 0x12);
      }
    }
    *(undefined8 *)((long)pvVar8 + (long)(int)(uVar9 * 0x12) * 8) = 0;
    param_1[0xe] = (long)pvVar8;
    pvVar8 = (void *)((long)pvVar8 + (ulong)uVar13 * 0x90);
    if (pvVar8 != (void *)0x0) {
      param_1[0xc] = (long)pvVar8;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar13;
    }
  }
LAB_0141d754:
  lVar14 = param_1[0xf];
  local_38 = (**(code **)(*param_1 + 0x60))(param_1,0);
  puVar4 = PTR_PTR_04bb2238;
  uVar13 = *(uint *)(param_1 + 0xb);
  iVar10 = (int)lVar14 - uVar13;
  if (iVar10 != 0 && (int)uVar13 <= (int)lVar14) {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      lStack_80 = param_1[5];
      local_58 = (undefined4)param_1[8];
      uStack_70 = *(undefined8 *)(puVar4 + 8);
      local_88 = puVar2;
      local_78 = puVar2;
      local_68 = puVar2;
      uStack_60 = uStack_70;
      lVar14 = FUN_0141cd60(puVar1,&local_88,&local_38);
      iVar10 = iVar10 + -1;
      *(uint *)(lVar14 + 0x20) = *(uint *)(lVar14 + 0x20) & 0xfffffffc;
    } while (iVar10 != 0);
    uVar13 = *puVar1;
  }
  if (0 < (int)uVar13) {
    uVar12 = 0;
    do {
      plVar5 = *(long **)(param_1[0xc] + uVar12 * 8);
      (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 4);
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
  }
  return;
}

