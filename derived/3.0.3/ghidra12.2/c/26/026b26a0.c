
/* WARNING: Removing unreachable block (ram,0x026b2b8c) */

void FUN_026b26a0(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  uint *puVar15;
  bool bVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  undefined8 uVar20;
  int iVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  undefined2 local_998;
  undefined2 local_996;
  undefined4 local_994;
  undefined2 local_990;
  undefined2 local_98e;
  undefined4 local_98c;
  undefined8 local_988;
  undefined1 *puStack_980;
  long local_978 [36];
  long local_858;
  uint local_840;
  long local_808 [13];
  long local_7a0 [13];
  long local_738 [147];
  undefined1 auStack_2a0 [152];
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4 [31];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [7];
  undefined1 local_195;
  int local_18c;
  undefined8 local_188;
  char *local_180;
  undefined8 local_178;
  undefined1 local_75;
  uint local_6c;
  
  pcVar1 = (char *)(param_1 + 0x12678);
  local_18c = (int)*pcVar1;
  if ((local_18c == 0) || (local_18c == 4)) {
    local_195 = 0;
    local_19c[0] = 0;
    local_1a8 = local_19c;
    *pcVar1 = '\x01';
    local_1a0 = 8;
    local_1d8 = 0x20;
    local_1e0 = local_1d4;
    local_1b0 = PTR_DAT_04bb3768 + 0x10;
    local_1b5 = 0;
    local_1d4[0] = 0;
    local_1e8 = PTR_DAT_04bb2028 + 0x10;
    FUN_021fdf60(&local_1b0,&local_1e8,param_1);
    local_1f0 = 0;
    local_1f8 = 0;
    local_200 = 0;
    local_208 = 0;
    *pcVar1 = (char)local_18c;
    local_978[0] = 0x1698;
    FUN_0277d4ac(local_978);
    FUN_027d2090(param_1 + 0x13188,local_978,&local_208,7,0,0);
    local_978[0] = 0x949;
    FUN_0277d4ac(local_978);
    FUN_027d2090(param_1 + 0x131b4,local_978,&local_208,7,0,0);
    local_978[0] = 0x94b;
    FUN_0277d4ac(local_978);
    FUN_027d2090(param_1 + 0x131e0,local_978,&local_208,7,0,0);
    FUN_020fd7d8(param_1);
    (**(code **)(local_1e8 + 0x18))(&local_1e8);
    FUN_0074fda4(auStack_2a0,"Param/NpcRoom/%s.byml",local_1e0);
    uVar10 = FUN_03eba3a0(auStack_2a0);
    plVar22 = (long *)PTR_DAT_04bb3350;
    if (((uVar10 & 1) != 0) &&
       (plVar24 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598), plVar24 != (long *)0x0)) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar23 = *(long *)(lVar11 + 0xa8);
      *(long **)(lVar11 + 0xa8) = plVar24;
      pcVar1 = PTR_DAT_04bb2020 + 0x10;
      local_180 = "NpcRoom";
      local_188 = pcVar1;
      (**(code **)(local_1e8 + 0x18))(&local_1e8);
      puStack_980 = local_1e0;
      local_988 = pcVar1;
      FUN_00b62c50(local_978,&local_188,&local_988,0);
      local_180 = (char *)((long)&local_178 + 4);
      local_75 = 0;
      local_178 = (uint *)CONCAT35(local_178._5_3_,0x100);
      local_188 = PTR_DAT_04bb21f8 + 0x10;
      uVar10 = (**(code **)(local_978[0] + 0xf0))(local_978,&local_188,1);
      if ((uVar10 & 1) != 0) {
        FUN_03c27e60(local_978,&local_188,plVar24);
      }
      puVar6 = PTR_DAT_04bc00c8;
      puVar5 = PTR_DAT_04bc0048;
      puVar4 = PTR_DAT_04bb43c0;
      if (0 < (int)local_840) {
        uVar10 = 0;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        iVar9 = -1;
        do {
          puVar12 = (ulong *)(**(code **)(*(long *)(*(long *)(local_858 + uVar10 * 8) + 0x60) + 0xf0
                                         ))();
          uVar17 = *puVar12;
          local_988 = (char *)(uVar17 & 0xffff);
          FUN_0277d4ac(&local_988);
          lVar18 = *(long *)puVar4;
          local_988 = (char *)CONCAT44((int)(uVar17 >> 0x20),
                                       CONCAT13((char)(uVar17 >> 0x18),
                                                CONCAT12((char)(uVar17 >> 0x10),
                                                         (undefined2)local_988)));
          uVar8 = FUN_0277d6c4(&local_988);
          lVar11 = *(long *)puVar4;
          iVar21 = iVar9;
          if (lVar11 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
              local_178 = (uint *)0x0;
              local_180 = local_988;
              local_188 = puVar2;
              uVar8 = FUN_0277d6c4(&local_180);
              if (*(long *)puVar4 == 0) {
LAB_026b2b34:
                puVar19 = (uint *)0x0;
                bVar16 = true;
                local_6c = 0xbc;
              }
              else {
                lVar11 = *(long *)(lVar11 + 0x57e58);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
                   (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                goto LAB_026b2b34;
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar8 = FUN_0277d6c4(&local_988);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
                   (puVar19 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
                   puVar19 == (uint *)0x0)) goto LAB_026b2b34;
                local_6c = 0;
                uVar8 = *puVar19;
                local_178 = puVar19;
                if ((uVar8 == 0) || (puVar19 == (uint *)(ulong)uVar8)) {
LAB_026b2cbc:
                  bVar16 = false;
                }
                else {
                  puVar15 = (uint *)((long)puVar19 - (long)(ulong)uVar8);
                  local_6c = 0;
                  if (*puVar15 == 0) goto LAB_026b2cbc;
                  uVar8 = puVar15[1];
                  if ((uVar8 == 0) || ((ulong)(ushort)puVar15[2] == 0)) {
LAB_026b2cb8:
                    local_6c = 0;
                    goto LAB_026b2cbc;
                  }
                  lVar11 = 0xc;
                  if (*(char *)((long)puVar15 + 10) != '\0') {
                    lVar11 = 0x1c;
                  }
                  lVar11 = (long)puVar15 + lVar11 + (ulong)(ushort)puVar15[2] * 8;
                  if (lVar11 == 0) goto LAB_026b2cb8;
                  uVar3 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar19 - lVar11) / (ulong)uVar8);
                  }
                  if (*puVar15 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if (*(uint *)puVar6 <= uVar3) goto LAB_026b2cb8;
                  local_6c = (uint)*(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar3 * 2);
                  if (local_6c < 0xbd) goto LAB_026b2cbc;
                  bVar16 = false;
                  local_6c = 0;
                }
              }
              if (local_6c != 0xb6) {
                FUN_0268f390(param_1,&local_988,&local_208,7,1,0,0);
                local_6c = 0;
                if (bVar16) {
                  local_6c = 0;
                }
                else {
                  uVar8 = *puVar19;
                  if ((uVar8 != 0) && (puVar19 != (uint *)(ulong)uVar8)) {
                    puVar15 = (uint *)((long)puVar19 - (long)(ulong)uVar8);
                    local_6c = 0;
                    if (*puVar15 != 0) {
                      uVar8 = puVar15[1];
                      if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                        lVar11 = 0xc;
                        if (*(char *)((long)puVar15 + 10) != '\0') {
                          lVar11 = 0x1c;
                        }
                        lVar11 = (long)puVar15 + lVar11 + (ulong)(ushort)puVar15[2] * 8;
                        if (lVar11 != 0) {
                          uVar3 = 0;
                          if ((ulong)uVar8 != 0) {
                            uVar3 = (uint)((ulong)((long)puVar19 - lVar11) / (ulong)uVar8);
                          }
                          if (*puVar15 <= uVar3) {
                            uVar3 = 0xffffffff;
                          }
                          if ((uVar3 < *(uint *)puVar5) &&
                             (local_6c = (uint)*(ushort *)
                                                (*(long *)(puVar5 + 8) + (long)(int)uVar3 * 2),
                             local_6c < 0x52)) goto LAB_026b2c10;
                        }
                      }
                      local_6c = 0;
                    }
                  }
LAB_026b2c10:
                  if ((local_6c & 0xfffffffe) == 0x12) {
                    iVar21 = 0;
                  }
                  else {
                    puVar15 = (uint *)((long)puVar19 - (ulong)*puVar19);
                    if ((((*puVar19 != 0) && (puVar15 != (uint *)0x0)) && (*puVar15 != 0)) &&
                       ((uVar8 = puVar15[1], uVar8 != 0 && ((ulong)(ushort)puVar15[2] != 0)))) {
                      lVar11 = 0xc;
                      if (*(char *)((long)puVar15 + 10) != '\0') {
                        lVar11 = 0x1c;
                      }
                      lVar11 = (long)puVar15 + lVar11 + (ulong)(ushort)puVar15[2] * 8;
                      if (lVar11 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar8 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar19 - lVar11) / (ulong)uVar8);
                        }
                        if (*puVar15 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if (((uVar3 < *(uint *)puVar5) &&
                            (*(short *)(*(long *)(puVar5 + 8) + (long)(int)uVar3 * 2) == 0x14)) &&
                           (iVar21 = 2, -1 < iVar9)) {
                          iVar21 = iVar9;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          plVar22 = (long *)PTR_DAT_04bb3350;
          uVar10 = uVar10 + 1;
          iVar9 = iVar21;
        } while (local_840 != uVar10);
        if (-1 < iVar21) {
          local_180 = "UseAudioType";
          local_188 = PTR_DAT_04bb2020 + 0x10;
          FUN_0274a060(param_1 + 0x1267c,&local_188,iVar21);
        }
      }
      puVar13 = (undefined8 *)(**(code **)(local_808[0] + 0xf0))(local_808);
      uVar20 = *puVar13;
      local_98e = 0;
      local_98c = 0;
      local_990 = (undefined2)uVar20;
      FUN_0277d4ac(&local_990);
      local_98e = (undefined2)((ulong)uVar20 >> 0x10);
      local_98c = (undefined4)((ulong)uVar20 >> 0x20);
      FUN_0285a8b0(param_1 + 0x12880,&local_990);
      puVar12 = (ulong *)(**(code **)(local_808[0] + 0xf0))(local_808);
      uVar10 = *puVar12;
      local_188 = (char *)(uVar10 & 0xffff);
      FUN_0277d4ac(&local_188);
      local_188 = (char *)CONCAT44((int)(uVar10 >> 0x20),
                                   CONCAT13((char)(uVar10 >> 0x18),
                                            CONCAT12((char)(uVar10 >> 0x10),(undefined2)local_188)))
      ;
      iVar9 = 0;
      if (*(long *)PTR_DAT_04bb46d0 != 0) {
        iVar9 = FUN_017c206c(*(long *)PTR_DAT_04bb46d0,&local_188);
      }
      local_988 = (char *)CONCAT44(local_988._4_4_,iVar9);
      *(byte *)(param_1 + 0x128a0) = *(byte *)(param_1 + 0x128a0) & 0xf1 | (byte)(iVar9 << 1);
      puVar13 = (undefined8 *)(**(code **)(local_7a0[0] + 0xf0))(local_7a0);
      uVar20 = *puVar13;
      local_996 = 0;
      local_994 = 0;
      local_998 = (undefined2)uVar20;
      FUN_0277d4ac(&local_998);
      local_996 = (undefined2)((ulong)uVar20 >> 0x10);
      local_994 = (undefined4)((ulong)uVar20 >> 0x20);
      FUN_0285aa40(param_1 + 0x12880,&local_998);
      *(byte *)(param_1 + 0x1289f) = *(byte *)(param_1 + 0x1289f) & 0xbf;
      puVar12 = (ulong *)(**(code **)(local_738[0] + 0xf0))(local_738);
      uVar10 = *puVar12;
      local_188 = (char *)(uVar10 & 0xffff);
      FUN_0277d4ac(&local_188);
      *(char *)(param_1 + 0x1320e) = (char)(uVar10 >> 0x10);
      *(char *)(param_1 + 0x1320f) = (char)(uVar10 >> 0x18);
      *(int *)(param_1 + 0x13210) = (int)(uVar10 >> 0x20);
      *(undefined2 *)(param_1 + 0x1320c) = (undefined2)local_188;
      lVar11 = *(long *)PTR_DAT_04bb26a8;
      uVar7 = FUN_0277d6c4((undefined2 *)(param_1 + 0x1320c));
      for (lVar11 = *(long *)(lVar11 + 0x19f800); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        while (*(ushort *)(lVar11 + 0x20) <= uVar7) {
          if (uVar7 <= *(ushort *)(lVar11 + 0x20)) {
            uVar14 = (undefined2)*(undefined4 *)(lVar11 + 0x24);
            goto LAB_026b2ed4;
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) goto LAB_026b2ec8;
        }
      }
LAB_026b2ec8:
      uVar14 = 0;
LAB_026b2ed4:
      *(undefined2 *)(param_1 + 0x1287c) = uVar14;
      (**(code **)(local_978[0] + 0x20))(local_978);
      (**(code **)(*plVar24 + 0x58))(plVar24);
      FUN_00b634e0(local_978);
      if (lVar23 != 1) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*plVar22 + 0x68));
        *(long *)(lVar11 + 0xa8) = lVar23;
      }
    }
  }
  return;
}

