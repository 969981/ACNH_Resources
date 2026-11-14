
void FUN_01649170(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  undefined *local_88;
  long lStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar4 = PTR_DAT_04bb3350;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  plVar10 = *(long **)(lVar5 + 0xa8);
  plVar6 = (long *)param_1[9];
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_1[9];
  }
  uVar9 = *(uint *)(param_1 + 0xf);
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar6 = malloc((ulong)uVar9 * 0x10f38);
  }
  else {
    if (plVar10 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      puVar2 = (undefined8 *)(lVar5 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar10 = (long *)*puVar2;
      if (plVar10 == (long *)0x0) goto LAB_016492d8;
    }
    plVar6 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,(ulong)uVar9 * 0x10f38,8);
  }
  if (plVar6 != (long *)0x0) {
    uVar3 = uVar9 - 1;
    param_1[0xd] = (long)plVar6;
    if (1 < uVar9) {
      if (uVar3 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        plVar10 = plVar6;
        do {
          *plVar10 = (long)(plVar10 + 0x21e6);
          uVar11 = uVar11 + 2;
          plVar10[0x21e6] = (long)(plVar10 + 0x43cc);
          plVar10 = plVar10 + 0x43cc;
        } while (((ulong)uVar3 & 0xfffffffe) != uVar11);
      }
      if ((uVar3 & 1) != 0) {
        plVar6[uVar11 * 0x21e6] = (long)(plVar6 + uVar11 * 0x21e6 + 0x21e6);
      }
    }
    plVar6[(int)(uVar3 * 0x21e6)] = 0;
    param_1[0xe] = (long)plVar6;
    if (plVar6 + (ulong)uVar9 * 0x21e6 != (long *)0x0) {
      param_1[0xc] = (long)(plVar6 + (ulong)uVar9 * 0x21e6);
      *(undefined4 *)(param_1 + 0xb) = 0;
      *(uint *)((long)param_1 + 0x5c) = uVar9;
    }
  }
LAB_016492d8:
  lVar5 = param_1[0xf];
  uVar8 = (**(code **)(*param_1 + 0x60))(param_1,0);
  puVar4 = PTR_PTR_04bb2238;
  uVar9 = *(uint *)(param_1 + 0xb);
  iVar12 = (int)lVar5 - uVar9;
  if (iVar12 != 0 && (int)uVar9 <= (int)lVar5) {
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
      FUN_01646578(plVar6,&local_88,uVar8);
      *plVar6 = (long)&PTR_LAB_049b60e8;
      if ((int)param_1[0xb] < *(int *)((long)param_1 + 0x5c)) {
        *(long **)(param_1[0xc] + (long)(int)param_1[0xb] * 8) = plVar6;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
      }
      iVar12 = iVar12 + -1;
      *(uint *)(plVar6 + 4) = *(uint *)(plVar6 + 4) & 0xfffffffc;
    } while (iVar12 != 0);
    uVar9 = *(uint *)(param_1 + 0xb);
  }
  if (0 < (int)uVar9) {
    uVar11 = 0;
    do {
      plVar6 = *(long **)(param_1[0xc] + uVar11 * 8);
      (**(code **)(*plVar6 + 0x38))(plVar6,param_1 + 4);
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  return;
}

