
void FUN_025776a0(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  long lVar15;
  char *pcVar16;
  undefined *__dest;
  undefined8 *puVar17;
  uint *puVar18;
  undefined *local_68;
  char *local_60;
  uint *local_58;
  
  FUN_0173a0dc();
  puVar5 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    plVar9 = malloc(0x1680);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_02577730;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1680,8);
  }
LAB_02577730:
  puVar17 = (undefined8 *)((long)plVar9 + 0x1614);
  FUN_00739870(plVar9,0,0,1);
  plVar9[0x2bf] = 0xffffffff;
  *(undefined4 *)(plVar9 + 0x23e) = 0;
  plVar9[0x2c1] = (long)puVar17;
  *(undefined4 *)(plVar9 + 0x2c2) = 0x40;
  *(undefined1 *)((long)plVar9 + 0x1653) = 0;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  plVar9[0x2c0] = (long)(PTR_DAT_04bb2bc0 + 0x10);
  memset(plVar9 + 0x23f,0xff,0x400);
  puVar1 = PTR_DAT_04bbdeb8;
  *(undefined1 *)(plVar9 + 0x2cb) = 0;
  plVar9[0x2cd] = 0;
  *(undefined8 *)((long)plVar9 + 0x165c) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar9 + 0x1664) = 0xffffffff;
  plVar9[0x2ce] = 0;
  *plVar9 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb2f90;
  *(undefined2 *)(plVar9 + 0x2cf) = 0;
  if (puVar17 != (undefined8 *)(puVar1 + 5)) {
    uVar14 = *(undefined8 *)(puVar1 + 5);
    *(undefined1 *)((long)plVar9 + 0x161e) = 0;
    *puVar17 = uVar14;
    *(undefined2 *)((long)plVar9 + 0x161c) = *(undefined2 *)(puVar1 + 0xd);
  }
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar9 = malloc(0x2e0);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_02577868;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x2e0,8);
  }
LAB_02577868:
  FUN_00705c50(plVar9);
  plVar9[0x4f] = 0;
  puVar1 = PTR_DAT_04bb3300;
  plVar9[0x50] = 0;
  plVar9[0x53] = -0x100000000;
  plVar9[0x52] = (long)(plVar9 + 0x51);
  plVar9[0x51] = (long)(plVar9 + 0x51);
  *plVar9 = (long)(puVar1 + 0x10);
  FUN_038e18e4(plVar9 + 0x54);
  pcVar16 = (char *)plVar9[0xc];
  if (pcVar16 != "Family") {
    iVar7 = 6;
    if ((int)plVar9[0xd] < 7) {
      iVar7 = (int)plVar9[0xd] + -1;
    }
    memcpy(pcVar16,"Family",(long)iVar7);
    pcVar16[iVar7] = '\0';
  }
  *(uint *)(plVar9 + 0x4c) = *(uint *)(plVar9 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar9 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar9 = malloc(0x348);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_0257796c;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x348,8);
  }
LAB_0257796c:
  FUN_00705c50(plVar9);
  puVar1 = PTR_DAT_04bb3360;
  *(undefined1 *)((long)plVar9 + 0x2a4) = 0;
  pcVar16 = (char *)plVar9[0xc];
  plVar9[0x53] = (long)plVar9 + 0x2a4;
  *(undefined1 *)((long)plVar9 + 0x2fc) = 0;
  plVar9[0x5e] = (long)plVar9 + 0x2fc;
  *plVar9 = (long)(puVar1 + 0x10);
  puVar1 = puVar2 + 0x10;
  plVar9[0x4f] = 0;
  plVar9[0x52] = (long)puVar1;
  plVar9[0x5d] = (long)puVar1;
  plVar9[0x50] = 0;
  plVar9[0x51] = 0;
  *(undefined4 *)(plVar9 + 0x54) = 0x40;
  *(undefined1 *)((long)plVar9 + 0x2e3) = 0;
  *(undefined4 *)(plVar9 + 0x5f) = 0x40;
  *(undefined1 *)((long)plVar9 + 0x33b) = 0;
  *(undefined4 *)(plVar9 + 0x68) = 0;
  *(undefined1 *)((long)plVar9 + 0x344) = 1;
  if (pcVar16 != "HelperBone") {
    iVar7 = 10;
    if ((int)plVar9[0xd] < 0xb) {
      iVar7 = (int)plVar9[0xd] + -1;
    }
    memcpy(pcVar16,"HelperBone",(long)iVar7);
    pcVar16[iVar7] = '\0';
  }
  *(uint *)(plVar9 + 0x2f) = *(uint *)(plVar9 + 0x2f) & 0xfffffffb;
  *(uint *)(plVar9 + 0x4c) = *(uint *)(plVar9 + 0x4c) & 0xfffffff0;
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar9 = malloc(0x2e8);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_02577aa0;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x2e8,8);
  }
LAB_02577aa0:
  FUN_00705c50(plVar9);
  puVar1 = PTR_DAT_04bb3078;
  __dest = (undefined *)plVar9[0xc];
  plVar9[0x54] = (long)&DAT_3f8000003f800000;
  plVar9[0x4f] = 0;
  plVar9[0x50] = 0;
  plVar9[0x51] = 0;
  plVar9[0x52] = 0;
  plVar9[0x53] = 0;
  *(undefined4 *)(plVar9 + 0x55) = 0x3f800000;
  *plVar9 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar9 + 700) = 0;
  *(undefined8 *)((long)plVar9 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar9 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar9 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar9 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar9 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar9 + 0x2d4) = 0;
  if (__dest != &DAT_040afd37) {
    iVar7 = 4;
    if ((int)plVar9[0xd] < 5) {
      iVar7 = (int)plVar9[0xd] + -1;
    }
    memcpy(__dest,&DAT_040afd37,(long)iVar7);
    __dest[iVar7] = 0;
  }
  *(uint *)(plVar9 + 0x4c) = *(uint *)(plVar9 + 0x4c) & 0xfffffff0 | 5;
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar9 = malloc(0x378);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_02577bbc;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x378,8);
  }
LAB_02577bbc:
  FUN_00705c50(plVar9);
  plVar9[0x4f] = 0;
  puVar1 = PTR_DAT_04bb30b8;
  plVar9[0x50] = 0;
  *(undefined1 *)((long)plVar9 + 0x2b4) = 0;
  plVar9[0x55] = (long)plVar9 + 0x2b4;
  plVar9[0x51] = 0;
  plVar9[0x52] = 0;
  plVar9[0x53] = 0;
  *(undefined1 *)((long)plVar9 + 0x2f3) = 0;
  *(undefined4 *)(plVar9 + 0x5f) = 0;
  *(undefined4 *)((long)plVar9 + 0x334) = 0;
  *plVar9 = (long)(puVar1 + 0x10);
  plVar9[0x69] = (long)plVar9 + 0x354;
  *(undefined4 *)(plVar9 + 0x56) = 0x40;
  *(undefined1 *)((long)plVar9 + 0x373) = 0;
  plVar9[0x54] = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)plVar9 + 0x32c) = 0;
  *(undefined1 *)(plVar9 + 0x67) = 1;
  *(undefined4 *)((long)plVar9 + 0x339) = 0;
  *(undefined4 *)(plVar9 + 0x6a) = 0x20;
  pcVar16 = (char *)plVar9[0xc];
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)((long)plVar9 + 0x354) = 0;
  plVar9[0x68] = (long)puVar2;
  if (pcVar16 != "Cloth") {
    iVar7 = 5;
    if ((int)plVar9[0xd] < 6) {
      iVar7 = (int)plVar9[0xd] + -1;
    }
    memcpy(pcVar16,"Cloth",(long)iVar7);
    pcVar16[iVar7] = '\0';
  }
  *(uint *)(plVar9 + 0x2f) = *(uint *)(plVar9 + 0x2f) & 0xfffffffb;
  *(uint *)(plVar9 + 0x4c) = *(uint *)(plVar9 + 0x4c) & 0xfffffff0 | 2;
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  uVar10 = FUN_0173a224(param_1);
  if (((uVar10 & 1) != 0) && (lVar15 = *(long *)(param_1 + 0x228), lVar15 != 0)) {
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) {
      pvVar12 = malloc(0x308);
    }
    else {
      plVar9 = param_3;
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar8 + 8);
        if (lVar11 != 0) {
          plVar9 = (long *)(lVar11 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
      }
      pvVar12 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x308,8);
    }
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_60 = "mTops_Alb";
    FUN_007599d4(pvVar12,lVar15,&local_68,1);
    FUN_006f9fc0(param_1,pvVar12,0xffffffff);
  }
  puVar2 = PTR_DAT_04bb43c0;
  puVar17 = *(undefined8 **)(param_1 + 0x228);
  if (puVar17 == (undefined8 *)0x0) {
    return;
  }
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = (char *)*puVar17;
  local_58 = (uint *)0x0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar2 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(puVar17);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar6 < *(uint *)(lVar15 + 0x1d8)) {
        puVar18 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8);
        if (puVar18 != (uint *)0x0) {
          local_58 = puVar18;
        }
        goto LAB_02577e30;
      }
    }
  }
  puVar18 = (uint *)0x0;
LAB_02577e30:
  iVar7 = FUN_0277d6c4(&local_60);
  if (iVar7 != 0x1c2a) {
    if (puVar18 == (uint *)0x0) {
      return;
    }
    puVar4 = (uint *)((long)puVar18 - (ulong)*puVar18);
    if (*puVar18 == 0) {
      return;
    }
    if (puVar4 == (uint *)0x0) {
      return;
    }
    if (*puVar4 == 0) {
      return;
    }
    uVar6 = puVar4[1];
    if (uVar6 == 0) {
      return;
    }
    if ((ulong)(ushort)puVar4[2] == 0) {
      return;
    }
    lVar15 = 0xc;
    if (*(char *)((long)puVar4 + 10) != '\0') {
      lVar15 = 0x1c;
    }
    lVar15 = (long)puVar4 + lVar15 + (ulong)(ushort)puVar4[2] * 8;
    if (lVar15 == 0) {
      return;
    }
    uVar3 = 0;
    if ((ulong)uVar6 != 0) {
      uVar3 = (uint)((ulong)((long)puVar18 - lVar15) / (ulong)uVar6);
    }
    if (*puVar4 <= uVar3) {
      uVar3 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bc00c8 <= uVar3) {
      return;
    }
    if (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2) != 0xaf) {
      return;
    }
  }
  lVar15 = *(long *)(param_1 + 0x60);
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x1180) == 0)) {
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) {
      puVar13 = malloc(0x10);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar17 = (undefined8 *)(lVar8 + 8);
        if (lVar11 != 0) {
          puVar17 = (undefined8 *)(lVar11 + 0xa8);
        }
        param_3 = (long *)*puVar17;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      puVar13 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,0x10,8);
    }
    if (puVar13 != (undefined4 *)0x0) {
      *puVar13 = 0xffffffff;
      puVar13[2] = 0xffffffff;
      *(undefined2 *)(puVar13 + 1) = 0xffff;
      *(undefined2 *)(puVar13 + 3) = 0xffff;
      *(undefined4 *)(lVar15 + 0x1178) = 2;
      *(undefined4 **)(lVar15 + 0x1180) = puVar13;
    }
  }
  return;
}

