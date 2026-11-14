
void FUN_0166a9f0(long param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  int *piVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar4 = malloc(0x38);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar8 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_0166aa80;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x38,8);
  }
LAB_0166aa80:
  bVar5 = 0;
  puVar4[6] = 0;
  piVar9 = (int *)(puVar4 + 1);
  piVar9[0] = 0;
  piVar9[1] = 0;
  *(undefined2 *)((long)puVar4 + 0x2a) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined1 *)(puVar4 + 5) = 0;
  *puVar4 = &PTR_LAB_049ba7c8;
  plVar3 = param_3;
  if (param_3 == (long *)0x0) {
    lVar2 = *(long *)puVar1;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar2 + 8);
    if (lVar8 != 0) {
      plVar3 = (long *)(lVar8 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    bVar5 = *(byte *)(puVar4 + 5) & 0xfe;
  }
  puVar4[6] = 0;
  *(byte *)(puVar4 + 5) = bVar5;
  *(undefined2 *)((long)puVar4 + 0x2a) = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  if (param_2 == 0) {
    iVar6 = 0;
    lVar8 = 0;
LAB_0166ab50:
    uVar7 = 0;
  }
  else {
    FUN_038f8590(DAT_05ae78d0,puVar4,plVar3,(ulong)param_2 << 2,0x20,0);
    lVar8 = puVar4[3];
    *(undefined2 *)((long)puVar4 + 0x2a) = 0;
    iVar6 = 0;
    if (puVar4[4] != 0) {
      iVar6 = *piVar9 - *(int *)(puVar4[4] + 0x10);
    }
    if (lVar8 == 0) goto LAB_0166ab50;
    uVar7 = *(undefined4 *)(lVar8 + 0x104);
  }
  lVar2 = *(long *)puVar1;
  *(int *)(param_1 + 0x3e0) = iVar6;
  *(undefined4 *)(param_1 + 0x3e4) = uVar7;
  *(long *)(param_1 + 1000) = lVar8;
  *(undefined8 **)(param_1 + 0x3f0) = puVar4;
  if (lVar2 == 0) {
    plVar3 = malloc(0x60);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar2 + 8);
      if (lVar8 != 0) {
        puVar4 = (undefined8 *)(lVar8 + 0xa8);
      }
      param_3 = (long *)*puVar4;
      if (param_3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_0166abd0;
      }
    }
    plVar3 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x60,8);
  }
LAB_0166abd0:
  puVar1 = PTR_DAT_04bd1170;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0x400000001;
  *(long **)(param_1 + 0x3f8) = plVar3;
  local_68 = *(undefined4 *)(param_1 + 0x3e0);
  uStack_64 = *(undefined4 *)(param_1 + 0x3e4);
  local_60 = *(undefined8 *)(param_1 + 1000);
  uStack_58 = *(undefined8 *)(param_1 + 0x3f0);
  FUN_03901480(plVar3,&local_68,2,param_2);
  *(undefined4 *)(*(long *)(param_1 + 0x3f8) + 0xc) = 4;
  *(undefined1 *)(param_1 + 0x400) = 1;
  return;
}

