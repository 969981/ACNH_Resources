
void FUN_0256b3e4(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  char *__dest;
  undefined *local_50;
  undefined *puStack_48;
  
  FUN_0173a0dc();
  puVar3 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar7 = malloc(0x2e0);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_0256b470;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x2e0,8);
  }
LAB_0256b470:
  FUN_00705c50(plVar7);
  plVar7[0x4f] = 0;
  puVar4 = PTR_DAT_04bb3300;
  plVar7[0x50] = 0;
  plVar7[0x53] = -0x100000000;
  plVar7[0x52] = (long)(plVar7 + 0x51);
  plVar7[0x51] = (long)(plVar7 + 0x51);
  *plVar7 = (long)(puVar4 + 0x10);
  FUN_038e18e4(plVar7 + 0x54);
  __dest = (char *)plVar7[0xc];
  if (__dest != "Family") {
    iVar1 = 6;
    if ((int)plVar7[0xd] < 7) {
      iVar1 = (int)plVar7[0xd] + -1;
    }
    memcpy(__dest,"Family",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(uint *)(plVar7 + 0x4c) = *(uint *)(plVar7 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar7 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar7,0xffffffff);
  puVar4 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x228) != 0) {
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4();
    if (*(long *)puVar4 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar5) {
      return;
    }
    if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
      return;
    }
  }
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    pvVar8 = malloc(0x438);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x438,8);
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  puStack_48 = PTR_DAT_04bb2f90 + 0x4f;
  FUN_006fc0d0(pvVar8,&local_50,PTR_DAT_04bb2f80);
  FUN_006f9fc0(param_1,pvVar8,0xffffffff);
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    pvVar8 = malloc(0x11f0);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x11f0,8);
  }
  FUN_00739870(pvVar8,0,0,1);
  FUN_006f9fc0(param_1,pvVar8,0xffffffff);
  lVar11 = *(long *)(param_1 + 0x60);
  if ((lVar11 != 0) && (*(long *)(lVar11 + 0x1180) == 0)) {
    lVar6 = *(long *)puVar3;
    if (lVar6 == 0) {
      puVar10 = malloc(0x10);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar2 = (undefined8 *)(lVar6 + 8);
        if (lVar9 != 0) {
          puVar2 = (undefined8 *)(lVar9 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      puVar10 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,0x10,8);
    }
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0xffffffff;
      puVar10[2] = 0xffffffff;
      *(undefined2 *)(puVar10 + 1) = 0xffff;
      *(undefined2 *)(puVar10 + 3) = 0xffff;
      *(undefined4 *)(lVar11 + 0x1178) = 2;
      *(undefined4 **)(lVar11 + 0x1180) = puVar10;
    }
  }
  return;
}

