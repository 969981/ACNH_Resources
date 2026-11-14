
byte FUN_01b5cf20(undefined8 param_1,uint *param_2,byte *param_3,undefined8 *param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long *plVar12;
  byte bVar13;
  undefined2 uVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 uVar17;
  char cVar18;
  char *pcVar19;
  ulong uVar20;
  uint *puVar21;
  int *piVar22;
  long lVar23;
  undefined2 local_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined1 local_80;
  byte local_7f;
  byte local_78;
  undefined1 uStack_77;
  undefined6 uStack_76;
  undefined2 local_70;
  undefined6 uStack_6e;
  undefined1 local_68;
  byte local_67;
  undefined8 local_66;
  undefined4 local_5e;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_24 [4];
  
  pbVar11 = (byte *)&local_90;
  if (param_2 != (uint *)0x0) {
    if ((param_5 & 1) == 0) {
      plVar12 = *(long **)PTR_DAT_04bb27d0;
      if ((plVar12 != (long *)0x0) && (plVar12[5] != 0)) {
        if ((int)plVar12[0x10] == 1) goto LAB_01b5d0d4;
      }
      if ((plVar12[2] != 0) && ((*(uint *)(plVar12 + 0x10) & 0xfffffffe) == 2)) {
        if (*(int *)(plVar12[2] + 0x3e4) != 1) goto LAB_01b5d0d4;
      }
      if ((param_3 != (byte *)0x0) && (1 < *(uint *)(plVar12 + 0x10))) {
        lVar16 = *(long *)PTR_DAT_04bb39b0;
        if (lVar16 == 0) {
          bVar13 = *PTR_DAT_04bb32e0;
LAB_01b5d00c:
          if (bVar13 < 8) goto LAB_01b5d068;
LAB_01b5d014:
          lVar16 = *plVar12;
          bVar13 = *(byte *)(lVar16 + 0x473);
          pbVar15 = PTR_DAT_04bb5038;
          if ((long)(char)bVar13 != 0xffffffffffffffff) {
            puVar21 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
            if (7 < bVar13) {
              puVar21 = (uint *)(lVar16 + 0x48);
            }
            if ((*puVar21 & 8) != 0) {
              pbVar15 = (byte *)(lVar16 + 0x471);
            }
          }
          bVar13 = *pbVar15;
          if (7 < bVar13) {
            bVar13 = *PTR_DAT_04bb5038;
            goto LAB_01b5d068;
          }
        }
        else {
          pbVar15 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar16 + 0x15c) != 0) {
            pbVar15 = (byte *)(lVar16 + 0x158);
          }
          bVar13 = *pbVar15;
          if (7 < bVar13) {
            if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              bVar13 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_01b5d00c;
            }
            goto LAB_01b5d014;
          }
LAB_01b5d068:
          if (7 < bVar13) {
            bVar13 = 0xff;
          }
        }
        bVar7 = *param_3;
        if (7 < bVar13) {
          bVar13 = 0xff;
        }
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        if (bVar13 != bVar7) goto LAB_01b5d0d4;
      }
    }
    local_50 = 0;
    local_48 = 0;
    FUN_01b6af30(param_2,&local_50,(ulong)&local_50 | 4,&local_48,(long)&local_48 + 4);
    puVar6 = PTR_DAT_04bc0610;
    puVar5 = PTR_DAT_04bc0608;
    if ((int)local_50 == 0) {
      if (local_50._4_4_ == 0) {
        if ((int)local_48 == 0) {
          if (local_48._4_4_ == 0) {
            if (*param_2 != 0) {
              cVar18 = *PTR_DAT_04bc0608;
              do {
                if (cVar18 == '\0') {
                  cVar18 = '\x01';
                  *(undefined8 *)puVar6 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                  *puVar5 = 1;
                  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                }
                else {
                  uVar2 = *(uint *)(puVar6 + 0x28);
                  if (-1 < (int)uVar2) {
                    pcVar19 = (char *)((ulong)uVar2 + (long)param_2);
                    pcVar4 = PTR_DAT_04bc0608;
                    puVar9 = (undefined8 *)PTR_DAT_04bc0610;
                    goto joined_r0x01b5d1e0;
                  }
                  if (uVar2 != 0xffffffff) break;
                }
                puVar21 = (uint *)(ulong)*param_2;
                if ((*param_2 == 0) || (param_2 == puVar21)) break;
                lVar16 = 0xc;
                if (*(char *)((long)param_2 + (10 - (long)puVar21)) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)param_2 + (lVar16 - (long)puVar21);
                if (lVar16 == 0) break;
                uVar20 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar21));
                *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
                if (uVar20 == 0) break;
                piVar22 = (int *)(lVar16 + 4);
                while (piVar22[-1] != -0x56e5e378) {
                  piVar22 = piVar22 + 2;
                  uVar20 = uVar20 - 1;
                  if (uVar20 == 0) goto LAB_01b5d1c8;
                }
                iVar1 = 0;
                if (*piVar22 != -1) {
                  iVar1 = *piVar22;
                }
                *(int *)(puVar6 + 0x28) = iVar1;
                if (*param_2 == 0) break;
              } while( true );
            }
LAB_01b5d1c8:
            pcVar19 = (char *)0x0;
            pcVar4 = PTR_DAT_04bc0608;
            puVar9 = (undefined8 *)PTR_DAT_04bc0610;
joined_r0x01b5d1e0:
            PTR_DAT_04bc0608 = pcVar4;
            PTR_DAT_04bc0610 = (undefined *)puVar9;
            if (param_4 == (undefined8 *)0x0) {
              if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) goto LAB_01b5d1f0;
            }
            else if ((pcVar19 != (char *)0x0) && (*pcVar19 != '\0')) {
LAB_01b5d1f0:
              if (*param_2 == 0) {
LAB_01b5d2dc:
                bVar13 = 0;
              }
              else {
                cVar18 = *pcVar4;
                do {
                  if (cVar18 == '\0') {
                    cVar18 = '\x01';
                    *puVar9 = 0xffffffffffffffff;
                    puVar9[1] = 0xffffffffffffffff;
                    *pcVar4 = '\x01';
                    puVar9[2] = 0xffffffffffffffff;
                    puVar9[3] = 0xffffffffffffffff;
                    puVar9[4] = 0xffffffffffffffff;
                    puVar9[5] = 0xffffffffffffffff;
                  }
                  else {
                    uVar2 = *(uint *)((long)puVar9 + 0x24);
                    if (-1 < (int)uVar2) {
                      if (((byte *)((ulong)uVar2 + (long)param_2) == (byte *)0x0) ||
                         (bVar13 = *(byte *)((ulong)uVar2 + (long)param_2), 4 < bVar13))
                      goto LAB_01b5d2dc;
                      goto LAB_01b5d2e0;
                    }
                    if (uVar2 != 0xffffffff) goto LAB_01b5d2dc;
                  }
                  puVar21 = (uint *)(ulong)*param_2;
                  bVar13 = 0;
                  if ((*param_2 == 0) || (param_2 == puVar21)) goto LAB_01b5d2e0;
                  lVar16 = 0xc;
                  if (*(char *)((long)param_2 + (10 - (long)puVar21)) != '\0') {
                    lVar16 = 0x1c;
                  }
                  lVar16 = (long)param_2 + (lVar16 - (long)puVar21);
                  if (lVar16 == 0) goto LAB_01b5d2dc;
                  uVar20 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar21));
                  *(undefined4 *)((long)puVar9 + 0x24) = 0xfffffffe;
                  bVar13 = 0;
                  if (uVar20 == 0) goto LAB_01b5d2e0;
                  piVar22 = (int *)(lVar16 + 4);
                  while (piVar22[-1] != 0x638d595d) {
                    piVar22 = piVar22 + 2;
                    uVar20 = uVar20 - 1;
                    if (uVar20 == 0) {
                      bVar13 = 0;
                      goto LAB_01b5d2e0;
                    }
                  }
                  iVar1 = 0;
                  if (*piVar22 != -1) {
                    iVar1 = *piVar22;
                  }
                  *(int *)((long)puVar9 + 0x24) = iVar1;
                } while (*param_2 != 0);
                bVar13 = 0;
              }
LAB_01b5d2e0:
              bVar7 = bVar13 != 3;
              if ((bVar13 == 3) || ((param_5 & 1) != 0)) goto LAB_01b5d0d8;
              if (param_3 == (byte *)0x0) {
                if (*(long *)PTR_DAT_04bb46b0 != 0) {
                  lVar16 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10)
                                       + 0x30))();
                  if (lVar16 != 0) {
                    local_5e = 0;
                    local_66 = 0;
                    uStack_6e = 0;
                    local_68 = 0;
                    local_67 = 0;
                    puVar8 = (undefined2 *)
                             FUN_01b5b340(param_2,2,0x54706054,*(undefined8 *)PTR_DAT_04bc0658);
                    if (param_4 == (undefined8 *)0x0) {
                      if (puVar8 == (undefined2 *)0x0) {
                        uVar14 = 0;
                      }
                      else {
                        uVar14 = *puVar8;
                      }
                      local_78 = (byte)uVar14;
                      uStack_77 = (undefined1)((ushort)uVar14 >> 8);
                      uStack_76 = 0;
                      local_70 = 0;
                    }
                    else {
                      puVar9 = (undefined8 *)((ulong)&local_78 | 2);
                      if (puVar8 == (undefined2 *)0x0) {
                        uVar14 = 0;
                      }
                      else {
                        uVar14 = *puVar8;
                      }
                      local_78 = (byte)uVar14;
                      uStack_77 = (undefined1)((ushort)uVar14 >> 8);
                      uVar10 = param_4[1];
                      uVar17 = param_4[2];
                      *puVar9 = *param_4;
                      puVar9[1] = uVar10;
                      uVar3 = *(undefined4 *)(param_4 + 3);
                      puVar9[2] = uVar17;
                      *(undefined4 *)(puVar9 + 3) = uVar3;
                    }
                    uStack_88 = SUB82(&LAB_00284e00 + lVar16,0);
                    uStack_86 = (undefined6)((ulong)(&LAB_00284e00 + lVar16) >> 0x10);
                    local_80 = 0;
                    if (*(long *)(&LAB_00284e28 + lVar16) == 0) {
                      local_7f = 0;
                    }
                    else {
                      puVar9 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar16) + 0x10);
                      local_7f = 0;
                      if (puVar9 != (undefined8 *)0x0) {
                        local_7f = (**(code **)*puVar9)();
                      }
                    }
                    local_7f = local_7f & 1;
                    local_90 = 0x8ae0;
                    uStack_8e = 0x4a3;
                    FUN_01b69394(&local_90);
                    local_58 = FUN_01b692d8();
                    bVar7 = FUN_01b6c4a0(&local_58,&local_78,param_2,&local_50);
                    goto LAB_01b5d540;
                  }
                }
              }
              else {
                local_78 = *param_3;
                if (7 < local_78) {
                  local_78 = 0xff;
                }
                lVar16 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
                if (lVar16 != 0) {
                  lVar23 = lVar16 + 0x194b0;
                  if (*(long *)(lVar16 + 0x194b8) == 0) {
                    lVar23 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
                  }
                  puVar8 = (undefined2 *)
                           FUN_01b5b340(param_2,2,0x54706054,*(undefined8 *)PTR_DAT_04bc0658);
                  if (puVar8 == (undefined2 *)0x0) {
                    local_90 = 0;
                  }
                  else {
                    local_90 = *puVar8;
                  }
                  uStack_8e = 0;
                  uStack_88 = 0;
                  local_70 = (undefined2)(lVar23 + 0x2c610);
                  uStack_6e = (undefined6)((ulong)(lVar23 + 0x2c610) >> 0x10);
                  local_68 = 0;
                  if (*(long *)(lVar23 + 0x2c638) == 0) {
                    local_67 = 0;
                  }
                  else {
                    puVar9 = *(undefined8 **)(*(long *)(lVar23 + 0x2c638) + 0x10);
                    local_67 = 0;
                    if (puVar9 != (undefined8 *)0x0) {
                      local_67 = (**(code **)*puVar9)();
                    }
                  }
                  local_67 = local_67 & 1;
                  local_78 = 0xa0;
                  uStack_77 = 0x8a;
                  uStack_76 = 0x4a3;
                  uVar10 = FUN_01b68bf4(&local_78);
                  local_24[0] = *param_3;
                  if (7 < local_24[0]) {
                    local_24[0] = 0xff;
                  }
                  local_58 = FUN_01b68b14(uVar10,local_24);
                  bVar7 = FUN_01b6b2d0(&local_58,&local_90,param_2,&local_50,param_3);
                  pbVar11 = &local_78;
LAB_01b5d540:
                  FUN_02640184(pbVar11);
                  goto LAB_01b5d0d8;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01b5d0d4:
  bVar7 = 0;
LAB_01b5d0d8:
  return bVar7 & 1;
}

