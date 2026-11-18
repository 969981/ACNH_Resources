
void FUN_03263030(long *****param_1,long ******param_2)

{
  long *****ppppplVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  byte bVar18;
  byte *pbVar19;
  long *plVar20;
  long ****pppplVar21;
  long *******ppppppplVar22;
  long lVar23;
  long lVar24;
  long *******ppppppplVar25;
  int iVar26;
  long *******ppppppplVar27;
  long ****pppplVar28;
  long *******ppppppplVar29;
  long *****ppppplVar30;
  long ******apppppplStack_220 [4];
  long *****local_200;
  long ****local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4;
  long *******local_1e0;
  long *******local_1d8;
  int local_1d0;
  long *******local_1c8;
  long *******ppppppplStack_1c0;
  undefined4 local_1b8;
  long *******local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  long *****local_188;
  undefined8 local_180;
  undefined8 local_178;
  long *******local_170;
  long *******local_168;
  long ******local_160 [10];
  long *****local_110 [10];
  long ****local_c0 [10];
  long *****local_70 [2];
  
  ppppplVar1 = param_1 + 0x6985;
  FUN_03263dc0();
  lVar23 = *(long *)PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  if (lVar23 == 0) {
LAB_032630c4:
    if (*pbVar19 < 8) goto LAB_03263130;
LAB_032630d0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03263128:
      pbVar19 = PTR_DAT_04bb5038;
      goto LAB_03263130;
    }
    lVar23 = **(long **)PTR_DAT_04bb27d0;
    bVar18 = *(byte *)(lVar23 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar18 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar23 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x20;
      if (7 < bVar18) {
        puVar2 = (uint *)(lVar23 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar19 = (byte *)(lVar23 + 0x471);
      }
    }
    bVar18 = *pbVar19;
    if (7 < bVar18) goto LAB_03263128;
  }
  else {
    if (*(int *)(lVar23 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar23 + 0x158);
    }
    if (7 < *pbVar19) {
      if ((*(int *)(lVar23 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_032630c4;
      }
      goto LAB_032630d0;
    }
LAB_03263130:
    bVar18 = *pbVar19;
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
  }
  cVar6 = *(char *)((long)param_2 + 7);
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  local_1e0 = (long *******)CONCAT71(local_1e0._1_7_,bVar18);
  lVar23 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_1e0,1);
  if (lVar23 != 0) {
    lVar24 = lVar23 + 0x194b0;
    if (*(long *)(lVar23 + 0x194b8) == 0) {
      lVar24 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      plVar20 = *(long **)(lVar24 + 0x178);
    }
    else {
      plVar20 = *(long **)(lVar23 + 0x19628);
    }
    if ((plVar20 == (long *)0x0) || ((undefined8 *)*plVar20 == (undefined8 *)0x0)) {
      FUN_0262a3f0(ppppplVar1,*(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158));
    }
    else {
      uVar17 = (*(code *)**(undefined8 **)*plVar20)();
      FUN_0262a3f0(ppppplVar1,*(long *)(lVar24 + 0x160) + *(long *)(lVar24 + 0x158));
      if ((((uVar17 & 1) != 0) && (*(long *)(lVar24 + 0x178) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar24 + 0x178) + 8), puVar13 != (undefined8 *)0x0))
      {
        (**(code **)*puVar13)();
      }
    }
  }
  pvVar14 = (void *)(*(code *)(*ppppplVar1)[3])(ppppplVar1);
  memset(pvVar14,0,0x468);
  uVar12 = *(uint *)param_2;
  ppppplVar30 = param_1;
  switch(uVar12) {
  case 0:
    pvVar14 = (void *)(*(code *)(*ppppplVar1)[3])(ppppplVar1);
    memset(pvVar14,0,0x468);
    lVar23 = (*(code *)(*ppppplVar1)[3])(ppppplVar1);
    puVar10 = PTR_DAT_04bb43c0;
    uVar17 = 0;
    do {
      local_200 = param_1;
      if ((*(uint *)(lVar23 + (uVar17 >> 5) * 4) >> (ulong)((uint)uVar17 & 0x1f) & 1) == 0)
      goto LAB_032632c8;
      uVar12 = (uint)uVar17 + 1;
      uVar17 = (ulong)uVar12;
    } while (uVar12 != 9000);
    uVar17 = 0;
LAB_032632c8:
    do {
      lVar24 = (*(code *)(*ppppplVar1)[3])(ppppplVar1);
      uVar12 = 0x2325;
      do {
        uVar8 = uVar12 + 2;
        uVar11 = (uint)uVar17;
        if ((*(uint *)(lVar24 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0) {
LAB_03263334:
          uVar12 = uVar8;
LAB_03263338:
          if (uVar12 + 1 != uVar11) goto LAB_03263344;
          goto LAB_03263628;
        }
        uVar8 = uVar12 + 1;
        if ((*(uint *)(lVar24 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0)
        goto LAB_03263334;
        if ((*(uint *)(lVar24 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) == 0)
        goto LAB_03263338;
        uVar12 = uVar12 - 3;
      } while (uVar12 != 0xfffffffd);
      if (uVar11 == 0) goto LAB_03263628;
LAB_03263344:
      (*(code *)(*ppppplVar1)[2])(&local_1f0,ppppplVar1,uVar17);
      lVar24 = *(long *)puVar10;
      uVar12 = FUN_0277d6c4(&local_1f0);
      if (*(long *)puVar10 != 0) {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar24 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          (*(code *)(*ppppplVar1)[2])(&local_1e0,ppppplVar1,uVar17);
          lVar24 = *(long *)puVar10;
          uVar12 = FUN_0277d6c4(&local_1e0);
          if (*(long *)puVar10 != 0) {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if (((uVar12 < *(uint *)(lVar24 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
               (lVar24 = (*(code *)(*ppppplVar1)[3])(ppppplVar1), uVar11 >> 3 < 0x465)) {
              lVar9 = (ulong)(uVar11 >> 5) * 4;
              *(uint *)(lVar24 + lVar9) = *(uint *)(lVar24 + lVar9) | 1 << (ulong)(uVar11 & 0x1f);
            }
          }
        }
      }
      do {
        uVar12 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar12;
        if (0x464 < uVar12 >> 3) {
          uVar12 = 0x2325;
          goto LAB_03263454;
        }
      } while ((*(uint *)(lVar23 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0);
    } while( true );
  default:
    goto switchD_0326323c_caseD_1;
  case 4:
    if (cVar6 == '\0') {
      local_1e0 = (long *******)&PTR_FUN_04b2a070;
    }
    else {
      local_1e0 = (long *******)&PTR_FUN_04b2a4d0;
    }
    break;
  case 5:
    local_1e0 = (long *******)&PTR_FUN_04b2a098;
    break;
  case 6:
    if (cVar6 == '\0') {
      local_1e0 = (long *******)&PTR_FUN_04b2a0c0;
    }
    else {
      local_1e0 = (long *******)&PTR_LAB_04b2a4f8;
    }
    break;
  case 7:
    local_1e0 = (long *******)&PTR_FUN_04b2a0e8;
    break;
  case 8:
    local_1e0 = (long *******)&PTR_FUN_04b2a110;
    break;
  case 9:
    local_1e0 = (long *******)&PTR_FUN_04b2a138;
    break;
  case 10:
    local_1e0 = (long *******)&PTR_FUN_04b2a160;
    break;
  case 0xc:
    local_1e0 = (long *******)&PTR_FUN_04b2a480;
    local_200 = param_1;
    FUN_02ce2380(ppppplVar1,&local_1e0);
    puVar10 = PTR_DAT_04bb43c0;
    local_1e0 = (long *******)&PTR_FUN_04b2a4a8;
    uVar12 = 0;
    do {
      (*(code *)(*ppppplVar1)[2])(&local_1f0,ppppplVar1,uVar12);
      lVar23 = (*(code *)(*ppppplVar1)[4])(ppppplVar1);
      uVar8 = 1 << (ulong)(uVar12 & 0x1f);
      if ((*(uint *)(lVar23 + (ulong)(uVar12 >> 5) * 4) & uVar8) != 0) {
        lVar23 = *(long *)puVar10;
        uVar11 = FUN_0277d6c4(&local_1f0);
        if (*(long *)puVar10 != 0) {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar23 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar17 = (*(code *)*local_1e0)(&local_1e0,&local_1f0), (uVar17 & 1) == 0))
          goto LAB_03263564;
        }
        lVar23 = (*(code *)(*ppppplVar1)[3])(ppppplVar1);
        lVar24 = (ulong)(uVar12 >> 5) * 4;
        *(uint *)(lVar23 + lVar24) = *(uint *)(lVar23 + lVar24) & (uVar8 ^ 0xffffffff);
      }
LAB_03263564:
      uVar12 = uVar12 + 1;
    } while (uVar12 != 9000);
    goto LAB_03263710;
  case 0xd:
    local_1e0 = (long *******)&PTR_FUN_04b2a4a8;
    break;
  case 0xe:
    local_1e0 = (long *******)&PTR_FUN_04b2a1b0;
    break;
  case 0x1c:
    local_1e0 = (long *******)&PTR_FUN_04b2a1d8;
  }
  FUN_02ce2380(ppppplVar1,&local_1e0);
  goto LAB_0326373c;
  while( true ) {
    uVar8 = uVar12 + 1;
    if ((*(uint *)(lVar23 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0)
    goto LAB_032632c0;
    if ((*(uint *)(lVar23 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) == 0)
    goto LAB_032632c4;
    uVar12 = uVar12 - 3;
    if (uVar12 == 0xfffffffd) break;
LAB_03263454:
    uVar8 = uVar12 + 2;
    if ((*(uint *)(lVar23 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0) {
LAB_032632c0:
      uVar12 = uVar8;
LAB_032632c4:
      uVar17 = (ulong)(uVar12 + 1);
      goto LAB_032632c8;
    }
  }
  uVar17 = 0;
  goto LAB_032632c8;
LAB_03263628:
  ppppplVar30 = local_200;
  if (cVar6 != '\0') {
    uVar12 = 0;
    local_1e0 = (long *******)&PTR_FUN_04b2a4a8;
    do {
      (*(code *)(*ppppplVar1)[2])(&local_1f0,ppppplVar1,uVar12);
      lVar23 = (*(code *)(*ppppplVar1)[4])(ppppplVar1);
      uVar8 = 1 << (ulong)(uVar12 & 0x1f);
      if ((*(uint *)(lVar23 + (ulong)(uVar12 >> 5) * 4) & uVar8) != 0) {
        lVar23 = *(long *)puVar10;
        uVar11 = FUN_0277d6c4(&local_1f0);
        if (*(long *)puVar10 != 0) {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar23 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar17 = (*(code *)*local_1e0)(&local_1e0,&local_1f0), (uVar17 & 1) == 0))
          goto LAB_03263670;
        }
        lVar23 = (*(code *)(*ppppplVar1)[3])(ppppplVar1);
        lVar24 = (ulong)(uVar12 >> 5) * 4;
        *(uint *)(lVar23 + lVar24) = *(uint *)(lVar23 + lVar24) & (uVar8 ^ 0xffffffff);
      }
LAB_03263670:
      uVar12 = uVar12 + 1;
    } while (uVar12 != 9000);
LAB_03263710:
    ppppplVar30 = local_200;
  }
LAB_0326373c:
  uVar12 = *(uint *)param_2;
switchD_0326323c_caseD_1:
  sVar7 = *(short *)((long)param_2 + 4);
  if (sVar7 == 0x100) {
    local_1d8 = (long *******)PTR_LAB_04bc8d30;
    pppplVar28 = param_1[0x6986];
LAB_032637cc:
    local_1e0 = (long *******)(PTR_DAT_04bc5db0 + 0x10);
    param_1 = param_1 + 0x6986;
    (*(code *)pppplVar28[4])(param_1);
    uVar15 = (*(code *)(*param_1)[2])(param_1);
    FUN_02ceebc0(uVar15,&local_1e0);
  }
  else {
    if (sVar7 == 0x10) {
      if (uVar12 == 6) {
        local_1d8 = (long *******)PTR_LAB_04bc8d38;
      }
      else {
        local_1d8 = (long *******)PTR_FUN_04bc8d40;
      }
      pppplVar28 = param_1[0x6986];
      goto LAB_032637cc;
    }
    if (sVar7 == 8) {
      (*(code *)(*ppppplVar1)[8])(ppppplVar1);
    }
  }
  puVar16 = PTR_DAT_04bb5ce0;
  puVar10 = PTR_DAT_04bb43c0;
  local_70[0] = ppppplVar30;
  local_1e0 = (long *******)&local_1e0;
  local_1d8 = (long *******)&local_1e0;
  local_110[0] = local_c0;
  local_160[0] = local_110;
  local_1d0 = 0;
  local_1b0 = local_160;
  local_c0[0] = (long ****)0x0;
  local_1b8 = 4;
  local_1c8 = (long *******)&local_1b0;
  ppppppplStack_1c0 = (long *******)&local_1b0;
  if (*(uint *)param_2 == 8) {
    bVar18 = *(byte *)((long)param_2 + 6) >> 2;
  }
  else {
    if (*(uint *)param_2 != 9) goto LAB_0326389c;
    bVar18 = *(byte *)((long)param_2 + 6) >> 1;
  }
  if ((bVar18 & 1) != 0) {
    local_1c8 = local_160;
    local_1e0 = (long *******)&local_170;
    local_1d8 = (long *******)&local_170;
    local_168 = (long *******)&local_1e0;
    local_178 = 0;
    local_170 = (long *******)&local_1e0;
    local_1d0 = 1;
    local_1b0 = (long *******)&PTR_LAB_04b15bd8;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = &DAT_04b15c00;
    local_188 = (long *****)local_70;
    local_180 = 0;
  }
LAB_0326389c:
  local_1e0 = local_1d8;
  if (((*(byte *)((long)param_2 + 6) >> 3 & 1) != 0) &&
     ((*(uint *)param_2 == 9 || (*(uint *)param_2 == 0)))) {
    lVar23 = *(long *)PTR_DAT_04bb43c0;
    puVar3 = PTR_DAT_04bb37e0;
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      puVar3 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
    }
    uVar12 = FUN_0277d6c4(puVar3);
    ppppppplVar25 = local_1c8;
    if (*(long *)puVar10 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        if (local_1c8 != (long *******)0x0) {
          local_1c8 = (long *******)*local_1c8;
        }
        *ppppppplVar25 = (long ******)&PTR_LAB_04b15bb0;
        ppppppplVar25[1] = (long ******)0x0;
        ppppppplVar25[6] = (long ******)0x0;
        ppppppplVar25[7] = (long ******)0x0;
        ppppppplVar22 = ppppppplVar25 + 8;
        *ppppppplVar22 = (long ******)0x0;
        ppppppplVar25[9] = (long ******)&local_1e0;
        ppppppplVar25[4] = (long ******)0x0;
        ppppppplVar25[5] = (long ******)0x0;
        ppppppplVar25[2] = (long ******)0x0;
        ppppppplVar25[3] = (long ******)0x0;
        *ppppppplVar22 = (long ******)local_1e0;
        if (local_1e0 != (long *******)0x0) {
          local_1e0[1] = (long ******)ppppppplVar22;
        }
        local_1d0 = local_1d0 + 1;
        ppppppplVar25[2] = param_2;
        *ppppppplVar25 = (long ******)&PTR_FUN_04b15c28;
        ppppppplVar25[4] = (long ******)&DAT_04b15c50;
        ppppppplVar25[5] = local_70;
        local_1e0 = ppppppplVar22;
      }
    }
    lVar23 = *(long *)puVar16;
    puVar16 = PTR_DAT_04bb37e0;
    if ((lVar23 != 0) && (*(char *)(lVar23 + 0xe9e) != '\0')) {
      puVar16 = (undefined *)(lVar23 + 0xe94);
    }
    lVar23 = *(long *)puVar10;
    uVar12 = FUN_0277d6c4(puVar16);
    ppppppplVar22 = local_1c8;
    ppppppplVar25 = local_1e0;
    if (*(long *)puVar10 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        if (local_1c8 != (long *******)0x0) {
          local_1c8 = (long *******)*local_1c8;
        }
        *ppppppplVar22 = (long ******)&PTR_LAB_04b15bb0;
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        local_1e0 = ppppppplVar22 + 8;
        *local_1e0 = (long ******)0x0;
        ppppppplVar22[9] = (long ******)&local_1e0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        ppppppplVar22[3] = (long ******)0x0;
        *local_1e0 = (long ******)ppppppplVar25;
        if (ppppppplVar25 != (long *******)0x0) {
          ppppppplVar25[1] = (long ******)local_1e0;
        }
        local_1d0 = local_1d0 + 1;
        ppppppplVar22[2] = param_2;
        *ppppppplVar22 = (long ******)&PTR_LAB_04b15c78;
        ppppppplVar22[4] = (long ******)&DAT_04b15ca0;
        ppppppplVar22[5] = local_70;
      }
    }
  }
  puVar10 = PTR_DAT_04bb43c0;
  if (((*(byte *)((long)param_2 + 6) >> 4 & 1) != 0) && ((*(uint *)param_2 | 8) == 8)) {
    lVar23 = *(long *)PTR_DAT_04bb43c0;
    puVar16 = PTR_DAT_04bb37e0;
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      puVar16 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe54);
    }
    uVar12 = FUN_0277d6c4(puVar16);
    ppppppplVar22 = local_1c8;
    ppppppplVar25 = local_1e0;
    if (*(long *)puVar10 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        if (local_1c8 != (long *******)0x0) {
          local_1c8 = (long *******)*local_1c8;
        }
        *ppppppplVar22 = (long ******)&PTR_LAB_04b15bb0;
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        local_1e0 = ppppppplVar22 + 8;
        *local_1e0 = (long ******)0x0;
        ppppppplVar22[9] = (long ******)&local_1e0;
        ppppppplVar22[4] = (long ******)0x0;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        ppppppplVar22[3] = (long ******)0x0;
        *local_1e0 = (long ******)ppppppplVar25;
        if (ppppppplVar25 != (long *******)0x0) {
          ppppppplVar25[1] = (long ******)local_1e0;
        }
        local_1d0 = local_1d0 + 1;
        ppppppplVar22[2] = param_2;
        *ppppppplVar22 = (long ******)&PTR_LAB_04b15cc8;
        ppppppplVar22[4] = (long ******)&DAT_04b15cf0;
        ppppppplVar22[5] = local_70;
      }
    }
  }
  puVar10 = PTR_DAT_04bb37e0;
  if ((((ulong)*param_2 & 0x1000000000000) != 0) && (*(int *)(ppppplVar30 + 0x8d3d) != 0)) {
    pppplVar28 = ppppplVar30[0x8d3e];
    iVar26 = 0;
    local_1f8 = pppplVar28 + *(int *)(ppppplVar30 + 0x8d3d);
    ppppppplVar25 = local_1d8;
    do {
      while( true ) {
        ppppppplVar27 = ppppppplVar25;
        ppppppplVar22 = ppppppplVar27 + -8;
        if (ppppppplVar22 == apppppplStack_220) break;
        local_1f0 = 0xffffffff;
        ppppppplVar25 = (long *******)ppppppplVar27[1];
        local_1ec = *(undefined4 *)((long)*pppplVar28 + 4);
        local_1e8 = *(undefined4 *)(*pppplVar28 + 1);
        local_1e4 = 2;
        uVar17 = (*(code *)*ppppppplVar27[-8])(ppppppplVar22,&local_1f0);
        if ((uVar17 & 1) != 0) {
          (*(code *)*ppppppplVar27[-4])();
          if (*ppppppplVar27 != (long ******)0x0) {
            (*ppppppplVar27)[1] = (long *****)ppppppplVar27[1];
          }
          if (ppppppplVar27[1] != (long ******)0x0) {
            *ppppppplVar27[1] = (long *****)*ppppppplVar27;
          }
          *ppppppplVar27 = (long ******)0x0;
          ppppppplVar27[1] = (long ******)0x0;
          local_1d0 = local_1d0 + -1;
          *ppppppplVar22 = (long ******)local_1c8;
          local_1c8 = ppppppplVar22;
        }
      }
      if (*(int *)ppppplVar30 < *(int *)((long)ppppplVar30 + 4)) {
        pppplVar21 = ppppplVar30[2];
        if (pppplVar21 != (long ****)0x0) {
          ppppplVar30[2] = (long ****)*pppplVar21;
        }
        *(undefined4 *)pppplVar21 = 0;
        *(undefined4 *)((long)pppplVar21 + 4) = *(undefined4 *)puVar10;
        *(undefined4 *)(pppplVar21 + 1) = *(undefined4 *)(puVar10 + 4);
        *(undefined4 *)((long)pppplVar21 + 0xc) = 0xffffffff;
        if (*(int *)ppppplVar30 < *(int *)((long)ppppplVar30 + 4)) {
          ppppplVar30[1][*(int *)ppppplVar30] = (long ***)pppplVar21;
          *(int *)ppppplVar30 = *(int *)ppppplVar30 + 1;
        }
        uVar4 = *(undefined4 *)((long)*pppplVar28 + 4);
        uVar5 = *(undefined4 *)(*pppplVar28 + 1);
        *(undefined4 *)pppplVar21 = 3;
        *(undefined4 *)((long)pppplVar21 + 4) = uVar4;
        *(undefined4 *)(pppplVar21 + 1) = uVar5;
        *(int *)((long)pppplVar21 + 0xc) = iVar26;
      }
      pppplVar28 = pppplVar28 + 1;
      iVar26 = iVar26 + 1;
      ppppppplVar25 = local_1d8;
    } while (pppplVar28 != local_1f8);
  }
  ppppppplVar25 = (long *******)&local_1d8;
  if ((long ********)local_1d8 != &local_1e0) {
    ppppppplVar27 = local_1d8 + -8;
    ppppppplVar22 = local_1d8;
    do {
      ppppppplVar29 = (long *******)ppppppplVar22[1];
      (*(code *)*ppppppplVar27[4])();
      if (*ppppppplVar22 != (long ******)0x0) {
        (*ppppppplVar22)[1] = (long *****)ppppppplVar22[1];
      }
      if (ppppppplVar22[1] != (long ******)0x0) {
        *ppppppplVar22[1] = (long *****)*ppppppplVar22;
      }
      *ppppppplVar22 = (long ******)0x0;
      ppppppplVar22[1] = (long ******)0x0;
      local_1d0 = local_1d0 + -1;
      *ppppppplVar27 = (long ******)local_1c8;
      local_1c8 = ppppppplVar27;
      ppppppplVar27 = ppppppplVar29 + -8;
      ppppppplVar22 = ppppppplVar29;
    } while (ppppppplVar27 != apppppplStack_220);
  }
  do {
    ppppppplVar22 = (long *******)*ppppppplVar25;
    ppppppplVar25 = ppppppplVar22 + 1;
  } while ((long ********)ppppppplVar22 != &local_1e0);
  return;
}

