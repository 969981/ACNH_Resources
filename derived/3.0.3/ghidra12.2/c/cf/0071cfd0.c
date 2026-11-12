
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071cfd0(long param_1,long *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  char cVar4;
  short sVar5;
  undefined8 uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined *local_70;
  char *pcStack_68;
  
  puVar7 = PTR_DAT_04bb2720;
  puVar1 = PTR_DAT_04bb2640;
  lVar18 = *(long *)PTR_DAT_04bb2720;
  if (*(long *)(lVar18 + 0x330) == 0) {
LAB_0071d090:
    plVar22 = &DAT_055c04a0;
  }
  else {
    puVar11 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
    iVar10 = FUN_006bd550(*puVar11,0);
    lVar18 = *(long *)puVar7;
    if (iVar10 != 0x758f7eaf) goto LAB_0071d090;
    plVar22 = &DAT_055c04a0;
    if (*(long *)(lVar18 + 0x330) != 0) {
      plVar22 = *(long **)puVar1;
      puVar11 = (undefined8 *)
                (**(code **)(*plVar22 + 0x18))(plVar22,*(undefined4 *)(lVar18 + 0x338));
      iVar10 = FUN_006bd550(*puVar11,0);
      plVar22 = (long *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        plVar22 = &DAT_055c04a0;
      }
      lVar18 = *(long *)puVar7;
    }
  }
  plVar12 = *(long **)puVar1;
  puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x18))(plVar12,*(undefined4 *)(lVar18 + 0x338));
  pcVar19 = (char *)*puVar11;
  if (pcVar19 == "SceneBoot") {
    bVar9 = true;
  }
  else if ((((((*pcVar19 == 'S') && (pcVar19[1] == 'c')) && (pcVar19[2] == 'e')) &&
            ((pcVar19[3] == 'n' && (pcVar19[4] == 'e')))) &&
           ((pcVar19[5] == 'B' && ((pcVar19[6] == 'o' && (pcVar19[7] == 'o')))))) &&
          (pcVar19[8] == 't')) {
    bVar9 = pcVar19[9] == '\0';
  }
  else {
    bVar9 = false;
  }
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
    uVar23 = 0;
  }
  else {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x18);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar23 = *puVar2 >> 0x18 & 1;
  }
  (**(code **)(*plVar22 + 0x18))(plVar22);
  (**(code **)(*plVar22 + 0x18))(plVar22);
  if ((char *)plVar22[1] == "MyDesignExchange") {
LAB_0071d32c:
    plVar12 = (long *)PTR_DAT_04bb2698;
    lVar18 = *(long *)PTR_DAT_04bb2698;
    plVar22 = param_2;
    if (lVar18 == 0) {
      puVar11 = malloc(0x28);
LAB_0071d3a0:
      uVar3 = DAT_048ffc48;
      uVar14 = DAT_048ffc40;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      puVar1 = PTR_DAT_048ffc58;
      uVar6 = DAT_048ffc50;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      local_70 = PTR_DAT_04bb2020;
      puVar11[2] = uVar6;
      puVar11[3] = puVar1;
      local_70 = local_70 + 0x10;
      pcStack_68 = "Main";
      if (param_2 == (long *)0x0) goto LAB_0071d42c;
      bVar9 = false;
      plVar16 = param_2;
LAB_0071d460:
      plVar15 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x1800108,8);
      if (plVar15 != (long *)0x0) {
        FUN_038ca450(plVar15,&local_70,plVar16,plVar15,0x1800108,1,1);
        puVar1 = PTR_DAT_04bd0d80;
        *(undefined4 *)((long)plVar15 + 0xd4) = 0x60000;
        plVar15[0x1f] = 0;
        plVar15[0x1b] = 0;
        plVar15[0x1c] = 0;
        plVar15[0x1d] = 0;
        plVar15[0x1e] = 0;
        *plVar15 = (long)(puVar1 + 0x10);
        FUN_038ccc00(plVar15,8,1,plVar16);
      }
      *puVar25 = plVar15;
      *(undefined8 **)(param_1 + 8) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 == 0) goto LAB_0071d5f4;
      if (bVar9) goto LAB_0071d510;
      bVar9 = false;
      plVar16 = param_2;
LAB_0071d540:
      puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x28,8);
      uVar3 = DAT_048ffc68;
      uVar14 = DAT_048ffc60;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar1 = PTR_s_Small_048ffc78;
      puVar11[2] = DAT_048ffc70;
      puVar11[3] = puVar1;
      if (bVar9) goto LAB_0071d63c;
LAB_0071d674:
      bVar9 = false;
      pcStack_68 = "Small";
      plVar16 = param_2;
LAB_0071d678:
      plVar15 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x140108,8);
      if (plVar15 != (long *)0x0) {
        FUN_038ca450(plVar15,&local_70,plVar16,plVar15,0x140108,1,1);
        puVar1 = PTR_DAT_04bd0d80;
        *(undefined4 *)((long)plVar15 + 0xd4) = 0x20000;
        plVar15[0x1f] = 0;
        plVar15[0x1b] = 0;
        plVar15[0x1c] = 0;
        plVar15[0x1d] = 0;
        plVar15[0x1e] = 0;
        *plVar15 = (long)(puVar1 + 0x10);
        FUN_038ccc00(plVar15,8,1,plVar16);
      }
      *puVar25 = plVar15;
      *(undefined8 **)(param_1 + 0x20) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 == 0) goto LAB_0071d80c;
      if (bVar9) {
LAB_0071d724:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar18 + 8);
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 != (long *)0x0) {
          bVar9 = true;
          goto LAB_0071d754;
        }
        puVar11 = (undefined8 *)0x0;
        puVar25 = (undefined8 *)&SUB_00000020;
        _SUB_00000020 = 0;
        uRam0000000000000000 = DAT_048ffc80;
        _DAT_00000008 = DAT_048ffc88;
        _DAT_00000010 = DAT_048ffc90;
        _SUB_00000018 = PTR_s_Large_048ffc98;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        goto LAB_0071d854;
      }
      bVar9 = false;
      plVar16 = param_2;
LAB_0071d754:
      puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x28,8);
      uVar3 = DAT_048ffc88;
      uVar14 = DAT_048ffc80;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar1 = PTR_s_Large_048ffc98;
      puVar11[2] = DAT_048ffc90;
      puVar11[3] = puVar1;
      pcStack_68 = "Large";
      if (bVar9) goto LAB_0071d854;
      bVar9 = false;
LAB_0071d8a8:
      plVar16 = (long *)(**(code **)(*plVar22 + 0x30))(plVar22,0xa00108,8);
      if (plVar16 != (long *)0x0) {
        FUN_038ca450(plVar16,&local_70,plVar22,plVar16,0xa00108,1,1);
        puVar1 = PTR_DAT_04bd0d80;
        *(undefined4 *)((long)plVar16 + 0xd4) = 0x100000;
        plVar16[0x1f] = 0;
        plVar16[0x1b] = 0;
        plVar16[0x1c] = 0;
        plVar16[0x1d] = 0;
        plVar16[0x1e] = 0;
        *plVar16 = (long)(puVar1 + 0x10);
        FUN_038ccc00(plVar16,8,1,plVar22);
      }
      *puVar25 = plVar16;
      *(undefined8 **)(param_1 + 0x28) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 == 0) goto LAB_0071d96c;
      if (bVar9) {
LAB_0071d938:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar18 + 8);
        if (lVar13 != 0) {
          plVar22 = (long *)(lVar13 + 0xa8);
        }
        if ((long *)*plVar22 != (long *)0x0) {
          bVar9 = true;
          plVar22 = (long *)*plVar22;
          goto LAB_0071d9c0;
        }
        puVar11 = (undefined8 *)0x0;
        puVar25 = (undefined8 *)&SUB_00000020;
        _SUB_00000020 = 0;
        uRam0000000000000000 = DAT_048ffca0;
        _DAT_00000008 = DAT_048ffca8;
        _DAT_00000010 = DAT_048ffcb0;
        _SUB_00000018 = PTR_s_EFSystem_048ffcb8;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        goto LAB_0071da70;
      }
      bVar9 = false;
      plVar22 = param_2;
LAB_0071d9c0:
      puVar11 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x28,8);
      uVar3 = DAT_048ffca8;
      uVar14 = DAT_048ffca0;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar1 = PTR_s_EFSystem_048ffcb8;
      puVar11[2] = DAT_048ffcb0;
      puVar11[3] = puVar1;
      if (bVar9) goto LAB_0071da70;
LAB_0071da18:
      bVar9 = false;
      pcStack_68 = "EFSystem";
      plVar22 = param_2;
LAB_0071daa4:
      plVar16 = (long *)(**(code **)(*plVar22 + 0x30))(plVar22,&LAB_00300108,8);
      if (plVar16 != (long *)0x0) {
        FUN_038ca450(plVar16,&local_70,plVar22,plVar16,&LAB_00300108,1,1);
        puVar1 = PTR_DAT_04bd0d80;
        *(undefined4 *)((long)plVar16 + 0xd4) = 0x80000;
        plVar16[0x1f] = 0;
        plVar16[0x1b] = 0;
        plVar16[0x1c] = 0;
        plVar16[0x1d] = 0;
        plVar16[0x1e] = 0;
        *plVar16 = (long)(puVar1 + 0x10);
        FUN_038ccc00(plVar16,8,1,plVar22);
      }
      *puVar25 = plVar16;
      *(undefined8 **)(param_1 + 0x10) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 == 0) goto LAB_0071dc30;
      if (bVar9) {
LAB_0071db50:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar18 + 8);
        if (lVar13 != 0) {
          plVar22 = (long *)(lVar13 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 != (long *)0x0) {
          bVar9 = true;
          goto LAB_0071db80;
        }
        puVar25 = &DAT_048ffcc0;
LAB_0071dbe4:
        puVar11 = (undefined8 *)0x0;
        uRam0000000000000000 = *puVar25;
        _DAT_00000008 = puVar25[1];
        puVar24 = (undefined8 *)&SUB_00000020;
        _SUB_00000020 = 0;
        _DAT_00000010 = puVar25[2];
        _SUB_00000018 = (undefined *)puVar25[3];
        local_70 = PTR_DAT_04bb2020 + 0x10;
        goto LAB_0071dc78;
      }
      bVar9 = false;
      plVar22 = param_2;
LAB_0071db80:
      puVar11 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x28,8);
      puVar25 = &DAT_048ffcc0;
LAB_0071dba0:
      uVar14 = *puVar25;
      uVar3 = puVar25[1];
      puVar24 = puVar11 + 4;
      *puVar24 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      uVar14 = puVar25[3];
      puVar11[2] = puVar25[2];
      puVar11[3] = uVar14;
      pcStack_68 = "Camera";
      if (bVar9) goto LAB_0071dc78;
    }
    else {
      plVar16 = param_2;
      if (param_2 != (long *)0x0) {
LAB_0071d380:
        puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x28,8);
        goto LAB_0071d3a0;
      }
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar18 + 8);
      if (lVar13 != 0) {
        plVar16 = (long *)(lVar13 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 != (long *)0x0) goto LAB_0071d380;
      puVar11 = (undefined8 *)0x0;
      puVar25 = (undefined8 *)&SUB_00000020;
      _SUB_00000020 = 0;
      _DAT_00000008 = DAT_048ffc48;
      uRam0000000000000000 = DAT_048ffc40;
      _DAT_00000010 = DAT_048ffc50;
      _SUB_00000018 = PTR_DAT_048ffc58;
      local_70 = PTR_DAT_04bb2020 + 0x10;
LAB_0071d42c:
      pcStack_68 = "Main";
      lVar13 = *plVar12;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      plVar16 = (long *)*puVar24;
      if (plVar16 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071d460;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 8) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 != 0) {
LAB_0071d510:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar18 + 8);
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 != (long *)0x0) {
          bVar9 = true;
          goto LAB_0071d540;
        }
        puVar11 = (undefined8 *)0x0;
        puVar25 = (undefined8 *)&SUB_00000020;
        _SUB_00000020 = 0;
        uRam0000000000000000 = DAT_048ffc60;
        _DAT_00000008 = DAT_048ffc68;
        _DAT_00000010 = DAT_048ffc70;
        _SUB_00000018 = PTR_s_Small_048ffc78;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        goto LAB_0071d63c;
      }
      bVar9 = true;
LAB_0071d5f4:
      puVar11 = malloc(0x28);
      uVar3 = DAT_048ffc68;
      uVar14 = DAT_048ffc60;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar1 = PTR_s_Small_048ffc78;
      puVar11[2] = DAT_048ffc70;
      puVar11[3] = puVar1;
      if (!bVar9) goto LAB_0071d674;
LAB_0071d63c:
      pcStack_68 = "Small";
      lVar13 = *plVar12;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      plVar16 = (long *)*puVar24;
      if (plVar16 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071d678;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 0x20) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 != 0) goto LAB_0071d724;
      bVar9 = true;
LAB_0071d80c:
      puVar11 = malloc(0x28);
      uVar3 = DAT_048ffc88;
      uVar14 = DAT_048ffc80;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar1 = PTR_s_Large_048ffc98;
      puVar11[2] = DAT_048ffc90;
      puVar11[3] = puVar1;
      pcStack_68 = "Large";
      if (!bVar9) goto LAB_0071d8a8;
LAB_0071d854:
      pcStack_68 = "Large";
      lVar13 = *plVar12;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      if ((long *)*puVar24 != (long *)0x0) {
        bVar9 = true;
        plVar22 = (long *)*puVar24;
        goto LAB_0071d8a8;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 0x28) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 != 0) goto LAB_0071d938;
      bVar9 = true;
LAB_0071d96c:
      puVar11 = malloc(0x28);
      uVar3 = DAT_048ffca8;
      uVar14 = DAT_048ffca0;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar1 = PTR_s_EFSystem_048ffcb8;
      puVar11[2] = DAT_048ffcb0;
      puVar11[3] = puVar1;
      if (!bVar9) goto LAB_0071da18;
LAB_0071da70:
      pcStack_68 = "EFSystem";
      lVar13 = *plVar12;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      plVar22 = (long *)*puVar24;
      if (plVar22 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071daa4;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 != 0) goto LAB_0071db50;
      bVar9 = true;
LAB_0071dc30:
      puVar11 = malloc(0x28);
      puVar25 = &DAT_048ffcc0;
LAB_0071dc44:
      uVar14 = *puVar25;
      uVar3 = puVar25[1];
      puVar24 = puVar11 + 4;
      *puVar24 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      uVar14 = puVar25[3];
      puVar11[2] = puVar25[2];
      puVar11[3] = uVar14;
      pcStack_68 = "Camera";
      if (bVar9) {
LAB_0071dc78:
        pcStack_68 = "Camera";
        lVar13 = *plVar12;
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar25 = (undefined8 *)(lVar13 + 8);
        if (lVar18 != 0) {
          puVar25 = (undefined8 *)(lVar18 + 0xa8);
        }
        param_2 = (long *)*puVar25;
        if (param_2 == (long *)0x0) {
LAB_0071f4a4:
          plVar22 = (long *)0x0;
          goto LAB_0071f4a8;
        }
      }
    }
    plVar22 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xa0108,8);
    if (plVar22 == (long *)0x0) goto LAB_0071f4a8;
    FUN_038ca450(plVar22,&local_70,param_2,plVar22,0xa0108,1,1);
    puVar1 = PTR_DAT_04bd0d80;
    plVar22[0x1b] = 0;
    plVar22[0x1c] = 0;
    *(undefined4 *)((long)plVar22 + 0xd4) = 0xa0000;
    *plVar22 = (long)(puVar1 + 0x10);
  }
  else {
    uVar20 = 0;
    bVar8 = true;
    do {
      cVar4 = ((char *)plVar22[1])[uVar20];
      if (cVar4 != "MyDesignExchange"[uVar20]) break;
      if (cVar4 == '\0') {
        if (bVar8) goto LAB_0071d32c;
        break;
      }
      bVar8 = uVar20 < 0x80000;
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x80001);
    (**(code **)(*plVar22 + 0x18))(plVar22);
    (**(code **)(*plVar22 + 0x18))(plVar22);
    pcVar19 = (char *)plVar22[1];
    if (pcVar19 == "WherearenPlannerApp") goto LAB_0071d32c;
    if (*pcVar19 != 'W') {
      uVar17 = 0;
      if (!bVar9 && uVar23 == 0) goto LAB_0071d2b8;
      goto LAB_0071d32c;
    }
    uVar20 = 0;
    do {
      uVar21 = uVar20;
      uVar20 = uVar21;
      if (uVar21 == 0x80000) goto LAB_0071d2a4;
      if (pcVar19[uVar21 + 1] != "WherearenPlannerApp"[uVar21 + 1]) {
        uVar20 = 0;
        goto LAB_0071d2a4;
      }
      uVar20 = uVar21 + 1;
    } while (pcVar19[uVar21 + 1] != '\0');
    uVar20 = 1;
LAB_0071d2a4:
    uVar17 = (uint)(uVar21 < 0x80000) & (uint)uVar20;
    if (bVar9 || uVar23 != 0) goto LAB_0071d32c;
LAB_0071d2b8:
    if (uVar17 != 0) goto LAB_0071d32c;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    (**(code **)(*plVar22 + 0x18))(plVar22);
    plVar12 = (long *)PTR_DAT_04bb2698;
    if ((char *)plVar22[1] == "IdrAirPortDemoDeparture") {
LAB_0071dd28:
      lVar18 = *(long *)PTR_DAT_04bb2698;
      plVar22 = param_2;
      if (lVar18 != 0) {
        plVar16 = param_2;
        if (param_2 != (long *)0x0) {
LAB_0071dd74:
          puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x28,8);
          goto LAB_0071de04;
        }
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar18 + 8);
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 != (long *)0x0) goto LAB_0071dd74;
        puVar11 = (undefined8 *)0x0;
        puVar25 = (undefined8 *)&SUB_00000020;
        _SUB_00000020 = 0;
        uRam0000000000000000 = DAT_048ffce0;
        _DAT_00000008 = DAT_048ffce8;
        _DAT_00000010 = DAT_048ffcf0;
        _SUB_00000018 = PTR_DAT_048ffcf8;
        local_70 = PTR_DAT_04bb2020 + 0x10;
LAB_0071e3c8:
        pcStack_68 = "Main";
        lVar13 = *plVar12;
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar24 = (undefined8 *)(lVar13 + 8);
        if (lVar18 != 0) {
          puVar24 = (undefined8 *)(lVar18 + 0xa8);
        }
        plVar16 = (long *)*puVar24;
        if (plVar16 != (long *)0x0) {
          bVar9 = true;
          goto LAB_0071e3fc;
        }
        *puVar25 = 0;
        *(undefined8 **)(param_1 + 8) = puVar11;
        lVar18 = *plVar12;
        if (lVar18 != 0) goto LAB_0071e4ac;
        bVar9 = true;
LAB_0071e590:
        puVar11 = malloc(0x28);
        uVar3 = DAT_048ffd08;
        uVar14 = DAT_048ffd00;
        puVar25 = puVar11 + 4;
        *puVar25 = 0;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        *puVar11 = uVar14;
        puVar11[1] = uVar3;
        puVar1 = PTR_s_Small_048ffd18;
        puVar11[2] = DAT_048ffd10;
        puVar11[3] = puVar1;
        if (bVar9) goto LAB_0071e5d8;
LAB_0071e610:
        bVar9 = false;
        pcStack_68 = "Small";
        plVar16 = param_2;
LAB_0071e614:
        plVar15 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x820108,8);
        if (plVar15 != (long *)0x0) {
          FUN_038ca450(plVar15,&local_70,plVar16,plVar15,0x820108,1,1);
          puVar1 = PTR_DAT_04bd0d80;
          *(undefined4 *)((long)plVar15 + 0xd4) = 0x20000;
          plVar15[0x1f] = 0;
          plVar15[0x1b] = 0;
          plVar15[0x1c] = 0;
          plVar15[0x1d] = 0;
          plVar15[0x1e] = 0;
          *plVar15 = (long)(puVar1 + 0x10);
          FUN_038ccc00(plVar15,8,1,plVar16);
        }
        *puVar25 = plVar15;
        *(undefined8 **)(param_1 + 0x20) = puVar11;
        lVar18 = *plVar12;
        if (lVar18 == 0) goto LAB_0071e7a8;
        if (bVar9) goto LAB_0071e6c0;
        bVar9 = false;
        plVar16 = param_2;
LAB_0071e6f0:
        puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x28,8);
        uVar3 = DAT_048ffd28;
        uVar14 = DAT_048ffd20;
        puVar25 = puVar11 + 4;
        *puVar25 = 0;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        *puVar11 = uVar14;
        puVar11[1] = uVar3;
        puVar1 = PTR_s_Large_048ffd38;
        puVar11[2] = DAT_048ffd30;
        puVar11[3] = puVar1;
        pcStack_68 = "Large";
        if (bVar9) goto LAB_0071e7f0;
        bVar9 = false;
LAB_0071e844:
        plVar16 = (long *)(**(code **)(*plVar22 + 0x30))(plVar22,0x7800108,8);
        if (plVar16 != (long *)0x0) {
          FUN_038ca450(plVar16,&local_70,plVar22,plVar16,0x7800108,1,1);
          puVar1 = PTR_DAT_04bd0d80;
          *(undefined4 *)((long)plVar16 + 0xd4) = 0x100000;
          plVar16[0x1f] = 0;
          plVar16[0x1b] = 0;
          plVar16[0x1c] = 0;
          plVar16[0x1d] = 0;
          plVar16[0x1e] = 0;
          *plVar16 = (long)(puVar1 + 0x10);
          FUN_038ccc00(plVar16,8,1,plVar22);
        }
        *puVar25 = plVar16;
        *(undefined8 **)(param_1 + 0x28) = puVar11;
        lVar18 = *plVar12;
        if (lVar18 == 0) goto LAB_0071e90c;
        if (bVar9) {
LAB_0071e8d8:
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar18 + 8);
          if (lVar13 != 0) {
            plVar22 = (long *)(lVar13 + 0xa8);
          }
          if ((long *)*plVar22 != (long *)0x0) {
            bVar9 = true;
            plVar22 = (long *)*plVar22;
            goto LAB_0071e960;
          }
          puVar11 = (undefined8 *)0x0;
          puVar25 = (undefined8 *)&SUB_00000020;
          _SUB_00000020 = 0;
          uRam0000000000000000 = DAT_048ffd40;
          _DAT_00000008 = DAT_048ffd48;
          _DAT_00000010 = DAT_048ffd50;
          _SUB_00000018 = PTR_s_EFSystem_048ffd58;
          local_70 = PTR_DAT_04bb2020 + 0x10;
          goto LAB_0071ea10;
        }
        bVar9 = false;
        plVar22 = param_2;
LAB_0071e960:
        puVar11 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x28,8);
        uVar3 = DAT_048ffd48;
        uVar14 = DAT_048ffd40;
        puVar25 = puVar11 + 4;
        *puVar25 = 0;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        *puVar11 = uVar14;
        puVar11[1] = uVar3;
        puVar1 = PTR_s_EFSystem_048ffd58;
        puVar11[2] = DAT_048ffd50;
        puVar11[3] = puVar1;
        if (bVar9) goto LAB_0071ea10;
LAB_0071e9b8:
        bVar9 = false;
        pcStack_68 = "EFSystem";
        plVar22 = param_2;
LAB_0071ea44:
        plVar16 = (long *)(**(code **)(*plVar22 + 0x30))(plVar22,&LAB_00300108,8);
        if (plVar16 != (long *)0x0) {
          FUN_038ca450(plVar16,&local_70,plVar22,plVar16,&LAB_00300108,1,1);
          puVar1 = PTR_DAT_04bd0d80;
          *(undefined4 *)((long)plVar16 + 0xd4) = 0x80000;
          plVar16[0x1f] = 0;
          plVar16[0x1b] = 0;
          plVar16[0x1c] = 0;
          plVar16[0x1d] = 0;
          plVar16[0x1e] = 0;
          *plVar16 = (long)(puVar1 + 0x10);
          FUN_038ccc00(plVar16,8,1,plVar22);
        }
        *puVar25 = plVar16;
        *(undefined8 **)(param_1 + 0x10) = puVar11;
        lVar18 = *plVar12;
        if (lVar18 == 0) goto LAB_0071eb58;
        if (bVar9) {
LAB_0071eaf0:
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar18 + 8);
          if (lVar13 != 0) {
            plVar22 = (long *)(lVar13 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 != (long *)0x0) {
            bVar9 = true;
            goto LAB_0071eb20;
          }
          puVar25 = &DAT_048ffd60;
          goto LAB_0071dbe4;
        }
        bVar9 = false;
        plVar22 = param_2;
LAB_0071eb20:
        puVar11 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x28,8);
        puVar25 = &DAT_048ffd60;
        goto LAB_0071dba0;
      }
      puVar11 = malloc(0x28);
LAB_0071de04:
      uVar3 = DAT_048ffce8;
      uVar14 = DAT_048ffce0;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar1 = PTR_DAT_048ffcf8;
      puVar11[2] = DAT_048ffcf0;
      puVar11[3] = puVar1;
      pcStack_68 = "Main";
      if (param_2 == (long *)0x0) goto LAB_0071e3c8;
      bVar9 = false;
      plVar16 = param_2;
LAB_0071e3fc:
      plVar15 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0xaf80108,8);
      if (plVar15 != (long *)0x0) {
        FUN_038ca450(plVar15,&local_70,plVar16,plVar15,0xaf80108,1,1);
        puVar1 = PTR_DAT_04bd0d80;
        *(undefined4 *)((long)plVar15 + 0xd4) = 0x60000;
        plVar15[0x1f] = 0;
        plVar15[0x1b] = 0;
        plVar15[0x1c] = 0;
        plVar15[0x1d] = 0;
        plVar15[0x1e] = 0;
        *plVar15 = (long)(puVar1 + 0x10);
        FUN_038ccc00(plVar15,8,1,plVar16);
      }
      *puVar25 = plVar15;
      *(undefined8 **)(param_1 + 8) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 == 0) goto LAB_0071e590;
      if (!bVar9) {
        bVar9 = false;
        plVar16 = param_2;
LAB_0071e4dc:
        puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x30))(plVar16,0x28,8);
        uVar3 = DAT_048ffd08;
        uVar14 = DAT_048ffd00;
        puVar25 = puVar11 + 4;
        *puVar25 = 0;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        *puVar11 = uVar14;
        puVar11[1] = uVar3;
        puVar1 = PTR_s_Small_048ffd18;
        puVar11[2] = DAT_048ffd10;
        puVar11[3] = puVar1;
        if (bVar9) goto LAB_0071e5d8;
        goto LAB_0071e610;
      }
LAB_0071e4ac:
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar18 + 8);
      if (lVar13 != 0) {
        plVar16 = (long *)(lVar13 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071e4dc;
      }
      puVar11 = (undefined8 *)0x0;
      puVar25 = (undefined8 *)&SUB_00000020;
      _SUB_00000020 = 0;
      uRam0000000000000000 = DAT_048ffd00;
      _DAT_00000008 = DAT_048ffd08;
      _DAT_00000010 = DAT_048ffd10;
      _SUB_00000018 = PTR_s_Small_048ffd18;
      local_70 = PTR_DAT_04bb2020 + 0x10;
LAB_0071e5d8:
      pcStack_68 = "Small";
      lVar13 = *plVar12;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      plVar16 = (long *)*puVar24;
      if (plVar16 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071e614;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 0x20) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 != 0) {
LAB_0071e6c0:
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar18 + 8);
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 != (long *)0x0) {
          bVar9 = true;
          goto LAB_0071e6f0;
        }
        puVar11 = (undefined8 *)0x0;
        puVar25 = (undefined8 *)&SUB_00000020;
        _SUB_00000020 = 0;
        uRam0000000000000000 = DAT_048ffd20;
        _DAT_00000008 = DAT_048ffd28;
        _DAT_00000010 = DAT_048ffd30;
        _SUB_00000018 = PTR_s_Large_048ffd38;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        goto LAB_0071e7f0;
      }
      bVar9 = true;
LAB_0071e7a8:
      puVar11 = malloc(0x28);
      uVar3 = DAT_048ffd28;
      uVar14 = DAT_048ffd20;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar1 = PTR_s_Large_048ffd38;
      puVar11[2] = DAT_048ffd30;
      puVar11[3] = puVar1;
      pcStack_68 = "Large";
      if (!bVar9) goto LAB_0071e844;
LAB_0071e7f0:
      pcStack_68 = "Large";
      lVar13 = *plVar12;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      if ((long *)*puVar24 != (long *)0x0) {
        bVar9 = true;
        plVar22 = (long *)*puVar24;
        goto LAB_0071e844;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 0x28) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 != 0) goto LAB_0071e8d8;
      bVar9 = true;
LAB_0071e90c:
      puVar11 = malloc(0x28);
      uVar3 = DAT_048ffd48;
      uVar14 = DAT_048ffd40;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar1 = PTR_s_EFSystem_048ffd58;
      puVar11[2] = DAT_048ffd50;
      puVar11[3] = puVar1;
      if (!bVar9) goto LAB_0071e9b8;
LAB_0071ea10:
      pcStack_68 = "EFSystem";
      lVar13 = *plVar12;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      plVar22 = (long *)*puVar24;
      if (plVar22 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071ea44;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar11;
      lVar18 = *plVar12;
      if (lVar18 != 0) goto LAB_0071eaf0;
      bVar9 = true;
LAB_0071eb58:
      puVar11 = malloc(0x28);
      puVar25 = &DAT_048ffd60;
      goto LAB_0071dc44;
    }
    uVar20 = 0;
    bVar9 = true;
    do {
      cVar4 = ((char *)plVar22[1])[uVar20];
      if (cVar4 != "IdrAirPortDemoDeparture"[uVar20]) break;
      if (cVar4 == '\0') {
        if (bVar9) goto LAB_0071dd28;
        break;
      }
      bVar9 = uVar20 < 0x80000;
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x80001);
    (**(code **)(*plVar22 + 0x18))(plVar22);
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puVar1 = PTR_DAT_04bb2698;
    if ((char *)plVar22[1] != "IdrDream") {
      uVar20 = 0;
      bVar9 = true;
      do {
        cVar4 = ((char *)plVar22[1])[uVar20];
        if (cVar4 != "IdrDream"[uVar20]) break;
        if (cVar4 == '\0') {
          if (bVar9) goto LAB_0071de54;
          break;
        }
        bVar9 = uVar20 < 0x80000;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x80001);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      if ((char *)plVar22[1] == "VideogameEmulation") {
LAB_0071df78:
        puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
        puVar11[4] = 0;
        puVar1 = PTR_DAT_04bb2020;
        uVar14 = DAT_048ffe28;
        *puVar11 = DAT_048ffe20;
        puVar11[1] = uVar14;
        puVar7 = PTR_DAT_048ffe38;
        puVar1 = puVar1 + 0x10;
        puVar11[2] = DAT_048ffe30;
        puVar11[3] = puVar7;
        pcStack_68 = "Main";
        local_70 = puVar1;
        uVar14 = FUN_038ccd58(0x60000,0x20,&local_70,8,param_2,1);
        puVar11[4] = uVar14;
        *(undefined8 **)(param_1 + 8) = puVar11;
        puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
        uVar3 = DAT_048ffe48;
        uVar14 = DAT_048ffe40;
        puVar11[4] = 0;
        *puVar11 = uVar14;
        puVar11[1] = uVar3;
        puVar7 = PTR_s_Small_048ffe58;
        pcStack_68 = "Small";
        puVar11[2] = DAT_048ffe50;
        puVar11[3] = puVar7;
        local_70 = puVar1;
        uVar14 = FUN_038ccd58(0x20000,0x20,&local_70,8,param_2,1);
        puVar11[4] = uVar14;
        *(undefined8 **)(param_1 + 0x20) = puVar11;
        puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
        uVar3 = DAT_048ffe68;
        uVar14 = DAT_048ffe60;
        puVar11[4] = 0;
        *puVar11 = uVar14;
        puVar11[1] = uVar3;
        puVar7 = PTR_s_Large_048ffe78;
        pcStack_68 = "Large";
        puVar11[2] = DAT_048ffe70;
        puVar11[3] = puVar7;
        local_70 = puVar1;
        uVar14 = FUN_038ccd58(0x100000,0x10,&local_70,8,param_2,1);
        puVar11[4] = uVar14;
        *(undefined8 **)(param_1 + 0x28) = puVar11;
        puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
        uVar3 = DAT_048ffe88;
        uVar14 = DAT_048ffe80;
        puVar11[4] = 0;
        *puVar11 = uVar14;
        puVar11[1] = uVar3;
        puVar7 = PTR_s_EFSystem_048ffe98;
        pcStack_68 = "EFSystem";
        puVar11[2] = DAT_048ffe90;
        puVar11[3] = puVar7;
        local_70 = puVar1;
        uVar14 = FUN_038ccd58(0x80000,6,&local_70,8,param_2,1);
        puVar11[4] = uVar14;
        *(undefined8 **)(param_1 + 0x10) = puVar11;
        puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
        uVar3 = DAT_048ffea8;
        uVar14 = DAT_048ffea0;
        puVar11[4] = 0;
        *puVar11 = uVar14;
        puVar11[1] = uVar3;
        puVar7 = PTR_s_Camera_048ffeb8;
        pcStack_68 = "Camera";
        puVar11[2] = DAT_048ffeb0;
        puVar11[3] = puVar7;
        local_70 = puVar1;
        uVar14 = FUN_038ccd58(0xa0000,1,&local_70,8,param_2,1);
        puVar11[4] = uVar14;
        *(undefined8 **)(param_1 + 0x18) = puVar11;
        return;
      }
      uVar20 = 0;
      bVar9 = true;
      do {
        cVar4 = ((char *)plVar22[1])[uVar20];
        if (cVar4 != "VideogameEmulation"[uVar20]) break;
        if (cVar4 == '\0') {
          if (bVar9) goto LAB_0071df78;
          break;
        }
        bVar9 = uVar20 < 0x80000;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x80001);
      puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
      puVar11[4] = 0;
      puVar1 = PTR_DAT_04bb2020;
      uVar14 = DAT_048ffec8;
      *puVar11 = DAT_048ffec0;
      puVar11[1] = uVar14;
      puVar7 = PTR_DAT_048ffed8;
      puVar1 = puVar1 + 0x10;
      puVar11[2] = DAT_048ffed0;
      puVar11[3] = puVar7;
      pcStack_68 = "Main";
      local_70 = puVar1;
      uVar14 = FUN_038ccd58(0x60000,0x26c,&local_70,8,param_2,1);
      puVar11[4] = uVar14;
      *(undefined8 **)(param_1 + 8) = puVar11;
      puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
      uVar3 = DAT_048ffee8;
      uVar14 = DAT_048ffee0;
      puVar11[4] = 0;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar7 = PTR_s_Small_048ffef8;
      pcStack_68 = "Small";
      puVar11[2] = DAT_048ffef0;
      puVar11[3] = puVar7;
      local_70 = puVar1;
      uVar14 = FUN_038ccd58(0x20000,0x41,&local_70,8,param_2,1);
      puVar11[4] = uVar14;
      *(undefined8 **)(param_1 + 0x20) = puVar11;
      puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
      uVar3 = DAT_048fff08;
      uVar14 = DAT_048fff00;
      puVar11[4] = 0;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar7 = PTR_s_Large_048fff18;
      pcStack_68 = "Large";
      puVar11[2] = DAT_048fff10;
      puVar11[3] = puVar7;
      local_70 = puVar1;
      uVar14 = FUN_038ccd58(0x100000,0x36,&local_70,8,param_2,1);
      puVar11[4] = uVar14;
      *(undefined8 **)(param_1 + 0x28) = puVar11;
      puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
      uVar3 = DAT_048fff28;
      uVar14 = DAT_048fff20;
      puVar11[4] = 0;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar7 = PTR_s_EFSystem_048fff38;
      pcStack_68 = "EFSystem";
      puVar11[2] = DAT_048fff30;
      puVar11[3] = puVar7;
      local_70 = puVar1;
      uVar14 = FUN_038ccd58(0x80000,6,&local_70,8,param_2,1);
      puVar11[4] = uVar14;
      *(undefined8 **)(param_1 + 0x10) = puVar11;
      puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
      uVar3 = DAT_048fff48;
      uVar14 = DAT_048fff40;
      puVar11[4] = 0;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar7 = PTR_s_Camera_048fff58;
      pcStack_68 = "Camera";
      puVar11[2] = DAT_048fff50;
      puVar11[3] = puVar7;
      local_70 = puVar1;
      uVar14 = FUN_038ccd58(0xa0000,1,&local_70,8,param_2,1);
      puVar11[4] = uVar14;
      *(undefined8 **)(param_1 + 0x18) = puVar11;
      puVar11 = (undefined8 *)FUN_038aa4a0(0x28,param_2,8);
      uVar3 = DAT_048fff68;
      uVar14 = DAT_048fff60;
      puVar11[4] = 0;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar7 = PTR_s_Reserve_048fff78;
      pcStack_68 = "Reserve";
      puVar11[2] = DAT_048fff70;
      puVar11[3] = puVar7;
      local_70 = puVar1;
      uVar14 = FUN_038ccd58(0x60000,0x14,&local_70,8,param_2,1);
      puVar11[4] = uVar14;
      *(undefined8 **)(param_1 + 0x30) = puVar11;
      return;
    }
LAB_0071de54:
    lVar18 = *(long *)PTR_DAT_04bb2698;
    plVar22 = param_2;
    if (lVar18 != 0) {
      plVar12 = param_2;
      if (param_2 != (long *)0x0) {
LAB_0071dea0:
        puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x28,8);
        goto LAB_0071df28;
      }
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar18 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) goto LAB_0071dea0;
      puVar11 = (undefined8 *)0x0;
      puVar25 = (undefined8 *)&SUB_00000020;
      _SUB_00000020 = 0;
      uRam0000000000000000 = DAT_048ffd80;
      _DAT_00000008 = DAT_048ffd88;
      _DAT_00000010 = DAT_048ffd90;
      _SUB_00000018 = PTR_DAT_048ffd98;
      local_70 = PTR_DAT_04bb2020 + 0x10;
LAB_0071ebc0:
      pcStack_68 = "Main";
      lVar13 = *(long *)puVar1;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      plVar12 = (long *)*puVar24;
      if (plVar12 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071ebf4;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 8) = puVar11;
      lVar18 = *(long *)puVar1;
      if (lVar18 != 0) goto LAB_0071eca4;
      bVar9 = true;
LAB_0071ed88:
      puVar11 = malloc(0x28);
      uVar3 = DAT_048ffda8;
      uVar14 = DAT_048ffda0;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar7 = PTR_s_Small_048ffdb8;
      puVar11[2] = DAT_048ffdb0;
      puVar11[3] = puVar7;
      if (!bVar9) goto LAB_0071ee08;
LAB_0071edd0:
      pcStack_68 = "Small";
      lVar13 = *(long *)puVar1;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      plVar12 = (long *)*puVar24;
      if (plVar12 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071ee0c;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 0x20) = puVar11;
      lVar18 = *(long *)puVar1;
      if (lVar18 != 0) goto LAB_0071eeb8;
      bVar9 = true;
LAB_0071efa0:
      puVar11 = malloc(0x28);
      uVar3 = DAT_048ffdc8;
      uVar14 = DAT_048ffdc0;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar7 = PTR_s_Large_048ffdd8;
      puVar11[2] = DAT_048ffdd0;
      puVar11[3] = puVar7;
      pcStack_68 = "Large";
      if (!bVar9) goto LAB_0071f03c;
LAB_0071efe8:
      pcStack_68 = "Large";
      lVar13 = *(long *)puVar1;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      if ((long *)*puVar24 != (long *)0x0) {
        bVar9 = true;
        plVar22 = (long *)*puVar24;
        goto LAB_0071f03c;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 0x28) = puVar11;
      lVar18 = *(long *)puVar1;
      if (lVar18 != 0) goto LAB_0071f0d4;
      bVar9 = true;
LAB_0071f108:
      puVar11 = malloc(0x28);
      uVar3 = DAT_048ffde8;
      uVar14 = DAT_048ffde0;
      puVar25 = puVar11 + 4;
      *puVar25 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar7 = PTR_s_EFSystem_048ffdf8;
      puVar11[2] = DAT_048ffdf0;
      puVar11[3] = puVar7;
      if (!bVar9) goto LAB_0071f1b4;
LAB_0071f20c:
      pcStack_68 = "EFSystem";
      lVar13 = *(long *)puVar1;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar24 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar24 = (undefined8 *)(lVar18 + 0xa8);
      }
      plVar22 = (long *)*puVar24;
      if (plVar22 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071f240;
      }
      *puVar25 = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar11;
      lVar18 = *(long *)puVar1;
      if (lVar18 != 0) goto LAB_0071f2ec;
      bVar9 = true;
LAB_0071f3cc:
      puVar11 = malloc(0x28);
      uVar3 = DAT_048ffe08;
      uVar14 = DAT_048ffe00;
      puVar24 = puVar11 + 4;
      *puVar24 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      *puVar11 = uVar14;
      puVar11[1] = uVar3;
      puVar7 = PTR_s_Camera_048ffe18;
      puVar11[2] = DAT_048ffe10;
      puVar11[3] = puVar7;
      pcStack_68 = "Camera";
      if (!bVar9) goto LAB_0071f444;
LAB_0071f414:
      pcStack_68 = "Camera";
      lVar13 = *(long *)puVar1;
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar25 = (undefined8 *)(lVar13 + 8);
      if (lVar18 != 0) {
        puVar25 = (undefined8 *)(lVar18 + 0xa8);
      }
      param_2 = (long *)*puVar25;
      if (param_2 != (long *)0x0) goto LAB_0071f444;
      goto LAB_0071f4a4;
    }
    puVar11 = malloc(0x28);
LAB_0071df28:
    uVar3 = DAT_048ffd88;
    uVar14 = DAT_048ffd80;
    puVar25 = puVar11 + 4;
    *puVar25 = 0;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    *puVar11 = uVar14;
    puVar11[1] = uVar3;
    puVar7 = PTR_DAT_048ffd98;
    puVar11[2] = DAT_048ffd90;
    puVar11[3] = puVar7;
    pcStack_68 = "Main";
    if (param_2 == (long *)0x0) goto LAB_0071ebc0;
    bVar9 = false;
    plVar12 = param_2;
LAB_0071ebf4:
    plVar16 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x7800108,8);
    if (plVar16 != (long *)0x0) {
      FUN_038ca450(plVar16,&local_70,plVar12,plVar16,0x7800108,1,1);
      puVar7 = PTR_DAT_04bd0d80;
      plVar16[0x1f] = 0;
      plVar16[0x1b] = 0;
      plVar16[0x1c] = 0;
      plVar16[0x1d] = 0;
      plVar16[0x1e] = 0;
      *plVar16 = (long)(puVar7 + 0x10);
      *(undefined4 *)((long)plVar16 + 0xd4) = 0x60000;
      FUN_038ccc00(plVar16,8,1,plVar12);
    }
    *puVar25 = plVar16;
    *(undefined8 **)(param_1 + 8) = puVar11;
    lVar18 = *(long *)puVar1;
    if (lVar18 == 0) goto LAB_0071ed88;
    if (bVar9) {
LAB_0071eca4:
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar18 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071ecd4;
      }
      puVar11 = (undefined8 *)0x0;
      puVar25 = (undefined8 *)&SUB_00000020;
      _SUB_00000020 = 0;
      uRam0000000000000000 = DAT_048ffda0;
      _DAT_00000008 = DAT_048ffda8;
      _DAT_00000010 = DAT_048ffdb0;
      _SUB_00000018 = PTR_s_Small_048ffdb8;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      goto LAB_0071edd0;
    }
    bVar9 = false;
    plVar12 = param_2;
LAB_0071ecd4:
    puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x28,8);
    uVar3 = DAT_048ffda8;
    uVar14 = DAT_048ffda0;
    puVar25 = puVar11 + 4;
    *puVar25 = 0;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    *puVar11 = uVar14;
    puVar11[1] = uVar3;
    puVar7 = PTR_s_Small_048ffdb8;
    puVar11[2] = DAT_048ffdb0;
    puVar11[3] = puVar7;
    if (bVar9) goto LAB_0071edd0;
    bVar9 = false;
LAB_0071ee08:
    pcStack_68 = "Small";
    plVar12 = param_2;
LAB_0071ee0c:
    plVar16 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x400108,8);
    if (plVar16 != (long *)0x0) {
      FUN_038ca450(plVar16,&local_70,plVar12,plVar16,0x400108,1,1);
      puVar7 = PTR_DAT_04bd0d80;
      plVar16[0x1f] = 0;
      plVar16[0x1b] = 0;
      plVar16[0x1c] = 0;
      plVar16[0x1d] = 0;
      plVar16[0x1e] = 0;
      *plVar16 = (long)(puVar7 + 0x10);
      *(undefined4 *)((long)plVar16 + 0xd4) = 0x20000;
      FUN_038ccc00(plVar16,8,1,plVar12);
    }
    *puVar25 = plVar16;
    *(undefined8 **)(param_1 + 0x20) = puVar11;
    lVar18 = *(long *)puVar1;
    if (lVar18 == 0) goto LAB_0071efa0;
    if (bVar9) {
LAB_0071eeb8:
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar18 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071eee8;
      }
      puVar11 = (undefined8 *)0x0;
      puVar25 = (undefined8 *)&SUB_00000020;
      _SUB_00000020 = 0;
      uRam0000000000000000 = DAT_048ffdc0;
      _DAT_00000008 = DAT_048ffdc8;
      _DAT_00000010 = DAT_048ffdd0;
      _SUB_00000018 = PTR_s_Large_048ffdd8;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      goto LAB_0071efe8;
    }
    bVar9 = false;
    plVar12 = param_2;
LAB_0071eee8:
    puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x28,8);
    uVar3 = DAT_048ffdc8;
    uVar14 = DAT_048ffdc0;
    puVar25 = puVar11 + 4;
    *puVar25 = 0;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    *puVar11 = uVar14;
    puVar11[1] = uVar3;
    puVar7 = PTR_s_Large_048ffdd8;
    puVar11[2] = DAT_048ffdd0;
    puVar11[3] = puVar7;
    pcStack_68 = "Large";
    if (bVar9) goto LAB_0071efe8;
    bVar9 = false;
LAB_0071f03c:
    plVar12 = (long *)(**(code **)(*plVar22 + 0x30))(plVar22,0x2100108,8);
    if (plVar12 != (long *)0x0) {
      FUN_038ca450(plVar12,&local_70,plVar22,plVar12,0x2100108,1,1);
      puVar7 = PTR_DAT_04bd0d80;
      plVar12[0x1f] = 0;
      plVar12[0x1b] = 0;
      plVar12[0x1c] = 0;
      plVar12[0x1d] = 0;
      plVar12[0x1e] = 0;
      *plVar12 = (long)(puVar7 + 0x10);
      *(undefined4 *)((long)plVar12 + 0xd4) = 0x100000;
      FUN_038ccc00(plVar12,8,1,plVar22);
    }
    *puVar25 = plVar12;
    *(undefined8 **)(param_1 + 0x28) = puVar11;
    lVar18 = *(long *)puVar1;
    if (lVar18 == 0) goto LAB_0071f108;
    if (bVar9) {
LAB_0071f0d4:
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar22 = (long *)(lVar18 + 8);
      if (lVar13 != 0) {
        plVar22 = (long *)(lVar13 + 0xa8);
      }
      if ((long *)*plVar22 != (long *)0x0) {
        bVar9 = true;
        plVar22 = (long *)*plVar22;
        goto LAB_0071f15c;
      }
      puVar11 = (undefined8 *)0x0;
      puVar25 = (undefined8 *)&SUB_00000020;
      _SUB_00000020 = 0;
      uRam0000000000000000 = DAT_048ffde0;
      _DAT_00000008 = DAT_048ffde8;
      _DAT_00000010 = DAT_048ffdf0;
      _SUB_00000018 = PTR_s_EFSystem_048ffdf8;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      goto LAB_0071f20c;
    }
    bVar9 = false;
    plVar22 = param_2;
LAB_0071f15c:
    puVar11 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x28,8);
    uVar3 = DAT_048ffde8;
    uVar14 = DAT_048ffde0;
    puVar25 = puVar11 + 4;
    *puVar25 = 0;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    *puVar11 = uVar14;
    puVar11[1] = uVar3;
    puVar7 = PTR_s_EFSystem_048ffdf8;
    puVar11[2] = DAT_048ffdf0;
    puVar11[3] = puVar7;
    if (bVar9) goto LAB_0071f20c;
    bVar9 = false;
LAB_0071f1b4:
    pcStack_68 = "EFSystem";
    plVar22 = param_2;
LAB_0071f240:
    plVar12 = (long *)(**(code **)(*plVar22 + 0x30))(plVar22,&LAB_00300108,8);
    if (plVar12 != (long *)0x0) {
      FUN_038ca450(plVar12,&local_70,plVar22,plVar12,&LAB_00300108,1,1);
      puVar7 = PTR_DAT_04bd0d80;
      plVar12[0x1f] = 0;
      plVar12[0x1b] = 0;
      plVar12[0x1c] = 0;
      plVar12[0x1d] = 0;
      plVar12[0x1e] = 0;
      *plVar12 = (long)(puVar7 + 0x10);
      *(undefined4 *)((long)plVar12 + 0xd4) = 0x80000;
      FUN_038ccc00(plVar12,8,1,plVar22);
    }
    *puVar25 = plVar12;
    *(undefined8 **)(param_1 + 0x10) = puVar11;
    lVar18 = *(long *)puVar1;
    if (lVar18 == 0) goto LAB_0071f3cc;
    if (bVar9) {
LAB_0071f2ec:
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar22 = (long *)(lVar18 + 8);
      if (lVar13 != 0) {
        plVar22 = (long *)(lVar13 + 0xa8);
      }
      plVar22 = (long *)*plVar22;
      if (plVar22 != (long *)0x0) {
        bVar9 = true;
        goto LAB_0071f31c;
      }
      puVar11 = (undefined8 *)0x0;
      puVar24 = (undefined8 *)&SUB_00000020;
      _SUB_00000020 = 0;
      uRam0000000000000000 = DAT_048ffe00;
      _DAT_00000008 = DAT_048ffe08;
      _DAT_00000010 = DAT_048ffe10;
      _SUB_00000018 = PTR_s_Camera_048ffe18;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      goto LAB_0071f414;
    }
    bVar9 = false;
    plVar22 = param_2;
LAB_0071f31c:
    puVar11 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x28,8);
    uVar3 = DAT_048ffe08;
    uVar14 = DAT_048ffe00;
    puVar24 = puVar11 + 4;
    *puVar24 = 0;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    *puVar11 = uVar14;
    puVar11[1] = uVar3;
    puVar7 = PTR_s_Camera_048ffe18;
    puVar11[2] = DAT_048ffe10;
    puVar11[3] = puVar7;
    pcStack_68 = "Camera";
    if (bVar9) goto LAB_0071f414;
LAB_0071f444:
    plVar22 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xa0108,8);
    if (plVar22 == (long *)0x0) goto LAB_0071f4a8;
    FUN_038ca450(plVar22,&local_70,param_2,plVar22,0xa0108,1,1);
    puVar1 = PTR_DAT_04bd0d80 + 0x10;
    plVar22[0x1b] = 0;
    plVar22[0x1c] = 0;
    *plVar22 = (long)puVar1;
    *(undefined4 *)((long)plVar22 + 0xd4) = 0xa0000;
  }
  plVar22[0x1f] = 0;
  plVar22[0x1d] = 0;
  plVar22[0x1e] = 0;
  FUN_038ccc00(plVar22,8,1,param_2);
LAB_0071f4a8:
  *puVar24 = plVar22;
  *(undefined8 **)(param_1 + 0x18) = puVar11;
  return;
}

