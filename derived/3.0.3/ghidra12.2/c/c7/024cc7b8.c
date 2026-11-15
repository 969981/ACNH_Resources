
/* WARNING: Removing unreachable block (ram,0x024cc900) */
/* WARNING: Removing unreachable block (ram,0x024ccddc) */
/* WARNING: Removing unreachable block (ram,0x024cce20) */

void FUN_024cc7b8(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  uint *puVar14;
  ushort uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  uint uStack_6c;
  uint local_64;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar13 + 0x278) * 999.99994);
    iVar10 = (int)(*(float *)(lVar13 + 0x27c) * 4.0);
    if (0x7ffe < iVar10) {
      iVar10 = 0x7fff;
    }
    if (iVar10 < -0x7fff) {
      iVar10 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar10;
    fVar19 = *(float *)(lVar13 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar19 * 999.99994);
    uVar7 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar7;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar17 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar20 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar17 + 0x2ec) = uVar20;
    *(undefined1 *)((long)puVar17 + 0x2e5) = 1;
  }
  iVar10 = *(int *)(param_1 + 0x178);
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  if (puVar17 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar17 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar17 = &DAT_05240280;
    }
  }
  uVar7 = 0;
  if (puVar17[0x227] != 0) {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
    uVar7 = *(uint *)(puVar17 + 0x2d3) >> 1 & 1;
  }
  uVar11 = FUN_0170a6d0(puVar17,uVar7);
  puVar6 = PTR_DAT_04bb43c0;
  if (iVar10 != 0) {
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x1900) == '\0') {
      puVar17 = *(undefined8 **)(param_1 + 0x60);
      if (puVar17 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_052461c0);
          puVar17 = &DAT_05240280;
          if (iVar10 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar17 = &DAT_05240280;
        }
      }
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "CommonStickLightKeep";
      FUN_017081d0(puVar17,&local_88,6,1,0);
      return;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x1901);
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    uVar12 = FUN_016dcd74(uVar2);
    FUN_017081d0(puVar17,uVar12,6,1,0);
    uVar20 = *(undefined4 *)(param_1 + 0x230);
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0,uVar20);
        puVar17 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    lVar13 = FUN_017067d4(puVar17,uVar20,0);
    if (lVar13 == 0) {
      return;
    }
    uVar12 = FUN_016dc47c(uVar2);
    FUN_01751d60(lVar13,uVar12,6,0,0);
    return;
  }
  if ((uVar11 & 1) == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x17ac) == '\0') &&
     (local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000),
     (*(uint *)(param_1 + 0xec8) & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(bool *)(param_1 + 0x1980) = *(char *)(param_1 + 0x1900) != '\0';
    *(undefined1 *)(param_1 + 0x1981) = *(undefined1 *)(param_1 + 0x1901);
    local_88 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_88);
    *(undefined8 *)(param_1 + 0x1982) = *(undefined8 *)(param_1 + 0x1902);
    uVar7 = 0xdb;
    goto LAB_024ccf70;
  }
  if (*(long *)(param_1 + 0x298) == 0) {
LAB_024ccb14:
    puVar17 = (undefined8 *)PTR_DAT_04bb37e0;
  }
  else {
    lVar13 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    if (*(char *)(lVar13 + 0x1d5) != '\0') {
      lVar18 = *(long *)PTR_DAT_04bb43c0;
      puVar17 = (undefined8 *)(lVar13 + 0xcc);
      uVar7 = FUN_0277d6c4(puVar17);
      if (*(long *)puVar6 != 0) {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((*(uint *)(lVar18 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_024ccb00;
        goto LAB_024ccb78;
      }
LAB_024ccb00:
      iVar10 = FUN_0277d6c4(puVar17);
      if (iVar10 == 0xfffd) goto LAB_024ccb14;
    }
    puVar17 = (undefined8 *)(lVar13 + 0xd4);
  }
LAB_024ccb78:
  uVar4 = *(undefined2 *)puVar17;
  uVar2 = *(undefined1 *)((long)puVar17 + 2);
  uVar3 = *(undefined1 *)((long)puVar17 + 3);
  uVar20 = *(undefined4 *)puVar17;
  uVar7 = *(uint *)((long)puVar17 + 4);
  pcVar5 = (char *)*puVar17;
  local_70 = uVar4;
  uStack_6e = uVar2;
  uStack_6d = uVar3;
  uStack_6c = uVar7;
  if (*(char *)(param_1 + 0x1900) != '\0') {
    lVar18 = *(long *)puVar6;
    uVar8 = FUN_0277d6c4(&local_70);
    lVar13 = *(long *)puVar6;
    if (lVar13 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_88 = PTR_DAT_04bc0510 + 0x10;
        local_78 = 0;
        local_80 = pcVar5;
        uVar8 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar6 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar13 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(&local_70);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
               (puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8),
               puVar14 != (uint *)0x0)) {
              uVar15 = 0;
              uVar8 = *puVar14;
              if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
                puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
                uVar15 = 0;
                if (*puVar16 != 0) {
                  uVar8 = puVar16[1];
                  if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                    lVar13 = 0xc;
                    if (*(char *)((long)puVar16 + 10) != '\0') {
                      lVar13 = 0x1c;
                    }
                    lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
                    if (lVar13 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar8 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar8);
                      }
                      if (*puVar16 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar15 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                         uVar15 < 0xbd)) goto LAB_024ccd18;
                    }
                  }
                  uVar15 = 0;
                }
              }
LAB_024ccd18:
              if (uVar15 == 0x2c) {
                uVar15 = 0;
                uVar8 = *puVar14;
                if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
                  puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
                  uVar15 = 0;
                  if (*puVar16 != 0) {
                    uVar8 = puVar16[1];
                    if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
                      if (lVar13 != 0) {
                        uVar1 = 0;
                        if ((ulong)uVar8 != 0) {
                          uVar1 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar8);
                        }
                        if (*puVar16 <= uVar1) {
                          uVar1 = 0xffffffff;
                        }
                        if (uVar1 < *(uint *)PTR_DAT_04bc00c8) {
                          uVar15 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2);
                          if (0xbc < uVar15) {
                            uVar15 = 0;
                          }
                          goto LAB_024ccdec;
                        }
                      }
                    }
                    uVar15 = 0;
                  }
                }
LAB_024ccdec:
                uVar8 = uVar7 & 0xf;
                if (uVar15 != 0x2c) {
                  uVar8 = 0;
                }
                local_64 = 0;
                if (uVar8 < 7) {
                  local_64 = uVar8 + 1;
                }
                if (7 < local_64) {
                  local_64 = 0;
                }
                uVar8 = *puVar14;
                uVar15 = 0;
                if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
                  puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
                  uVar15 = 0;
                  if (*puVar16 != 0) {
                    uVar8 = puVar16[1];
                    if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                      lVar13 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar13 = 0x1c;
                      }
                      lVar13 = (long)puVar16 + lVar13 + (ulong)(ushort)puVar16[2] * 8;
                      if (lVar13 != 0) {
                        uVar1 = 0;
                        if ((ulong)uVar8 != 0) {
                          uVar1 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar8);
                        }
                        if (*puVar16 <= uVar1) {
                          uVar1 = 0xffffffff;
                        }
                        if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar15 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                           uVar15 < 0xbd)) goto LAB_024cceb4;
                      }
                    }
                    uVar15 = 0;
                  }
                }
LAB_024cceb4:
                if (uVar15 == 0x2c) {
                  uVar7 = uVar7 & 0xfffffff0 | local_64 & 0xf;
                }
                *(char *)(param_1 + 0x1901) = (char)local_64;
                *(ulong *)(param_1 + 0x1902) = CONCAT44(uVar7,uVar20);
                local_70 = uVar4;
                uStack_6e = uVar2;
                uStack_6d = uVar3;
                uStack_6c = uVar7;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(bool *)(param_1 + 0x1980) = *(char *)(param_1 + 0x1900) != '\0';
  *(undefined1 *)(param_1 + 0x1981) = *(undefined1 *)(param_1 + 0x1901);
  local_88 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_88);
  *(undefined8 *)(param_1 + 0x1982) = *(undefined8 *)(param_1 + 0x1902);
  uVar7 = 0xdc;
LAB_024ccf70:
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar7);
  if (uVar7 < 0x149) {
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
    lVar13 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar13 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar13,uVar7);
  }
  return;
}

