
void FUN_01596234(long param_1,undefined4 param_2,undefined4 param_3,long param_4,long *param_5,
                 int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  
  FUN_0390a734(param_1 + 0x10,1,0x21,param_2,param_3,1,1,1,0,1);
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_4 + 8);
  (**(code **)(*(long *)(param_1 + 0x3a0) + 0x18))(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x3a8);
  puVar2 = PTR_DAT_04bb2698;
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  iVar7 = *(int *)(param_1 + 0x50);
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar4 = malloc(0x38);
  }
  else {
    plVar4 = param_5;
    if (param_5 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_01596324;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x38,8);
  }
LAB_01596324:
  plVar4[6] = 0;
  plVar10 = plVar4 + 1;
  *plVar10 = 0;
  *(undefined2 *)((long)plVar4 + 0x2a) = 0;
  bVar5 = 0;
  plVar4[4] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar4 + 5) = 0;
  *plVar4 = (long)puVar1;
  if (param_5 == (long *)0x0) {
    lVar3 = *(long *)puVar2;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_5 = (long *)(lVar3 + 8);
    if (lVar9 != 0) {
      param_5 = (long *)(lVar9 + 0xa8);
    }
    param_5 = (long *)*param_5;
    bVar5 = *(byte *)(plVar4 + 5) & 0xfe;
  }
  plVar4[6] = 0;
  *(byte *)(plVar4 + 5) = bVar5;
  *(undefined2 *)((long)plVar4 + 0x2a) = 0;
  *plVar10 = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  if (iVar7 == 0) {
    iVar7 = 0;
    *(undefined2 *)((long)plVar4 + 0x2a) = 8;
    lVar9 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar4,param_5,iVar7,uVar8,8);
    lVar9 = plVar4[3];
    *(undefined2 *)((long)plVar4 + 0x2a) = 8;
    iVar7 = 0;
    if (plVar4[4] != 0) {
      iVar7 = (int)*plVar10 - *(int *)(plVar4[4] + 0x10);
    }
    if (lVar9 != 0) {
      uVar8 = *(undefined4 *)(lVar9 + 0x104);
      goto LAB_01596404;
    }
  }
  uVar8 = 0;
LAB_01596404:
  *(int *)(param_1 + 0x388) = iVar7;
  *(undefined4 *)(param_1 + 0x38c) = uVar8;
  *(long *)(param_1 + 0x390) = lVar9;
  *(long **)(param_1 + 0x398) = plVar4;
  if ((param_6 == 4) || (param_6 == 2)) {
    uVar6 = *(ushort *)(param_1 + 0x4b0) | 2;
  }
  else {
    uVar6 = *(ushort *)(param_1 + 0x4b0) & 0xfffd;
  }
  *(ushort *)(param_1 + 0x4b0) = uVar6 & 0xfffb | (ushort)(param_6 - 3U < 2) << 2;
  return;
}

