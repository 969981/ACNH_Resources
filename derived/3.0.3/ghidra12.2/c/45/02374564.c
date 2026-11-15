
/* WARNING: Removing unreachable block (ram,0x02374b38) */

undefined8 FUN_02374564(long param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined2 uVar13;
  byte bVar14;
  byte bVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  int local_90;
  undefined4 uStack_8c;
  long local_88;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (*(char *)((long)param_2 + 5) != '\0') {
    *(undefined4 *)(param_1 + 0x1810) = 1;
  }
  if (*(char *)(param_2 + 3) == '\0') {
    if (*(int *)(param_1 + 0x1810) - 4U < 3) goto LAB_02374cb8;
  }
  else {
    *(undefined4 *)(param_1 + 0x1810) = 7;
  }
  puVar7 = PTR_DAT_04bb43c0;
  puVar6 = PTR_DAT_04bb37e0;
  if (*(long *)(param_1 + 0x298) == 0) {
    puVar17 = (undefined4 *)PTR_DAT_04bb37e0;
  }
  else {
    lVar18 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    if (*(char *)(lVar18 + 0x1d5) != '\0') {
      puVar17 = (undefined4 *)(lVar18 + 0xcc);
      lVar19 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(puVar17);
      if (*(long *)puVar7 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) goto LAB_02374670;
      }
      iVar11 = FUN_0277d6c4(puVar17);
      if (iVar11 == 0xfffd) {
        puVar17 = (undefined4 *)PTR_DAT_04bb37e0;
        goto LAB_02374670;
      }
    }
    puVar17 = (undefined4 *)(lVar18 + 0xd4);
  }
LAB_02374670:
  puVar7 = PTR_DAT_04bb39b0;
  pbVar2 = PTR_DAT_04bb32e0;
  local_78 = *puVar17;
  local_74 = puVar17[1];
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0x15c) != 0)) {
    bVar15 = *pbVar1;
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar18 + 0x158);
    }
    bVar14 = *pbVar3;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    if ((bVar14 != bVar15) && (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 != -1)) {
      local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar4 >> 1 & 1) != 0) {
        lVar18 = *(long *)PTR_DAT_04bb2720;
        if (lVar18 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(lVar18 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
            iVar11 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar11 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar10 = 0;
          puVar16 = DAT_055c1b60;
          do {
            if (*(int *)(puVar16 + -1) == *(int *)(puVar20 + 7)) {
              if (((uVar10 ^ 0xffffffff) & 0xffff) != 0) goto LAB_023747e0;
              break;
            }
            puVar16 = (undefined8 *)puVar16[1];
            uVar10 = uVar10 + 1;
          } while (puVar16 != &DAT_055c1b58);
        }
        uVar10 = 0;
LAB_023747e0:
        uVar12 = FUN_016e6c20(uVar10);
        if ((uVar12 & 1) == 0) {
          FUN_0252d8f0(&local_80,pbVar1);
          puVar8 = PTR_DAT_04bb43c0;
          lVar19 = *(long *)PTR_DAT_04bb43c0;
          uVar10 = FUN_0277d6c4(&local_80);
          lVar18 = *(long *)puVar8;
          if (lVar18 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              local_88 = 0;
              local_98 = PTR_DAT_04bc0510 + 0x10;
              local_90 = local_80;
              uStack_8c = uStack_7c;
              uVar10 = FUN_0277d6c4(&local_90);
              if (*(long *)puVar8 != 0) {
                lVar18 = *(long *)(lVar18 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar18 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(&local_80);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                  if (uVar10 < *(uint *)(lVar18 + 0x1d8)) {
                    lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8);
                    if (lVar18 != 0) {
                      local_88 = lVar18;
                    }
                  }
                }
              }
              lVar18 = *(long *)puVar7;
              if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
                bVar9 = true;
              }
              else {
                bVar15 = *pbVar1;
                if (*(int *)(lVar18 + 0x15c) != 0) {
                  pbVar2 = (byte *)(lVar18 + 0x158);
                }
                bVar14 = *pbVar2;
                if (7 < bVar14) {
                  bVar14 = 0xff;
                }
                if (7 < bVar15) {
                  bVar15 = 0xff;
                }
                bVar9 = bVar14 == bVar15;
              }
              uVar12 = FUN_016e69f4(&local_80,bVar9);
              if ((uVar12 & 1) == 0) {
                FUN_02471f38(pbVar1,puVar6,0,0xffffffff);
                FUN_02472404(0,param_1);
                local_78 = *(undefined4 *)puVar6;
                local_74 = *(undefined4 *)(puVar6 + 4);
                local_62 = 0;
                local_6c = 1;
                local_64 = 0;
                uStack_70 = 0;
                local_68 = 6;
                FUN_02321e44(auStack_a0,param_1,&uStack_70);
              }
            }
          }
        }
      }
    }
  }
  puVar6 = PTR_DAT_04bb43c0;
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffffe) == 2) {
    lVar18 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar6 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        uVar12 = FUN_023f2a2c(&local_78);
        if ((uVar12 & 1) == 0) goto LAB_02374cb8;
        if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
          fVar21 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
          if ((((730.0 <= fVar21) && (fVar21 <= 760.0)) &&
              (fVar21 = *(float *)(*(long *)(param_1 + 0x68) + 0x280), 590.0 <= fVar21)) &&
             (fVar21 <= 605.0)) goto LAB_02374cb8;
        }
      }
    }
  }
  if ((*(char *)((long)param_2 + 6) != '\0') &&
     (uVar12 = FUN_02430730(param_1,0,*(undefined1 *)((long)param_2 + 7),param_2[2]),
     (uVar12 & 1) != 0)) {
    return 1;
  }
  lVar18 = *(long *)puVar7;
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
    bVar9 = true;
    puVar20 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar18 + 0x158);
    }
    bVar14 = *pbVar1;
    bVar15 = *pbVar2;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    bVar9 = bVar15 == bVar14;
    puVar20 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar20 = &DAT_05240280;
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,4);
  uVar10 = *(uint *)((long)puVar20 + 0x15f4);
  FUN_016e69f4(&local_78,bVar9);
  uVar12 = FUN_016e69f4(&local_78,bVar9);
  puVar6 = PTR_DAT_04bb43c0;
  if (((uVar10 >> 4 & 1) != 0) && ((uVar12 & 1) != 0)) {
    lVar18 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar6 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        FUN_02332d7c(param_1,1);
        if (*(char *)(param_2 + 1) != '\0') {
          uVar13 = *(undefined2 *)(*(long *)(param_1 + 0x68) + 0x2b6);
          *(undefined2 *)(param_1 + 0x19d8) = 0;
          *(undefined8 *)(param_1 + 0x19d0) = 0;
          *(undefined8 *)(param_1 + 0x19c8) = 0;
          *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined2 *)(param_1 + 0x19d1) = uVar13;
          *(undefined1 *)(param_1 + 0x19d3) = 0;
          *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
          uVar13 = 0x22;
          if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1) {
            uVar13 = 0x20;
          }
          *(undefined2 *)(param_1 + 0x19d4) = uVar13;
          *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
          local_98 = (undefined *)CONCAT44((int)((ulong)local_98 >> 0x20),0x26);
          *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
          *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
          *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
          *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
          *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
          *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
          *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
          *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
          *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
          *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
          *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
          *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
          *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
          *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
          *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
          *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
          *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
          lVar18 = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar18 = *(long *)(param_1 + 0x70) + 0x278;
          }
          FUN_03ebb160(lVar18,0x26);
          return 1;
        }
        if (*(long *)PTR_DAT_04bb6270 != 0) {
          bVar15 = *pbVar1;
          uVar10 = 0;
          if (7 < bVar15) {
            bVar15 = 0xff;
          }
          do {
            pbVar2 = (byte *)(*(long *)PTR_DAT_04bb6270 + 0x10 +
                             ((long)((ulong)uVar10 << 0x20) >> 0x1b));
            bVar14 = *pbVar2;
            local_98 = (undefined *)CONCAT44(local_98._4_4_,*(int *)(pbVar2 + 0x10));
            if (*(int *)(pbVar2 + 0x10) < 0x13) {
              if (7 < bVar14) {
                bVar14 = 0xff;
              }
              if (bVar14 == bVar15 && pbVar2[0x18] == 3) {
                FUN_025196e4(&local_98);
                bVar15 = *pbVar1;
                if (7 < bVar15) {
                  bVar15 = 0xff;
                }
                bVar14 = (byte)local_98;
                if (7 < (byte)local_98) {
                  bVar14 = 0xff;
                }
                if ((bVar15 == bVar14) &&
                   ((*(long *)PTR_DAT_04bb7ff8 == 0 ||
                    (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)))) {
                  local_90 = 0;
                  local_98._0_5_ = CONCAT14(*(undefined1 *)((long)param_2 + 6),*param_2);
                  goto LAB_02374dcc;
                }
                break;
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != 0x20);
        }
        if (param_2[2] == 0) {
          FUN_024780c0(param_1,0,0,0,0,*(undefined1 *)(param_2 + 3));
          return 1;
        }
        local_98._0_5_ = CONCAT14(*(undefined1 *)((long)param_2 + 6),*param_2);
        local_90 = param_2[2];
LAB_02374dcc:
        FUN_02374e74(param_1,&local_98);
        return 1;
      }
    }
  }
LAB_02374cb8:
  local_90 = 0;
  local_98._0_5_ = CONCAT14(*(undefined1 *)((long)param_2 + 6),*param_2);
  FUN_02374e74(param_1,&local_98);
  return 0;
}

