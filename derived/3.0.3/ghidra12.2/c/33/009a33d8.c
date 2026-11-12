
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_009a33d8(undefined4 param_1,undefined4 param_2,float param_3,long param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,byte *param_8,
                 uint param_9)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  ushort uVar6;
  byte *pbVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  char *pcVar24;
  uint *puVar25;
  short *psVar26;
  long *plVar27;
  undefined1 *__src;
  long *plVar28;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined *local_130;
  undefined1 *puStack_128;
  int local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  
  uVar13 = FUN_0277d6c4(param_5);
  puVar11 = PTR_DAT_04bb6090;
  puVar9 = PTR_DAT_04bb27c0;
  if (7 < *param_8) {
    return false;
  }
  lVar21 = *(long *)PTR_DAT_04bb27c0;
  if (lVar21 == 0) {
    return false;
  }
  uVar16 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar16 == 0) ||
       (plVar27 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar27 == (long *)0x0)) ||
      ((*(uint *)(plVar27 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar27 + 0x46) != uVar16)) {
    plVar27 = (long *)0x0;
  }
  if (*(int *)(lVar21 + 0x288) == 1 || *(int *)(lVar21 + 0x288) == -1) {
    plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)puVar9;
    iVar14 = (**(code **)(*plVar17 + 0x60))();
    pbVar7 = PTR_DAT_04bb6038;
    if (iVar14 < 0x11) {
      uVar16 = 1;
    }
    else {
      if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_009a34ec;
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_009a34ec:
    uVar16 = 0;
    pbVar7 = PTR_DAT_04bb6038;
  }
  if (plVar27 == (long *)0x0) {
    PTR_DAT_04bb6038 = pbVar7;
    return false;
  }
  lVar21 = plVar27[0x2a];
  PTR_DAT_04bb6038 = pbVar7;
  if (((*pbVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar7), iVar14 != 0)) {
    *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6038);
  }
  puVar10 = PTR_DAT_04bb6030;
  uVar18 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb6030);
  uVar15 = 0;
  if ((int)lVar21 == 1) {
    uVar15 = uVar16;
  }
  if ((uVar18 & 1) == 0) {
    return false;
  }
  if (uVar15 == 0) {
    return false;
  }
  if (*(char *)(param_4 + 0x728) == '\0') {
    lVar21 = *(long *)puVar9;
    if (lVar21 != 0) {
      uVar16 = *(uint *)puVar11;
      if (((uVar16 == 0) ||
          (plVar17 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                               ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
         (((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar17 + 0x46) != uVar16)))) {
        plVar17 = (long *)0x0;
      }
      if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
        plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar21 = *(long *)puVar9;
        iVar14 = (**(code **)(*plVar19 + 0x60))();
        if (iVar14 < 0x11) {
          uVar16 = 1;
        }
        else {
          if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_009a381c;
          uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_009a381c:
        uVar16 = 0;
      }
      if (plVar17 != (long *)0x0) {
        lVar21 = plVar17[0x2a];
        if (((*pbVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar14 != 0)) {
          *(undefined **)puVar10 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb6038);
        }
        uVar18 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb6030);
        uVar15 = 0;
        if ((int)lVar21 == 1) {
          uVar15 = uVar16;
        }
        if (((uVar18 & 1) != 0) && (uVar15 != 0)) {
          uVar18 = (ulong)*param_8;
          if (uVar18 < 8) {
            plVar19 = plVar17 + uVar18 * 0x34 + 0x4f;
            plVar28 = plVar19 + 0x1d;
            if ((short)*plVar19 == -2) goto LAB_009a388c;
            puVar23 = (uint *)(plVar17 + uVar18 * 0x34 + 0x6e);
            lVar21 = uVar18 * 0x1a0 + 0x374;
            uVar18 = (**(code **)(*plVar28 + 0x28))
                               (plVar28,(long)plVar17 + (ulong)(*puVar23 & 1) * 0x18 + lVar21,
                                plVar19);
            if ((uVar18 & 1) != 0) {
              uVar16 = *(uint *)((long)plVar17 + (ulong)(*puVar23 & 1) * 0x18 + lVar21 + 0xc);
              if ((uVar16 == 0) || (lVar21 = *(long *)puVar9, lVar21 == 0)) goto LAB_009a3b44;
              plVar17 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                                  ((ulong)(uVar16 >> 0x11) & 0x7ff8));
              if ((plVar17 == (long *)0x0) ||
                 (((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0 ||
                  (*(uint *)(plVar17 + 0x46) != uVar16)))) {
                plVar17 = (long *)0x0;
              }
              if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
                plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar21 = *(long *)puVar9;
                iVar14 = (**(code **)(*plVar19 + 0x60))();
                if (iVar14 < 0x11) {
                  uVar16 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_009a3aec;
                  uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_009a3aec:
                uVar16 = 0;
              }
              if (plVar17 != (long *)0x0) {
                lVar21 = plVar17[0x2a];
                if (((*PTR_DAT_04bb4000 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb4000), iVar14 != 0)) {
                  *(undefined **)PTR_DAT_04bb3ff8 = PTR_DAT_04bb2e50 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bb4000);
                }
                uVar15 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb3ff8);
                if ((int)lVar21 == 1) {
                  uVar16 = uVar16 & uVar15;
                  goto joined_r0x009a3898;
                }
              }
              goto LAB_009a3b44;
            }
            uVar18 = (**(code **)(*plVar28 + 0x28))
                               (plVar28,(long)plVar17 + (ulong)(*puVar23 & 1 ^ 1) * 0x18 + lVar21,
                                plVar19);
            if ((uVar18 & 1) == 0) goto LAB_009a388c;
            uVar16 = *(uint *)((long)plVar17 + (ulong)(~*puVar23 & 1) * 0x18 + lVar21 + 0xc);
          }
          else {
LAB_009a388c:
            uVar16 = *(uint *)PTR_DAT_04bb3238;
          }
joined_r0x009a3898:
          if (uVar16 != 0) {
            uVar18 = (ulong)*param_8;
            if (7 < uVar18) {
              return true;
            }
            plVar17 = plVar27 + uVar18 * 0x34 + 0x4f;
            plVar19 = plVar17 + 0x1d;
            if ((short)*plVar17 == -2) {
              return true;
            }
            lVar21 = uVar18 * 0x1a0 + 0x374;
            uVar20 = (**(code **)(*plVar19 + 0x28))
                               (plVar19,(long)plVar27 +
                                        (ulong)(*(uint *)(plVar27 + uVar18 * 0x34 + 0x6e) & 1) *
                                        0x18 + lVar21,plVar17);
            if ((uVar20 & 1) == 0) {
              (**(code **)(*plVar19 + 0x28))
                        (plVar19,(long)plVar27 +
                                 (ulong)(*(uint *)(plVar27 + uVar18 * 0x34 + 0x6e) & 1 ^ 1) * 0x18 +
                                 lVar21,plVar17);
              return true;
            }
            lVar22 = *(long *)puVar9;
            if (lVar22 == 0) {
              return false;
            }
            uVar16 = *(uint *)((long)plVar27 +
                              (ulong)(*(uint *)(plVar27 + uVar18 * 0x34 + 0x6e) & 1) * 0x18 + lVar21
                              + 0xc);
            if ((((uVar16 == 0) ||
                 (plVar17 = *(long **)(*(long *)(*(long *)(lVar22 + 0x1c0) + 8) +
                                      ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0))
                || ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar17 + 0x46) != uVar16)) {
              plVar17 = (long *)0x0;
            }
            if ((*(int *)(lVar22 + 0x288) == 1) || (*(int *)(lVar22 + 0x288) == -1)) {
              plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar21 = *(long *)puVar9;
              iVar14 = (**(code **)(*plVar19 + 0x60))();
              if (iVar14 < 0x11) {
                uVar16 = 1;
                goto LAB_009a4064;
              }
              if (*(uint *)(lVar21 + 0x5e8) < 5) {
                uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
                goto LAB_009a4064;
              }
            }
            uVar16 = 0;
LAB_009a4064:
            if (plVar17 == (long *)0x0) {
              return false;
            }
            lVar21 = plVar17[0x2a];
            if (((*PTR_DAT_04bb4000 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb4000), iVar14 != 0)) {
              *(undefined **)PTR_DAT_04bb3ff8 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb4000);
            }
            uVar18 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb3ff8);
            uVar15 = 0;
            if ((int)lVar21 == 1) {
              uVar15 = uVar16;
            }
            if ((uVar18 & 1) == 0) {
              return false;
            }
            if (uVar15 == 0) {
              return false;
            }
            FUN_009a44e8(plVar17);
            FUN_0099ba20(param_1,param_2,param_3,plVar17,param_6,param_7,param_8,param_9 & 1);
            puVar2 = (undefined4 *)(param_4 + 0x1a8);
            bVar5 = *param_8;
            bVar12 = 7 < bVar5;
            if (bVar12) {
              bVar5 = 0xff;
            }
            puVar4 = puVar2 + (ulong)(uint)(int)(char)bVar5 * 0x2c;
            if (bVar12) {
              puVar4 = puVar2;
            }
            uVar18 = FUN_0277d7b4(puVar4,param_5);
            if ((((uVar18 & 1) != 0) &&
                (*(char *)((long)puVar4 + 3) == *(char *)((long)param_5 + 3))) &&
               (puVar4[1] == *(int *)((long)param_5 + 4))) {
              return true;
            }
            local_160 = (undefined *)(ulong)(ushort)uVar13;
            FUN_0277d4ac(&local_160);
            bVar5 = *param_8;
            bVar12 = 7 < bVar5;
            if (bVar12) {
              bVar5 = 0xff;
            }
            puVar4 = puVar2 + (ulong)(uint)(int)(char)bVar5 * 0x2c;
            if (bVar12) {
              puVar4 = puVar2;
            }
            *puVar4 = (undefined4)local_160;
            puVar4[1] = local_160._4_4_;
            bVar5 = *param_8;
            bVar12 = 7 < bVar5;
            if (bVar12) {
              bVar5 = 0xff;
            }
            puVar4 = puVar2 + (ulong)(uint)(int)(char)bVar5 * 0x2c;
            if (bVar12) {
              puVar4 = puVar2;
            }
            puVar4[0x28] = *param_7;
            puVar4[0x29] = param_7[1];
            puVar4[0x2a] = param_7[2];
            bVar5 = *param_8;
            bVar12 = 7 < bVar5;
            if (bVar12) {
              bVar5 = 0xff;
            }
            puVar4 = puVar2 + (ulong)(uint)(int)(char)bVar5 * 0x2c;
            if (bVar12) {
              puVar4 = puVar2;
            }
            *(byte *)(puVar4 + 0x2b) = bVar5;
            bVar5 = *param_8;
            bVar12 = 7 < bVar5;
            if (bVar12) {
              bVar5 = 0xff;
            }
            puVar4 = puVar2 + (ulong)(uint)(int)(char)bVar5 * 0x2c;
            if (bVar12) {
              puVar4 = puVar2;
            }
            uVar18 = FUN_009a46c4(puVar4 + 2,param_5);
            if ((uVar18 & 1) == 0) {
              return false;
            }
            local_16c = *(undefined4 *)param_5;
            uStack_168 = *(undefined4 *)((long)param_5 + 4);
            local_164 = 0x29;
            FUN_007091b4(&local_160);
            local_158 = *param_6;
            local_150 = CONCAT44(param_1,*(undefined4 *)(param_6 + 1));
            local_148 = param_7[1];
            bVar5 = *param_8;
            bVar12 = 7 < bVar5;
            if (bVar12) {
              bVar5 = 0xff;
            }
            puVar4 = puVar2 + (ulong)(uint)(int)(char)bVar5 * 0x2c;
            if (bVar12) {
              puVar4 = puVar2;
            }
            FUN_00709380(&local_160,puVar4 + 2);
            local_160 = (undefined *)CONCAT44(0x29,(undefined4)local_160);
            local_144 = CONCAT44(local_144._4_4_,uVar13);
            bVar5 = *param_8;
            bVar12 = 7 < bVar5;
            if (bVar12) {
              bVar5 = 0xff;
            }
            local_13c._4_4_ = (uint)(char)bVar5;
            puVar4 = puVar2 + (ulong)local_13c._4_4_ * 0x2c;
            if (bVar12) {
              puVar4 = puVar2;
            }
            uVar18 = FUN_009a4dec(puVar4 + 2);
            uVar16 = 3;
            if ((uVar18 & 1) == 0) {
              uVar16 = 1;
            }
            uVar18 = FUN_02532bf4(param_8);
            uVar15 = uVar16 | 8;
            if ((uVar18 & 1) == 0) {
              uVar15 = uVar16;
            }
            uVar16 = uVar15 | 4;
            if (param_3 != 0.0) {
              uVar16 = uVar15;
            }
            local_144 = CONCAT44(uVar16,(undefined4)local_144);
            local_13c = (ulong)local_13c._4_4_ << 0x20;
            FUN_01ad5d04(&local_188,param_5);
            iVar14 = FUN_01ad9fd0(&local_188);
            if ((iVar14 == 0x6a) &&
               (uVar18 = FUN_013eec20(*(undefined8 *)PTR_DAT_04bb3d80,uVar13), (uVar18 & 1) != 0)) {
              uVar13 = 1;
              if ((param_9 & 1) == 0) {
                uVar13 = 2;
              }
              local_13c = CONCAT44(local_13c._4_4_,uVar13);
            }
            iVar14 = FUN_0099f200(plVar27,param_8,&local_16c,&local_160);
            if (iVar14 == 0) {
              FUN_0099f500(plVar27,param_8);
              FUN_009a4550(param_4,param_8);
              return false;
            }
            return true;
          }
        }
      }
    }
LAB_009a3b44:
    FUN_009a4550(param_4,param_8);
    bVar5 = *param_8;
    puVar1 = (undefined2 *)(param_4 + 0x1a8);
    bVar12 = 7 < bVar5;
    if (bVar12) {
      bVar5 = 0xff;
    }
    puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar5 * 0x58;
    if (bVar12) {
      puVar3 = puVar1;
    }
    *puVar3 = *(undefined2 *)param_5;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)((long)param_5 + 2);
    *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)param_5 + 3);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)((long)param_5 + 4);
    bVar5 = *param_8;
    bVar12 = 7 < bVar5;
    if (bVar12) {
      bVar5 = 0xff;
    }
    puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar5 * 0x58;
    if (bVar12) {
      puVar3 = puVar1;
    }
    *(undefined4 *)(puVar3 + 0x50) = *param_7;
    *(undefined4 *)(puVar3 + 0x52) = param_7[1];
    *(undefined4 *)(puVar3 + 0x54) = param_7[2];
    bVar5 = *param_8;
    bVar12 = 7 < bVar5;
    if (bVar12) {
      bVar5 = 0xff;
    }
    puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar5 * 0x58;
    if (bVar12) {
      puVar3 = puVar1;
    }
    *(byte *)(puVar3 + 0x56) = bVar5;
    bVar5 = *param_8;
    bVar12 = 7 < bVar5;
    if (bVar12) {
      bVar5 = 0xff;
    }
    puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar5 * 0x58;
    if (bVar12) {
      puVar3 = puVar1;
    }
    uVar18 = FUN_009a46c4(puVar3 + 4,param_5);
    puVar9 = PTR_DAT_04bb43c0;
    if ((uVar18 & 1) == 0) {
      return false;
    }
    local_184 = *(undefined4 *)((long)param_5 + 4);
    local_160 = PTR_DAT_04bc0510 + 0x10;
    uStack_180 = 0x29;
    local_158 = *param_5;
    local_188 = *(undefined4 *)param_5;
    local_150 = 0;
    lVar21 = *(long *)PTR_DAT_04bb43c0;
    uVar16 = FUN_0277d6c4(&local_158);
    if (*(long *)puVar9 != 0) {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((uVar16 < *(uint *)(lVar21 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
        lVar21 = *(long *)PTR_DAT_04bc0428;
        uVar16 = FUN_0277d6c4(param_5);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar21 + 0x1d8)) &&
           (((puVar23 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar16 * 8),
             puVar23 != (uint *)0x0 && (uVar16 = *puVar23, uVar16 != 0)) &&
            (puVar23 != (uint *)(ulong)uVar16)))) {
          puVar25 = (uint *)((long)puVar23 - (long)(ulong)uVar16);
          if (((*puVar25 != 0) && (uVar16 = puVar25[1], uVar16 != 0)) &&
             ((ulong)(ushort)puVar25[2] != 0)) {
            lVar21 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar25 + lVar21 + (ulong)(ushort)puVar25[2] * 8;
            if (lVar21 != 0) {
              uVar15 = 0;
              if ((ulong)uVar16 != 0) {
                uVar15 = (uint)((ulong)((long)puVar23 - lVar21) / (ulong)uVar16);
              }
              if (*puVar25 <= uVar15) {
                uVar15 = 0xffffffff;
              }
              if (((uVar15 < *(uint *)PTR_DAT_04bc00c8) &&
                  (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar15 * 2),
                  uVar6 < 0xbd)) && (uVar6 == 0x6a)) {
                uVar18 = FUN_013eec20(*(undefined8 *)PTR_DAT_04bb3d80,uVar13);
                uVar18 = uVar18 & 0xffffffff;
                goto LAB_009a3d98;
              }
            }
          }
        }
      }
    }
    uVar18 = 0;
LAB_009a3d98:
    local_9d = 0;
    local_120 = 0x80;
    local_11c[0] = 0;
    local_90 = 0;
    local_94 = 0;
    local_130 = PTR_DAT_04bb2d88 + 0x10;
    local_13c = 0;
    local_144 = 0;
    local_150 = CONCAT44(param_1,*(undefined4 *)(param_6 + 1));
    local_98 = 7;
    local_158 = *param_6;
    local_160 = (undefined *)0xffffffff00000000;
    local_148 = param_7[1];
    bVar5 = *param_8;
    bVar12 = 7 < bVar5;
    if (bVar12) {
      bVar5 = 0xff;
    }
    puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar5 * 0x58;
    if (bVar12) {
      puVar3 = puVar1;
    }
    plVar17 = (long *)(puVar3 + 4);
    puStack_128 = local_11c;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    __src = *(undefined1 **)(puVar3 + 8);
    if (local_11c != __src) {
      (**(code **)(*(long *)(puVar3 + 4) + 0x18))(plVar17);
      lVar21 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar21) == '\0') goto LAB_009a3e98;
        lVar22 = *(long *)(puVar3 + 8) + lVar21;
        if (*(char *)(lVar22 + 1) == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_009a3e98;
        }
        if (*(char *)(lVar22 + 2) == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_009a3e98;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_009a3e98:
      iVar14 = (int)lVar21;
      if (local_120 <= (int)lVar21) {
        iVar14 = local_120 + -1;
      }
      memcpy(local_11c,__src,(long)iVar14);
      local_11c[iVar14] = 0;
    }
    local_160 = (undefined *)CONCAT44(0x29,(undefined4)local_160);
    local_144 = CONCAT44(local_144._4_4_,uVar13);
    bVar5 = *param_8;
    bVar12 = 7 < bVar5;
    if (bVar12) {
      bVar5 = 0xff;
    }
    local_13c = CONCAT44((int)(char)bVar5,(undefined4)local_13c);
    puVar3 = puVar1 + (ulong)(uint)(int)(char)bVar5 * 0x58;
    if (bVar12) {
      puVar3 = puVar1;
    }
    plVar17 = (long *)(puVar3 + 4);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcVar24 = *(char **)(puVar3 + 8);
    if (pcVar24 == "cvrt") {
      uVar16 = 3;
    }
    else if (((*pcVar24 == 'c') && (pcVar24[1] == 'v')) && (pcVar24[2] == 'r')) {
      uVar16 = 3;
      if (pcVar24[3] != 't') {
        uVar16 = 1;
      }
    }
    else {
      uVar16 = 1;
    }
    lVar21 = *(long *)PTR_DAT_04bb4718;
    if ((lVar21 == 0) || (uVar20 = (ulong)*param_8, 7 < uVar20)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar26 = &DAT_054f0c08;
        cVar8 = DAT_054f0c6c;
        if (iVar14 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = '\0';
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
          cVar8 = DAT_054f0c6c;
        }
      }
      else {
        psVar26 = &DAT_054f0c08;
        cVar8 = DAT_054f0c6c;
      }
    }
    else {
      lVar21 = lVar21 + uVar20 * 0xd0 + (ulong)(*(uint *)(lVar21 + uVar20 * 4 + 0xd68) & 1) * 0x68;
      psVar26 = (short *)(lVar21 + 0x6e8);
      cVar8 = *(char *)(lVar21 + 0x74c);
    }
    if ((cVar8 != '\0') && (*psVar26 == *(short *)PTR_DAT_04bb6298)) {
      if (*(uint *)(psVar26 + 2) < 0x149) {
        uVar15 = uVar16 | 8;
        if (*(uint *)(psVar26 + 2) != 0x5b) {
          uVar15 = uVar16;
        }
        uVar16 = uVar15;
      }
    }
    uVar15 = uVar16 | 4;
    if (param_3 != 0.0) {
      uVar15 = uVar16;
    }
    uVar13 = 1;
    if ((param_9 & 1) == 0) {
      uVar13 = 2;
    }
    if ((uVar18 & 1) == 0) {
      uVar13 = 0;
    }
    local_144 = CONCAT44(uVar15,(undefined4)local_144);
    local_13c._4_4_ = (uint)((ulong)local_13c >> 0x20);
    local_13c = CONCAT44(local_13c._4_4_,uVar13);
    iVar14 = FUN_0099f200(plVar27,param_8,&local_188,&local_160);
    if (iVar14 == 0) {
      FUN_0099f500(plVar27,param_8);
      FUN_009a4550(param_4,param_8);
      return false;
    }
    return iVar14 != 0;
  }
  uVar18 = (ulong)*param_8;
  if (uVar18 < 8) {
    plVar17 = plVar27 + uVar18 * 0x34 + 0x4f;
    plVar19 = plVar17 + 0x1d;
    if ((short)*plVar17 == -2) goto LAB_009a3588;
    puVar23 = (uint *)(plVar27 + uVar18 * 0x34 + 0x6e);
    lVar21 = uVar18 * 0x1a0 + 0x374;
    uVar18 = (**(code **)(*plVar19 + 0x28))
                       (plVar19,(long)plVar27 + (ulong)(*puVar23 & 1) * 0x18 + lVar21,plVar17);
    uVar16 = *puVar23 & 1;
    if ((uVar18 & 1) == 0) {
      uVar18 = (**(code **)(*plVar19 + 0x28))
                         (plVar19,(long)plVar27 + (ulong)(uVar16 ^ 1) * 0x18 + lVar21,plVar17);
      if ((uVar18 & 1) == 0) goto LAB_009a3588;
      uVar16 = ~*puVar23 & 1;
    }
    puVar23 = (uint *)((long)plVar27 + (ulong)uVar16 * 0x18 + lVar21 + 0xc);
    lVar21 = *(long *)puVar9;
  }
  else {
LAB_009a3588:
    lVar21 = *(long *)puVar9;
    puVar23 = (uint *)PTR_DAT_04bb3238;
  }
  if (lVar21 == 0) {
    return true;
  }
  uVar16 = *puVar23;
  if ((((uVar16 == 0) ||
       (plVar27 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar27 == (long *)0x0)) ||
      ((*(uint *)(plVar27 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar27 + 0x46) != uVar16)) {
    plVar27 = (long *)0x0;
  }
  if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
    plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar21 = *(long *)puVar9;
    iVar14 = (**(code **)(*plVar17 + 0x60))();
    if (iVar14 < 0x11) {
      uVar16 = 1;
      goto LAB_009a3754;
    }
    if (*(uint *)(lVar21 + 0x5e8) < 5) {
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
      goto LAB_009a3754;
    }
  }
  uVar16 = 0;
LAB_009a3754:
  if (plVar27 == (long *)0x0) {
    return true;
  }
  lVar21 = plVar27[0x2a];
  if (((*PTR_DAT_04bb4000 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb4000), iVar14 != 0)) {
    *(undefined **)PTR_DAT_04bb3ff8 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4000);
  }
  uVar18 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb3ff8);
  uVar15 = 0;
  if ((int)lVar21 == 1) {
    uVar15 = uVar16;
  }
  if ((uVar18 & 1) == 0) {
    return true;
  }
  if (uVar15 == 0) {
    return true;
  }
  local_188 = 0;
  *(byte *)(plVar27 + 0x68) = *(byte *)(plVar27 + 0x68) | 1;
  local_160 = (undefined *)((ulong)local_160 & 0xffffffff00000000);
  FUN_0099ba20(param_1,param_2,param_3,plVar27,param_6,param_7,param_8,param_9 & 1);
  return true;
}

