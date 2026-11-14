
/* WARNING: Type propagation algorithm not settling */

void FUN_01bea9c8(long param_1)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *local_1368;
  undefined1 auStack_1360 [16];
  undefined *local_1350;
  undefined8 local_1330;
  undefined8 uStack_1328;
  undefined *local_1320;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  undefined *local_12f0;
  undefined8 local_12d0;
  undefined8 uStack_12c8;
  undefined *local_12c0;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined *local_1290;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined *local_1260;
  undefined8 local_1240;
  undefined8 uStack_1238;
  undefined *local_1230;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined *local_1200;
  undefined8 local_11e0;
  undefined8 uStack_11d8;
  undefined *local_11d0;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined *local_11a0;
  undefined4 local_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined4 local_1168;
  undefined2 local_1164;
  undefined *local_1160;
  undefined8 local_1158;
  undefined8 local_1150;
  undefined8 local_1148;
  undefined8 local_1140;
  undefined1 local_1138;
  undefined4 local_1134;
  undefined *local_1130;
  char *local_1128;
  undefined4 local_1120;
  undefined1 local_111c;
  undefined8 local_1118;
  undefined8 local_1110;
  undefined4 local_1108;
  undefined *local_1100;
  undefined1 *local_10f8;
  undefined4 local_10f0;
  undefined1 local_10ec [20];
  long *local_10d8;
  long *local_10d0;
  long *local_10c8;
  undefined1 local_10ad;
  undefined *local_10a8;
  undefined1 *local_10a0;
  undefined4 local_1098;
  undefined1 local_1094 [63];
  undefined1 local_1055;
  char acStack_1050 [2];
  undefined1 auStack_104e [4094];
  
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 == 1) {
    lVar17 = *(long *)PTR_DAT_04bb2698;
    if (lVar17 == 0) {
      pvVar12 = malloc(0x1000);
joined_r0x01beaccc:
      if (pvVar12 != (void *)0x0) {
        *(void **)(param_1 + 0xf8) = pvVar12;
        *(void **)(param_1 + 0x20) = pvVar12;
        *(undefined4 *)(param_1 + 0x28) = 0x800;
        (**(code **)(*(long *)(param_1 + 0x18) + 0x38))(param_1 + 0x18);
      }
    }
    else {
      plVar10 = *(long **)PTR_DAT_04bc08b8;
      if (plVar10 != (long *)0x0) {
LAB_01beaa48:
        pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1000,8);
        goto joined_r0x01beaccc;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar17 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_01beaa48;
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (uVar13 = FUN_006f50a0(param_1 + 0x18,param_1 + 0x2e0,param_1 + 0x338,0), (uVar13 & 1) == 0))
    {
      iVar9 = 0xc;
      *(undefined1 *)(param_1 + 9) = 0;
    }
    else {
      iVar9 = 2;
    }
    *(int *)(param_1 + 0xc) = iVar9;
  }
  if (iVar9 == 2) {
    lVar17 = param_1 + 0x100;
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar12 = malloc(0x1000);
joined_r0x01beacdc:
      if (pvVar12 != (void *)0x0) {
        *(void **)(param_1 + 0x1e0) = pvVar12;
        *(void **)(param_1 + 0x108) = pvVar12;
        *(undefined4 *)(param_1 + 0x110) = 0x800;
        (**(code **)(*(long *)(param_1 + 0x100) + 0x38))(lVar17);
      }
    }
    else {
      plVar10 = *(long **)PTR_DAT_04bc08b8;
      if (plVar10 != (long *)0x0) {
LAB_01beab0c:
        pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1000,8);
        goto joined_r0x01beacdc;
      }
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar11 + 8);
      if (lVar14 != 0) {
        plVar10 = (long *)(lVar14 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_01beab0c;
    }
    puVar5 = PTR_DAT_04bc0cb8;
    if (*(long *)(param_1 + 0x108) == 0) {
      iVar9 = 0xc;
      *(undefined1 *)(param_1 + 9) = 0;
    }
    else {
      if ((*(long *)(param_1 + 0x2d8) == 0) ||
         (plVar10 = *(long **)(*(long *)(param_1 + 0x2d8) + 0x48), plVar10 == (long *)0x0)) {
        bVar6 = false;
LAB_01beac70:
        bVar7 = false;
        lVar11 = *(long *)(param_1 + 0x3a0);
        if (lVar11 == 0) goto LAB_01beac3c;
LAB_01beac7c:
        *(undefined1 *)(*(long *)(lVar11 + 0x60) + 0x278) = *(undefined1 *)(param_1 + 0x3a8);
        *(bool *)(*(long *)(*(long *)(param_1 + 0x3a0) + 0x60) + 0x279) = bVar6;
        *(bool *)(*(long *)(*(long *)(param_1 + 0x3a0) + 0x60) + 0x27a) = bVar7;
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x3a0) + 0x60) + 0x270) =
             *(undefined8 *)(param_1 + 0x2d8);
        FUN_006f3d64(*(undefined8 *)(param_1 + 0x3a0),lVar17,param_1 + 0x18);
      }
      else {
        local_1130 = PTR_DAT_04bc0cb8 + 0x10;
        local_1128 = (char *)CONCAT44(local_1128._4_4_,0x18);
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_1130);
        puVar4 = PTR_DAT_04bb2020;
        local_1128 = "RubyOff";
        local_1130 = PTR_DAT_04bb2020 + 0x10;
        (**(code **)(plVar10[3] + 0x1a0))(&local_1368,plVar10[1],&local_1130);
        bVar6 = local_1368 != (undefined *)0x0;
        if ((*(long *)(param_1 + 0x2d8) == 0) ||
           (plVar10 = *(long **)(*(long *)(param_1 + 0x2d8) + 0x48), plVar10 == (long *)0x0))
        goto LAB_01beac70;
        local_1130 = puVar5 + 0x10;
        local_1128 = (char *)CONCAT44(local_1128._4_4_,0x18);
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_1130);
        local_1130 = puVar4 + 0x10;
        local_1128 = "WordwrapOn";
        (**(code **)(plVar10[3] + 0x1a0))(&local_1368,plVar10[1],&local_1130);
        bVar7 = local_1368 != (undefined *)0x0;
        lVar11 = *(long *)(param_1 + 0x3a0);
        if (lVar11 != 0) goto LAB_01beac7c;
LAB_01beac3c:
        lVar11 = *(long *)PTR_DAT_04bc08b0;
        if (lVar11 == 0) {
          lVar14 = 1;
        }
        else {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar14 = *(long *)(lVar15 + 0xa8);
          *(long *)(lVar15 + 0xa8) = lVar11;
        }
        FUN_01bed9e0(&local_1130,param_1 + 0x390);
        *(undefined1 *)(local_10d0 + 0x4f) = *(undefined1 *)(param_1 + 0x3a8);
        *(bool *)((long)local_10d0 + 0x279) = bVar6;
        *(bool *)((long)local_10d0 + 0x27a) = bVar7;
        local_10d0[0x4e] = *(long *)(param_1 + 0x2d8);
        FUN_006f3d64(&local_1130,lVar17,param_1 + 0x18);
        local_1130 = PTR_DAT_04bc0c00 + 0x10;
        if (local_10c8 != (long *)0x0) {
          (**(code **)(*local_10c8 + 8))();
        }
        if (local_10d0 != (long *)0x0) {
          (**(code **)(*local_10d0 + 8))();
        }
        if (local_10d8 != (long *)0x0) {
          (**(code **)(*local_10d8 + 8))();
        }
        FUN_003532f4(&local_1130);
        if (lVar14 != 1) {
          lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          *(long *)(lVar17 + 0xa8) = lVar14;
        }
      }
      iVar9 = 3;
    }
    *(int *)(param_1 + 0xc) = iVar9;
  }
  switch(iVar9) {
  case 3:
    local_111c = 0;
    local_1120 = 0x800;
    local_1110 = 0xffffffff00000000;
    uVar16 = *(undefined8 *)(param_1 + 0x2d8);
    local_1118 = 0xffffffff;
    local_1108 = 0xffffffff;
    local_10f8 = local_10ec;
    local_10f0 = 0x40;
    local_10ad = 0;
    local_10ec[0] = 0;
    local_1100 = PTR_DAT_04bb2bc0 + 0x10;
    local_10a0 = local_1094;
    local_1098 = 0x40;
    local_1055 = 0;
    local_1094[0] = 0;
    local_1130 = &DAT_04a3d380;
    local_1128 = acStack_1050;
    local_10a8 = local_1100;
    memset(acStack_1050,0,0x1000);
    puVar1 = auStack_104e + 0xffe;
    if (auStack_104e + 0xffe <= auStack_104e) {
      puVar1 = auStack_104e;
    }
    memset(acStack_1050,0,(size_t)(puVar1 + (-0xe0 - (long)&local_1130)));
    FUN_01c08808(param_1 + 0x100,&local_1130,uVar16);
    *(undefined4 *)(param_1 + 0xc) = 4;
    break;
  case 4:
    break;
  case 5:
    goto switchD_01beadc8_caseD_5;
  case 6:
    goto switchD_01beadc8_caseD_6;
  default:
    goto switchD_01beadc8_default;
  }
  if (*(char *)(param_1 + 0x3a9) != '\0') {
    local_111c = 0;
    local_1120 = 0x800;
    local_1118 = 0xffffffff;
    local_1110 = 0xffffffff00000000;
    local_10f8 = local_10ec;
    local_1108 = 0xffffffff;
    local_10f0 = 0x40;
    local_10ad = 0;
    local_10ec[0] = 0;
    local_1100 = PTR_DAT_04bb2bc0 + 0x10;
    local_10a0 = local_1094;
    local_1098 = 0x40;
    local_1055 = 0;
    local_1094[0] = 0;
    local_1130 = &DAT_04a3d380;
    local_1128 = acStack_1050;
    local_10a8 = local_1100;
    memset(acStack_1050,0,0x1000);
    puVar1 = auStack_104e + 0xffe;
    if (auStack_104e + 0xffe <= auStack_104e) {
      puVar1 = auStack_104e;
    }
    memset(acStack_1050,0,(size_t)(puVar1 + (-0xe0 - (long)&local_1130)));
    memset(auStack_1360,0,0x1e0);
    local_1330 = 0;
    uStack_1328 = 0;
    lVar17 = param_1 + 0x100;
    local_1300 = 0;
    uStack_12f8 = 0;
    local_1350 = PTR_DAT_04bb2d80 + 0x10;
    local_12d0 = 0;
    uStack_12c8 = 0;
    local_1180 = 0xffffffff;
    local_12a0 = 0;
    uStack_1298 = 0;
    local_1270 = 0;
    uStack_1268 = 0;
    local_1240 = 0;
    uStack_1238 = 0;
    local_1210 = 0;
    uStack_1208 = 0;
    local_11e0 = 0;
    uStack_11d8 = 0;
    local_11b0 = 0;
    uStack_11a8 = 0;
    local_1178 = 0;
    uStack_1170 = 0;
    local_1368 = PTR_DAT_04bb2d58 + 0x10;
    local_1168 = 0;
    local_1164 = 0x101;
    local_1160 = PTR_DAT_04bb2e08 + 0x10;
    local_1158 = 0;
    local_1150 = 0;
    local_1148 = 0;
    local_1140 = 0;
    local_1138 = 1;
    local_1134 = 0;
    local_1320 = local_1350;
    local_12f0 = local_1350;
    local_12c0 = local_1350;
    local_1290 = local_1350;
    local_1260 = local_1350;
    local_1230 = local_1350;
    local_1200 = local_1350;
    local_11d0 = local_1350;
    local_11a0 = local_1350;
    FUN_006f2100(&local_1368,&local_1130,lVar17);
    (**(code **)(*(long *)(param_1 + 0x100) + 0x28))(lVar17,&local_1130);
    (**(code **)(*(long *)(param_1 + 0x100) + 0x30))(lVar17,&local_1130);
  }
switchD_01beadc8_caseD_5:
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x100000006;
switchD_01beadc8_caseD_6:
  if (*(long *)(param_1 + 0x2d8) == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x2d8) + 0x48);
  }
  FUN_01ba8e98(param_1 + 0x10,uVar16,param_1 + 0x100);
  if (((*(char *)(param_1 + 8) == '\0') || (0x3b < *(int *)(param_1 + 0x14))) ||
     (*(int *)(param_1 + 0x10) == 2)) {
    *(undefined4 *)(param_1 + 0xc) = 7;
    if (*(long *)(param_1 + 0x3b0) != 0) goto LAB_01beb0c0;
LAB_01beb1dc:
    *(long *)(param_1 + 0x2d0) = param_1 + 0x100;
LAB_01beb1e4:
    iVar9 = 8;
LAB_01beb204:
    *(int *)(param_1 + 0xc) = iVar9;
  }
  else {
    iVar9 = *(int *)(param_1 + 0xc);
switchD_01beadc8_default:
    if (iVar9 == 7) {
      if (*(long *)(param_1 + 0x3b0) == 0) goto LAB_01beb1dc;
LAB_01beb0c0:
      lVar17 = param_1 + 0x1e8;
      lVar11 = *(long *)PTR_DAT_04bb2698;
      if (lVar11 == 0) {
        pvVar12 = malloc(0x1000);
joined_r0x01beb1f4:
        if (pvVar12 != (void *)0x0) {
          *(void **)(param_1 + 0x2c8) = pvVar12;
          *(void **)(param_1 + 0x1f0) = pvVar12;
          *(undefined4 *)(param_1 + 0x1f8) = 0x800;
          (**(code **)(*(long *)(param_1 + 0x1e8) + 0x38))(lVar17);
        }
      }
      else {
        plVar10 = *(long **)PTR_DAT_04bc08b8;
        if (plVar10 != (long *)0x0) {
LAB_01beb110:
          pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1000,8);
          goto joined_r0x01beb1f4;
        }
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar11 + 8);
        if (lVar14 != 0) {
          plVar10 = (long *)(lVar14 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 != (long *)0x0) goto LAB_01beb110;
      }
      if (*(long *)(param_1 + 0x1f0) != 0) {
        lVar11 = *(long *)(param_1 + 0x2d8);
        if ((lVar11 != 0) && (plVar10 = *(long **)(lVar11 + 0x48), plVar10[1] != 0)) {
          local_1130 = PTR_DAT_04bc0878 + 0x10;
          local_1128 = (char *)CONCAT44(local_1128._4_4_,9);
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_1130);
          (**(code **)(plVar10[3] + 0x5e0))(plVar10[1],PTR_DAT_04bb2da0,0);
          FUN_03d7dd80(lVar11);
        }
        FUN_01b96f60(*(undefined8 *)(param_1 + 0x3b0),lVar17,param_1 + 0x100);
        *(long *)(param_1 + 0x2d0) = lVar17;
        goto LAB_01beb1e4;
      }
      *(undefined1 *)(param_1 + 9) = 0;
      iVar9 = 0xc;
      goto LAB_01beb204;
    }
  }
  if (iVar9 == 0xb) {
    lVar17 = *(long *)(param_1 + 0x3b0);
    if (lVar17 == 0) {
      if (*(long **)(param_1 + 0x2d0) != (long *)0x0) {
        uVar16 = (**(code **)(**(long **)(param_1 + 0x2d0) + 0x18))();
        uVar8 = FUN_006f4a64(*(undefined8 *)(param_1 + 0x2d0));
        (**(code **)(**(long **)(param_1 + 0x2d0) + 0x60))();
        (**(code **)(**(long **)(param_1 + 0x2d0) + 0x68))();
        lVar17 = *(long *)(param_1 + 0x2d8);
        if ((lVar17 != 0) && (plVar10 = *(long **)(lVar17 + 0x48), plVar10[1] != 0)) {
          local_1130 = PTR_DAT_04bc0878 + 0x10;
          local_1128 = (char *)CONCAT44(local_1128._4_4_,9);
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_1130);
          (**(code **)(plVar10[3] + 0x5e0))(plVar10[1],uVar16,uVar8);
          FUN_03d7dd80(lVar17);
        }
      }
    }
    else {
      if (*(char *)(lVar17 + 0x670) == '\0') {
        *(undefined1 *)(lVar17 + 0x672) = 0;
        FUN_006f1490(lVar17);
      }
      iVar9 = FUN_01b957f0(lVar17 + 0x208,*(undefined8 *)(lVar17 + 0x660),
                           *(undefined8 *)(lVar17 + 0x668));
      if (iVar9 == 0) {
        *(undefined1 *)(lVar17 + 0x671) = 1;
      }
      cVar3 = *(char *)(*(long *)(param_1 + 0x3b0) + 0x670);
      cVar2 = *(char *)(*(long *)(param_1 + 0x3b0) + 0x671);
      if (*(long **)(param_1 + 0x2d0) != (long *)0x0) {
        uVar16 = (**(code **)(**(long **)(param_1 + 0x2d0) + 0x18))();
        uVar8 = FUN_006f4a64(*(undefined8 *)(param_1 + 0x2d0));
        (**(code **)(**(long **)(param_1 + 0x2d0) + 0x60))();
        (**(code **)(**(long **)(param_1 + 0x2d0) + 0x68))();
        lVar17 = *(long *)(param_1 + 0x2d8);
        if ((lVar17 != 0) && (plVar10 = *(long **)(lVar17 + 0x48), plVar10[1] != 0)) {
          local_1130 = PTR_DAT_04bc0878 + 0x10;
          local_1128 = (char *)CONCAT44(local_1128._4_4_,9);
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_1130);
          (**(code **)(plVar10[3] + 0x5e0))(plVar10[1],uVar16,uVar8);
          FUN_03d7dd80(lVar17);
        }
      }
      if (cVar3 == '\0' || cVar2 == '\0') {
        iVar9 = *(int *)(param_1 + 0xc);
        goto joined_r0x01beb468;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0xc;
    lVar17 = *(long *)(param_1 + 0xf8);
    goto joined_r0x01beb520;
  }
  if (iVar9 == 9) {
LAB_01beb2c8:
    iVar9 = 0xc;
    if (*(long *)(param_1 + 0x3b0) != 0) {
      iVar9 = 10;
    }
    *(int *)(param_1 + 0xc) = iVar9;
  }
  else if (iVar9 == 8) {
    if (*(long **)(param_1 + 0x2d0) != (long *)0x0) {
      uVar16 = (**(code **)(**(long **)(param_1 + 0x2d0) + 0x18))();
      uVar8 = FUN_006f4a64(*(undefined8 *)(param_1 + 0x2d0));
      (**(code **)(**(long **)(param_1 + 0x2d0) + 0x60))();
      (**(code **)(**(long **)(param_1 + 0x2d0) + 0x68))();
      lVar17 = *(long *)(param_1 + 0x2d8);
      if ((lVar17 != 0) && (plVar10 = *(long **)(lVar17 + 0x48), plVar10[1] != 0)) {
        local_1128 = (char *)CONCAT44(local_1128._4_4_,9);
        local_1130 = PTR_DAT_04bc0878 + 0x10;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_1130);
        (**(code **)(plVar10[3] + 0x5e0))(plVar10[1],uVar16,uVar8);
        FUN_03d7dd80(lVar17);
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 9;
    goto LAB_01beb2c8;
  }
joined_r0x01beb468:
  if (iVar9 != 0xc) {
    return;
  }
  lVar17 = *(long *)(param_1 + 0xf8);
joined_r0x01beb520:
  if (lVar17 == 0) {
    lVar17 = *(long *)(param_1 + 0x1e0);
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(*(long *)(param_1 + 0x18) + 0x38))((long *)(param_1 + 0x18));
    pvVar12 = *(void **)(param_1 + 0xf8);
    if (pvVar12 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar12);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar12);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar12);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    lVar17 = *(long *)(param_1 + 0x1e0);
  }
  if (lVar17 == 0) {
    lVar17 = *(long *)(param_1 + 0x2c8);
  }
  else {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*(long *)(param_1 + 0x100) + 0x38))(param_1 + 0x100);
    pvVar12 = *(void **)(param_1 + 0x1e0);
    if (pvVar12 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar12);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar12);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar12);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    lVar17 = *(long *)(param_1 + 0x2c8);
  }
  if (lVar17 == 0) {
    cVar3 = *(char *)(param_1 + 0x39c);
  }
  else {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    (**(code **)(*(long *)(param_1 + 0x1e8) + 0x38))(param_1 + 0x1e8);
    pvVar12 = *(void **)(param_1 + 0x2c8);
    if (pvVar12 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar12);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar12);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar12);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    cVar3 = *(char *)(param_1 + 0x39c);
  }
  if (cVar3 != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 0x398);
  }
  *(undefined4 *)(param_1 + 0xc) = 0xd;
  return;
}

