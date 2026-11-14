
/* WARNING: Removing unreachable block (ram,0x0154c208) */
/* WARNING: Removing unreachable block (ram,0x0154c04c) */
/* WARNING: Removing unreachable block (ram,0x0154be88) */
/* WARNING: Removing unreachable block (ram,0x0154b700) */
/* WARNING: Removing unreachable block (ram,0x0154b808) */
/* WARNING: Removing unreachable block (ram,0x0154ba20) */
/* WARNING: Removing unreachable block (ram,0x0154bd34) */
/* WARNING: Removing unreachable block (ram,0x0154b914) */
/* WARNING: Removing unreachable block (ram,0x0154b588) */
/* WARNING: Removing unreachable block (ram,0x0154b4ac) */
/* WARNING: Removing unreachable block (ram,0x0154b264) */
/* WARNING: Removing unreachable block (ram,0x0154b370) */
/* WARNING: Removing unreachable block (ram,0x0154bf6c) */
/* WARNING: Removing unreachable block (ram,0x0154c128) */
/* WARNING: Removing unreachable block (ram,0x0154c2e8) */
/* WARNING: Removing unreachable block (ram,0x0154c3c8) */
/* WARNING: Removing unreachable block (ram,0x0154bb24) */
/* WARNING: Removing unreachable block (ram,0x0154bc30) */

void FUN_0154aec0(uint param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  short sVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined2 *puVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined **local_d0;
  undefined **local_c8;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined *local_b0;
  undefined *puStack_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  undefined4 local_90;
  int iStack_8c;
  undefined *local_88;
  uint local_80;
  undefined4 uStack_7c;
  byte local_78;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  
  puVar8 = PTR_DAT_04bbbf90;
  puVar2 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)param_1 * 4);
  if (0x38 < param_1) {
    puVar2 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  }
  uStack_7c = *puVar2;
  local_80 = param_1;
  local_6c = param_1;
  local_78 = FUN_017baf44(uStack_7c);
  local_78 = local_78 & 1;
  local_88 = PTR_DAT_04bb5438 + 0x10;
  if (local_6c == 0) {
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if (lVar15 == 0) {
      puVar19 = &DAT_055c04a0;
    }
    else {
      puVar19 = &DAT_055c04a0;
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar11 = FUN_006bd550(*puVar19,0);
        puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar11 != 0x758f7eaf) {
          puVar19 = &DAT_055c04a0;
        }
      }
    }
    uVar16 = 0;
    piVar13 = (int *)(puVar8 + 8);
    do {
      uVar14 = (uint)uVar16;
      piVar3 = piVar13 + uVar16;
      if (0x38 < uVar14) {
        piVar3 = piVar13;
      }
      if (*piVar3 == *(int *)(puVar19 + 7)) goto LAB_0154b0a0;
      uVar18 = 0x39;
      if ((int)uVar14 < 0x39) {
        uVar18 = uVar14 + 1;
      }
      uVar16 = (ulong)uVar18;
    } while (uVar18 != 0x39);
    uVar14 = 0;
LAB_0154b0a0:
    bVar9 = uVar14 == 1;
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if (lVar15 == 0) {
      puVar19 = &DAT_055c04a0;
    }
    else {
      puVar19 = &DAT_055c04a0;
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar11 = FUN_006bd550(*puVar19,0);
        puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar11 != 0x758f7eaf) {
          puVar19 = &DAT_055c04a0;
        }
      }
    }
    uVar16 = 0;
    piVar13 = (int *)(puVar8 + 8);
    do {
      uVar14 = (uint)uVar16;
      piVar3 = piVar13 + uVar16;
      if (0x38 < uVar14) {
        piVar3 = piVar13;
      }
      if (*piVar3 == *(int *)(puVar19 + 7)) goto LAB_0154b03c;
      uVar18 = 0x39;
      if ((int)uVar14 < 0x39) {
        uVar18 = uVar14 + 1;
      }
      uVar16 = (ulong)uVar18;
    } while (uVar18 != 0x39);
    uVar14 = 0;
LAB_0154b03c:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar14);
    bVar9 = local_6c == 1;
    if (uVar14 != local_6c) {
      bVar7 = false;
      goto LAB_0154b0fc;
    }
  }
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,4);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 4 & 1) != 0) {
      return;
    }
  }
  bVar7 = true;
LAB_0154b0fc:
  lVar15 = FUN_01a4fa00(&local_88);
  puVar8 = PTR_DAT_04bb27a8;
  iVar5 = *(int *)(lVar15 + 0x10);
  local_b4 = *(int *)(lVar15 + 0x14);
  local_90 = *(undefined4 *)(lVar15 + 0x20);
  iStack_8c = *(int *)(lVar15 + 0x24);
  iVar11 = iStack_8c + 1;
  bVar10 = iVar11 != local_b4;
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  local_d0 = &puStack_a8;
  local_c8 = &local_98;
  local_b8 = iVar5;
  local_a0 = iVar5;
  iStack_9c = local_b4;
  puStack_a8 = local_c0;
  local_98 = local_c0;
  if (bVar7) {
    if (bVar9) {
      while (bVar10) {
        do {
          puVar12 = (undefined2 *)FUN_01a5190c(&local_88,0,&local_c0,0);
          local_d8 = *puVar12;
          local_d6 = *(undefined1 *)(puVar12 + 1);
          local_d5 = *(undefined1 *)((long)puVar12 + 3);
          local_d4 = *(undefined4 *)(puVar12 + 2);
          uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)FUN_014fbd50(&local_88,0,&local_c0);
            if (*piVar13 != 0) {
              FUN_01513b9c(&local_c0,0,0);
            }
            uVar16 = FUN_01a4f798(&local_88,0,&local_c0);
            if ((uVar16 & 1) != 0) {
              if (local_80 == 0) {
LAB_0154b240:
                plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154b244:
                lVar15 = *plVar17;
              }
              else {
                local_68 = local_80;
                if (local_80 != 0) {
                  if (local_80 == 0) goto LAB_0154b240;
                  plVar1 = (long *)(*(long *)puVar8 + 0x30);
                  plVar17 = plVar1 + local_80;
                  if (0x38 < local_80) {
                    plVar17 = plVar1;
                  }
                  goto LAB_0154b244;
                }
                lVar15 = 0;
              }
              local_64 = 0;
              if (*(long *)(lVar15 + 0xd0) != 0) {
                FUN_012e5af4(*(long *)(lVar15 + 0xd0),&local_c0);
              }
            }
          }
          puVar12 = (undefined2 *)FUN_01a5190c(&local_88,1,&local_c0,0);
          local_d8 = *puVar12;
          local_d6 = *(undefined1 *)(puVar12 + 1);
          local_d5 = *(undefined1 *)((long)puVar12 + 3);
          local_d4 = *(undefined4 *)(puVar12 + 2);
          uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)FUN_014fbd50(&local_88,1,&local_c0);
            if (*piVar13 != 0) {
              FUN_01513b9c(&local_c0,1,0);
            }
            uVar16 = FUN_01a4f798(&local_88,1,&local_c0);
            if ((uVar16 & 1) != 0) {
              if (local_80 == 0) {
LAB_0154b34c:
                plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154b350:
                lVar15 = *plVar17;
              }
              else {
                local_68 = local_80;
                if (local_80 != 0) {
                  if (local_80 == 0) goto LAB_0154b34c;
                  plVar1 = (long *)(*(long *)puVar8 + 0x30);
                  plVar17 = plVar1 + local_80;
                  if (0x38 < local_80) {
                    plVar17 = plVar1;
                  }
                  goto LAB_0154b350;
                }
                lVar15 = 0;
              }
              local_64 = 1;
              if (*(long *)(lVar15 + 0xe0) != 0) {
                FUN_012e5af4(*(long *)(lVar15 + 0xe0),&local_c0);
              }
            }
          }
          if (local_b8 < *(int *)(local_c8 + 1)) {
            local_b8 = local_b8 + 1;
          }
          else {
            local_b4 = local_b4 + 1;
            local_b8 = *(int *)(local_d0 + 1);
          }
        } while (iVar5 != local_b8);
        bVar10 = iVar11 != local_b4;
      }
    }
    else {
      while (bVar10) {
        do {
          puVar12 = (undefined2 *)FUN_01a5190c(&local_88,0,&local_c0,0);
          local_d8 = *puVar12;
          local_d6 = *(undefined1 *)(puVar12 + 1);
          local_d5 = *(undefined1 *)((long)puVar12 + 3);
          local_d4 = *(undefined4 *)(puVar12 + 2);
          uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)FUN_014fbd50(&local_88,0,&local_c0);
            if (*piVar13 != 0) {
              FUN_01513b9c(&local_c0,0,0);
            }
            uVar16 = FUN_01a4f798(&local_88,0,&local_c0);
            if ((uVar16 & 1) != 0) {
              if (local_80 == 0) {
LAB_0154b6dc:
                plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154b6e0:
                lVar15 = *plVar17;
              }
              else {
                local_68 = local_80;
                if (local_80 != 0) {
                  if (local_80 == 0) goto LAB_0154b6dc;
                  plVar1 = (long *)(*(long *)puVar8 + 0x30);
                  plVar17 = plVar1 + local_80;
                  if (0x38 < local_80) {
                    plVar17 = plVar1;
                  }
                  goto LAB_0154b6e0;
                }
                lVar15 = 0;
              }
              local_64 = 0;
              if (*(long *)(lVar15 + 0xd0) != 0) {
                FUN_012e5af4(*(long *)(lVar15 + 0xd0),&local_c0);
              }
            }
          }
          puVar12 = (undefined2 *)FUN_01a5190c(&local_88,1,&local_c0,0);
          local_d8 = *puVar12;
          local_d6 = *(undefined1 *)(puVar12 + 1);
          local_d5 = *(undefined1 *)((long)puVar12 + 3);
          local_d4 = *(undefined4 *)(puVar12 + 2);
          uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)FUN_014fbd50(&local_88,1,&local_c0);
            if (*piVar13 != 0) {
              FUN_01513b9c(&local_c0,1,0);
            }
            uVar16 = FUN_01a4f798(&local_88,1,&local_c0);
            if ((uVar16 & 1) != 0) {
              if (local_80 == 0) {
LAB_0154b7e0:
                plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154b7e4:
                lVar15 = *plVar17;
              }
              else {
                local_68 = local_80;
                if (local_80 != 0) {
                  if (local_80 == 0) goto LAB_0154b7e0;
                  plVar1 = (long *)(*(long *)puVar8 + 0x30);
                  plVar17 = plVar1 + local_80;
                  if (0x38 < local_80) {
                    plVar17 = plVar1;
                  }
                  goto LAB_0154b7e4;
                }
                lVar15 = 0;
              }
              local_64 = 1;
              if (*(long *)(lVar15 + 0xe0) != 0) {
                FUN_012e5af4(*(long *)(lVar15 + 0xe0),&local_c0);
              }
            }
          }
          puVar12 = (undefined2 *)FUN_01a5190c(&local_88,2,&local_c0,0);
          local_d8 = *puVar12;
          local_d6 = *(undefined1 *)(puVar12 + 1);
          local_d5 = *(undefined1 *)((long)puVar12 + 3);
          local_d4 = *(undefined4 *)(puVar12 + 2);
          uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)FUN_014fbd50(&local_88,2,&local_c0);
            if (*piVar13 != 0) {
              FUN_01513b9c(&local_c0,2,0);
            }
            uVar16 = FUN_01a4f798(&local_88,2,&local_c0);
            if ((uVar16 & 1) != 0) {
              if (local_80 == 0) {
LAB_0154b8ec:
                plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154b8f0:
                lVar15 = *plVar17;
              }
              else {
                local_68 = local_80;
                if (local_80 != 0) {
                  if (local_80 == 0) goto LAB_0154b8ec;
                  plVar1 = (long *)(*(long *)puVar8 + 0x30);
                  plVar17 = plVar1 + local_80;
                  if (0x38 < local_80) {
                    plVar17 = plVar1;
                  }
                  goto LAB_0154b8f0;
                }
                lVar15 = 0;
              }
              local_64 = 2;
              if (*(long *)(lVar15 + 0xf0) != 0) {
                FUN_012e5af4(*(long *)(lVar15 + 0xf0),&local_c0);
              }
            }
          }
          puVar12 = (undefined2 *)FUN_01a5190c(&local_88,3,&local_c0,0);
          local_d8 = *puVar12;
          local_d6 = *(undefined1 *)(puVar12 + 1);
          local_d5 = *(undefined1 *)((long)puVar12 + 3);
          local_d4 = *(undefined4 *)(puVar12 + 2);
          uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)FUN_014fbd50(&local_88,3,&local_c0);
            if (*piVar13 != 0) {
              FUN_01513b9c(&local_c0,3,0);
            }
            uVar16 = FUN_01a4f798(&local_88,3,&local_c0);
            if ((uVar16 & 1) != 0) {
              if (local_80 == 0) {
LAB_0154b9fc:
                plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154ba00:
                lVar15 = *plVar17;
              }
              else {
                local_68 = local_80;
                if (local_80 != 0) {
                  if (local_80 == 0) goto LAB_0154b9fc;
                  plVar1 = (long *)(*(long *)puVar8 + 0x30);
                  plVar17 = plVar1 + local_80;
                  if (0x38 < local_80) {
                    plVar17 = plVar1;
                  }
                  goto LAB_0154ba00;
                }
                lVar15 = 0;
              }
              local_64 = 3;
              if (*(long *)(lVar15 + 0x100) != 0) {
                FUN_012e5af4(*(long *)(lVar15 + 0x100),&local_c0);
              }
            }
          }
          puVar12 = (undefined2 *)FUN_01a5190c(&local_88,4,&local_c0,0);
          local_d8 = *puVar12;
          local_d6 = *(undefined1 *)(puVar12 + 1);
          local_d5 = *(undefined1 *)((long)puVar12 + 3);
          local_d4 = *(undefined4 *)(puVar12 + 2);
          uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)FUN_014fbd50(&local_88,4,&local_c0);
            if (*piVar13 != 0) {
              FUN_01513b9c(&local_c0,4,0);
            }
            uVar16 = FUN_01a4f798(&local_88,4,&local_c0);
            if ((uVar16 & 1) != 0) {
              if (local_80 == 0) {
LAB_0154bb00:
                plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154bb04:
                lVar15 = *plVar17;
              }
              else {
                local_68 = local_80;
                if (local_80 != 0) {
                  if (local_80 == 0) goto LAB_0154bb00;
                  plVar1 = (long *)(*(long *)puVar8 + 0x30);
                  plVar17 = plVar1 + local_80;
                  if (0x38 < local_80) {
                    plVar17 = plVar1;
                  }
                  goto LAB_0154bb04;
                }
                lVar15 = 0;
              }
              local_64 = 4;
              if (*(long *)(lVar15 + 0x110) != 0) {
                FUN_012e5af4(*(long *)(lVar15 + 0x110),&local_c0);
              }
            }
          }
          puVar12 = (undefined2 *)FUN_01a5190c(&local_88,5,&local_c0,0);
          local_d8 = *puVar12;
          local_d6 = *(undefined1 *)(puVar12 + 1);
          local_d5 = *(undefined1 *)((long)puVar12 + 3);
          local_d4 = *(undefined4 *)(puVar12 + 2);
          uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)FUN_014fbd50(&local_88,5,&local_c0);
            if (*piVar13 != 0) {
              FUN_01513b9c(&local_c0,5,0);
            }
            uVar16 = FUN_01a4f798(&local_88,5,&local_c0);
            if ((uVar16 & 1) != 0) {
              if (local_80 == 0) {
LAB_0154bc0c:
                plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154bc10:
                lVar15 = *plVar17;
              }
              else {
                local_68 = local_80;
                if (local_80 != 0) {
                  if (local_80 == 0) goto LAB_0154bc0c;
                  plVar1 = (long *)(*(long *)puVar8 + 0x30);
                  plVar17 = plVar1 + local_80;
                  if (0x38 < local_80) {
                    plVar17 = plVar1;
                  }
                  goto LAB_0154bc10;
                }
                lVar15 = 0;
              }
              local_64 = 5;
              if (*(long *)(lVar15 + 0x120) != 0) {
                FUN_012e5af4(*(long *)(lVar15 + 0x120),&local_c0);
              }
            }
          }
          puVar12 = (undefined2 *)FUN_01a5190c(&local_88,7,&local_c0,0);
          local_d8 = *puVar12;
          local_d6 = *(undefined1 *)(puVar12 + 1);
          local_d5 = *(undefined1 *)((long)puVar12 + 3);
          local_d4 = *(undefined4 *)(puVar12 + 2);
          uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
          if ((uVar16 & 1) != 0) {
            piVar13 = (int *)FUN_014fbd50(&local_88,7,&local_c0);
            if (*piVar13 != 0) {
              FUN_01513b9c(&local_c0,7,0);
            }
            uVar16 = FUN_01a4f798(&local_88,7,&local_c0);
            if ((uVar16 & 1) != 0) {
              if (local_80 == 0) {
LAB_0154bd10:
                plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154bd14:
                lVar15 = *plVar17;
              }
              else {
                local_68 = local_80;
                if (local_80 != 0) {
                  if (local_80 == 0) goto LAB_0154bd10;
                  plVar1 = (long *)(*(long *)puVar8 + 0x30);
                  plVar17 = plVar1 + local_80;
                  if (0x38 < local_80) {
                    plVar17 = plVar1;
                  }
                  goto LAB_0154bd14;
                }
                lVar15 = 0;
              }
              local_64 = 7;
              if (*(long *)(lVar15 + 0x140) != 0) {
                FUN_012e5af4(*(long *)(lVar15 + 0x140),&local_c0);
              }
            }
          }
          if (local_b8 < *(int *)(local_c8 + 1)) {
            local_b8 = local_b8 + 1;
          }
          else {
            local_b4 = local_b4 + 1;
            local_b8 = *(int *)(local_d0 + 1);
          }
        } while (iVar5 != local_b8);
        bVar10 = iVar11 != local_b4;
      }
    }
  }
  else if (bVar9) {
    while (bVar10) {
      do {
        puVar12 = (undefined2 *)FUN_01a5190c(&local_88,0,&local_c0,0);
        local_d8 = *puVar12;
        local_d6 = *(undefined1 *)(puVar12 + 1);
        local_d5 = *(undefined1 *)((long)puVar12 + 3);
        local_d4 = *(undefined4 *)(puVar12 + 2);
        uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
        if (((uVar16 & 1) != 0) && (uVar16 = FUN_01a4f798(&local_88,0,&local_c0), (uVar16 & 1) != 0)
           ) {
          if (local_80 == 0) {
LAB_0154b488:
            plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154b48c:
            lVar15 = *plVar17;
          }
          else {
            local_68 = local_80;
            if (local_80 != 0) {
              if (local_80 == 0) goto LAB_0154b488;
              plVar1 = (long *)(*(long *)puVar8 + 0x30);
              plVar17 = plVar1 + local_80;
              if (0x38 < local_80) {
                plVar17 = plVar1;
              }
              goto LAB_0154b48c;
            }
            lVar15 = 0;
          }
          local_64 = 0;
          if (*(long *)(lVar15 + 0xd0) != 0) {
            FUN_012e5af4(*(long *)(lVar15 + 0xd0),&local_c0);
          }
        }
        puVar12 = (undefined2 *)FUN_01a5190c(&local_88,1,&local_c0,0);
        local_d8 = *puVar12;
        local_d6 = *(undefined1 *)(puVar12 + 1);
        local_d5 = *(undefined1 *)((long)puVar12 + 3);
        local_d4 = *(undefined4 *)(puVar12 + 2);
        uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
        if (((uVar16 & 1) != 0) && (uVar16 = FUN_01a4f798(&local_88,1,&local_c0), (uVar16 & 1) != 0)
           ) {
          if (local_80 == 0) {
LAB_0154b564:
            plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154b568:
            lVar15 = *plVar17;
          }
          else {
            local_68 = local_80;
            if (local_80 != 0) {
              if (local_80 == 0) goto LAB_0154b564;
              plVar1 = (long *)(*(long *)puVar8 + 0x30);
              plVar17 = plVar1 + local_80;
              if (0x38 < local_80) {
                plVar17 = plVar1;
              }
              goto LAB_0154b568;
            }
            lVar15 = 0;
          }
          local_64 = 1;
          if (*(long *)(lVar15 + 0xe0) != 0) {
            FUN_012e5af4(*(long *)(lVar15 + 0xe0),&local_c0);
          }
        }
        if (local_b8 < *(int *)(local_c8 + 1)) {
          local_b8 = local_b8 + 1;
        }
        else {
          local_b4 = local_b4 + 1;
          local_b8 = *(int *)(local_d0 + 1);
        }
      } while (iVar5 != local_b8);
      bVar10 = iVar11 != local_b4;
    }
  }
  else {
    while (bVar10) {
      do {
        puVar12 = (undefined2 *)FUN_01a5190c(&local_88,0,&local_c0,0);
        local_d8 = *puVar12;
        local_d6 = *(undefined1 *)(puVar12 + 1);
        local_d5 = *(undefined1 *)((long)puVar12 + 3);
        local_d4 = *(undefined4 *)(puVar12 + 2);
        uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
        if (((uVar16 & 1) != 0) && (uVar16 = FUN_01a4f798(&local_88,0,&local_c0), (uVar16 & 1) != 0)
           ) {
          if (local_80 == 0) {
LAB_0154be64:
            plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154be68:
            lVar15 = *plVar17;
          }
          else {
            local_68 = local_80;
            if (local_80 != 0) {
              if (local_80 == 0) goto LAB_0154be64;
              plVar1 = (long *)(*(long *)puVar8 + 0x30);
              plVar17 = plVar1 + local_80;
              if (0x38 < local_80) {
                plVar17 = plVar1;
              }
              goto LAB_0154be68;
            }
            lVar15 = 0;
          }
          local_64 = 0;
          if (*(long *)(lVar15 + 0xd0) != 0) {
            FUN_012e5af4(*(long *)(lVar15 + 0xd0),&local_c0);
          }
        }
        puVar12 = (undefined2 *)FUN_01a5190c(&local_88,1,&local_c0,0);
        local_d8 = *puVar12;
        local_d6 = *(undefined1 *)(puVar12 + 1);
        local_d5 = *(undefined1 *)((long)puVar12 + 3);
        local_d4 = *(undefined4 *)(puVar12 + 2);
        uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
        if (((uVar16 & 1) != 0) && (uVar16 = FUN_01a4f798(&local_88,1,&local_c0), (uVar16 & 1) != 0)
           ) {
          if (local_80 == 0) {
LAB_0154bf44:
            plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154bf48:
            lVar15 = *plVar17;
          }
          else {
            local_68 = local_80;
            if (local_80 != 0) {
              if (local_80 == 0) goto LAB_0154bf44;
              plVar1 = (long *)(*(long *)puVar8 + 0x30);
              plVar17 = plVar1 + local_80;
              if (0x38 < local_80) {
                plVar17 = plVar1;
              }
              goto LAB_0154bf48;
            }
            lVar15 = 0;
          }
          local_64 = 1;
          if (*(long *)(lVar15 + 0xe0) != 0) {
            FUN_012e5af4(*(long *)(lVar15 + 0xe0),&local_c0);
          }
        }
        puVar12 = (undefined2 *)FUN_01a5190c(&local_88,2,&local_c0,0);
        local_d8 = *puVar12;
        local_d6 = *(undefined1 *)(puVar12 + 1);
        local_d5 = *(undefined1 *)((long)puVar12 + 3);
        local_d4 = *(undefined4 *)(puVar12 + 2);
        uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
        if (((uVar16 & 1) != 0) && (uVar16 = FUN_01a4f798(&local_88,2,&local_c0), (uVar16 & 1) != 0)
           ) {
          if (local_80 == 0) {
LAB_0154c024:
            plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154c028:
            lVar15 = *plVar17;
          }
          else {
            local_68 = local_80;
            if (local_80 != 0) {
              if (local_80 == 0) goto LAB_0154c024;
              plVar1 = (long *)(*(long *)puVar8 + 0x30);
              plVar17 = plVar1 + local_80;
              if (0x38 < local_80) {
                plVar17 = plVar1;
              }
              goto LAB_0154c028;
            }
            lVar15 = 0;
          }
          local_64 = 2;
          if (*(long *)(lVar15 + 0xf0) != 0) {
            FUN_012e5af4(*(long *)(lVar15 + 0xf0),&local_c0);
          }
        }
        puVar12 = (undefined2 *)FUN_01a5190c(&local_88,3,&local_c0,0);
        local_d8 = *puVar12;
        local_d6 = *(undefined1 *)(puVar12 + 1);
        local_d5 = *(undefined1 *)((long)puVar12 + 3);
        local_d4 = *(undefined4 *)(puVar12 + 2);
        uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
        if (((uVar16 & 1) != 0) && (uVar16 = FUN_01a4f798(&local_88,3,&local_c0), (uVar16 & 1) != 0)
           ) {
          if (local_80 == 0) {
LAB_0154c104:
            plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154c108:
            lVar15 = *plVar17;
          }
          else {
            local_68 = local_80;
            if (local_80 != 0) {
              if (local_80 == 0) goto LAB_0154c104;
              plVar1 = (long *)(*(long *)puVar8 + 0x30);
              plVar17 = plVar1 + local_80;
              if (0x38 < local_80) {
                plVar17 = plVar1;
              }
              goto LAB_0154c108;
            }
            lVar15 = 0;
          }
          local_64 = 3;
          if (*(long *)(lVar15 + 0x100) != 0) {
            FUN_012e5af4(*(long *)(lVar15 + 0x100),&local_c0);
          }
        }
        puVar12 = (undefined2 *)FUN_01a5190c(&local_88,4,&local_c0,0);
        local_d8 = *puVar12;
        local_d6 = *(undefined1 *)(puVar12 + 1);
        local_d5 = *(undefined1 *)((long)puVar12 + 3);
        local_d4 = *(undefined4 *)(puVar12 + 2);
        uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
        if (((uVar16 & 1) != 0) && (uVar16 = FUN_01a4f798(&local_88,4,&local_c0), (uVar16 & 1) != 0)
           ) {
          if (local_80 == 0) {
LAB_0154c1e4:
            plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154c1e8:
            lVar15 = *plVar17;
          }
          else {
            local_68 = local_80;
            if (local_80 != 0) {
              if (local_80 == 0) goto LAB_0154c1e4;
              plVar1 = (long *)(*(long *)puVar8 + 0x30);
              plVar17 = plVar1 + local_80;
              if (0x38 < local_80) {
                plVar17 = plVar1;
              }
              goto LAB_0154c1e8;
            }
            lVar15 = 0;
          }
          local_64 = 4;
          if (*(long *)(lVar15 + 0x110) != 0) {
            FUN_012e5af4(*(long *)(lVar15 + 0x110),&local_c0);
          }
        }
        puVar12 = (undefined2 *)FUN_01a5190c(&local_88,5,&local_c0,0);
        local_d8 = *puVar12;
        local_d6 = *(undefined1 *)(puVar12 + 1);
        local_d5 = *(undefined1 *)((long)puVar12 + 3);
        local_d4 = *(undefined4 *)(puVar12 + 2);
        uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
        if (((uVar16 & 1) != 0) && (uVar16 = FUN_01a4f798(&local_88,5,&local_c0), (uVar16 & 1) != 0)
           ) {
          if (local_80 == 0) {
LAB_0154c2c4:
            plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154c2c8:
            lVar15 = *plVar17;
          }
          else {
            local_68 = local_80;
            if (local_80 != 0) {
              if (local_80 == 0) goto LAB_0154c2c4;
              plVar1 = (long *)(*(long *)puVar8 + 0x30);
              plVar17 = plVar1 + local_80;
              if (0x38 < local_80) {
                plVar17 = plVar1;
              }
              goto LAB_0154c2c8;
            }
            lVar15 = 0;
          }
          local_64 = 5;
          if (*(long *)(lVar15 + 0x120) != 0) {
            FUN_012e5af4(*(long *)(lVar15 + 0x120),&local_c0);
          }
        }
        puVar12 = (undefined2 *)FUN_01a5190c(&local_88,7,&local_c0,0);
        local_d8 = *puVar12;
        local_d6 = *(undefined1 *)(puVar12 + 1);
        local_d5 = *(undefined1 *)((long)puVar12 + 3);
        local_d4 = *(undefined4 *)(puVar12 + 2);
        uVar16 = FUN_0154c450(&local_d8,param_2,param_3);
        if (((uVar16 & 1) != 0) && (uVar16 = FUN_01a4f798(&local_88,7,&local_c0), (uVar16 & 1) != 0)
           ) {
          if (local_80 == 0) {
LAB_0154c3a4:
            plVar17 = (long *)(*(long *)puVar8 + 0x1f8);
LAB_0154c3a8:
            lVar15 = *plVar17;
          }
          else {
            local_68 = local_80;
            if (local_80 != 0) {
              if (local_80 == 0) goto LAB_0154c3a4;
              plVar1 = (long *)(*(long *)puVar8 + 0x30);
              plVar17 = plVar1 + local_80;
              if (0x38 < local_80) {
                plVar17 = plVar1;
              }
              goto LAB_0154c3a8;
            }
            lVar15 = 0;
          }
          local_64 = 7;
          if (*(long *)(lVar15 + 0x140) != 0) {
            FUN_012e5af4(*(long *)(lVar15 + 0x140),&local_c0);
          }
        }
        if (local_b8 < *(int *)(local_c8 + 1)) {
          local_b8 = local_b8 + 1;
        }
        else {
          local_b4 = local_b4 + 1;
          local_b8 = *(int *)(local_d0 + 1);
        }
      } while (iVar5 != local_b8);
      bVar10 = iVar11 != local_b4;
    }
  }
  return;
}

