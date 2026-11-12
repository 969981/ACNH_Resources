
void FUN_006d039c(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  void *pvVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar7 = malloc(0x18);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        puVar7 = (uint *)0x0;
        goto LAB_006d0424;
      }
    }
    puVar7 = (uint *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
  }
LAB_006d0424:
  *puVar7 = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar3 = PTR_DAT_04bb21c8;
  uVar1 = *(uint *)(*(long *)PTR_DAT_04bb21c8 + 0xc0);
  if (0 < (int)uVar1) {
    lVar9 = *(long *)puVar4;
    if (lVar9 == 0) {
      pvVar8 = malloc((ulong)uVar1 << 3);
    }
    else {
      plVar6 = param_2;
      if (param_2 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar9 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_006d04a8;
      }
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar1 << 3,8);
    }
    if (pvVar8 != (void *)0x0) {
      *puVar7 = uVar1;
      *(void **)(puVar7 + 2) = pvVar8;
    }
  }
LAB_006d04a8:
  puVar7[4] = 0;
  *param_1 = (long)puVar7;
  lVar9 = *(long *)puVar4;
  uVar2 = *(undefined4 *)(*(long *)puVar3 + 0xc4);
  if (lVar9 == 0) {
    pvVar8 = malloc(0x18);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
  }
  FUN_006d00c0(pvVar8,param_2,uVar2);
  lVar9 = *(long *)puVar3;
  param_1[1] = (long)pvVar8;
  lVar5 = *(long *)puVar4;
  uVar2 = *(undefined4 *)(lVar9 + 200);
  if (lVar5 == 0) {
    pvVar8 = malloc(0x18);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar5 + 8);
      if (lVar9 != 0) {
        plVar6 = (long *)(lVar9 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
  }
  FUN_006d00c0(pvVar8,param_2,uVar2);
  param_1[2] = (long)pvVar8;
  *(undefined4 *)(*param_1 + 0x10) = 0;
  *(undefined4 *)(param_1[1] + 0x10) = 0;
  *(undefined4 *)(param_1[2] + 0x10) = 0;
  return;
}

