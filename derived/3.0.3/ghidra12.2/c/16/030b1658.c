
void FUN_030b1658(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int local_78;
  undefined4 uStack_74;
  long local_70;
  long *plStack_68;
  
  puVar3 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
  puVar3 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar6 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
    param_1[1] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar12 = (long *)(lVar6 + 0x70);
      lVar11 = *plVar12;
      plVar7 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
      *plVar12 = (long)plVar7;
      *plVar7 = lVar11;
      plVar7[1] = (long)plVar12;
      if (lVar11 != 0) {
        *(long **)(lVar11 + 8) = plVar7;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  *(undefined2 *)(param_1 + 6) = 0;
  *param_1 = (long)&PTR_FUN_04afc160;
  param_1[4] = (long)&PTR_LAB_04afc1e0;
  param_1[5] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = (long)"agl::TextureData";
  param_1[0x2c] = 0;
  param_1[0x2d] = (long)"agl::TextureData";
  param_1[0x35] = 0x100000000;
  uVar5 = DAT_04c4a02c;
  uVar2 = DAT_04c4a028;
  param_1[7] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x10000;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x10000;
  *(undefined8 *)((long)param_1 + 0x19d) = 0;
  param_1[0x2f] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_0390a734(param_1 + 7,1,0x1d,uVar2,uVar5,1,1,1,0,1);
  puVar4 = PTR_DAT_04bb3350;
  lVar6 = param_1[0xf];
  uVar2 = *(undefined4 *)((long)param_1 + 0x74);
  lVar13 = *(long *)puVar3;
  if (lVar13 == 0) {
    plVar7 = malloc(0x38);
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar13 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
    }
  }
  plVar7[6] = 0;
  plVar12 = plVar7 + 1;
  *plVar12 = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  plVar7[4] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar7 + 5) = 0;
  *plVar7 = (long)puVar1;
  lVar11 = *(long *)puVar3;
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
  puVar8 = (undefined8 *)(lVar11 + 8);
  if (lVar13 != 0) {
    puVar8 = (undefined8 *)(lVar13 + 0xa8);
  }
  uVar9 = *puVar8;
  plVar7[6] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[2] = 0;
  *plVar12 = 0;
  *(byte *)(plVar7 + 5) = *(byte *)(plVar7 + 5) & 0xfe;
  puVar1 = PTR_DAT_04bd0fa8;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  if ((int)lVar6 == 0) {
    local_78 = 0;
    *(undefined2 *)((long)plVar7 + 0x2a) = 8;
    local_70 = 0;
    uStack_74 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar1,plVar7,uVar9,(int)lVar6,uVar2,8);
    local_70 = plVar7[3];
    *(undefined2 *)((long)plVar7 + 0x2a) = 8;
    local_78 = 0;
    if (plVar7[4] != 0) {
      local_78 = (int)*plVar12 - *(int *)(plVar7[4] + 0x10);
    }
    if (local_70 == 0) {
      uStack_74 = 0;
    }
    else {
      uStack_74 = *(undefined4 *)(local_70 + 0x104);
    }
  }
  *(int *)(param_1 + 7) = local_78;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_74;
  param_1[8] = local_70;
  param_1[9] = (long)plVar7;
  if ((*(byte *)((long)param_1 + 0x86) >> 1 & 1) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = 0x11 < *(ushort *)(param_1 + 0x1a) && *(ushort *)(param_1 + 0x1a) - 0x59 < 0xffffffd6;
  }
  plStack_68 = plVar7;
  FUN_038fd3e0(param_1 + 0x11,&local_78,param_1 + 0xd,0,param_1[0x19],bVar10,1);
  FUN_0390a734(param_1 + 0x1b,1,0x1d,DAT_04c4a028,DAT_04c4a02c,1,1,1,0,1);
  lVar6 = param_1[0x23];
  uVar2 = *(undefined4 *)((long)param_1 + 0x114);
  lVar13 = *(long *)puVar3;
  if (lVar13 == 0) {
    plVar7 = malloc(0x38);
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar13 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
    }
  }
  plVar7[6] = 0;
  plVar12 = plVar7 + 1;
  *plVar12 = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0;
  *plVar7 = (long)puVar1;
  lVar11 = *(long *)puVar3;
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
  puVar8 = (undefined8 *)(lVar11 + 8);
  if (lVar13 != 0) {
    puVar8 = (undefined8 *)(lVar13 + 0xa8);
  }
  uVar9 = *puVar8;
  plVar7[6] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[2] = 0;
  *plVar12 = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  *(byte *)(plVar7 + 5) = *(byte *)(plVar7 + 5) & 0xfe;
  if ((int)lVar6 == 0) {
    local_78 = 0;
    *(undefined2 *)((long)plVar7 + 0x2a) = 8;
    local_70 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar7,uVar9,(int)lVar6,uVar2,8);
    local_70 = plVar7[3];
    *(undefined2 *)((long)plVar7 + 0x2a) = 8;
    local_78 = 0;
    if (plVar7[4] != 0) {
      local_78 = (int)*plVar12 - *(int *)(plVar7[4] + 0x10);
    }
    if (local_70 != 0) {
      uStack_74 = *(undefined4 *)(local_70 + 0x104);
      goto LAB_030b1af8;
    }
  }
  uStack_74 = 0;
LAB_030b1af8:
  *(int *)(param_1 + 0x1b) = local_78;
  *(undefined4 *)((long)param_1 + 0xdc) = uStack_74;
  param_1[0x1c] = local_70;
  param_1[0x1d] = (long)plVar7;
  if ((*(byte *)((long)param_1 + 0x126) >> 1 & 1) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = 0x11 < *(ushort *)(param_1 + 0x2e) && *(ushort *)(param_1 + 0x2e) - 0x59 < 0xffffffd6;
  }
  plStack_68 = plVar7;
  FUN_038fd3e0(param_1 + 0x25,&local_78,param_1 + 0x21,0,param_1[0x2d],bVar10,1);
  lVar6 = *(long *)puVar3;
  if (lVar6 == 0) {
    puVar8 = malloc(8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    puVar8 = (undefined8 *)(lVar6 + 8);
    if (lVar13 != 0) {
      puVar8 = (undefined8 *)(lVar13 + 0xa8);
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,8,8);
  }
  *puVar8 = 0;
  param_1[5] = (long)puVar8;
  return;
}

