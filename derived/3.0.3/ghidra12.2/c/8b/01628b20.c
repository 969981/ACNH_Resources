
void FUN_01628b20(undefined8 param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long *in_x6;
  byte bVar8;
  long lVar9;
  long *plVar10;
  int local_68;
  int iStack_64;
  long local_60;
  long *plStack_58;
  
  FUN_0390a734(param_2,1);
  iVar2 = param_2[0xf];
  iVar3 = param_2[0x10];
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
  puVar4 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar6 = malloc(0x38);
  }
  else {
    plVar6 = in_x6;
    if (in_x6 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_01628be4;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x38,8);
  }
LAB_01628be4:
  plVar6[6] = 0;
  plVar10 = plVar6 + 1;
  *plVar10 = 0;
  *(undefined2 *)((long)plVar6 + 0x2a) = 0;
  bVar8 = 0;
  plVar6[4] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar6 + 5) = 0;
  *plVar6 = (long)puVar1;
  if (in_x6 == (long *)0x0) {
    lVar5 = *(long *)puVar4;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    in_x6 = (long *)(lVar5 + 8);
    if (lVar9 != 0) {
      in_x6 = (long *)(lVar9 + 0xa8);
    }
    in_x6 = (long *)*in_x6;
    bVar8 = *(byte *)(plVar6 + 5) & 0xfe;
  }
  plVar6[6] = 0;
  *(byte *)(plVar6 + 5) = bVar8;
  *(undefined2 *)((long)plVar6 + 0x2a) = 0;
  *plVar10 = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  if (iVar3 == 0) {
    local_68 = 0;
    *(undefined2 *)((long)plVar6 + 0x2a) = 8;
    local_60 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar6,in_x6,iVar3,iVar2,8);
    local_60 = plVar6[3];
    *(undefined2 *)((long)plVar6 + 0x2a) = 8;
    local_68 = 0;
    if (plVar6[4] != 0) {
      local_68 = (int)*plVar10 - *(int *)(plVar6[4] + 0x10);
    }
    if (local_60 != 0) {
      iStack_64 = *(int *)(local_60 + 0x104);
      goto LAB_01628cc4;
    }
  }
  iStack_64 = 0;
LAB_01628cc4:
  *param_2 = local_68;
  param_2[1] = iStack_64;
  *(long *)(param_2 + 2) = local_60;
  *(long **)(param_2 + 4) = plVar6;
  if ((*(byte *)((long)param_2 + 0x4e) >> 1 & 1) == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = 0x11 < *(ushort *)(param_2 + 0x26) && *(ushort *)(param_2 + 0x26) - 0x59 < 0xffffffd6;
  }
  plStack_58 = plVar6;
  FUN_038fd3e0(param_2 + 0x14,&local_68,param_2 + 0xc,0,*(undefined8 *)(param_2 + 0x24),bVar7,1);
  return;
}

