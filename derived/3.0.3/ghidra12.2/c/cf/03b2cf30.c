
void FUN_03b2cf30(long param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  char *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  long *plStack_78;
  
  pbVar1 = (byte *)(param_1 + 0xd2);
  plVar23 = *(long **)PTR_DAT_04bd0810;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  uVar11 = FUN_03b2dad4(plVar23,param_1,param_3,pbVar1);
  *(undefined8 *)(param_1 + 0xd8) = uVar11;
  lVar12 = FUN_0037e610(param_1,"CaptureWorkFormat");
  if (lVar12 != 0) {
    *pbVar1 = *pbVar1 | 4;
  }
  lVar12 = FUN_0037e610(param_1,"CaptureOutputAlpha");
  if ((lVar12 != 0) && (*(int *)(lVar12 + (ulong)*(uint *)(lVar12 + 4)) == 0xff)) {
    *pbVar1 = *pbVar1 | 8;
  }
  lVar12 = FUN_0037e610(param_1,"CaptureApplyScale");
  if (lVar12 != 0) {
    *pbVar1 = *pbVar1 | 0x80;
  }
  if (*(long *)(param_1 + 0xd8) == 0) {
    *pbVar1 = *pbVar1 | 0x20;
  }
  lVar12 = FUN_03b14760(plVar23,param_1,param_2);
  *(long *)(param_1 + 0xe0) = lVar12;
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x7a8) = 5;
  }
  lVar12 = *(long *)(param_2 + 0x88);
  if (lVar12 == 0) {
    puVar15 = (undefined8 *)(param_2 + 0x30);
    lVar12 = *(long *)(param_1 + 0x100);
  }
  else {
    (**(code **)(*(long *)(lVar12 + 0xa8) + 0x18))((long *)(lVar12 + 0xa8));
    puVar15 = (undefined8 *)(lVar12 + 0xb0);
    lVar12 = *(long *)(param_1 + 0x100);
  }
  if (lVar12 != 0) goto LAB_03b2d5b8;
  uVar11 = *puVar15;
  lVar12 = FUN_0037e610(param_1,"CaptureOn");
  puVar8 = PTR_DAT_04bb2020;
  local_80 = (char *)(lVar12 + (ulong)*(uint *)(lVar12 + 4));
  local_88 = PTR_DAT_04bb2020 + 0x10;
  if (local_80 == "RGBA8") {
LAB_03b2d1f0:
    bVar6 = 0;
    bVar7 = 0;
    bVar10 = false;
    bVar4 = 0;
    bVar5 = 0;
    uVar24 = 0x1d;
  }
  else {
    uVar19 = 0;
    bVar10 = true;
    do {
      if (local_80[uVar19] != (&DAT_0405f3b5)[uVar19]) break;
      if (local_80[uVar19] == '\0') {
        if (bVar10) goto LAB_03b2d1f0;
        break;
      }
      bVar10 = uVar19 < 0x80000;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x80001);
    if (local_80 == "BC3") {
LAB_03b2d130:
      bVar6 = 0;
      bVar7 = 0;
      bVar10 = false;
      bVar4 = 0;
      bVar5 = 0;
      uVar24 = 0x33;
    }
    else {
      uVar19 = 0;
      bVar10 = true;
      do {
        if (local_80[uVar19] != (&DAT_04074611)[uVar19]) break;
        if (local_80[uVar19] == '\0') {
          if (bVar10) goto LAB_03b2d130;
          break;
        }
        bVar10 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80001);
      if (local_80 == "BC1") {
LAB_03b2d190:
        bVar6 = 0;
        bVar7 = 0;
        bVar10 = false;
        bVar4 = 0;
        bVar5 = 0;
        uVar24 = 0x2f;
      }
      else {
        uVar19 = 0;
        bVar10 = true;
        do {
          if (local_80[uVar19] != (&DAT_040c2747)[uVar19]) break;
          if (local_80[uVar19] == '\0') {
            if (bVar10) goto LAB_03b2d190;
            break;
          }
          bVar10 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        if (local_80 == "RGB565") goto LAB_03b2d1f0;
        uVar19 = 0;
        bVar10 = true;
        do {
          if (local_80[uVar19] != (&DAT_040b312a)[uVar19]) break;
          if (local_80[uVar19] == '\0') {
            if (bVar10) goto LAB_03b2d1f0;
            break;
          }
          bVar10 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        if (local_80 == "R10G10B10A2") {
LAB_03b2d66c:
          bVar6 = 0;
          bVar7 = 0;
          bVar10 = false;
          bVar4 = 0;
          bVar5 = 0;
          uVar24 = 0x22;
          goto LAB_03b2d1fc;
        }
        uVar19 = 0;
        bVar10 = true;
        do {
          if (local_80[uVar19] != (&DAT_040b84a4)[uVar19]) break;
          if (local_80[uVar19] == '\0') {
            if (bVar10) goto LAB_03b2d66c;
            break;
          }
          bVar10 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = "L8";
        FUN_006bd3a4(&local_88);
        pcVar9 = local_80;
        (**(code **)(local_98 + 0x18))(&local_98);
        if (pcVar9 == local_90) {
LAB_03b2d70c:
          bVar10 = false;
        }
        else {
          if (*local_80 == *local_90) {
            if (*local_80 != '\0') {
              lVar12 = 0;
              do {
                if ((lVar12 == 0x80000) || (local_80[lVar12 + 1] != local_90[lVar12 + 1]))
                goto LAB_03b2d714;
                if (local_80[lVar12 + 1] == '\0') break;
                lVar13 = lVar12 + 2;
                if (local_80[lVar13] != local_90[lVar12 + 2]) goto LAB_03b2d714;
                lVar12 = lVar12 + 2;
              } while (local_80[lVar13] != '\0');
            }
            goto LAB_03b2d70c;
          }
LAB_03b2d714:
          local_98 = puVar8 + 0x10;
          local_90 = "A8";
          (**(code **)(local_88 + 0x18))(&local_88);
          (**(code **)(local_88 + 0x18))(&local_88);
          pcVar9 = local_80;
          (**(code **)(local_98 + 0x18))(&local_98);
          if (pcVar9 != local_90) {
            if (*local_80 != *local_90) {
LAB_03b2d7d4:
              local_98 = puVar8 + 0x10;
              local_90 = "LA8";
              (**(code **)(local_88 + 0x18))(&local_88);
              (**(code **)(local_88 + 0x18))(&local_88);
              pcVar9 = local_80;
              (**(code **)(local_98 + 0x18))(&local_98);
              if (pcVar9 != local_90) {
                if (*local_80 != *local_90) {
LAB_03b2d894:
                  local_98 = puVar8 + 0x10;
                  local_90 = "BC4L";
                  (**(code **)(local_88 + 0x18))(&local_88);
                  (**(code **)(local_88 + 0x18))(&local_88);
                  pcVar9 = local_80;
                  (**(code **)(local_98 + 0x18))(&local_98);
                  if (pcVar9 != local_90) {
                    if (*local_80 != *local_90) {
LAB_03b2d954:
                      local_98 = puVar8 + 0x10;
                      local_90 = "BC4A";
                      (**(code **)(local_88 + 0x18))(&local_88);
                      (**(code **)(local_88 + 0x18))(&local_88);
                      pcVar9 = local_80;
                      (**(code **)(local_98 + 0x18))(&local_98);
                      if (pcVar9 != local_90) {
                        if (*local_80 != *local_90) {
LAB_03b2da14:
                          local_98 = puVar8 + 0x10;
                          local_90 = "BC5";
                          (**(code **)(local_88 + 0x18))(&local_88);
                          (**(code **)(local_88 + 0x18))(&local_88);
                          pcVar9 = local_80;
                          (**(code **)(local_98 + 0x18))(&local_98);
                          if (pcVar9 != local_90) {
                            if (*local_80 != *local_90) goto LAB_03b2d1f0;
                            if (*local_80 != '\0') {
                              lVar12 = 0;
                              do {
                                if ((lVar12 == 0x80000) ||
                                   (local_80[lVar12 + 1] != local_90[lVar12 + 1]))
                                goto LAB_03b2d1f0;
                                if (local_80[lVar12 + 1] == '\0') break;
                                lVar13 = lVar12 + 2;
                                if (local_80[lVar13] != local_90[lVar12 + 2]) goto LAB_03b2d1f0;
                                lVar12 = lVar12 + 2;
                              } while (local_80[lVar13] != '\0');
                            }
                          }
                          bVar5 = 0;
                          uVar24 = 0x37;
                          bVar10 = false;
                          bVar4 = 0;
                          bVar6 = 1;
                          bVar7 = 0;
                          goto LAB_03b2d1fc;
                        }
                        if (*local_80 != '\0') {
                          lVar12 = 0;
                          do {
                            if ((lVar12 == 0x80000) ||
                               (local_80[lVar12 + 1] != local_90[lVar12 + 1])) goto LAB_03b2da14;
                            if (local_80[lVar12 + 1] == '\0') break;
                            lVar13 = lVar12 + 2;
                            if (local_80[lVar13] != local_90[lVar12 + 2]) goto LAB_03b2da14;
                            lVar12 = lVar12 + 2;
                          } while (local_80[lVar13] != '\0');
                        }
                      }
                      bVar5 = 0;
                      bVar6 = 0;
                      bVar7 = 0;
                      uVar24 = 0x35;
                      bVar10 = true;
                      bVar4 = 1;
                      goto LAB_03b2d1fc;
                    }
                    if (*local_80 != '\0') {
                      lVar12 = 0;
                      do {
                        if ((lVar12 == 0x80000) || (local_80[lVar12 + 1] != local_90[lVar12 + 1]))
                        goto LAB_03b2d954;
                        if (local_80[lVar12 + 1] == '\0') break;
                        lVar13 = lVar12 + 2;
                        if (local_80[lVar13] != local_90[lVar12 + 2]) goto LAB_03b2d954;
                        lVar12 = lVar12 + 2;
                      } while (local_80[lVar13] != '\0');
                    }
                  }
                  bVar5 = 0;
                  bVar6 = 0;
                  bVar7 = 0;
                  uVar24 = 0x35;
                  bVar10 = false;
                  bVar4 = 1;
                  goto LAB_03b2d1fc;
                }
                if (*local_80 != '\0') {
                  lVar12 = 0;
                  do {
                    if ((lVar12 == 0x80000) || (local_80[lVar12 + 1] != local_90[lVar12 + 1]))
                    goto LAB_03b2d894;
                    if (local_80[lVar12 + 1] == '\0') break;
                    lVar13 = lVar12 + 2;
                    if (local_80[lVar13] != local_90[lVar12 + 2]) goto LAB_03b2d894;
                    lVar12 = lVar12 + 2;
                  } while (local_80[lVar13] != '\0');
                }
              }
              bVar10 = false;
              bVar4 = 0;
              bVar5 = 0;
              uVar24 = 10;
              bVar6 = 0;
              bVar7 = 1;
              goto LAB_03b2d1fc;
            }
            if (*local_80 != '\0') {
              lVar12 = 0;
              do {
                if ((lVar12 == 0x80000) || (local_80[lVar12 + 1] != local_90[lVar12 + 1]))
                goto LAB_03b2d7d4;
                if (local_80[lVar12 + 1] == '\0') break;
                lVar13 = lVar12 + 2;
                if (local_80[lVar13] != local_90[lVar12 + 2]) goto LAB_03b2d7d4;
                lVar12 = lVar12 + 2;
              } while (local_80[lVar13] != '\0');
            }
          }
          bVar10 = true;
        }
        bVar4 = 0;
        bVar7 = 0;
        bVar6 = 0;
        bVar5 = 1;
        uVar24 = 1;
      }
    }
  }
LAB_03b2d1fc:
  fVar31 = *(float *)(param_1 + 0x50);
  fVar30 = *(float *)(param_1 + 0x54);
  lVar12 = FUN_0037e610(param_1,"CaptureScale");
  puVar8 = PTR_DAT_04bb2698;
  if (lVar12 != 0) {
    fVar28 = *(float *)(lVar12 + (ulong)*(uint *)(lVar12 + 4));
    if (fVar28 <= 0.0) {
      fVar28 = 1.0;
    }
    fVar30 = fVar30 * fVar28;
    fVar31 = fVar31 * fVar28;
  }
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    puVar15 = malloc(0xa0);
  }
  else {
    plVar14 = plVar23;
    if (plVar23 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar15 = (undefined8 *)(lVar12 + 8);
      if (lVar13 != 0) {
        puVar15 = (undefined8 *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*puVar15;
    }
    puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0xa0,8);
  }
  *(undefined4 *)(puVar15 + 10) = 0xffffffff;
  fVar28 = 0.5;
  if (fVar31 < 0.0) {
    fVar28 = -0.5;
  }
  puVar15[0x11] = 0;
  puVar15[0x12] = "agl::TextureData";
  fVar29 = 0.5;
  if (fVar30 < 0.0) {
    fVar29 = -0.5;
  }
  *(undefined4 *)(puVar15 + 0x13) = 0x10000;
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[0xb] = 0;
  puVar15[0xc] = 0;
  puVar15[0xd] = 0;
  puVar15[0xe] = 0;
  puVar15[0xf] = 0;
  puVar15[0x10] = 0;
  *(undefined8 **)(param_1 + 0x100) = puVar15;
  FUN_0390a734(puVar15,1,uVar24,(int)(fVar31 + fVar28),(int)(fVar30 + fVar29),1,1,0,0,1);
  *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x90) = uVar11;
  lVar12 = *(long *)puVar8;
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x3c);
  iVar17 = *(int *)(*(long *)(param_1 + 0x100) + 0x40);
  if (lVar12 == 0) {
    plVar14 = malloc(0x38);
  }
  else {
    plVar14 = plVar23;
    if (plVar23 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar15 = (undefined8 *)(lVar12 + 8);
      if (lVar13 != 0) {
        puVar15 = (undefined8 *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*puVar15;
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x38,8);
  }
  plVar14[6] = 0;
  plVar27 = plVar14 + 1;
  *plVar27 = 0;
  *(undefined2 *)((long)plVar14 + 0x2a) = 0;
  bVar16 = 0;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar14[4] = 0;
  puVar2 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar14 + 5) = 0;
  *plVar14 = (long)puVar2;
  if (plVar23 == (long *)0x0) {
    lVar13 = *(long *)puVar8;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar15 = (undefined8 *)(lVar13 + 8);
    if (lVar12 != 0) {
      puVar15 = (undefined8 *)(lVar12 + 0xa8);
    }
    plVar23 = (long *)*puVar15;
    bVar16 = *(byte *)(plVar14 + 5) & 0xfe;
  }
  plVar14[6] = 0;
  *(byte *)(plVar14 + 5) = bVar16;
  *(undefined2 *)((long)plVar14 + 0x2a) = 0;
  *plVar27 = 0;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar14[4] = 0;
  if (iVar17 == 0) {
    iVar17 = 0;
    local_80 = (char *)0x0;
LAB_03b2d460:
    iVar18 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar14,plVar23,iVar17,uVar3,0);
    local_80 = (char *)plVar14[3];
    *(undefined2 *)((long)plVar14 + 0x2a) = 0;
    iVar17 = 0;
    if (plVar14[4] != 0) {
      iVar17 = (int)*plVar27 - *(int *)(plVar14[4] + 0x10);
    }
    if (local_80 == (char *)0x0) goto LAB_03b2d460;
    iVar18 = *(int *)((long)local_80 + 0x104);
  }
  piVar20 = *(int **)(param_1 + 0x100);
  *(int *)(param_1 + 0x250) = iVar17;
  *(int *)(param_1 + 0x254) = iVar18;
  *(char **)(param_1 + 600) = local_80;
  *(long **)(param_1 + 0x260) = plVar14;
  if ((bool)(bVar5 | bVar4)) {
    uVar22 = 1;
    if (!bVar10) {
      uVar22 = 2;
    }
    uVar21 = 1;
    if (bVar10) {
      uVar21 = 2;
    }
    uVar25 = uVar22;
    uVar26 = uVar22;
  }
  else if ((bool)(bVar7 | bVar6)) {
    uVar21 = 3;
    uVar22 = 2;
    uVar25 = 2;
    uVar26 = 2;
  }
  else {
    uVar21 = (uint)*(byte *)((long)piVar20 + 0x4d);
    uVar26 = (uint)*(byte *)(piVar20 + 0x13);
    uVar25 = (uint)*(byte *)((long)piVar20 + 0x4b);
    uVar22 = (uint)*(byte *)((long)piVar20 + 0x4a);
  }
  bVar4 = *pbVar1;
  uVar21 = uVar21 << 0x18;
  *piVar20 = iVar17;
  piVar20[1] = iVar18;
  *(char **)(piVar20 + 2) = local_80;
  *(long **)(piVar20 + 4) = plVar14;
  if ((*(byte *)((long)piVar20 + 0x4e) >> 1 & 1) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = 0x11 < *(ushort *)(piVar20 + 0x26) && *(ushort *)(piVar20 + 0x26) - 0x59 < 0xffffffd6;
  }
  local_88 = (undefined *)CONCAT44(iVar18,iVar17);
  plStack_78 = plVar14;
  FUN_038fd3e0(piVar20 + 0x14,&local_88,piVar20 + 0xc,0,*(undefined8 *)(piVar20 + 0x24),bVar10,1);
  puVar15 = *(undefined8 **)(param_1 + 0x100);
  if ((bVar4 & 8) != 0) {
    uVar21 = 0x1000000;
  }
  *(uint *)((long)puVar15 + 0x4a) = uVar21 | uVar26 << 0x10 | uVar25 << 8 | uVar22;
  if ((*(byte *)((long)puVar15 + 0x4e) >> 1 & 1) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = 0x11 < *(ushort *)(puVar15 + 0x13) && *(ushort *)(puVar15 + 0x13) - 0x59 < 0xffffffd6;
  }
  local_88 = (undefined *)*puVar15;
  local_80 = (char *)puVar15[1];
  plStack_78 = (long *)puVar15[2];
  FUN_038fd3e0(puVar15 + 10,&local_88,puVar15 + 6,0,puVar15[0x12],bVar10,0);
  FUN_03b137d0(param_1 + 0xe8,*(undefined8 *)(param_1 + 0x100),0);
LAB_03b2d5b8:
  *(long *)(param_1 + 0x128) = param_1 + 0x170;
  puVar8 = PTR_DAT_04bb2f80;
  uVar11 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)PTR_DAT_04bb2f80;
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  uVar11 = *(undefined8 *)(puVar8 + 0x28);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(puVar8 + 0x20);
  *(undefined8 *)(param_1 + 0x98) = uVar11;
  uVar11 = *(undefined8 *)(puVar8 + 0x18);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(puVar8 + 0x10);
  *(undefined8 *)(param_1 + 0x88) = uVar11;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x40;
  lVar12 = *(long *)(param_2 + 0x88);
  if (lVar12 != 0) {
    *(byte *)(lVar12 + 0xe6) = *(byte *)(lVar12 + 0xe6) | 0x10;
  }
  return;
}

