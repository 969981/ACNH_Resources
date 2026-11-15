
void FUN_02406780(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  ushort uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint *local_58;
  
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined2 *)(puVar14 + 0xb86) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)puVar14 + 0x5c32) = puVar2[2];
  *(undefined *)((long)puVar14 + 0x5c33) = puVar2[3];
  *(undefined4 *)((long)puVar14 + 0x5c34) = *(undefined4 *)(puVar2 + 4);
  bVar3 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  local_68 = (undefined *)CONCAT71(local_68._1_7_,bVar3);
  lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_68,1);
  if (lVar6 == 0) {
    return;
  }
  if ((*(long **)(lVar6 + 0xd0) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar6 + 0xd0), puVar14 == (undefined8 *)0x0)) {
    uVar7 = 0;
    plVar15 = *(long **)(param_1 + 0x60);
  }
  else {
    uVar7 = (**(code **)*puVar14)();
    uVar7 = uVar7 & 0xffffffff;
    plVar15 = *(long **)(param_1 + 0x60);
  }
  if (plVar15 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      plVar15 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar15 = &DAT_05240280;
    }
  }
  lVar8 = (**(code **)(*plVar15 + 0x3c8))(plVar15);
  puVar2 = PTR_DAT_04bb43c0;
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0xcc) != -2)) {
LAB_02406a8c:
    lVar8 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    if (*(char *)(lVar8 + 0xaf89) == '\0' || 7 < *(byte *)(lVar8 + 0xaf88)) {
      lVar16 = lVar8;
      if (((*(char *)(lVar8 + 0xaf8a) != '\0') && (uVar9 = FUN_016e5e90(), (uVar9 & 1) != 0)) &&
         (lVar16 = lVar8 + 0xaf90, (*(byte *)(lVar8 + 0xaf8b) & 0xfe) != 0)) {
        lVar16 = lVar8;
      }
    }
    else {
      lVar16 = lVar8 + (ulong)*(byte *)(lVar8 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar10 = (undefined4 *)FUN_026e88f0(lVar16);
    lVar16 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4();
    lVar8 = *(long *)puVar2;
    if (lVar8 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_60 = *puVar10;
        local_5c = puVar10[1];
        local_58 = (uint *)0x0;
        uVar4 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar2 == 0) {
LAB_02406c68:
          uVar12 = 0;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02406c68;
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar10);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_02406c68;
          puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
          if (puVar11 == (uint *)0x0) goto LAB_02406c68;
          uVar12 = 0;
          uVar4 = *puVar11;
          local_58 = puVar11;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar12 = 0;
            if (*puVar13 != 0) {
              uVar4 = puVar13[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar8 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar4);
                  }
                  if (*puVar13 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                     (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                     uVar12 < 6)) goto LAB_02406c6c;
                }
              }
              goto LAB_02406c68;
            }
          }
        }
LAB_02406c6c:
        if (uVar12 != 0) goto LAB_0240754c;
      }
    }
    lVar8 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    if ((*(char *)(lVar8 + 0xaf89) == '\0') || (7 < *(byte *)(lVar8 + 0xaf88))) {
      lVar16 = lVar8;
      if ((*(char *)(lVar8 + 0xaf8a) != '\0') &&
         ((uVar9 = FUN_016e5e90(), (uVar9 & 1) != 0 &&
          (lVar16 = lVar8 + 0xaf90, (*(byte *)(lVar8 + 0xaf8b) & 0xfe) != 0)))) {
        lVar16 = lVar8;
      }
    }
    else {
      lVar16 = lVar8 + (ulong)*(byte *)(lVar8 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar10 = (undefined4 *)FUN_026e8b00(lVar16);
    lVar16 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4();
    lVar8 = *(long *)puVar2;
    if (lVar8 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_60 = *puVar10;
        local_5c = puVar10[1];
        local_58 = (uint *)0x0;
        uVar4 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar2 == 0) {
LAB_02406e54:
          uVar12 = 0;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02406e54;
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar10);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_02406e54;
          puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
          if (puVar11 == (uint *)0x0) goto LAB_02406e54;
          uVar12 = 0;
          uVar4 = *puVar11;
          local_58 = puVar11;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar12 = 0;
            if (*puVar13 != 0) {
              uVar4 = puVar13[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar8 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar4);
                  }
                  if (*puVar13 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                     (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                     uVar12 < 6)) goto LAB_02406e58;
                }
              }
              goto LAB_02406e54;
            }
          }
        }
LAB_02406e58:
        if (uVar12 != 0) goto LAB_0240754c;
      }
    }
    lVar8 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    if (((*(char *)(lVar8 + 0xaf89) == '\0') || (7 < *(byte *)(lVar8 + 0xaf88))) &&
       ((*(char *)(lVar8 + 0xaf8a) == '\0' ||
        ((uVar9 = FUN_016e5e90(), (uVar9 & 1) == 0 || (1 < *(byte *)(lVar8 + 0xaf8b))))))) {
      puVar10 = (undefined4 *)FUN_02814c00(lVar8);
    }
    else {
      puVar10 = (undefined4 *)PTR_DAT_04bb37e0;
    }
    lVar16 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4(puVar10);
    lVar8 = *(long *)puVar2;
    if (lVar8 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_60 = *puVar10;
        local_5c = puVar10[1];
        local_58 = (uint *)0x0;
        uVar4 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar2 == 0) {
LAB_02407034:
          uVar12 = 0;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02407034;
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar10);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_02407034;
          puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
          if (puVar11 == (uint *)0x0) goto LAB_02407034;
          uVar12 = 0;
          uVar4 = *puVar11;
          local_58 = puVar11;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar12 = 0;
            if (*puVar13 != 0) {
              uVar4 = puVar13[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar8 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar4);
                  }
                  if (*puVar13 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                     (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                     uVar12 < 6)) goto LAB_02407038;
                }
              }
              goto LAB_02407034;
            }
          }
        }
LAB_02407038:
        if (uVar12 != 0) goto LAB_0240754c;
      }
    }
    puVar10 = (undefined4 *)FUN_028077a4(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    lVar16 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4();
    lVar8 = *(long *)puVar2;
    if (lVar8 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_60 = *puVar10;
        local_5c = puVar10[1];
        local_58 = (uint *)0x0;
        uVar4 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar2 == 0) {
LAB_024071c0:
          uVar12 = 0;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024071c0;
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar10);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_024071c0;
          puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
          if (puVar11 == (uint *)0x0) goto LAB_024071c0;
          uVar12 = 0;
          uVar4 = *puVar11;
          local_58 = puVar11;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar12 = 0;
            if (*puVar13 != 0) {
              uVar4 = puVar13[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar8 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar4);
                  }
                  if (*puVar13 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                     (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                     uVar12 < 6)) goto LAB_024071c4;
                }
              }
              goto LAB_024071c0;
            }
          }
        }
LAB_024071c4:
        if (uVar12 != 0) goto LAB_0240754c;
      }
    }
    puVar10 = (undefined4 *)FUN_02807a0c(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    lVar16 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4();
    lVar8 = *(long *)puVar2;
    if (lVar8 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_60 = *puVar10;
        local_5c = puVar10[1];
        local_58 = (uint *)0x0;
        uVar4 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar2 == 0) {
LAB_0240734c:
          uVar12 = 0;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0240734c;
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar10);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_0240734c;
          puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
          if (puVar11 == (uint *)0x0) goto LAB_0240734c;
          uVar12 = 0;
          uVar4 = *puVar11;
          local_58 = puVar11;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar12 = 0;
            if (*puVar13 != 0) {
              uVar4 = puVar13[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar8 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar4);
                  }
                  if (*puVar13 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                     (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                     uVar12 < 6)) goto LAB_02407350;
                }
              }
              goto LAB_0240734c;
            }
          }
        }
LAB_02407350:
        if (uVar12 != 0) goto LAB_0240754c;
      }
    }
    lVar8 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    if ((*(char *)(lVar8 + 0xaf89) == '\0') || (7 < *(byte *)(lVar8 + 0xaf88))) {
      lVar16 = lVar8;
      if (*(char *)(lVar8 + 0xaf8a) != '\0') {
        bVar3 = FUN_016e5e90();
        lVar16 = lVar8 + 0xaf90;
        if ((bVar3 & *(byte *)(lVar8 + 0xaf8b) < 2) == 0) {
          lVar16 = lVar8;
        }
      }
    }
    else {
      lVar16 = lVar8 + (ulong)*(byte *)(lVar8 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar10 = (undefined4 *)FUN_026e9240(lVar16);
    lVar16 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4();
    lVar8 = *(long *)puVar2;
    if (lVar8 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_60 = *puVar10;
        local_5c = puVar10[1];
        local_58 = (uint *)0x0;
        uVar4 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar2 == 0) {
LAB_0240753c:
          uVar12 = 0;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0240753c;
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar10);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_0240753c;
          puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
          if (puVar11 == (uint *)0x0) goto LAB_0240753c;
          uVar12 = 0;
          uVar4 = *puVar11;
          local_58 = puVar11;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar12 = 0;
            if (*puVar13 != 0) {
              uVar4 = puVar13[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar8 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar4);
                  }
                  if (*puVar13 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                     (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                     uVar12 < 6)) goto LAB_02407540;
                }
              }
              goto LAB_0240753c;
            }
          }
        }
LAB_02407540:
        if (uVar12 != 0) goto LAB_0240754c;
      }
    }
    lVar8 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    if ((*(char *)(lVar8 + 0xaf89) == '\0') || (7 < *(byte *)(lVar8 + 0xaf88))) {
      lVar16 = lVar8;
      if ((*(char *)(lVar8 + 0xaf8a) != '\0') &&
         ((uVar9 = FUN_016e5e90(), (uVar9 & 1) != 0 &&
          (lVar16 = lVar8 + 0xaf90, (*(byte *)(lVar8 + 0xaf8b) & 0xfe) != 0)))) {
        lVar16 = lVar8;
      }
    }
    else {
      lVar16 = lVar8 + (ulong)*(byte *)(lVar8 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar10 = (undefined4 *)FUN_026e9470(lVar16);
    lVar16 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4();
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
LAB_024077b8:
      lVar8 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
      if ((*(char *)(lVar8 + 0xaf89) == '\0') || (7 < *(byte *)(lVar8 + 0xaf88))) {
        lVar16 = lVar8;
        if ((*(char *)(lVar8 + 0xaf8a) != '\0') &&
           ((uVar9 = FUN_016e5e90(), (uVar9 & 1) != 0 &&
            (lVar16 = lVar8 + 0xaf90, (*(byte *)(lVar8 + 0xaf8b) & 0xfe) != 0)))) {
          lVar16 = lVar8;
        }
      }
      else {
        lVar16 = lVar8 + (ulong)*(byte *)(lVar8 + 0xaf88) * 0x11f8 + 0x1fc8;
      }
      puVar10 = (undefined4 *)FUN_026e96a0(lVar16);
      lVar16 = *(long *)puVar2;
      uVar4 = FUN_0277d6c4();
      lVar8 = *(long *)puVar2;
      if (lVar8 == 0) goto LAB_02407594;
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02407594;
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_60 = *puVar10;
      local_5c = puVar10[1];
      local_58 = (uint *)0x0;
      uVar4 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_02407990:
        uVar12 = 0;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02407990;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(puVar10);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
           (puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar11 == (uint *)0x0)) goto LAB_02407990;
        uVar4 = *puVar11;
        uVar12 = 0;
        if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
          puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
          uVar12 = 0;
          if (*puVar13 != 0) {
            uVar4 = puVar13[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar4);
                }
                if (*puVar13 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                   (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                   uVar12 < 6)) goto LAB_02407994;
              }
            }
            goto LAB_02407990;
          }
        }
      }
LAB_02407994:
      if (uVar12 == 0) goto LAB_02407594;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024077b8;
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_60 = *puVar10;
      local_5c = puVar10[1];
      local_58 = (uint *)0x0;
      uVar4 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_024077a8:
        uVar12 = 0;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024077a8;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(puVar10);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
           (puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar11 == (uint *)0x0)) goto LAB_024077a8;
        uVar4 = *puVar11;
        uVar12 = 0;
        if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
          puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
          uVar12 = 0;
          if (*puVar13 != 0) {
            uVar4 = puVar13[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar4);
                }
                if (*puVar13 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                   (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                   uVar12 < 6)) goto LAB_024077ac;
              }
            }
            goto LAB_024077a8;
          }
        }
      }
LAB_024077ac:
      if (uVar12 == 0) goto LAB_024077b8;
    }
    puVar14 = (undefined8 *)FUN_016e3954(param_1);
  }
  else {
    lVar8 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    if (*(char *)(lVar8 + 0xaf89) == '\0' || 7 < *(byte *)(lVar8 + 0xaf88)) {
      lVar16 = lVar8;
      if (((*(char *)(lVar8 + 0xaf8a) != '\0') && (uVar9 = FUN_016e5e90(), (uVar9 & 1) != 0)) &&
         (lVar16 = lVar8 + 0xaf90, (*(byte *)(lVar8 + 0xaf8b) & 0xfe) != 0)) {
        lVar16 = lVar8;
      }
    }
    else {
      lVar16 = lVar8 + (ulong)*(byte *)(lVar8 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar10 = (undefined4 *)FUN_026e85f0(lVar16);
    lVar16 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4();
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) goto LAB_02406a8c;
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02406a8c;
    local_68 = PTR_DAT_04bc0510 + 0x10;
    local_60 = *puVar10;
    local_5c = puVar10[1];
    local_58 = (uint *)0x0;
    uVar4 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar2 == 0) {
LAB_02406a7c:
      uVar12 = 0;
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02406a7c;
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(puVar10);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_02406a7c;
      puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
      if (puVar11 == (uint *)0x0) goto LAB_02406a7c;
      uVar12 = 0;
      uVar4 = *puVar11;
      local_58 = puVar11;
      if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
        puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
        uVar12 = 0;
        if (*puVar13 != 0) {
          uVar4 = puVar13[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar13 + lVar8 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar4);
              }
              if (*puVar13 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                 (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                 uVar12 < 6)) goto LAB_02406a80;
            }
          }
          goto LAB_02406a7c;
        }
      }
    }
LAB_02406a80:
    if (uVar12 == 0) goto LAB_02406a8c;
LAB_0240754c:
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
  }
  *(undefined2 *)(puVar14 + 0xb86) = *(undefined2 *)puVar10;
  *(undefined1 *)((long)puVar14 + 0x5c32) = *(undefined1 *)((long)puVar10 + 2);
  *(undefined1 *)((long)puVar14 + 0x5c33) = *(undefined1 *)((long)puVar10 + 3);
  *(undefined4 *)((long)puVar14 + 0x5c34) = puVar10[1];
LAB_02407594:
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0xd0) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar6 + 0xd0) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  return;
}

