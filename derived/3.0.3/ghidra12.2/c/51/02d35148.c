
long * FUN_02d35148(long param_1,undefined *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
  if (lVar10 == 0) {
    lVar9 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar10;
  }
  puVar1 = PTR_DAT_04bb2020;
  if (**(char **)(param_2 + 8) == '\0') {
    if ((*PTR_DAT_04bc5ff0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bc5ff0);
      param_2 = PTR_DAT_04bc5fe8;
      if (iVar3 != 0) {
        *(undefined **)PTR_DAT_04bc5fe8 = puVar1 + 0x10;
        *(char **)(param_2 + 8) = "CloudIslandStoragePage";
        __cxa_guard_release(PTR_DAT_04bc5ff0);
      }
    }
    else {
      param_2 = PTR_DAT_04bc5fe8;
    }
  }
  uStack_58 = *(undefined8 *)(param_2 + 8);
  local_60 = puVar1 + 0x10;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  local_50 = param_1;
  if (lVar10 == 0) {
    plVar5 = malloc(0x670);
  }
  else {
    plVar5 = *(long **)(*(long *)(param_1 + 0x68) + 0x10);
    if (plVar5 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02d3523c;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x670,8);
  }
LAB_02d3523c:
  FUN_038595a4(plVar5,&local_60,param_3);
  *(undefined4 *)((long)plVar5 + 0x3ec) = 0xe;
  *(undefined2 *)(plVar5 + 0xad) = 1;
  *(undefined1 *)((long)plVar5 + 0x56a) = 1;
  if ((int)plVar5[0x43] != 3) {
    *(undefined1 *)((long)plVar5 + 0x21d) = 1;
    *(undefined4 *)(plVar5 + 0x43) = 3;
  }
  local_44 = 0;
  plVar5[0xae] = 0;
  plVar5[0xaf] = 0;
  puVar1 = PTR_DAT_04bc62d8;
  plVar5[0xb0] = 0;
  plVar5[0xb1] = 0;
  plVar5[0xb2] = 0;
  *(uint *)(plVar5 + 0xa6) = *(uint *)(plVar5 + 0xa6) | 1;
  plVar5[0xb3] = 0;
  plVar5[0xb4] = 0;
  plVar5[0xb5] = 0;
  plVar5[0xb6] = 0;
  plVar5[0xb7] = 0;
  plVar5[0xb8] = 0;
  plVar5[0xb9] = 0;
  plVar5[0xba] = 0;
  plVar5[0xbb] = 0;
  plVar5[0xbc] = 0;
  plVar5[0xbd] = 0;
  plVar5[0xbe] = 0;
  plVar5[0xbf] = 0;
  plVar5[0xc0] = 0;
  plVar5[0xc1] = 0;
  plVar5[0xc2] = 0;
  plVar5[0xc3] = 0;
  plVar5[0xc4] = 0;
  plVar5[0xc5] = 0;
  plVar5[0xc6] = 0;
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[199] = 0;
  plVar5[200] = 0;
  plVar5[0xc9] = 0;
  plVar5[0xca] = 0;
  plVar5[0xcb] = 0;
  plVar5[0xcc] = 0;
  plVar5[0xcd] = 0;
  *(undefined4 *)(plVar5 + 9) = 1;
  FUN_03859dd0(plVar5,param_3);
  if (((*PTR_DAT_04bc4e88 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e88), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e80 = PTR_DAT_04bc4e90 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e88);
  }
  if (((param_3 != (undefined8 *)0x0) &&
      (uVar6 = (**(code **)*param_3)(param_3,PTR_DAT_04bc4e80), (uVar6 & 1) != 0)) &&
     (plVar7 = (long *)param_3[6], plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x140))(plVar7,plVar5);
    *(undefined1 *)((long)plVar5 + 0x569) = *(undefined1 *)(param_3 + 9);
  }
  *(undefined4 *)(plVar5 + 9) = 2;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar8 = (long *)(param_1 + 0x78);
  lVar10 = *plVar8;
  plVar7 = (long *)((long)*(int *)(param_1 + 0x8c) + (long)plVar5);
  *plVar8 = (long)plVar7;
  *plVar7 = lVar10;
  plVar7[1] = (long)plVar8;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar7;
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if (lVar9 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar9;
  }
  return plVar5;
}

