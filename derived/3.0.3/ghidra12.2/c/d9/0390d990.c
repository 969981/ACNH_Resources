
void FUN_0390d990(long *param_1,long *param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  long lVar12;
  long *plVar13;
  int local_78;
  undefined4 uStack_74;
  long local_70;
  long *plStack_68;
  
  lVar12 = param_1[6];
  iVar3 = (**(code **)(*param_1 + 0x20))();
  iVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  lVar9 = param_1[6];
  iVar5 = (**(code **)(*param_1 + 0x20))(param_1);
  iVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  iVar3 = (((int)lVar9 + iVar5) - 1U & -iVar6) +
          (((int)lVar12 + iVar3) - 1U & -iVar4) * (param_4 * param_3 + -1);
  uVar7 = (**(code **)(*param_1 + 0x20))(param_1);
  uVar8 = (**(code **)(*param_1 + 0x30))(param_1);
  puVar2 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar10 = malloc(0x38);
  }
  else {
    plVar10 = param_2;
    if (param_2 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar12 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_0390dac8;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x38,8);
  }
LAB_0390dac8:
  plVar10[6] = 0;
  plVar13 = plVar10 + 1;
  *plVar13 = 0;
  *(undefined2 *)((long)plVar10 + 0x2a) = 0;
  bVar11 = 0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar10 + 5) = 0;
  *plVar10 = (long)puVar1;
  if (param_2 == (long *)0x0) {
    lVar9 = *(long *)puVar2;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = (long *)(lVar9 + 8);
    if (lVar12 != 0) {
      param_2 = (long *)(lVar12 + 0xa8);
    }
    param_2 = (long *)*param_2;
    bVar11 = *(byte *)(plVar10 + 5) & 0xfe;
  }
  plVar10[6] = 0;
  *(byte *)(plVar10 + 5) = bVar11;
  *(undefined2 *)((long)plVar10 + 0x2a) = 0;
  *plVar13 = 0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  if (iVar3 == 0) {
    local_78 = 0;
    local_70 = 0;
    *(short *)((long)plVar10 + 0x2a) = (short)uVar8;
    uStack_74 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar10,param_2,(long)iVar3,uVar7,uVar8);
    local_70 = plVar10[3];
    *(short *)((long)plVar10 + 0x2a) = (short)uVar8;
    local_78 = 0;
    if (plVar10[4] != 0) {
      local_78 = (int)*plVar13 - *(int *)(plVar10[4] + 0x10);
    }
    if (local_70 == 0) {
      uStack_74 = 0;
    }
    else {
      uStack_74 = *(undefined4 *)(local_70 + 0x104);
    }
  }
  *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) | 2;
  plStack_68 = plVar10;
  FUN_0390dc00(param_1,&local_78,param_3,param_4);
  return;
}

