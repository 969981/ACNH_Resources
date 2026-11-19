
void FUN_03a6ef80(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_5 == 1) {
    uVar14 = *(undefined4 *)(param_1 + 0x109c);
    *(undefined1 *)(param_1 + 0x1210) = 1;
    *(undefined4 *)(param_1 + 0x860) = 1;
    param_5 = 1;
  }
  else {
    uVar14 = *(undefined4 *)(param_1 + 0x109c);
    *(undefined1 *)(param_1 + 0x1210) = 0;
  }
  FUN_0390a734(param_1 + 0x10a0,4,param_5,param_3,param_4,uVar14,1,0,0,1);
  puVar4 = PTR_DAT_04bb2698;
  uVar14 = *(undefined4 *)(param_1 + 0x10dc);
  iVar12 = *(int *)(param_1 + 0x10e0);
  iVar2 = *(int *)(param_1 + 0x10e4);
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    plVar8 = malloc(0x38);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_03a6f09c;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
  }
LAB_03a6f09c:
  plVar8[6] = 0;
  plVar17 = plVar8 + 1;
  *plVar17 = 0;
  *(undefined2 *)((long)plVar8 + 0x2a) = 0;
  bVar11 = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0;
  puVar5 = PTR_DAT_04bb2cc8;
  *plVar8 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  plVar9 = param_2;
  if (param_2 == (long *)0x0) {
    lVar7 = *(long *)puVar4;
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar9 = (long *)(lVar7 + 8);
    if (lVar16 != 0) {
      plVar9 = (long *)(lVar16 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    bVar11 = *(byte *)(plVar8 + 5) & 0xfe;
  }
  plVar8[6] = 0;
  *(byte *)(plVar8 + 5) = bVar11;
  *plVar17 = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  puVar6 = PTR_DAT_04bd0fa8;
  *(undefined2 *)((long)plVar8 + 0x2a) = 0;
  if (iVar12 == 0) {
    iVar12 = 0;
    *(undefined2 *)((long)plVar8 + 0x2a) = 4;
    lVar16 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar6,plVar8,plVar9,(long)iVar12,uVar14,4);
    lVar16 = plVar8[3];
    *(undefined2 *)((long)plVar8 + 0x2a) = 4;
    iVar12 = 0;
    if (plVar8[4] != 0) {
      iVar12 = (int)*plVar17 - *(int *)(plVar8[4] + 0x10);
    }
    if (lVar16 != 0) {
      uVar13 = *(undefined4 *)(lVar16 + 0x104);
      goto LAB_03a6f184;
    }
  }
  uVar13 = 0;
LAB_03a6f184:
  lVar7 = *(long *)puVar4;
  *(int *)(param_1 + 0x11e0) = iVar12;
  *(undefined4 *)(param_1 + 0x11e4) = uVar13;
  *(long *)(param_1 + 0x11e8) = lVar16;
  *(long **)(param_1 + 0x11f0) = plVar8;
  if (lVar7 == 0) {
    plVar8 = malloc(0x38);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar7 + 8);
      if (lVar16 != 0) {
        plVar8 = (long *)(lVar16 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
  }
  plVar8[6] = 0;
  bVar11 = 0;
  *(undefined2 *)((long)plVar8 + 0x2a) = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  if (param_2 == (long *)0x0) {
    lVar7 = *(long *)puVar4;
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = (long *)(lVar7 + 8);
    if (lVar16 != 0) {
      param_2 = (long *)(lVar16 + 0xa8);
    }
    param_2 = (long *)*param_2;
    bVar11 = *(byte *)(plVar8 + 5) & 0xfe;
  }
  plVar8[6] = 0;
  *(byte *)(plVar8 + 5) = bVar11;
  *(undefined2 *)((long)plVar8 + 0x2a) = 0;
  *plVar9 = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  if (iVar2 == 0) {
    iVar12 = 0;
    lVar16 = 0;
    uVar14 = 0;
    *(undefined2 *)((long)plVar8 + 0x2a) = 4;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar6,plVar8,param_2,(long)iVar2,uVar14,4);
    lVar16 = plVar8[3];
    *(undefined2 *)((long)plVar8 + 0x2a) = 4;
    iVar12 = 0;
    if (plVar8[4] != 0) {
      iVar12 = (int)*plVar9 - *(int *)(plVar8[4] + 0x10);
    }
    if (lVar16 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined4 *)(lVar16 + 0x104);
    }
  }
  *(int *)(param_1 + 0x11f8) = iVar12;
  uStack_74 = *(undefined4 *)(param_1 + 0x11e4);
  uStack_68 = *(undefined8 *)(param_1 + 0x11f0);
  *(undefined4 *)(param_1 + 0x11fc) = uVar14;
  *(long *)(param_1 + 0x1200) = lVar16;
  local_78 = *(undefined4 *)(param_1 + 0x11e0);
  local_70 = *(undefined8 *)(param_1 + 0x11e8);
  *(long **)(param_1 + 0x1208) = plVar8;
  *(undefined4 *)(param_1 + 0x10a0) = local_78;
  *(undefined4 *)(param_1 + 0x10a4) = uStack_74;
  *(undefined8 *)(param_1 + 0x10a8) = local_70;
  *(undefined8 *)(param_1 + 0x10b0) = uStack_68;
  if ((*(byte *)(param_1 + 0x10ee) >> 1 & 1) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = 0x11 < *(ushort *)(param_1 + 0x1138) &&
             *(ushort *)(param_1 + 0x1138) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(param_1 + 0x10f0,&local_78,(undefined8 *)(param_1 + 0x10d0),0,
               *(undefined8 *)(param_1 + 0x1130),bVar10,1);
  lVar16 = *(long *)(param_1 + 0x1200);
  if (lVar16 == 0) {
    uVar14 = *(undefined4 *)(param_1 + 0x10b8);
    uVar13 = *(undefined4 *)(param_1 + 0x10bc);
    lVar16 = *(long *)(param_1 + 0x10c0);
    uVar15 = *(undefined8 *)(param_1 + 0x10c8);
  }
  else {
    uVar14 = *(undefined4 *)(param_1 + 0x11f8);
    *(long *)(param_1 + 0x10c0) = lVar16;
    *(undefined4 *)(param_1 + 0x10b8) = uVar14;
    uVar13 = *(undefined4 *)(param_1 + 0x11fc);
    uVar15 = *(undefined8 *)(param_1 + 0x1208);
    *(undefined4 *)(param_1 + 0x10bc) = uVar13;
    *(undefined8 *)(param_1 + 0x10c8) = uVar15;
  }
  *(undefined4 *)(param_1 + 0xf90) = uVar14;
  *(undefined4 *)(param_1 + 0xf94) = uVar13;
  *(long *)(param_1 + 0xf98) = lVar16;
  *(undefined8 *)(param_1 + 4000) = uVar15;
  *(undefined4 *)(param_1 + 0xf78) = *(undefined4 *)(param_1 + 0x10a0);
  *(undefined8 *)(param_1 + 0xfa8) = *(undefined8 *)(param_1 + 0x10d0);
  *(undefined8 *)(param_1 + 0xfb0) = *(undefined8 *)(param_1 + 0x10d8);
  *(undefined4 *)(param_1 + 0xf7c) = *(undefined4 *)(param_1 + 0x10a4);
  *(undefined8 *)(param_1 + 0xfb8) = *(undefined8 *)(param_1 + 0x10e0);
  *(undefined8 *)(param_1 + 0xf80) = *(undefined8 *)(param_1 + 0x10a8);
  *(undefined8 *)(param_1 + 0xfbf) = *(undefined8 *)(param_1 + 0x10e7);
  *(undefined8 *)(param_1 + 0xf88) = *(undefined8 *)(param_1 + 0x10b0);
  FUN_038fd1e0(param_1 + 0xfc8);
  FUN_038fd2f0(param_1 + 0xfc8,param_1 + 0x10f0);
  *(undefined8 *)(param_1 + 0x1008) = *(undefined8 *)(param_1 + 0x1130);
  *(undefined4 *)(param_1 + 0x1010) = *(undefined4 *)(param_1 + 0x1138);
  puVar1 = (uint *)(param_1 + 0x104c);
  do {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = *puVar1 | 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}

