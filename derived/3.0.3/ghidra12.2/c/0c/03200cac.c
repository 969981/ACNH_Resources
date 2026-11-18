
void FUN_03200cac(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  long *local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined1 local_68;
  undefined *local_60;
  char *pcStack_58;
  long local_50;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar9 = 1;
  local_a0 = 0x100000000;
  uStack_98 = 0x200000002;
  local_90 = 1;
  local_b0 = (undefined8 *)(PTR_DAT_04bc4e78 + 0x10);
  uStack_a8 = 0;
  local_8c = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_88 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  lVar10 = param_1[0x14];
  local_68 = 0;
  puStack_70 = PTR_DAT_04bb2120;
  lVar11 = *(long *)(*(long *)(lVar10 + 0x68) + 0x10);
  local_80 = param_1;
  local_78 = puVar1;
  if (lVar11 != 0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar11;
  }
  pcStack_58 = "SelectCursorPage";
  lVar11 = *(long *)PTR_DAT_04bb2698;
  local_60 = puVar1;
  local_50 = lVar10;
  if (lVar11 == 0) {
    plVar6 = malloc(0x578);
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar10 + 0x68) + 0x10);
    if (plVar6 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_03200dc8;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x578,8);
  }
LAB_03200dc8:
  FUN_038595a4(plVar6,&local_60,&local_b0);
  *(undefined4 *)((long)plVar6 + 0x3ec) = 0xe;
  *(undefined2 *)(plVar6 + 0xad) = 1;
  *(undefined1 *)((long)plVar6 + 0x56a) = 1;
  if ((int)plVar6[0x43] != 3) {
    *(undefined1 *)((long)plVar6 + 0x21d) = 1;
    *(undefined4 *)(plVar6 + 0x43) = 3;
  }
  local_44 = 0;
  *(uint *)(plVar6 + 0xa6) = *(uint *)(plVar6 + 0xa6) | 1;
  puVar1 = PTR_DAT_04bc8938;
  plVar6[0xae] = 0;
  *(undefined4 *)(plVar6 + 9) = 1;
  *plVar6 = (long)(puVar1 + 0x10);
  FUN_03859dd0(plVar6,&local_b0);
  if (((*PTR_DAT_04bc4e88 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e88), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e80 = PTR_DAT_04bc4e90 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e88);
  }
  uVar7 = (*(code *)*local_b0)(&local_b0,PTR_DAT_04bc4e80);
  if (((uVar7 & 1) != 0) && (local_80 != (long *)0x0)) {
    (**(code **)(*local_80 + 0x140))(local_80,plVar6);
    *(undefined1 *)((long)plVar6 + 0x569) = local_68;
  }
  *(undefined4 *)(plVar6 + 9) = 2;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plVar8 = (long *)(lVar10 + 0x78);
  lVar11 = *plVar8;
  plVar2 = (long *)((long)*(int *)(lVar10 + 0x8c) + (long)plVar6);
  *plVar8 = (long)plVar2;
  *plVar2 = lVar11;
  plVar2[1] = (long)plVar8;
  if (lVar11 != 0) {
    *(long **)(lVar11 + 8) = plVar2;
  }
  *(int *)(lVar10 + 0x88) = *(int *)(lVar10 + 0x88) + 1;
  if (lVar9 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar9;
  }
  param_1[0x42] = (long)plVar6;
  return;
}

