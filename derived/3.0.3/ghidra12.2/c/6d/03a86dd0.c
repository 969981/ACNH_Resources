
void FUN_03a86dd0(long param_1,char *param_2,uint param_3,long param_4)

{
  uint *puVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  uint *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  char cVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  short sVar25;
  char cVar26;
  bool bVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  long lVar32;
  uint uVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  int iVar38;
  undefined4 uVar39;
  long *plVar40;
  uint uVar41;
  undefined4 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 in_stack_fffffffffffffcf0;
  undefined8 uVar61;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_bc;
  int local_7c;
  
  uVar42 = (undefined4)((ulong)in_stack_fffffffffffffcf0 >> 0x20);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    return;
  }
  lVar32 = *(long *)(param_1 + 0x30);
  uVar16 = param_3;
  if (*(uint *)(param_1 + 0x28) <= param_3) {
    uVar16 = 0;
  }
  lVar35 = lVar32 + (long)(int)uVar16 * 0x1d80;
  *(uint *)(lVar35 + 0x1d68) = *(uint *)(lVar35 + 0x1d68) | 1;
  iVar38 = *(int *)(param_1 + 0x330);
  uVar33 = *(uint *)(param_1 + 0x334);
  iVar18 = *(int *)(param_1 + 0x338);
  iVar34 = uVar33 + iVar18;
  if (2 < iVar38) {
    iVar38 = 3;
  }
  uVar49 = (iVar38 + iVar34) - 1;
  uVar50 = uVar33;
  if ((int)uVar49 <= (int)uVar33) {
    uVar50 = uVar49;
  }
  if (0 < (int)uVar49) {
    lVar35 = lVar32 + (long)(int)uVar16 * 0x1d80;
    uVar41 = 0;
    puVar3 = (uint *)(lVar35 + 0x1698);
    plVar4 = (long *)(lVar35 + 0x16a0);
    iVar47 = 1;
    uVar45 = (uint)(*(float *)(param_4 + 0x14) - *(float *)(param_4 + 0xc));
    uVar46 = (uint)(*(float *)(param_4 + 0x10) - *(float *)(param_4 + 8));
    do {
      if (((9 < uVar41) || (uVar46 == 0)) || (uVar45 == 0)) {
        uVar33 = uVar41 - 1;
        if ((int)uVar50 <= (int)uVar41) {
          uVar33 = uVar50;
        }
        iVar38 = (uVar41 - iVar34) + 1;
        goto LAB_03a86f3c;
      }
      uVar17 = uVar41;
      if (*puVar3 <= uVar41) {
        uVar17 = 0;
      }
      *(uint *)(*plVar4 + (ulong)uVar17 * 0x350 + 0x340) = uVar46;
      uVar46 = uVar46 >> 1;
      uVar17 = uVar41;
      if (*puVar3 <= uVar41) {
        uVar17 = 0;
      }
      *(uint *)(*plVar4 + (ulong)uVar17 * 0x350 + 0x344) = uVar45;
      uVar45 = uVar45 >> 1;
      uVar17 = uVar41;
      if (*puVar3 <= uVar41) {
        uVar17 = 0;
      }
      uVar41 = uVar41 + 1;
      *(int *)(*plVar4 + (ulong)uVar17 * 0x350 + 0x348) = iVar47;
      iVar47 = iVar47 << 1;
    } while ((iVar18 + uVar33 + iVar38) - 1 != uVar41);
  }
  uVar33 = uVar50;
  uVar41 = uVar49;
LAB_03a86f3c:
  lVar35 = lVar32 + (long)(int)uVar16 * 0x1d80;
  *(uint *)(lVar35 + 0x1d70) = uVar41;
  *(uint *)(lVar35 + 0x1d74) = uVar33;
  *(int *)(lVar35 + 0x1d78) = iVar38;
  puVar28 = PTR_DAT_04bbd510;
  uVar50 = *(uint *)(param_1 + 0x32c);
  if ((int)uVar33 <= (int)*(uint *)(param_1 + 0x32c)) {
    uVar50 = uVar33;
  }
  *(uint *)(lVar35 + 0x1d6c) = uVar50;
  if (*(uint *)(lVar35 + 0x1698) <= uVar50) {
    uVar50 = 0;
  }
  uVar33 = *(uint *)(param_1 + 0x20);
  lVar36 = *(long *)(lVar35 + 0x16a0) + (long)(int)uVar50 * 0x350;
  uVar50 = *(uint *)(lVar36 + 0x340);
  uVar49 = *(uint *)(lVar36 + 0x344);
  lVar52 = *(long *)puVar28;
  local_d8 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_d0 = "model_light_buf";
  lVar36 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar36 == 0) {
    local_7c = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_7c = (int)lVar36 + -1;
  }
  uVar61 = CONCAT44(uVar42,1);
  uVar29 = FUN_03948e10(lVar52,param_2,lVar52 + (long)local_7c * 0x290 + 0x10,&local_d8,0x1a,1,
                        uVar50,uVar49,uVar61,0,1,0,1,0,0,0);
  uVar42 = (undefined4)((ulong)uVar61 >> 0x20);
  FUN_03a81620(lVar35 + 0x2a8,uVar29);
  lVar52 = lVar32 + (long)(int)uVar16 * 0x1d80;
  *(undefined2 *)(lVar52 + 0x5f4) = 1;
  lVar53 = *(long *)PTR_DAT_04bbd510;
  local_d8 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_d0 = "model_depth_buf";
  lVar36 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar36 == 0) {
    local_7c = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_7c = (int)lVar36 + -1;
  }
  uVar61 = CONCAT44(uVar42,1);
  uVar29 = FUN_03948e10(lVar53,param_2,lVar53 + (long)local_7c * 0x290 + 0x10,&local_d8,0x59,1,
                        uVar50,uVar49,uVar61,0,1,0,1,0,0,0);
  FUN_03a81620(lVar52 + 0x948,uVar29);
  uVar42 = (undefined4)((ulong)uVar61 >> 0x20);
  lVar36 = lVar32 + (long)(int)uVar16 * 0x1d80;
  *(undefined2 *)(lVar36 + 0xc94) = 1;
  if ((uVar33 >> 4 & 1) != 0) {
    lVar54 = *(long *)PTR_DAT_04bbd510;
    local_d8 = (long *)(PTR_DAT_04bb2020 + 0x10);
    local_d0 = "model_sss_color_buf";
    lVar53 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar53 == 0) {
      local_7c = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_7c = (int)lVar53 + -1;
    }
    uVar61 = CONCAT44(uVar42,1);
    uVar29 = FUN_03948e10(lVar54,param_2,lVar54 + (long)local_7c * 0x290 + 0x10,&local_d8,0x1d,1,
                          uVar50,uVar49,uVar61,0,1,0,1,0,0,0);
    FUN_03a81620(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x5f8,uVar29);
    *(undefined2 *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x944) = 1;
  }
  lVar53 = lVar32 + (long)(int)uVar16 * 0x1d80;
  plVar4 = (long *)(lVar53 + 0x240);
  *(undefined8 *)(lVar53 + 0x298) = 0;
  *(undefined8 *)(lVar53 + 0x290) = 0;
  *(undefined8 *)(lVar53 + 0x288) = 0;
  *(undefined8 *)(lVar53 + 0x280) = 0;
  *(undefined8 *)(lVar53 + 0x278) = 0;
  *(undefined8 *)(lVar53 + 0x270) = 0;
  *(undefined8 *)(lVar53 + 0x268) = 0;
  *(float *)(lVar53 + 0x248) = (float)uVar50;
  *(float *)(lVar53 + 0x24c) = (float)uVar49;
  *(undefined8 *)(lVar53 + 0x250) = 0;
  *(long *)(lVar53 + 0x260) = lVar53 + 0x400;
  *(float *)(lVar53 + 600) = (float)uVar50;
  *(float *)(lVar53 + 0x25c) = (float)uVar49;
  *(long *)(lVar53 + 0x2a0) = lVar53 + 0xb80;
  if ((uVar33 >> 4 & 1) != 0) {
    *(long *)(lVar53 + 0x268) = lVar32 + (long)(int)uVar16 * 0x1d80 + 0x750;
  }
  (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
  local_d0 = (char *)0x7f7fffff7f7fffff;
  local_c8 = 0xff7fffffff7fffff;
  local_d8 = (long *)(PTR_DAT_04bd0f08 + 0x10);
  local_bc = 0x3f80000000000000;
  local_c0 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_c0 < 6) {
    if ((1 << (ulong)(local_c0 & 0x1f) & 0x39U) == 0) {
      fVar58 = *(float *)(lVar53 + 0x248);
      fVar56 = *(float *)(lVar53 + 0x24c);
    }
    else {
      fVar56 = *(float *)(lVar53 + 0x248);
      fVar58 = *(float *)(lVar53 + 0x24c);
    }
    fVar57 = fVar56;
    fVar60 = 0.0;
    if (fVar56 <= 0.0) {
      fVar57 = 0.0;
      fVar60 = fVar56;
    }
    fVar59 = fVar58;
    fVar56 = 0.0;
    if (fVar58 <= 0.0) {
      fVar59 = 0.0;
      fVar56 = fVar58;
    }
    local_d0 = (char *)CONCAT44(fVar56,fVar60);
    local_c8 = CONCAT44(fVar59,fVar57);
  }
  FUN_038e77e4(&local_d8,param_2,plVar4);
  local_d8 = (long *)0x0;
  local_d0 = (char *)0x3f80000000000000;
  (**(code **)(*plVar4 + 0x28))(0x3f800000,plVar4,param_2,3,&local_d8,0);
  if ((uVar33 >> 4 & 1) != 0) {
    local_d8 = (long *)0x0;
    local_d0 = (char *)0x3f80000000000000;
    (**(code **)PTR_DAT_04bcfd90)(*(undefined8 *)(param_2 + 0xb8),1,&local_d8,0xf);
  }
  puVar30 = *(undefined8 **)(param_1 + 0x38);
  local_c8 = CONCAT44(param_3,(undefined4)local_c8);
  local_c8 = CONCAT71(local_c8._1_7_,*(byte *)(param_1 + 0x20) >> 4) & 0xffffffffffffff01;
  local_d8 = plVar4;
  local_d0 = param_2;
  if (puVar30 != (undefined8 *)0x0) {
    (**(code **)*puVar30)(puVar30,&local_d8);
  }
  puVar28 = PTR_DAT_04bc1010;
  uVar33 = *(uint *)(*(long *)(lVar53 + 0x260) + 0x58);
  if (uVar33 != 0xffffffff) {
    lVar54 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar54 + 0x5c8) >> 3 & 1) == 0) {
      uVar50 = uVar33 - *(ushort *)(lVar54 + 0x3da);
      if (*(uint *)(lVar54 + 0x368) <= uVar50) {
        uVar50 = 0;
      }
      if ((*(uint *)(*(long *)(lVar54 + 0x370) + (long)(int)uVar50 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar33 & 0x3f);
        goto LAB_03a87440;
      }
    }
    if ((*(uint *)(lVar54 + 0x5c8) >> 5 & 1) == 0) {
      uVar39 = 0x112;
      uVar42 = 0x12;
    }
    else {
      uVar39 = 0x111;
      uVar42 = 0x11;
    }
    if ((*(uint *)(lVar54 + 800) & 2) != 0) {
      uVar42 = uVar39;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar42);
    param_2[0x100] = '\0';
    param_2[0x101] = '\0';
    param_2[0x102] = '\0';
    param_2[0x103] = '\0';
    param_2[0x104] = '\0';
    param_2[0x105] = '\0';
    param_2[0x106] = '\0';
    param_2[0x107] = '\0';
  }
LAB_03a87440:
  if (*(int *)(*(long *)(lVar53 + 0x2a0) + 0x58) == -1) {
    lVar54 = *(long *)puVar28;
    if ((*(uint *)(lVar54 + 0x5c8) >> 3 & 1) == 0) {
      uVar33 = 0;
      if (~(uint)*(ushort *)(lVar54 + 0x3da) < *(uint *)(lVar54 + 0x368)) {
        uVar33 = ~(uint)*(ushort *)(lVar54 + 0x3da);
      }
      if ((*(uint *)(*(long *)(lVar54 + 0x370) + (long)(int)uVar33 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        goto LAB_03a874dc;
      }
    }
    if ((*(uint *)(lVar54 + 0x5c8) >> 5 & 1) == 0) {
      uVar39 = 0x112;
      uVar42 = 0x12;
    }
    else {
      uVar39 = 0x111;
      uVar42 = 0x11;
    }
    if ((*(uint *)(lVar54 + 800) & 2) != 0) {
      uVar42 = uVar39;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar42);
    param_2[0x100] = '\0';
    param_2[0x101] = '\0';
    param_2[0x102] = '\0';
    param_2[0x103] = '\0';
    param_2[0x104] = '\0';
    param_2[0x105] = '\0';
    param_2[0x106] = '\0';
    param_2[0x107] = '\0';
  }
LAB_03a874dc:
  puVar3 = (uint *)(lVar35 + 0x1d74);
  plVar4 = (long *)(lVar35 + 0x16a0);
  piVar5 = (int *)(lVar35 + 0x1d78);
  piVar6 = (int *)(lVar35 + 0x1d6c);
  puVar7 = (uint *)(lVar35 + 0x1698);
  uVar33 = *(uint *)(param_1 + 0x20);
  if ((uVar33 >> 4 & 1) == 0) goto LAB_03a875b0;
  uVar33 = *(uint *)(*(long *)(lVar53 + 0x268) + 0x58);
  if (uVar33 != 0xffffffff) {
    lVar35 = *(long *)puVar28;
    if ((*(uint *)(lVar35 + 0x5c8) >> 3 & 1) == 0) {
      uVar50 = uVar33 - *(ushort *)(lVar35 + 0x3da);
      if (*(uint *)(lVar35 + 0x368) <= uVar50) {
        uVar50 = 0;
      }
      if ((*(uint *)(*(long *)(lVar35 + 0x370) + (long)(int)uVar50 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar33 & 0x3f);
        goto LAB_03a875ac;
      }
    }
    if ((*(uint *)(lVar35 + 0x5c8) >> 5 & 1) == 0) {
      uVar39 = 0x112;
      uVar42 = 0x12;
    }
    else {
      uVar39 = 0x111;
      uVar42 = 0x11;
    }
    if ((*(uint *)(lVar35 + 800) & 2) != 0) {
      uVar42 = uVar39;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar42);
    param_2[0x100] = '\0';
    param_2[0x101] = '\0';
    param_2[0x102] = '\0';
    param_2[0x103] = '\0';
    param_2[0x104] = '\0';
    param_2[0x105] = '\0';
    param_2[0x106] = '\0';
    param_2[0x107] = '\0';
  }
LAB_03a875ac:
  uVar33 = *(uint *)(param_1 + 0x20);
LAB_03a875b0:
  uVar42 = (undefined4)((ulong)uVar61 >> 0x20);
  if ((uVar33 & 0x200040) != 0) {
    iVar38 = 0;
    if (*piVar6 + 1U < *puVar7) {
      iVar38 = *piVar6 + 1;
    }
    lVar35 = *plVar4 + (long)iVar38 * 0x350;
    uVar39 = *(undefined4 *)(lVar35 + 0x340);
    uVar19 = *(undefined4 *)(lVar35 + 0x344);
    lVar53 = *(long *)PTR_DAT_04bbd510;
    local_d8 = (long *)(PTR_DAT_04bb2020 + 0x10);
    local_d0 = "no_sss";
    lVar35 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar35 == 0) {
      local_7c = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_7c = (int)lVar35 + -1;
    }
    uVar61 = CONCAT44(uVar42,1);
    uVar29 = FUN_03948e10(lVar53,param_2,lVar53 + (long)local_7c * 0x290 + 0x10,&local_d8,0x1a,1,
                          uVar39,uVar19,uVar61,0,1,0,1,0,0,0);
    FUN_03a81620(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x16c8,uVar29);
    lVar35 = lVar32 + (long)(int)uVar16 * 0x1d80;
    *(undefined2 *)(lVar35 + 0x1a14) = 1;
    FUN_038e4d90(param_1 + 0x60,param_2);
    FUN_03a89890(0x3f800000,param_2,lVar35 + 0x17b8,lVar35 + 0x2b8,1);
  }
  lVar35 = param_1 + 0x60;
  uVar50 = *puVar3;
  uVar33 = *piVar5 + uVar50;
  if (*piVar6 < (int)uVar50) {
    uVar50 = *piVar6 + 1;
  }
  FUN_038e4d90(lVar35,param_2);
  if ((int)uVar50 < (int)uVar33) {
    plVar40 = (long *)(PTR_DAT_04bb2020 + 0x10);
    uVar49 = uVar50;
    do {
      uVar42 = (undefined4)((ulong)uVar61 >> 0x20);
      lVar53 = *plVar4;
      uVar41 = uVar49;
      if (*puVar7 <= uVar49) {
        uVar41 = 0;
      }
      lVar55 = lVar53 + (long)(int)uVar41 * 0x350;
      uVar39 = *(undefined4 *)(lVar55 + 0x340);
      uVar19 = *(undefined4 *)(lVar55 + 0x344);
      lVar48 = *(long *)PTR_DAT_04bbd510;
      local_d0 = "blur_reduce";
      local_d8 = plVar40;
      lVar54 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar54 == 0) {
        local_7c = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_7c = (int)lVar54 + -1;
      }
      uVar61 = CONCAT44(uVar42,1);
      uVar29 = FUN_03948e10(lVar48,param_2,lVar48 + (long)local_7c * 0x290 + 0x10,&local_d8,0x1a,1,
                            uVar39,uVar19,uVar61,0,1,0,1,0,0,0);
      FUN_03a81620(lVar55,uVar29);
      *(undefined2 *)(lVar53 + (long)(int)uVar41 * 0x350 + 0x34c) = 1;
      lVar54 = lVar32 + (long)(int)uVar16 * 0x1d80 + 0x2b8;
      if ((int)uVar50 < (int)uVar49) {
        uVar46 = uVar49 - 1;
        if (*puVar7 <= uVar46) {
          uVar46 = 0;
        }
        lVar54 = *plVar4 + (long)(int)uVar46 * 0x350 + 0x10;
      }
      FUN_03a89890(0x3f800000,param_2,lVar53 + (long)(int)uVar41 * 0x350 + 0xf0,lVar54,1);
      FUN_0071b954(&local_d8,"BlurReduce%d",uVar49);
      uVar49 = uVar49 + 1;
    } while (uVar33 != uVar49);
  }
  uVar33 = *(uint *)(param_1 + 0x20);
  if ((uVar33 >> 3 & 1) == 0) {
    if (*(char *)(lVar52 + 0x5f4) != '\0') {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                   *(undefined8 *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x2b0));
    }
    *(char *)(lVar52 + 0x5f4) = '\0';
    *(undefined1 *)(lVar52 + 0x5f5) = 0;
    *(undefined8 *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x2b0) = 0;
    uVar33 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar33 >> 4 & 1) != 0) {
    uVar33 = *puVar3;
    iVar38 = uVar33 + *piVar5;
    if (*piVar6 < (int)uVar33) {
      uVar33 = *piVar6 + 1;
    }
    iVar38 = iVar38 + *(int *)(param_1 + 0x338) + -1;
    FUN_038e4d90(lVar35,param_2);
    if ((int)uVar33 < iVar38) {
      plVar40 = (long *)(PTR_DAT_04bb2020 + 0x10);
      lVar52 = lVar32 + (long)(int)uVar16 * 0x1d80;
      uVar50 = uVar33;
      do {
        uVar42 = (undefined4)((ulong)uVar61 >> 0x20);
        uVar49 = uVar50;
        if (*puVar7 <= uVar50) {
          uVar49 = 0;
        }
        lVar54 = *(long *)(lVar52 + 0x16b0);
        lVar53 = *plVar4 + (long)(int)uVar49 * 0x350;
        uVar49 = uVar50;
        if (*(uint *)(lVar52 + 0x16a8) <= uVar50) {
          uVar49 = 0;
        }
        uVar39 = *(undefined4 *)(lVar53 + 0x340);
        uVar19 = *(undefined4 *)(lVar53 + 0x344);
        lVar48 = *(long *)PTR_DAT_04bbd510;
        local_d0 = "color_reduce";
        local_d8 = plVar40;
        lVar53 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar53 == 0) {
          local_7c = nn::os::GetCurrentCoreNumber();
        }
        else {
          local_7c = (int)lVar53 + -1;
        }
        uVar61 = CONCAT44(uVar42,1);
        uVar29 = FUN_03948e10(lVar48,param_2,lVar48 + (long)local_7c * 0x290 + 0x10,&local_d8,0x1a,1
                              ,uVar39,uVar19,uVar61,0,1,0,1,0,0,0);
        FUN_03a81620(lVar54 + (long)(int)uVar49 * 0x350,uVar29);
        *(undefined2 *)(lVar54 + (long)(int)uVar49 * 0x350 + 0x34c) = 1;
        lVar53 = lVar52 + 0x608;
        if ((int)uVar33 < (int)uVar50) {
          uVar41 = uVar50 - 1;
          if (*(uint *)(lVar52 + 0x16a8) <= uVar41) {
            uVar41 = 0;
          }
          lVar53 = *(long *)(lVar52 + 0x16b0) + (long)(int)uVar41 * 0x350 + 0x10;
        }
        FUN_03a89890(0x3f800000,param_2,lVar54 + (long)(int)uVar49 * 0x350 + 0xf0,lVar53,0);
        FUN_0071b954(&local_d8,"ColorReduce%d",uVar50);
        uVar50 = uVar50 + 1;
      } while ((int)uVar50 < iVar38);
    }
  }
  uVar42 = (undefined4)((ulong)uVar61 >> 0x20);
  if (0 < *piVar5) {
    uVar33 = 0;
    lVar52 = lVar32 + (long)(int)uVar16 * 0x1d80;
    puVar8 = (uint *)(lVar52 + 0x16b8);
    plVar9 = (long *)(lVar52 + 0x16c0);
    puVar10 = (uint *)(lVar52 + 0x16a8);
    plVar11 = (long *)(lVar52 + 0x16b0);
    puVar30 = (undefined8 *)(lVar52 + 0x1a20);
    puVar12 = (undefined4 *)(lVar52 + 0x1a28);
    puVar13 = (uint *)(lVar52 + 0x1afc);
    puVar14 = (uint *)(lVar52 + 0x1d08);
    pcVar15 = (char *)(lVar52 + 0x1d64);
    plVar40 = (long *)(PTR_DAT_04bb2020 + 0x10);
    do {
      iVar38 = *(int *)(param_1 + 0x338);
      uVar41 = *puVar3 + uVar33;
      uVar46 = uVar41 + iVar38;
      uVar50 = uVar41 + 1;
      uVar49 = uVar50;
      if (1 < iVar38) {
        do {
          uVar42 = (undefined4)((ulong)uVar61 >> 0x20);
          lVar53 = *plVar9;
          uVar45 = uVar49;
          if (*puVar7 <= uVar49) {
            uVar45 = 0;
          }
          lVar54 = *plVar4 + (long)(int)uVar45 * 0x350;
          uVar45 = uVar49;
          if (*puVar8 <= uVar49) {
            uVar45 = 0;
          }
          uVar39 = *(undefined4 *)(lVar54 + 0x340);
          uVar19 = *(undefined4 *)(lVar54 + 0x344);
          lVar48 = *(long *)PTR_DAT_04bbd510;
          local_d0 = "temp_reduce";
          local_d8 = plVar40;
          lVar54 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
          if (lVar54 == 0) {
            local_7c = nn::os::GetCurrentCoreNumber();
          }
          else {
            local_7c = (int)lVar54 + -1;
          }
          uVar61 = CONCAT44(uVar42,1);
          puVar31 = (undefined4 *)
                    FUN_03948e10(lVar48,param_2,lVar48 + (long)local_7c * 0x290 + 0x10,&local_d8,
                                 0x1a,1,uVar39,uVar19,uVar61,0,1,0,1,0,0,0);
          lVar54 = lVar53 + (long)(int)uVar45 * 0x350;
          uVar22 = *(ushort *)(puVar31 + 0x26);
          uVar23 = *(ushort *)((long)puVar31 + 0x32);
          uVar24 = *(ushort *)(puVar31 + 0xc);
          uVar17 = (uint)uVar23;
          if (*(short *)((long)puVar31 + 0x3a) != 3) {
            uVar17 = 1;
          }
          *(undefined8 *)(lVar54 + 8) = puVar31;
          *(bool *)(lVar54 + 0x34e) = uVar22 - 0x59 < 4;
          *(undefined4 *)(lVar54 + 0x10) = *puVar31;
          *(undefined4 *)(lVar54 + 0x14) = puVar31[1];
          *(undefined8 *)(lVar54 + 0x18) = *(undefined8 *)(puVar31 + 2);
          *(undefined8 *)(lVar54 + 0x20) = *(undefined8 *)(puVar31 + 4);
          *(undefined4 *)(lVar54 + 0x28) = puVar31[6];
          *(undefined4 *)(lVar54 + 0x2c) = puVar31[7];
          *(undefined8 *)(lVar54 + 0x30) = *(undefined8 *)(puVar31 + 8);
          *(undefined8 *)(lVar54 + 0x38) = *(undefined8 *)(puVar31 + 10);
          uVar29 = *(undefined8 *)(puVar31 + 0xc);
          uVar43 = *(undefined8 *)(puVar31 + 0xe);
          uVar44 = *(undefined8 *)(puVar31 + 0x10);
          *(undefined8 *)(lVar54 + 0x57) = *(undefined8 *)((long)puVar31 + 0x47);
          *(undefined8 *)(lVar54 + 0x48) = uVar43;
          *(undefined8 *)(lVar54 + 0x50) = uVar44;
          *(undefined8 *)(lVar54 + 0x40) = uVar29;
          FUN_038fd1e0(lVar54 + 0x60);
          FUN_038fd2f0(lVar54 + 0x60,puVar31 + 0x14);
          uVar42 = puVar31[0x26];
          *(undefined8 *)(lVar54 + 0xa0) = *(undefined8 *)(puVar31 + 0x24);
          puVar1 = (uint *)(lVar54 + 0xe4);
          *(undefined4 *)(lVar54 + 0xa8) = uVar42;
          do {
            cVar21 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar27) {
              *puVar1 = *puVar1 | 1;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          lVar48 = lVar53 + (long)(int)uVar45 * 0x350;
          *(undefined2 *)(lVar48 + 0xd4) = 0x101;
          *(undefined1 *)(lVar48 + 0xd6) = 1;
          do {
            cVar21 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar27) {
              *puVar1 = *puVar1 & 0xfffffffb | 4;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          uVar51 = (uint)uVar24;
          if (uVar24 < 2) {
            uVar51 = 1;
          }
          if (uVar17 == uVar23 || uVar17 < uVar23) {
            uVar17 = (uint)uVar23;
          }
          puVar31 = *(undefined4 **)(lVar54 + 8);
          if (*(char *)(lVar54 + 0x34e) == '\0') {
            lVar54 = lVar53 + (long)(int)uVar45 * 0x350;
            *(undefined4 *)(lVar54 + 0x160) = *puVar31;
            cVar21 = *(char *)(lVar54 + 0x216);
            sVar25 = *(short *)(lVar54 + 0x214);
            plVar2 = (long *)(lVar54 + 0x158);
            *(undefined4 *)(lVar54 + 0x164) = puVar31[1];
            *(undefined8 *)(lVar54 + 0x168) = *(undefined8 *)(puVar31 + 2);
            *(undefined8 *)(lVar54 + 0x170) = *(undefined8 *)(puVar31 + 4);
            *(undefined4 *)(lVar54 + 0x178) = puVar31[6];
            *(undefined4 *)(lVar54 + 0x17c) = puVar31[7];
            *(undefined8 *)(lVar54 + 0x180) = *(undefined8 *)(puVar31 + 8);
            *(undefined8 *)(lVar54 + 0x188) = *(undefined8 *)(puVar31 + 10);
            uVar44 = *(undefined8 *)(puVar31 + 0x10);
            uVar29 = *(undefined8 *)(puVar31 + 0xc);
            uVar43 = *(undefined8 *)(puVar31 + 0xe);
            *(undefined8 *)(lVar54 + 0x1a7) = *(undefined8 *)((long)puVar31 + 0x47);
            *(undefined8 *)(lVar54 + 0x198) = uVar43;
            *(undefined8 *)(lVar54 + 0x1a0) = uVar44;
            *(undefined8 *)(lVar54 + 400) = uVar29;
            FUN_038fd1e0(lVar54 + 0x1b0);
            FUN_038fd2f0(lVar54 + 0x1b0,puVar31 + 0x14);
            uVar42 = puVar31[0x26];
            *(undefined8 *)(lVar54 + 0x1f0) = *(undefined8 *)(puVar31 + 0x24);
            puVar1 = (uint *)(lVar54 + 0x210);
            *(undefined4 *)(lVar54 + 0x1f8) = uVar42;
            do {
              cVar26 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar27) {
                *puVar1 = *puVar1 & 0xfffffffb | 4;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
            if (*(short *)(lVar54 + 0x214) != sVar25) {
              do {
                cVar26 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar27) {
                  *puVar1 = *puVar1 & 0xfffffffd | 2;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
              *(short *)(lVar54 + 0x214) = sVar25;
            }
            if (*(char *)(lVar54 + 0x216) != cVar21) {
              do {
                cVar26 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar27) {
                  *puVar1 = *puVar1 | 1;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
              *(char *)(lVar54 + 0x216) = cVar21;
            }
            (**(code **)(*plVar2 + 0x10))(plVar2);
            lVar54 = lVar53 + (long)(int)uVar45 * 0x350;
            *(long **)(lVar54 + 0x110) = plVar2;
            *(undefined8 *)(lVar54 + 0x100) = 0;
            *(float *)(lVar54 + 0xf8) = (float)uVar51;
            *(float *)(lVar54 + 0xfc) = (float)uVar17;
            *(float *)(lVar54 + 0x108) = (float)uVar51;
            *(float *)(lVar54 + 0x10c) = (float)uVar17;
          }
          else {
            lVar54 = lVar53 + (long)(int)uVar45 * 0x350;
            *(undefined4 *)(lVar54 + 0x240) = *puVar31;
            cVar21 = *(char *)(lVar54 + 0x2f6);
            sVar25 = *(short *)(lVar54 + 0x2f4);
            *(undefined4 *)(lVar54 + 0x244) = puVar31[1];
            *(undefined8 *)(lVar54 + 0x248) = *(undefined8 *)(puVar31 + 2);
            *(undefined8 *)(lVar54 + 0x250) = *(undefined8 *)(puVar31 + 4);
            *(undefined4 *)(lVar54 + 600) = puVar31[6];
            *(undefined4 *)(lVar54 + 0x25c) = puVar31[7];
            *(undefined8 *)(lVar54 + 0x260) = *(undefined8 *)(puVar31 + 8);
            *(undefined8 *)(lVar54 + 0x268) = *(undefined8 *)(puVar31 + 10);
            uVar44 = *(undefined8 *)(puVar31 + 0x10);
            uVar29 = *(undefined8 *)(puVar31 + 0xc);
            uVar43 = *(undefined8 *)(puVar31 + 0xe);
            *(undefined8 *)(lVar54 + 0x287) = *(undefined8 *)((long)puVar31 + 0x47);
            *(undefined8 *)(lVar54 + 0x280) = uVar44;
            *(undefined8 *)(lVar54 + 0x278) = uVar43;
            *(undefined8 *)(lVar54 + 0x270) = uVar29;
            FUN_038fd1e0(lVar54 + 0x290);
            FUN_038fd2f0(lVar54 + 0x290,puVar31 + 0x14);
            uVar42 = puVar31[0x26];
            *(undefined8 *)(lVar54 + 0x2d0) = *(undefined8 *)(puVar31 + 0x24);
            puVar1 = (uint *)(lVar54 + 0x2f0);
            *(undefined4 *)(lVar54 + 0x2d8) = uVar42;
            do {
              cVar26 = '\x01';
              bVar27 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar27) {
                *puVar1 = *puVar1 & 0xfffffffb | 4;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
            if (*(short *)(lVar54 + 0x2f4) != sVar25) {
              do {
                cVar26 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar27) {
                  *puVar1 = *puVar1 & 0xfffffffd | 2;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
              *(short *)(lVar54 + 0x2f4) = sVar25;
            }
            if (*(char *)(lVar54 + 0x2f6) != cVar21) {
              do {
                cVar26 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar27) {
                  *puVar1 = *puVar1 | 1;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
              *(char *)(lVar54 + 0x2f6) = cVar21;
            }
            (**(code **)(*(long *)(lVar54 + 0x238) + 0x10))((long *)(lVar54 + 0x238));
          }
          lVar54 = lVar53 + (long)(int)uVar45 * 0x350;
          *(uint *)(lVar54 + 0x340) = uVar51;
          *(uint *)(lVar54 + 0x344) = uVar17;
          if (*(uint *)(lVar54 + 0x330) < 6) {
            if ((1 << (ulong)(*(uint *)(lVar54 + 0x330) & 0x1f) & 0x39U) == 0) {
              fVar58 = *(float *)(lVar54 + 0xf8);
              fVar56 = *(float *)(lVar54 + 0xfc);
            }
            else {
              fVar56 = *(float *)(lVar54 + 0xf8);
              fVar58 = *(float *)(lVar54 + 0xfc);
            }
            fVar57 = fVar56;
            fVar60 = 0.0;
            if (fVar56 <= 0.0) {
              fVar57 = 0.0;
              fVar60 = fVar56;
            }
            *(float *)(lVar54 + 0x328) = fVar57;
            fVar57 = fVar58;
            fVar56 = 0.0;
            if (fVar58 <= 0.0) {
              fVar57 = 0.0;
              fVar56 = fVar58;
            }
            *(float *)(lVar54 + 800) = fVar60;
            *(float *)(lVar54 + 0x324) = fVar56;
            *(float *)(lVar54 + 0x32c) = fVar57;
          }
          *(undefined2 *)(lVar53 + (long)(int)uVar45 * 0x350 + 0x34c) = 1;
          uVar45 = uVar49 - 1;
          plVar2 = plVar9;
          puVar1 = puVar8;
          if ((int)uVar49 <= (int)uVar50) {
            plVar2 = plVar4;
            puVar1 = puVar7;
          }
          if (*puVar1 <= uVar45) {
            uVar45 = 0;
          }
          FUN_03a89890(0x3f800000,param_2,lVar54 + 0xf0,*plVar2 + (long)(int)uVar45 * 0x350 + 0x10,0
                      );
          uVar49 = uVar49 + 1;
        } while ((int)uVar49 < (int)uVar46);
      }
      uVar49 = uVar33;
      if (*(uint *)(lVar52 + 0x1688) <= uVar33) {
        uVar49 = 0;
      }
      uVar37 = (ulong)uVar49;
      if (iVar38 < 1) {
        FUN_0071b954(&local_d8,"SSS Buffer %d");
      }
      else {
        lVar53 = *(long *)(lVar52 + 0x1690);
        uVar49 = uVar46;
        do {
          uVar42 = (undefined4)((ulong)uVar61 >> 0x20);
          uVar45 = *(uint *)(param_1 + 0x20);
          uVar17 = uVar49 - 1;
          iVar34 = uVar17 - uVar41;
          if (iVar34 == 0) {
            uVar51 = uVar41;
            if (*puVar7 <= uVar41) {
              uVar51 = 0;
            }
            lVar54 = *plVar4 + (long)(int)uVar51 * 0x350;
            lVar48 = lVar54;
            if ((uVar45 >> 0x14 & 1) != 0) goto LAB_03a885d4;
            if ((uVar45 >> 10 & 1) == 0) goto LAB_03a88488;
joined_r0x03a885bc:
            if ((uVar45 >> 0xb & 1) != 0) {
              FUN_038e4d90(lVar35,param_2);
              FUN_03a89890(0x3f800000,param_2,lVar48 + 0xf0,lVar48 + 0x10,1);
            }
            if (1 < iVar34) {
              iVar34 = 2;
            }
            lVar55 = lVar54 + 0xf0;
            if (uVar17 == uVar41) {
              FUN_038e4d90(lVar35,param_2);
              uVar49 = uVar41;
              if (*puVar10 <= uVar41) {
                uVar49 = 0;
              }
              FUN_03a8af10(param_2,iVar34,lVar55,lVar48 + 0x10,
                           *plVar11 + (long)(int)uVar49 * 0x350 + 0x10);
              *(long *)(lVar53 + uVar37 * 8) = lVar48;
            }
            else {
              FUN_038e4d90(param_1 + 0xd4,param_2);
              uVar49 = uVar17;
              if (*puVar10 <= uVar17) {
                uVar49 = 0;
              }
              FUN_03a8af10(param_2,iVar34,lVar55,lVar48 + 0x10,
                           *plVar11 + (long)(int)uVar49 * 0x350 + 0x10);
              if ((*(byte *)(param_1 + 0x22) >> 6 & 1) != 0) {
                FUN_038e4d90(lVar35,param_2);
LAB_03a886c4:
                lVar54 = lVar54 + 0x10;
                uVar29 = 1;
                fVar56 = 1.0;
                goto LAB_03a88bc4;
              }
            }
          }
          else {
            uVar20 = *puVar8;
            lVar54 = *plVar9;
            uVar51 = uVar17;
            if (uVar20 <= uVar17) {
              uVar51 = 0;
            }
            lVar48 = lVar54 + (long)(int)uVar51 * 0x350;
            if ((uVar45 >> 0x14 & 1) == 0) {
              if ((uVar45 >> 10 & 1) != 0) {
                uVar49 = uVar49 - 2;
                if (uVar17 == uVar50) {
                  if (*puVar7 <= uVar49) {
                    uVar49 = 0;
                  }
                  lVar54 = *plVar4 + (long)(int)uVar49 * 0x350;
                }
                else {
                  if (uVar20 <= uVar49) {
                    uVar49 = 0;
                  }
                  lVar54 = lVar54 + (long)(int)uVar49 * 0x350;
                }
                goto joined_r0x03a885bc;
              }
LAB_03a88488:
              uVar39 = *(undefined4 *)(lVar48 + 0x340);
              local_d8 = (long *)(PTR_DAT_04bb2020 + 0x10);
              uVar19 = *(undefined4 *)(lVar48 + 0x344);
              lVar55 = *(long *)PTR_DAT_04bbd510;
              local_d0 = "blur_temp";
              lVar54 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
              if (lVar54 == 0) {
                local_7c = nn::os::GetCurrentCoreNumber();
              }
              else {
                local_7c = (int)lVar54 + -1;
              }
              uVar61 = CONCAT44(uVar42,1);
              puVar31 = (undefined4 *)
                        FUN_03948e10(lVar55,param_2,lVar55 + (long)local_7c * 0x290 + 0x10,&local_d8
                                     ,0x1a,1,uVar39,uVar19,uVar61,0,1,0,1,0,0,0);
              uVar22 = *(ushort *)(puVar31 + 0x26);
              uVar23 = *(ushort *)((long)puVar31 + 0x32);
              uVar24 = *(ushort *)(puVar31 + 0xc);
              uVar45 = (uint)uVar23;
              if (*(short *)((long)puVar31 + 0x3a) != 3) {
                uVar45 = 1;
              }
              *puVar30 = puVar31;
              *(char *)(lVar52 + 0x1d66) = uVar22 - 0x59 < 4;
              *puVar12 = *puVar31;
              *(undefined4 *)(lVar52 + 0x1a2c) = puVar31[1];
              *(undefined8 *)(lVar52 + 0x1a30) = *(undefined8 *)(puVar31 + 2);
              *(undefined8 *)(lVar52 + 0x1a38) = *(undefined8 *)(puVar31 + 4);
              *(undefined4 *)(lVar52 + 0x1a40) = puVar31[6];
              *(undefined4 *)(lVar52 + 0x1a44) = puVar31[7];
              *(undefined8 *)(lVar52 + 0x1a48) = *(undefined8 *)(puVar31 + 8);
              *(undefined8 *)(lVar52 + 0x1a50) = *(undefined8 *)(puVar31 + 10);
              uVar29 = *(undefined8 *)(puVar31 + 0xc);
              uVar43 = *(undefined8 *)(puVar31 + 0xe);
              uVar44 = *(undefined8 *)(puVar31 + 0x10);
              *(undefined8 *)(lVar52 + 0x1a6f) = *(undefined8 *)((long)puVar31 + 0x47);
              *(undefined8 *)(lVar52 + 0x1a60) = uVar43;
              *(undefined8 *)(lVar52 + 0x1a68) = uVar44;
              *(undefined8 *)(lVar52 + 0x1a58) = uVar29;
              FUN_038fd1e0(lVar52 + 0x1a78);
              FUN_038fd2f0(lVar52 + 0x1a78,puVar31 + 0x14);
              uVar29 = *(undefined8 *)(puVar31 + 0x24);
              *(undefined4 *)(lVar52 + 0x1ac0) = puVar31[0x26];
              *(undefined8 *)(lVar52 + 0x1ab8) = uVar29;
              do {
                cVar21 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(puVar13,0x10);
                if (bVar27) {
                  *puVar13 = *puVar13 | 1;
                  cVar21 = ExclusiveMonitorsStatus();
                }
              } while (cVar21 != '\0');
              *(undefined1 *)(lVar52 + 0x1aec) = 1;
              *(undefined1 *)(lVar52 + 0x1aed) = 1;
              *(undefined1 *)(lVar52 + 0x1aee) = 1;
              do {
                cVar21 = '\x01';
                bVar27 = (bool)ExclusiveMonitorPass(puVar13,0x10);
                if (bVar27) {
                  *puVar13 = *puVar13 & 0xfffffffb | 4;
                  cVar21 = ExclusiveMonitorsStatus();
                }
              } while (cVar21 != '\0');
              uVar51 = (uint)uVar24;
              if (uVar24 < 2) {
                uVar51 = 1;
              }
              if (uVar45 == uVar23 || uVar45 < uVar23) {
                uVar45 = (uint)uVar23;
              }
              puVar31 = (undefined4 *)*puVar30;
              if (*(char *)(lVar52 + 0x1d66) == '\0') {
                FUN_01560750(lVar52 + 0x1b70,puVar31,*(undefined1 *)(lVar52 + 0x1c2e),
                             *(undefined2 *)(lVar52 + 0x1c2c));
                *(undefined4 *)(lVar52 + 0x1b18) = 0;
                *(undefined4 *)(lVar52 + 0x1b1c) = 0;
                *(float *)(lVar52 + 0x1b10) = (float)uVar51;
                *(float *)(lVar52 + 0x1b14) = (float)uVar45;
                *(float *)(lVar52 + 0x1b20) = (float)uVar51;
                *(float *)(lVar52 + 0x1b24) = (float)uVar45;
                *(long *)(lVar52 + 0x1b28) = lVar52 + 0x1b70;
              }
              else {
                *(undefined4 *)(lVar52 + 0x1c58) = *puVar31;
                cVar21 = *(char *)(lVar52 + 0x1d0e);
                *(undefined4 *)(lVar52 + 0x1c5c) = puVar31[1];
                *(undefined8 *)(lVar52 + 0x1c60) = *(undefined8 *)(puVar31 + 2);
                *(undefined8 *)(lVar52 + 0x1c68) = *(undefined8 *)(puVar31 + 4);
                *(undefined4 *)(lVar52 + 0x1c70) = puVar31[6];
                *(undefined4 *)(lVar52 + 0x1c74) = puVar31[7];
                *(undefined8 *)(lVar52 + 0x1c78) = *(undefined8 *)(puVar31 + 8);
                *(undefined8 *)(lVar52 + 0x1c80) = *(undefined8 *)(puVar31 + 10);
                uVar29 = *(undefined8 *)(puVar31 + 0xc);
                uVar43 = *(undefined8 *)(puVar31 + 0xe);
                uVar44 = *(undefined8 *)(puVar31 + 0x10);
                *(undefined8 *)(lVar52 + 0x1c9f) = *(undefined8 *)((long)puVar31 + 0x47);
                *(undefined8 *)(lVar52 + 0x1c90) = uVar43;
                *(undefined8 *)(lVar52 + 0x1c98) = uVar44;
                *(undefined8 *)(lVar52 + 0x1c88) = uVar29;
                sVar25 = *(short *)(lVar52 + 0x1d0c);
                FUN_038fd1e0(lVar52 + 0x1ca8);
                FUN_038fd2f0(lVar52 + 0x1ca8,puVar31 + 0x14);
                uVar29 = *(undefined8 *)(puVar31 + 0x24);
                *(undefined4 *)(lVar52 + 0x1cf0) = puVar31[0x26];
                *(undefined8 *)(lVar52 + 0x1ce8) = uVar29;
                do {
                  cVar26 = '\x01';
                  bVar27 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                  if (bVar27) {
                    *puVar14 = *puVar14 & 0xfffffffb | 4;
                    cVar26 = ExclusiveMonitorsStatus();
                  }
                } while (cVar26 != '\0');
                if (*(short *)(lVar52 + 0x1d0c) != sVar25) {
                  do {
                    cVar26 = '\x01';
                    bVar27 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                    if (bVar27) {
                      *puVar14 = *puVar14 & 0xfffffffd | 2;
                      cVar26 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar26 != '\0');
                  *(short *)(lVar52 + 0x1d0c) = sVar25;
                }
                if (*(char *)(lVar52 + 0x1d0e) != cVar21) {
                  do {
                    cVar26 = '\x01';
                    bVar27 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                    if (bVar27) {
                      *puVar14 = *puVar14 | 1;
                      cVar26 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar26 != '\0');
                  *(char *)(lVar52 + 0x1d0e) = cVar21;
                }
                (**(code **)(*(long *)(lVar52 + 0x1c50) + 0x10))();
              }
              *(uint *)(lVar52 + 0x1d58) = uVar51;
              *(uint *)(lVar52 + 0x1d5c) = uVar45;
              if (*(uint *)(lVar52 + 0x1d48) < 6) {
                if ((1 << (ulong)(*(uint *)(lVar52 + 0x1d48) & 0x1f) & 0x39U) == 0) {
                  fVar58 = *(float *)(lVar52 + 0x1b10);
                  fVar56 = *(float *)(lVar52 + 0x1b14);
                }
                else {
                  fVar56 = *(float *)(lVar52 + 0x1b10);
                  fVar58 = *(float *)(lVar52 + 0x1b14);
                }
                fVar57 = fVar56;
                fVar60 = 0.0;
                if (fVar56 <= 0.0) {
                  fVar57 = 0.0;
                  fVar60 = fVar56;
                }
                *(float *)(lVar52 + 0x1d40) = fVar57;
                fVar57 = fVar58;
                fVar56 = 0.0;
                if (fVar58 <= 0.0) {
                  fVar57 = 0.0;
                  fVar56 = fVar58;
                }
                *(float *)(lVar52 + 0x1d38) = fVar60;
                *(float *)(lVar52 + 0x1d3c) = fVar56;
                *(float *)(lVar52 + 0x1d44) = fVar57;
              }
              *pcVar15 = '\x01';
              *(undefined1 *)(lVar52 + 0x1d65) = 0;
              FUN_038e4d90(lVar35,param_2);
              lVar54 = lVar48 + 0x10;
              uVar45 = uVar17;
              if (*puVar10 <= uVar17) {
                uVar45 = 0;
              }
              FUN_03a8b370(param_1,param_2,param_3,lVar52 + 0x1b08,lVar54,lVar54,
                           *plVar11 + (long)(int)uVar45 * 0x350 + 0x10,0);
              uVar45 = uVar17;
              if (*puVar10 <= uVar17) {
                uVar45 = 0;
              }
              FUN_03a8b370(param_1,param_2,param_3,lVar48 + 0xf0,puVar12,puVar12,
                           *plVar11 + (long)(int)uVar45 * 0x350 + 0x10,1);
              if (*pcVar15 != '\0') {
                FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*puVar30);
              }
              *puVar30 = 0;
              *pcVar15 = '\0';
              *(undefined1 *)(lVar52 + 0x1d65) = 0;
              if (uVar17 == uVar41) {
                *(long *)(lVar53 + uVar37 * 8) = lVar48;
                goto LAB_03a88380;
              }
              uVar45 = uVar49 - 2;
              puVar1 = puVar7;
              if (uVar17 != uVar50) {
                puVar1 = puVar8;
              }
              plVar2 = plVar4;
              if (uVar17 != uVar50) {
                plVar2 = plVar9;
              }
              lVar48 = *plVar2;
              if (*puVar1 <= uVar45) {
                uVar45 = 0;
              }
              FUN_038e4d90(param_1 + 0x230,param_2);
              uVar29 = 0;
              lVar55 = lVar48 + (long)(int)uVar45 * 0x350 + 0xf0;
              fVar56 = 1.0 / (float)(int)(uVar49 - uVar41);
LAB_03a88bc4:
              FUN_03a89890(fVar56,param_2,lVar55,lVar54,uVar29);
            }
            else {
              uVar49 = uVar49 - 2;
              if (uVar17 == uVar50) {
                if (*puVar7 <= uVar49) {
                  uVar49 = 0;
                }
                lVar54 = *plVar4 + (long)(int)uVar49 * 0x350;
              }
              else {
                if (uVar20 <= uVar49) {
                  uVar49 = 0;
                }
                lVar54 = lVar54 + (long)(int)uVar49 * 0x350;
              }
LAB_03a885d4:
              if (1 < iVar34) {
                iVar34 = 2;
              }
              lVar55 = param_1 + (long)iVar34 * 0x10;
              uVar43 = *(undefined8 *)(lVar55 + 0x340);
              uVar29 = *(undefined8 *)(lVar55 + 0x348);
              local_d8._0_4_ = (float)uVar43;
              local_d8._4_4_ = (float)((ulong)uVar43 >> 0x20);
              if (iVar34 == 0) {
                fVar56 = *(float *)(param_1 + 0x340) + *(float *)(param_1 + 0x350) +
                         *(float *)(param_1 + 0x360);
                fVar60 = *(float *)(param_1 + 0x344) + *(float *)(param_1 + 0x354) +
                         *(float *)(param_1 + 0x364);
                fVar58 = *(float *)(param_1 + 0x348) + *(float *)(param_1 + 0x358) +
                         *(float *)(param_1 + 0x368);
              }
              else {
                lVar55 = param_1 + (long)iVar34 * 0x10;
                fVar56 = *(float *)(lVar55 + 0x330);
                fVar60 = *(float *)(lVar55 + 0x334);
                fVar58 = *(float *)(lVar55 + 0x338);
              }
              local_d0._0_4_ = (float)uVar29;
              lVar55 = lVar54 + 0xf0;
              local_d8 = (long *)CONCAT44(local_d8._4_4_ / fVar60,(float)local_d8 / fVar56);
              local_d0 = (char *)CONCAT44((int)((ulong)uVar29 >> 0x20),(float)local_d0 / fVar58);
              if (uVar17 == uVar41) {
                FUN_038e4d90(lVar35,param_2);
                FUN_03a8aa10(param_2,lVar55,lVar48 + 0x10,&local_d8);
                *(long *)(lVar53 + uVar37 * 8) = lVar48;
              }
              else {
                FUN_038e4d90(param_1 + 0xd4,param_2);
                FUN_03a8aa10(param_2,lVar55,lVar48 + 0x10,&local_d8);
                if ((*(byte *)(param_1 + 0x22) >> 6 & 1) != 0) {
                  FUN_038e4d90(lVar35,param_2);
                  goto LAB_03a886c4;
                }
              }
            }
          }
LAB_03a88380:
          uVar49 = uVar17;
        } while ((int)uVar41 < (int)uVar17);
        FUN_0071b954(&local_d8,"SSS Buffer %d",uVar33);
        if (1 < iVar38) {
          do {
            lVar53 = *plVar9;
            uVar49 = uVar50;
            if (*puVar8 <= uVar50) {
              uVar49 = 0;
            }
            lVar54 = lVar53 + (long)(int)uVar49 * 0x350;
            if (*(char *)(lVar54 + 0x34c) != '\0') {
              FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                           *(undefined8 *)(lVar53 + (long)(int)uVar49 * 0x350 + 8));
            }
            lVar53 = lVar53 + (long)(int)uVar49 * 0x350;
            uVar50 = uVar50 + 1;
            *(undefined1 *)(lVar54 + 0x34c) = 0;
            *(undefined8 *)(lVar53 + 8) = 0;
            *(undefined1 *)(lVar53 + 0x34d) = 0;
          } while ((int)uVar50 < (int)uVar46);
        }
      }
      uVar42 = (undefined4)((ulong)uVar61 >> 0x20);
      uVar33 = uVar33 + 1;
    } while ((int)uVar33 < *piVar5);
  }
  lVar52 = lVar32 + (long)(int)uVar16 * 0x1d80;
  lVar53 = *(long *)(lVar52 + 0x16b0);
  puVar3 = (uint *)(lVar52 + 0x16a8);
  plVar40 = (long *)(lVar52 + 0x16b0);
  if (*(char *)(lVar53 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + 8));
  }
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined2 *)(lVar53 + 0x34c) = 0;
  lVar53 = *plVar40;
  uVar37 = (ulong)(1 < *puVar3);
  lVar52 = lVar53 + uVar37 * 0x350;
  if (*(char *)(lVar52 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + uVar37 * 0x350 + 8));
  }
  *(undefined1 *)(lVar52 + 0x34c) = 0;
  lVar53 = lVar53 + uVar37 * 0x350;
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined1 *)(lVar53 + 0x34d) = 0;
  lVar53 = *plVar40;
  uVar37 = (ulong)(2 < *puVar3);
  lVar52 = lVar53 + uVar37 * 0x6a0;
  if (*(char *)(lVar52 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + uVar37 * 0x6a0 + 8));
  }
  *(undefined1 *)(lVar52 + 0x34c) = 0;
  lVar53 = lVar53 + uVar37 * 0x6a0;
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined1 *)(lVar53 + 0x34d) = 0;
  lVar53 = *plVar40;
  lVar52 = 3;
  if (*puVar3 < 4) {
    lVar52 = 0;
  }
  lVar54 = lVar53 + lVar52 * 0x350;
  if (*(char *)(lVar54 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + lVar52 * 0x350 + 8));
  }
  *(undefined1 *)(lVar54 + 0x34c) = 0;
  lVar53 = lVar53 + lVar52 * 0x350;
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined1 *)(lVar53 + 0x34d) = 0;
  lVar53 = *plVar40;
  uVar37 = (ulong)(4 < *puVar3);
  lVar52 = lVar53 + uVar37 * 0xd40;
  if (*(char *)(lVar52 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + uVar37 * 0xd40 + 8));
  }
  *(undefined1 *)(lVar52 + 0x34c) = 0;
  lVar53 = lVar53 + uVar37 * 0xd40;
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined1 *)(lVar53 + 0x34d) = 0;
  lVar53 = *plVar40;
  lVar52 = 5;
  if (*puVar3 < 6) {
    lVar52 = 0;
  }
  lVar54 = lVar53 + lVar52 * 0x350;
  if (*(char *)(lVar54 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + lVar52 * 0x350 + 8));
  }
  *(undefined1 *)(lVar54 + 0x34c) = 0;
  lVar53 = lVar53 + lVar52 * 0x350;
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined1 *)(lVar53 + 0x34d) = 0;
  lVar53 = *plVar40;
  lVar52 = 6;
  if (*puVar3 < 7) {
    lVar52 = 0;
  }
  lVar54 = lVar53 + lVar52 * 0x350;
  if (*(char *)(lVar54 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + lVar52 * 0x350 + 8));
  }
  *(undefined1 *)(lVar54 + 0x34c) = 0;
  lVar53 = lVar53 + lVar52 * 0x350;
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined1 *)(lVar53 + 0x34d) = 0;
  lVar53 = *plVar40;
  lVar52 = 7;
  if (*puVar3 < 8) {
    lVar52 = 0;
  }
  lVar54 = lVar53 + lVar52 * 0x350;
  if (*(char *)(lVar54 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + lVar52 * 0x350 + 8));
  }
  *(undefined1 *)(lVar54 + 0x34c) = 0;
  lVar53 = lVar53 + lVar52 * 0x350;
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined1 *)(lVar53 + 0x34d) = 0;
  lVar53 = *plVar40;
  uVar37 = (ulong)(8 < *puVar3);
  lVar52 = lVar53 + uVar37 * 0x1a80;
  if (*(char *)(lVar52 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + uVar37 * 0x1a80 + 8));
  }
  *(undefined1 *)(lVar52 + 0x34c) = 0;
  lVar53 = lVar53 + uVar37 * 0x1a80;
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined1 *)(lVar53 + 0x34d) = 0;
  lVar53 = *plVar40;
  lVar52 = 9;
  if (*puVar3 < 10) {
    lVar52 = 0;
  }
  lVar54 = lVar53 + lVar52 * 0x350;
  if (*(char *)(lVar54 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar53 + lVar52 * 0x350 + 8));
  }
  *(undefined1 *)(lVar54 + 0x34c) = 0;
  lVar53 = lVar53 + lVar52 * 0x350;
  *(undefined8 *)(lVar53 + 8) = 0;
  *(undefined1 *)(lVar53 + 0x34d) = 0;
  if ((*(byte *)(param_1 + 0x20) >> 5 & 1) != 0) {
    lVar53 = lVar32 + (long)(int)uVar16 * 0x1d80;
    uVar39 = *(undefined4 *)(**(long **)(lVar53 + 0x1690) + 0x340);
    uVar19 = *(undefined4 *)(**(long **)(lVar53 + 0x1690) + 0x344);
    lVar54 = *(long *)PTR_DAT_04bbd510;
    local_d8 = (long *)(PTR_DAT_04bb2020 + 0x10);
    local_d0 = "merged sss";
    lVar52 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar52 == 0) {
      local_7c = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_7c = (int)lVar52 + -1;
    }
    uVar29 = FUN_03948e10(lVar54,param_2,lVar54 + (long)local_7c * 0x290 + 0x10,&local_d8,0x1a,1,
                          uVar39,uVar19,CONCAT44(uVar42,1),0,1,0,1,0,0,0);
    FUN_03a81620(lVar53 + 0xfe8,uVar29);
    lVar52 = lVar32 + (long)(int)uVar16 * 0x1d80;
    *(undefined2 *)(lVar52 + 0x1334) = 1;
    FUN_038e4d90(lVar35,param_2);
    plVar40 = *(long **)(lVar53 + 0x1690);
    if ((*(byte *)(param_1 + 0x20) >> 6 & 1) == 0) {
      lVar54 = lVar32 + (long)(int)uVar16 * 0x1d80;
      lVar48 = 0;
    }
    else {
      lVar54 = lVar32 + (long)(int)uVar16 * 0x1d80;
      lVar48 = lVar54 + 0x16d8;
    }
    lVar54 = lVar54 + 0x958;
    FUN_03a8bdc0(param_1,param_2,param_3,lVar52 + 0x10d8,
                 plVar40[(ulong)(2 < *(uint *)(lVar53 + 0x1688)) * 2] + 0x10,
                 plVar40[1 < *(uint *)(lVar53 + 0x1688)] + 0x10,*plVar40 + 0x10,lVar48,lVar54);
    uVar42 = (undefined4)((ulong)lVar54 >> 0x20);
  }
  if (*(char *)(lVar36 + 0xc94) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                 *(undefined8 *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x950));
  }
  *(undefined1 *)(lVar36 + 0xc95) = 0;
  lVar52 = lVar32 + (long)(int)uVar16 * 0x1d80;
  *(char *)(lVar36 + 0xc94) = '\0';
  *(undefined8 *)(lVar52 + 0x950) = 0;
  if (*(char *)(lVar52 + 0x944) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                 *(undefined8 *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x600));
  }
  *(undefined1 *)(lVar52 + 0x944) = 0;
  lVar36 = lVar32 + (long)(int)uVar16 * 0x1d80;
  *(undefined8 *)(lVar36 + 0x600) = 0;
  *(undefined1 *)(lVar36 + 0x945) = 0;
  lVar36 = *plVar4;
  if (*(char *)(lVar36 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar36 + 8));
  }
  *(undefined8 *)(lVar36 + 8) = 0;
  *(undefined2 *)(lVar36 + 0x34c) = 0;
  lVar52 = *plVar4;
  uVar37 = (ulong)(1 < *puVar7);
  lVar36 = lVar52 + uVar37 * 0x350;
  if (*(char *)(lVar36 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar52 + uVar37 * 0x350 + 8));
  }
  *(undefined1 *)(lVar36 + 0x34c) = 0;
  lVar52 = lVar52 + uVar37 * 0x350;
  *(undefined8 *)(lVar52 + 8) = 0;
  *(undefined1 *)(lVar52 + 0x34d) = 0;
  lVar52 = *plVar4;
  uVar37 = (ulong)(2 < *puVar7);
  lVar36 = lVar52 + uVar37 * 0x6a0;
  if (*(char *)(lVar36 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar52 + uVar37 * 0x6a0 + 8));
  }
  *(undefined1 *)(lVar36 + 0x34c) = 0;
  lVar52 = lVar52 + uVar37 * 0x6a0;
  *(undefined8 *)(lVar52 + 8) = 0;
  *(undefined1 *)(lVar52 + 0x34d) = 0;
  lVar52 = *plVar4;
  lVar36 = 3;
  if (*puVar7 < 4) {
    lVar36 = 0;
  }
  lVar53 = lVar52 + lVar36 * 0x350;
  if (*(char *)(lVar53 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar52 + lVar36 * 0x350 + 8));
  }
  *(undefined1 *)(lVar53 + 0x34c) = 0;
  lVar52 = lVar52 + lVar36 * 0x350;
  *(undefined8 *)(lVar52 + 8) = 0;
  *(undefined1 *)(lVar52 + 0x34d) = 0;
  lVar52 = *plVar4;
  uVar37 = (ulong)(4 < *puVar7);
  lVar36 = lVar52 + uVar37 * 0xd40;
  if (*(char *)(lVar36 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar52 + uVar37 * 0xd40 + 8));
  }
  *(undefined1 *)(lVar36 + 0x34c) = 0;
  lVar52 = lVar52 + uVar37 * 0xd40;
  *(undefined8 *)(lVar52 + 8) = 0;
  *(undefined1 *)(lVar52 + 0x34d) = 0;
  lVar52 = *plVar4;
  lVar36 = 5;
  if (*puVar7 < 6) {
    lVar36 = 0;
  }
  lVar53 = lVar52 + lVar36 * 0x350;
  if (*(char *)(lVar53 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar52 + lVar36 * 0x350 + 8));
  }
  *(undefined1 *)(lVar53 + 0x34c) = 0;
  lVar52 = lVar52 + lVar36 * 0x350;
  *(undefined8 *)(lVar52 + 8) = 0;
  *(undefined1 *)(lVar52 + 0x34d) = 0;
  lVar52 = *plVar4;
  lVar36 = 6;
  if (*puVar7 < 7) {
    lVar36 = 0;
  }
  lVar53 = lVar52 + lVar36 * 0x350;
  if (*(char *)(lVar53 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar52 + lVar36 * 0x350 + 8));
  }
  *(undefined1 *)(lVar53 + 0x34c) = 0;
  lVar52 = lVar52 + lVar36 * 0x350;
  *(undefined8 *)(lVar52 + 8) = 0;
  *(undefined1 *)(lVar52 + 0x34d) = 0;
  lVar52 = *plVar4;
  lVar36 = 7;
  if (*puVar7 < 8) {
    lVar36 = 0;
  }
  lVar53 = lVar52 + lVar36 * 0x350;
  if (*(char *)(lVar53 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar52 + lVar36 * 0x350 + 8));
  }
  *(undefined1 *)(lVar53 + 0x34c) = 0;
  lVar52 = lVar52 + lVar36 * 0x350;
  *(undefined8 *)(lVar52 + 8) = 0;
  *(undefined1 *)(lVar52 + 0x34d) = 0;
  lVar52 = *plVar4;
  uVar37 = (ulong)(8 < *puVar7);
  lVar36 = lVar52 + uVar37 * 0x1a80;
  if (*(char *)(lVar36 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar52 + uVar37 * 0x1a80 + 8));
  }
  *(undefined1 *)(lVar36 + 0x34c) = 0;
  lVar52 = lVar52 + uVar37 * 0x1a80;
  *(undefined8 *)(lVar52 + 8) = 0;
  *(undefined1 *)(lVar52 + 0x34d) = 0;
  lVar52 = *plVar4;
  lVar36 = 9;
  if (*puVar7 < 10) {
    lVar36 = 0;
  }
  lVar53 = lVar52 + lVar36 * 0x350;
  if (*(char *)(lVar53 + 0x34c) != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar52 + lVar36 * 0x350 + 8));
  }
  *(undefined1 *)(lVar53 + 0x34c) = 0;
  lVar52 = lVar52 + lVar36 * 0x350;
  *(undefined8 *)(lVar52 + 8) = 0;
  *(undefined1 *)(lVar52 + 0x34d) = 0;
  uVar33 = *(uint *)(param_1 + 0x20);
  if ((uVar33 >> 7 & 1) != 0) {
    if ((uVar33 >> 0x15 & 1) == 0) {
      lVar36 = lVar32 + (long)(int)uVar16 * 0x1d80;
      iVar38 = *(int *)(lVar36 + 0x1328);
      if ((uVar33 >> 8 & 1) == 0) {
        iVar34 = *(int *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x132c);
        lVar52 = *(long *)PTR_DAT_04bbd510;
      }
      else {
        iVar38 = iVar38 << 1;
        lVar52 = *(long *)PTR_DAT_04bbd510;
        iVar34 = *(int *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x132c) << 1;
      }
      local_d0 = "expand sss";
      local_d8 = (long *)(PTR_DAT_04bb2020 + 0x10);
      lVar53 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar53 == 0) {
        local_7c = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_7c = (int)lVar53 + -1;
      }
      uVar29 = FUN_03948e10(lVar52,param_2,lVar52 + (long)local_7c * 0x290 + 0x10,&local_d8,0x1a,1,
                            iVar38,iVar34,CONCAT44(uVar42,1),0,1,0,1,0,0,0);
      FUN_03a81620(lVar36 + 0xc98,uVar29);
      lVar36 = lVar32 + (long)(int)uVar16 * 0x1d80;
      *(undefined2 *)(lVar36 + 0xfe4) = 1;
      FUN_038e4d90(lVar35,param_2);
      FUN_03a89890(0x3f800000,param_2,lVar36 + 0xd88,lVar36 + 0xff8,1);
      pcVar15 = (char *)(lVar36 + 0x1334);
      cVar21 = *pcVar15;
    }
    else {
      lVar52 = lVar32 + (long)(int)uVar16 * 0x1d80;
      uVar39 = *(undefined4 *)(lVar52 + 0x1a08);
      uVar19 = *(undefined4 *)(lVar52 + 0x1a0c);
      lVar53 = *(long *)PTR_DAT_04bbd510;
      local_d8 = (long *)(PTR_DAT_04bb2020 + 0x10);
      local_d0 = "full dif sss";
      lVar36 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar36 == 0) {
        local_7c = nn::os::GetCurrentCoreNumber();
      }
      else {
        local_7c = (int)lVar36 + -1;
      }
      uVar29 = FUN_03948e10(lVar53,param_2,lVar53 + (long)local_7c * 0x290 + 0x10,&local_d8,0x1a,1,
                            uVar39,uVar19,CONCAT44(uVar42,1),0,1,0,1,0,0,0);
      FUN_03a81620(lVar52 + 0x1338,uVar29);
      lVar36 = lVar32 + (long)(int)uVar16 * 0x1d80;
      *(undefined2 *)(lVar36 + 0x1684) = 1;
      FUN_038e4d90(lVar35,param_2);
      FUN_03a89890(0x3f800000,param_2,lVar36 + 0x1428,lVar36 + 0x16d8,1);
      FUN_038e4d90(param_1 + 0x2a4,param_2);
      FUN_03a89890(0x3f000000,param_2,lVar36 + 0x1428,lVar36 + 0xff8,1);
      pcVar15 = (char *)(lVar36 + 0x1334);
      cVar21 = *pcVar15;
    }
    if (cVar21 != '\0') {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                   *(undefined8 *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0xff0));
    }
    lVar35 = lVar32 + (long)(int)uVar16 * 0x1d80;
    *(undefined8 *)(lVar35 + 0xff0) = 0;
    *pcVar15 = '\0';
    *(undefined1 *)(lVar35 + 0x1335) = 0;
  }
  pcVar15 = (char *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x1a14);
  if (*pcVar15 != '\0') {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                 *(undefined8 *)(lVar32 + (long)(int)uVar16 * 0x1d80 + 0x16d0));
  }
  *pcVar15 = '\0';
  lVar32 = lVar32 + (long)(int)uVar16 * 0x1d80;
  *(undefined8 *)(lVar32 + 0x16d0) = 0;
  *(undefined1 *)(lVar32 + 0x1a15) = 0;
  return;
}

