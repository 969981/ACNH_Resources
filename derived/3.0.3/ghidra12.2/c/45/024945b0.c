
/* WARNING: Removing unreachable block (ram,0x02494890) */

void FUN_024945b0(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined8 local_60;
  char *local_58;
  byte local_48 [4];
  undefined4 local_44;
  
  local_58 = (char *)CONCAT44(local_58._4_4_,(float)*(int *)(param_1 + 0x1910) * 0.001);
  local_60 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x190e) * 0.25,
                      (float)*(int *)(param_1 + 0x190a) * 0.001);
  if ((*(byte *)(param_1 + 0x17d6) >> 5 & 1) == 0) {
    lVar8 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x2200) + 0xf0))(lVar8 + 0x2200);
    fVar15 = *pfVar9;
    lVar8 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x1380) + 0xf0))(lVar8 + 0x1380);
    puVar14 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(fVar15 * *pfVar9,0x41200000,0x3e4ccccc,puVar14 + 0x4f,&local_60);
    if ((*(uint *)(param_1 + 0x17d4) >> 0x15 & 1) != 0) goto LAB_024946a8;
  }
  else {
LAB_024946a8:
    local_44 = 10;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02494838;
  }
  iVar7 = FUN_006f0400((float)*(int *)(param_1 + 0x1900) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       (float)*(int *)(param_1 + 0x1906) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x13b0) + 0xf0))(lVar8 + 0x13b0);
  fVar15 = *pfVar9;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_44 = 10;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02494838;
  }
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar8 = (**(code **)(*plVar2 + 0x148))();
  iVar13 = iVar7 - *(int *)(lVar8 + 4);
  if (0xb60b5e < iVar13 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar7 = -0x15555560;
    iVar13 = (int)(fVar15 * (float)iVar13);
    if (iVar13 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar7 = 0x5b05b0;
    }
    iVar1 = iVar13;
    if (iVar4 <= iVar13) {
      iVar1 = iVar4;
    }
    if (iVar7 <= iVar13) {
      iVar7 = iVar1;
    }
    iVar7 = iVar7 + *(int *)(lVar8 + 4);
  }
  *(int *)(lVar8 + 4) = iVar7;
LAB_02494838:
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  if (puVar14[0x227] == 0) {
    local_44 = 0;
  }
  else {
    local_44 = *(uint *)(puVar14 + 0x2d3) >> 1 & 1;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x2d);
    uVar10 = FUN_03850890(puVar14[0x227],0x2d,0,local_44);
    if ((uVar10 & 1) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      uVar12 = (uint)*(byte *)(param_1 + 0x1ee8);
      bVar6 = 7 < uVar12;
      if (bVar6) {
        uVar12 = 0xff;
      }
      local_48[0] = (byte)uVar12;
      lVar8 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar12 * 0x740;
      if (bVar6) {
        lVar8 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
        *(undefined4 *)(lVar8 + 0x11c) = 3;
        FUN_01393458(lVar8 + 0x1c0);
        uVar12 = (uint)local_48[0];
      }
      else {
        *(undefined4 *)(lVar8 + 0x11c) = 4;
      }
      uVar11 = (undefined1)uVar12;
      uVar10 = (ulong)&local_44 | 1;
      if (7 < uVar12) {
        uVar11 = 0xff;
      }
      local_44._0_2_ = CONCAT11(uVar11,1);
      if (((uVar12 < 8) && (uVar12 = FUN_02582d8c(local_48,1), uVar12 < 8)) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d4) != '\0')) {
        cVar3 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d6);
        local_44 = CONCAT31(local_44._1_3_,cVar3);
        if (cVar3 != '\0') {
          local_60 = PTR_DAT_04bb2020 + 0x10;
          local_58 = "WayEditCount";
          FUN_0212944c(&local_60,1,uVar10);
        }
      }
      else {
        local_44 = local_44 & 0xffffff00;
      }
      FUN_0279f1f4(uVar10,0);
      if ((char)local_44 != '\0') {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        local_58 = "PV_ConstructRoad";
        FUN_01b5c520(&local_60,1,uVar10);
      }
      local_44 = 10;
      local_60 = (undefined *)CONCAT44(local_60._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
        *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x200000;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x17d6) >> 5 & 1) != 0) {
    puVar14 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(param_1 + 0x4c8);
    }
    FUN_03eb4b60(0x3e99999a,0x41200000,0x3e4ccccc,puVar14 + 0x4f,param_1 + 0x228c);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  if ((puVar14[0x227] == 0) || (uVar10 = FUN_03850368(puVar14[0x227],0), (uVar10 & 1) == 0)) {
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    local_44 = 0;
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
    if (((puVar14[0x227] == 0) ||
        (uVar10 = FUN_03850368(puVar14[0x227],0), uVar5 = local_44, (uVar10 & 1) != 0)) ||
       ((puVar14[0x227] == 0 ||
        ((uVar10 = FUN_03850368(puVar14[0x227],local_44), (uVar10 & 1) != 0 ||
         (uVar10 = FUN_0384fca4(puVar14[0x227],uVar5), (uVar10 & 1) != 0)))))) {
      if (*(int *)(param_1 + 0x178) == 0) {
        uVar10 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
        if ((uVar10 & 1) == 0) {
          local_58 = (char *)((ulong)local_58 & 0xffffffff00000000);
          local_60 = (undefined *)CONCAT35(local_60._5_3_,0x100000006);
          FUN_02374e74(param_1,&local_60);
        }
      }
      else {
        FUN_023164ec(param_1,6);
      }
    }
  }
  return;
}

