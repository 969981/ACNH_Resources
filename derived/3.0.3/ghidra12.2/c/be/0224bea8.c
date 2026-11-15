
void FUN_0224bea8(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  long lVar13;
  char *pcVar14;
  float fVar15;
  undefined4 uVar16;
  
  FUN_022978d0();
  puVar2 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar11 = malloc(0x2f0);
  }
  else {
    plVar11 = param_3;
    if (param_3 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_0224bf38;
      }
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x2f0,8);
  }
LAB_0224bf38:
  FUN_00705c50(plVar11);
  plVar11[0x50] = 0;
  puVar1 = PTR_DAT_04bb3228;
  pcVar14 = (char *)plVar11[0xc];
  *(undefined4 *)(plVar11 + 0x4f) = 6;
  plVar11[0x51] = 0;
  plVar11[0x52] = 0;
  plVar11[0x53] = 0;
  plVar11[0x54] = 0;
  *(undefined1 *)(plVar11 + 0x55) = 0xff;
  plVar11[0x56] = 0;
  plVar11[0x57] = 0;
  *(undefined1 *)(plVar11 + 0x58) = 0xff;
  *(undefined4 *)(plVar11 + 0x59) = 0;
  plVar11[0x5a] = 0;
  *plVar11 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar11 + 0x5b) = 0;
  plVar11[0x5c] = 0;
  *(undefined1 *)(plVar11 + 0x5d) = 0;
  *(uint *)(plVar11 + 0x4c) = *(uint *)(plVar11 + 0x4c) & 0xfffffff0;
  if (pcVar14 != "EventFlowReceptor") {
    iVar3 = 0x11;
    if ((int)plVar11[0xd] < 0x12) {
      iVar3 = (int)plVar11[0xd] + -1;
    }
    memcpy(pcVar14,"EventFlowReceptor",(long)iVar3);
    pcVar14[iVar3] = '\0';
  }
  FUN_006f9fc0(param_1,plVar11,0xffffffff);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    plVar11 = malloc(0x2e0);
  }
  else {
    plVar11 = param_3;
    if (param_3 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_0224c054;
      }
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x2e0,8);
  }
LAB_0224c054:
  FUN_00705c50(plVar11);
  plVar11[0x4f] = 0;
  puVar1 = PTR_DAT_04bb3300;
  plVar11[0x50] = 0;
  plVar11[0x53] = -0x100000000;
  plVar11[0x52] = (long)(plVar11 + 0x51);
  plVar11[0x51] = (long)(plVar11 + 0x51);
  *plVar11 = (long)(puVar1 + 0x10);
  FUN_038e18e4(plVar11 + 0x54);
  pcVar14 = (char *)plVar11[0xc];
  if (pcVar14 != "Family") {
    iVar3 = 6;
    if ((int)plVar11[0xd] < 7) {
      iVar3 = (int)plVar11[0xd] + -1;
    }
    memcpy(pcVar14,"Family",(long)iVar3);
    pcVar14[iVar3] = '\0';
  }
  *(uint *)(plVar11 + 0x4c) = *(uint *)(plVar11 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar11 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar11,0xffffffff);
  if (*(int *)(param_1 + 0x174) != 0) {
    lVar13 = *(long *)puVar2;
    if (lVar13 == 0) {
      plVar11 = malloc(0x378);
    }
    else {
      plVar11 = param_3;
      if (param_3 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar13 + 8);
        if (lVar10 != 0) {
          plVar11 = (long *)(lVar10 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)0x0;
          goto LAB_0224c160;
        }
      }
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x378,8);
    }
LAB_0224c160:
    FUN_00705c50(plVar11);
    puVar1 = PTR_DAT_04bb30b8;
    *(undefined1 *)((long)plVar11 + 0x2b4) = 0;
    plVar11[0x4f] = 0;
    plVar11[0x50] = 0;
    plVar11[0x51] = 0;
    plVar11[0x52] = 0;
    plVar11[0x53] = 0;
    plVar11[0x55] = (long)plVar11 + 0x2b4;
    *(undefined1 *)((long)plVar11 + 0x2f3) = 0;
    *plVar11 = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar11 + 0x56) = 0x40;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    *(undefined4 *)(plVar11 + 0x5f) = 0;
    *(undefined4 *)((long)plVar11 + 0x334) = 0;
    plVar11[0x69] = (long)plVar11 + 0x354;
    *(undefined1 *)((long)plVar11 + 0x373) = 0;
    plVar11[0x54] = (long)puVar1;
    *(undefined8 *)((long)plVar11 + 0x32c) = 0;
    *(undefined1 *)(plVar11 + 0x67) = 1;
    *(undefined4 *)((long)plVar11 + 0x339) = 0;
    *(undefined4 *)(plVar11 + 0x6a) = 0x20;
    pcVar14 = (char *)plVar11[0xc];
    puVar1 = PTR_DAT_04bb2028 + 0x10;
    *(undefined1 *)((long)plVar11 + 0x354) = 0;
    plVar11[0x68] = (long)puVar1;
    if (pcVar14 != "Cloth") {
      iVar3 = 5;
      if ((int)plVar11[0xd] < 6) {
        iVar3 = (int)plVar11[0xd] + -1;
      }
      memcpy(pcVar14,"Cloth",(long)iVar3);
      pcVar14[iVar3] = '\0';
    }
    *(uint *)(plVar11 + 0x2f) = *(uint *)(plVar11 + 0x2f) & 0xfffffffb;
    *(uint *)(plVar11 + 0x4c) = *(uint *)(plVar11 + 0x4c) & 0xfffffff0 | 2;
    FUN_006f9fc0(param_1,plVar11,0xffffffff);
  }
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    pvVar12 = malloc(0x3a8);
  }
  else {
    plVar11 = param_3;
    if (param_3 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        pvVar12 = (void *)0x0;
        goto LAB_0224c2d0;
      }
    }
    pvVar12 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0x3a8,8);
  }
LAB_0224c2d0:
  FUN_00938950(0x40400000,0x41200000,pvVar12,param_2 + 8,1);
  FUN_006f9fc0(param_1,pvVar12,0xffffffff);
  *(undefined4 *)(*(long *)((long)pvVar12 + 0x278) + 0x40) = 0x201;
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    plVar11 = malloc(0x1c0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar4 = (undefined8 *)(lVar13 + 8);
      if (lVar10 != 0) {
        puVar4 = (undefined8 *)(lVar10 + 0xa8);
      }
      param_3 = (long *)*puVar4;
      if (param_3 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_0224c360;
      }
    }
    plVar11 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x1c0,8);
  }
LAB_0224c360:
  puVar7 = PTR_DAT_04bc0c38;
  uVar16 = *(undefined4 *)(param_1 + 0x230);
  *(undefined1 *)((long)plVar11 + 0xc) = 0xff;
  puVar8 = PTR_DAT_04bc0c58;
  puVar1 = PTR_DAT_04bb3950;
  *(undefined4 *)((long)plVar11 + 0x1b7) = 0;
  puVar2 = PTR_DAT_04bb2d80;
  *(undefined4 *)(plVar11 + 1) = uVar16;
  puVar9 = PTR_DAT_04bc0c60;
  puVar6 = PTR_DAT_04bbb898;
  *plVar11 = (long)(puVar7 + 0x10);
  plVar11[4] = 0;
  plVar11[5] = (long)(puVar8 + 0x10);
  plVar11[9] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bc0c68;
  puVar2 = puVar2 + 0x10;
  plVar11[0x11] = (long)(puVar6 + 0x10);
  puVar6 = PTR_DAT_04bc0c70;
  plVar11[0xd] = (long)puVar2;
  plVar11[0x15] = (long)puVar2;
  plVar11[0x19] = (long)puVar2;
  plVar11[0x1d] = (long)(puVar9 + 0x10);
  puVar2 = PTR_DAT_04bc0c78;
  plVar11[0x21] = (long)(puVar1 + 0x10);
  plVar11[0x25] = (long)(puVar6 + 0x10);
  puVar1 = PTR_DAT_04bc0c80;
  plVar11[0x29] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bdf1d8;
  plVar11[2] = 0;
  plVar11[3] = 0;
  *(undefined1 *)(plVar11 + 0x31) = 0;
  plVar11[0x35] = 0;
  plVar11[0x36] = 0;
  plVar11[0x34] = 0;
  plVar11[0x2d] = (long)(puVar1 + 0x10);
  plVar11[0x32] = 0;
  plVar11[0x33] = (long)(puVar2 + 0x10);
  *(long **)(param_1 + 0x5c0) = plVar11;
  uVar5 = *(uint *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 8);
  fVar15 = *(float *)(param_2 + 0xc);
  *(float *)(param_1 + 0x5cc) = fVar15;
  uVar16 = *(undefined4 *)(param_2 + 0x10);
  *(long *)(param_1 + 0x5b8) = (long)(int)uVar5;
  *(undefined4 *)(param_1 + 0x5d0) = uVar16;
  *(float *)(param_1 + 0x5cc) = fVar15 + 2.0;
  if (uVar5 < 9) {
    uVar16 = *(undefined4 *)(param_1 + 0x230);
    (&DAT_05465dc4)[uVar5] = uVar16;
    if (uVar5 == 8) {
      DAT_05465dc0 = uVar16;
    }
  }
  return;
}

