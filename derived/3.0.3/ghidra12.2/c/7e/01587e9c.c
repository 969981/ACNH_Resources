
void FUN_01587e9c(long param_1,undefined4 param_2,undefined4 param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  int local_68;
  undefined4 uStack_64;
  long local_60;
  long *plStack_58;
  
  if ((*(ushort *)(param_1 + 0x470) >> 1 & 1) != 0) {
    return;
  }
  FUN_0390a734(param_1 + 0x10,1,0x21,param_2,param_3,1,1,1,0,1);
  (**(code **)(*param_4 + 0x18))(param_4);
  *(long *)(param_1 + 0xa0) = param_4[1];
  puVar4 = PTR_DAT_04bb2698;
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  iVar3 = *(int *)(param_1 + 0x50);
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar6 = malloc(0x38);
  }
  else {
    plVar6 = param_5;
    if (param_5 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_01587f80;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x38,8);
  }
LAB_01587f80:
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
  if (param_5 == (long *)0x0) {
    lVar5 = *(long *)puVar4;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_5 = (long *)(lVar5 + 8);
    if (lVar9 != 0) {
      param_5 = (long *)(lVar9 + 0xa8);
    }
    param_5 = (long *)*param_5;
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
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar6,param_5,iVar3,uVar2,8);
    local_60 = plVar6[3];
    *(undefined2 *)((long)plVar6 + 0x2a) = 8;
    local_68 = 0;
    if (plVar6[4] != 0) {
      local_68 = (int)*plVar10 - *(int *)(plVar6[4] + 0x10);
    }
    if (local_60 != 0) {
      uStack_64 = *(undefined4 *)(local_60 + 0x104);
      goto LAB_01588060;
    }
  }
  uStack_64 = 0;
LAB_01588060:
  *(int *)(param_1 + 0x10) = local_68;
  *(undefined4 *)(param_1 + 0x14) = uStack_64;
  *(long *)(param_1 + 0x18) = local_60;
  *(long **)(param_1 + 0x20) = plVar6;
  if ((*(byte *)(param_1 + 0x5e) >> 1 & 1) == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = 0x11 < *(ushort *)(param_1 + 0xa8) && *(ushort *)(param_1 + 0xa8) - 0x59 < 0xffffffd6;
  }
  plStack_58 = plVar6;
  FUN_038fd3e0(param_1 + 0x60,&local_68,param_1 + 0x40,0,*(undefined8 *)(param_1 + 0xa0),bVar7,1);
  *(ushort *)(param_1 + 0x470) = *(ushort *)(param_1 + 0x470) | 2;
  return;
}

