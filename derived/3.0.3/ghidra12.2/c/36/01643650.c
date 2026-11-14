
void FUN_01643650(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  undefined **local_88;
  long lStack_80;
  undefined **local_78;
  undefined *puStack_70;
  undefined **local_68;
  undefined *puStack_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar9 = *(long **)(lVar4 + 0xa8);
  plVar5 = (long *)param_1[9];
  lVar4 = DAT_05ae7600;
  while (DAT_05ae7600 = lVar4, plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    lVar4 = DAT_05ae7600;
    plVar5 = (long *)param_1[9];
  }
  uVar8 = *(uint *)(param_1 + 0xf);
  if ((int)uVar8 < 2) {
    uVar8 = 1;
  }
  if (lVar4 == 0) {
    plVar5 = malloc((ulong)uVar8 * 0x1b38);
  }
  else {
    if (plVar9 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      puVar1 = (undefined8 *)(lVar4 + 8);
      if (lVar6 != 0) {
        puVar1 = (undefined8 *)(lVar6 + 0xa8);
      }
      plVar9 = (long *)*puVar1;
      if (plVar9 == (long *)0x0) goto LAB_016437a8;
    }
    plVar5 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,(ulong)uVar8 * 0x1b38,8);
  }
  if (plVar5 != (long *)0x0) {
    uVar2 = uVar8 - 1;
    param_1[0xd] = (long)plVar5;
    if (1 < uVar8) {
      if (uVar2 == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        plVar9 = plVar5;
        do {
          uVar10 = uVar10 + 2;
          *plVar9 = (long)(plVar9 + 0x366);
          plVar9[0x366] = (long)(plVar9 + 0x6cc);
          plVar9 = plVar9 + 0x6cc;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar10);
      }
      if ((uVar2 & 1) != 0) {
        plVar5[uVar10 * 0x366] = (long)(plVar5 + uVar10 * 0x366 + 0x366);
      }
    }
    plVar5[(int)(uVar2 * 0x366)] = 0;
    param_1[0xe] = (long)plVar5;
    if (plVar5 + (ulong)uVar8 * 0x366 != (long *)0x0) {
      param_1[0xc] = (long)(plVar5 + (ulong)uVar8 * 0x366);
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar8;
    }
  }
LAB_016437a8:
  lVar4 = param_1[0xf];
  uVar7 = (**(code **)(*param_1 + 0x60))(param_1,0);
  uVar8 = *(uint *)(param_1 + 0xb);
  iVar11 = (int)lVar4 - uVar8;
  if (iVar11 != 0 && (int)uVar8 <= (int)lVar4) {
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
      FUN_016014b0(plVar5,&local_88,&local_78,uVar7);
      *plVar5 = (long)&PTR_FUN_049b5650;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar5;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      }
      iVar11 = iVar11 + -1;
      *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
    } while (iVar11 != 0);
    uVar8 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar8) {
    uVar10 = 0;
    do {
      plVar5 = *(long **)(param_1[0xc] + uVar10 * 8);
      (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 4);
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
  return;
}

