
void FUN_0160a2d0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  undefined **local_88;
  long lStack_80;
  undefined **local_78;
  undefined *puStack_70;
  undefined **local_68;
  undefined *puStack_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar10 = *(long **)(lVar4 + 0xa8);
  plVar5 = (long *)param_1[9];
  lVar4 = DAT_05ae7600;
  while (DAT_05ae7600 = lVar4, plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    lVar4 = DAT_05ae7600;
    plVar5 = (long *)param_1[9];
  }
  uVar9 = *(uint *)(param_1 + 0xf);
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  if (lVar4 == 0) {
    pvVar7 = malloc((ulong)uVar9 * 600);
  }
  else {
    if (plVar10 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      puVar1 = (undefined8 *)(lVar4 + 8);
      if (lVar6 != 0) {
        puVar1 = (undefined8 *)(lVar6 + 0xa8);
      }
      plVar10 = (long *)*puVar1;
      if (plVar10 == (long *)0x0) goto LAB_0160a428;
    }
    pvVar7 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,(ulong)uVar9 * 600,8);
  }
  if (pvVar7 != (void *)0x0) {
    uVar2 = uVar9 - 1;
    param_1[0xd] = (long)pvVar7;
    if (1 < uVar9) {
      if (uVar2 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        plVar5 = (long *)((long)pvVar7 + 0x250);
        do {
          uVar11 = uVar11 + 2;
          plVar5[-0x4a] = (long)plVar5;
          *plVar5 = (long)(plVar5 + 0x4a);
          plVar5 = plVar5 + 0x94;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar11);
      }
      if ((uVar2 & 1) != 0) {
        plVar5 = (long *)((long)pvVar7 + uVar11 * 0x250);
        *plVar5 = (long)(plVar5 + 0x4a);
      }
    }
    *(undefined8 *)((long)pvVar7 + (long)(int)(uVar2 * 0x4a) * 8) = 0;
    param_1[0xe] = (long)pvVar7;
    pvVar7 = (void *)((long)pvVar7 + (ulong)uVar9 * 0x250);
    if (pvVar7 != (void *)0x0) {
      param_1[0xc] = (long)pvVar7;
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar9;
    }
  }
LAB_0160a428:
  lVar4 = param_1[0xf];
  uVar8 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  uVar9 = *(uint *)(param_1 + 0xb);
  iVar12 = (int)lVar4 - uVar9;
  if (iVar12 != 0 && (int)uVar9 <= (int)lVar4) {
    do {
      lStack_80 = param_1[5];
      local_88 = &PTR_LAB_048f9770;
      local_58 = (undefined4)param_1[8];
      plVar5 = (long *)param_1[0xd];
      local_78 = &PTR_LAB_048f9770;
      puStack_70 = PTR_DAT_04c4b988;
      local_68 = &PTR_LAB_048f9770;
      puStack_60 = PTR_DAT_04c4b988;
      if (plVar5 != (long *)0x0) {
        param_1[0xd] = *plVar5;
      }
      FUN_01609e50(plVar5,&local_88,&local_78,uVar8);
      *plVar5 = (long)&PTR_LAB_049b2eb0;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar5;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      }
      iVar12 = iVar12 + -1;
      *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
    } while (iVar12 != 0);
    uVar9 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar9) {
    uVar11 = 0;
    do {
      plVar5 = *(long **)(param_1[0xc] + uVar11 * 8);
      (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 4);
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  return;
}

