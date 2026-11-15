
void FUN_0210f25c(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  void *pvVar17;
  char *pcVar18;
  undefined *__dest;
  undefined8 *puVar19;
  uint *puVar20;
  undefined *local_68;
  char *local_60;
  uint *local_58;
  
  FUN_0173a0dc();
  puVar5 = PTR_DAT_04bb4138;
  lVar15 = param_1 + 0x288;
  lVar16 = *(long *)PTR_DAT_04bb4138;
  if (lVar16 == 0) {
LAB_0210f2d0:
    uVar13 = 0;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x288) + 0x18))(lVar15);
    uVar6 = FUN_006bd550(*(undefined8 *)(param_1 + 0x290),0);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar6);
    lVar16 = FUN_0079e770(lVar16,&local_68);
    if (lVar16 == 0) goto LAB_0210f2d0;
    uVar13 = 1;
  }
  *(undefined1 *)(param_1 + 0x2e0) = uVar13;
  (**(code **)(*(long *)(param_1 + 0x288) + 0x18))(lVar15);
  iVar7 = FUN_021d6b10(*(undefined8 *)(param_1 + 0x290));
  *(bool *)(param_1 + 0x2e1) = iVar7 == 1;
  if (*(char *)(param_1 + 0x2e0) == '\0') {
LAB_0210f33c:
    pvVar17 = *(void **)(param_1 + 0x2c8);
    (**(code **)(*(long *)(param_1 + 0x288) + 0x18))(lVar15);
    if (pvVar17 != *(void **)(param_1 + 0x290)) {
      iVar7 = 3;
      if (*(int *)(param_1 + 0x2d0) < 4) {
        iVar7 = *(int *)(param_1 + 0x2d0) + -1;
      }
      memcpy(pvVar17,*(void **)(param_1 + 0x290),(long)iVar7);
      *(undefined1 *)((long)pvVar17 + (long)iVar7) = 0;
    }
  }
  else {
    lVar16 = *(long *)puVar5;
    if (lVar16 != 0) {
      (**(code **)(*(long *)(param_1 + 0x288) + 0x18))(lVar15);
      uVar6 = FUN_006bd550(*(undefined8 *)(param_1 + 0x290),0);
      local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar6);
      lVar16 = FUN_0079e770(lVar16,&local_68);
      if (lVar16 != 0) goto LAB_0210f33c;
    }
  }
  puVar5 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    plVar9 = malloc(0x2e0);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar16 != 0) {
        plVar9 = (long *)(lVar16 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_0210f3f0;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x2e0,8);
  }
LAB_0210f3f0:
  FUN_00705c50(plVar9);
  plVar9[0x4f] = 0;
  puVar2 = PTR_DAT_04bb3300;
  plVar9[0x50] = 0;
  plVar9[0x53] = -0x100000000;
  plVar9[0x52] = (long)(plVar9 + 0x51);
  plVar9[0x51] = (long)(plVar9 + 0x51);
  *plVar9 = (long)(puVar2 + 0x10);
  FUN_038e18e4(plVar9 + 0x54);
  pcVar18 = (char *)plVar9[0xc];
  if (pcVar18 != "Family") {
    iVar7 = 6;
    if ((int)plVar9[0xd] < 7) {
      iVar7 = (int)plVar9[0xd] + -1;
    }
    memcpy(pcVar18,"Family",(long)iVar7);
    pcVar18[iVar7] = '\0';
  }
  *(uint *)(plVar9 + 0x4c) = *(uint *)(plVar9 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar9 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  puVar2 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x228) != 0) {
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4();
    if (*(long *)puVar2 == 0) {
      return;
    }
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if (*(uint *)(lVar15 + 0x1d8) <= uVar8) {
      return;
    }
    if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
      return;
    }
  }
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar9 = malloc(0x1680);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar16 != 0) {
        plVar9 = (long *)(lVar16 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_0210f544;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1680,8);
  }
LAB_0210f544:
  puVar19 = (undefined8 *)((long)plVar9 + 0x1614);
  FUN_00739870(plVar9,0,0,1);
  plVar9[0x2bf] = 0xffffffff;
  *(undefined4 *)(plVar9 + 0x23e) = 0;
  plVar9[0x2c1] = (long)puVar19;
  *(undefined4 *)(plVar9 + 0x2c2) = 0x40;
  *(undefined1 *)((long)plVar9 + 0x1653) = 0;
  if (puVar19 != &DAT_0407ebb1) {
    *(undefined1 *)puVar19 = 0;
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
  if (puVar19 != (undefined8 *)(puVar1 + 5)) {
    uVar14 = *(undefined8 *)(puVar1 + 5);
    *(undefined1 *)((long)plVar9 + 0x161e) = 0;
    *puVar19 = uVar14;
    *(undefined2 *)((long)plVar9 + 0x161c) = *(undefined2 *)(puVar1 + 0xd);
  }
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  lVar15 = *(long *)puVar5;
  if (lVar15 == 0) {
    plVar9 = malloc(0x348);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar16 != 0) {
        plVar9 = (long *)(lVar16 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_0210f67c;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x348,8);
  }
LAB_0210f67c:
  FUN_00705c50(plVar9);
  puVar1 = PTR_DAT_04bb3360;
  *(undefined1 *)((long)plVar9 + 0x2a4) = 0;
  pcVar18 = (char *)plVar9[0xc];
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
  if (pcVar18 != "HelperBone") {
    iVar7 = 10;
    if ((int)plVar9[0xd] < 0xb) {
      iVar7 = (int)plVar9[0xd] + -1;
    }
    memcpy(pcVar18,"HelperBone",(long)iVar7);
    pcVar18[iVar7] = '\0';
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
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar16 != 0) {
        plVar9 = (long *)(lVar16 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_0210f7b0;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x2e8,8);
  }
LAB_0210f7b0:
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
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar16 != 0) {
        plVar9 = (long *)(lVar16 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_0210f8cc;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x378,8);
  }
LAB_0210f8cc:
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
  pcVar18 = (char *)plVar9[0xc];
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)((long)plVar9 + 0x354) = 0;
  plVar9[0x68] = (long)puVar2;
  if (pcVar18 != "Cloth") {
    iVar7 = 5;
    if ((int)plVar9[0xd] < 6) {
      iVar7 = (int)plVar9[0xd] + -1;
    }
    memcpy(pcVar18,"Cloth",(long)iVar7);
    pcVar18[iVar7] = '\0';
  }
  *(uint *)(plVar9 + 0x2f) = *(uint *)(plVar9 + 0x2f) & 0xfffffffb;
  *(uint *)(plVar9 + 0x4c) = *(uint *)(plVar9 + 0x4c) & 0xfffffff0 | 2;
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  uVar10 = FUN_0173a224(param_1);
  puVar19 = *(undefined8 **)(param_1 + 0x228);
  if ((uVar10 & 1) != 0) {
    if (puVar19 == (undefined8 *)0x0) {
      return;
    }
    lVar15 = *(long *)puVar5;
    if (lVar15 == 0) {
      pvVar17 = malloc(0x308);
    }
    else {
      plVar9 = param_3;
      if (param_3 == (long *)0x0) {
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar15 + 8);
        if (lVar16 != 0) {
          plVar9 = (long *)(lVar16 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
      }
      pvVar17 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x308,8);
    }
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_60 = "mTops_Alb";
    FUN_007599d4(pvVar17,puVar19,&local_68,0);
    FUN_006f9fc0(param_1,pvVar17,0xffffffff);
    puVar19 = *(undefined8 **)(param_1 + 0x228);
  }
  puVar2 = PTR_DAT_04bb43c0;
  if (puVar19 == (undefined8 *)0x0) {
    return;
  }
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = (char *)*puVar19;
  local_58 = (uint *)0x0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar2 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(puVar19);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar8 < *(uint *)(lVar15 + 0x1d8)) {
        puVar20 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8);
        if (puVar20 != (uint *)0x0) {
          local_58 = puVar20;
        }
        goto LAB_0210fb48;
      }
    }
  }
  puVar20 = (uint *)0x0;
LAB_0210fb48:
  iVar7 = FUN_0277d6c4(&local_60);
  if (iVar7 != 0x1c2a) {
    if (puVar20 == (uint *)0x0) {
      return;
    }
    puVar4 = (uint *)((long)puVar20 - (ulong)*puVar20);
    if (*puVar20 == 0) {
      return;
    }
    if (puVar4 == (uint *)0x0) {
      return;
    }
    if (*puVar4 == 0) {
      return;
    }
    uVar8 = puVar4[1];
    if (uVar8 == 0) {
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
    if ((ulong)uVar8 != 0) {
      uVar3 = (uint)((ulong)((long)puVar20 - lVar15) / (ulong)uVar8);
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
    lVar16 = *(long *)puVar5;
    if (lVar16 == 0) {
      puVar12 = malloc(0x10);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar19 = (undefined8 *)(lVar16 + 8);
        if (lVar11 != 0) {
          puVar19 = (undefined8 *)(lVar11 + 0xa8);
        }
        param_3 = (long *)*puVar19;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      puVar12 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,0x10,8);
    }
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = 0xffffffff;
      puVar12[2] = 0xffffffff;
      *(undefined2 *)(puVar12 + 1) = 0xffff;
      *(undefined2 *)(puVar12 + 3) = 0xffff;
      *(undefined4 *)(lVar15 + 0x1178) = 2;
      *(undefined4 **)(lVar15 + 0x1180) = puVar12;
    }
  }
  return;
}

