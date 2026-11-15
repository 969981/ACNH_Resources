
void FUN_02484620(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined6 uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  byte bVar20;
  ushort uVar21;
  uint *puVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  undefined *local_80;
  undefined8 local_78;
  uint *local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  bVar20 = *(byte *)(param_1 + 0x1ee8);
  bVar5 = *(byte *)(param_1 + 0x1900);
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar20);
  FUN_0266b170(&local_80,(int)(char)bVar5);
  local_68 = CONCAT31(local_68._1_3_,bVar20);
  FUN_0266a1c0(&local_68,(uint)(int)(char)bVar5 >> 7 & 1 ^ 1);
  FUN_023203ac(param_1,1,0);
  local_78 = (char *)CONCAT44(local_78._4_4_,6);
  uVar11 = local_78;
  local_80 = (undefined *)CONCAT35(local_80._5_3_,1);
  local_78._0_6_ = (undefined6)uVar11;
  uVar10 = (undefined6)local_78;
  local_78 = (char *)((ulong)local_78._7_1_ << 0x38);
  local_78 = (char *)(CONCAT26(local_78._6_2_,uVar10) & 0xffff0000ffffffff);
  FUN_02321e44(&local_68,param_1,&local_80);
  puVar23 = *(undefined8 **)(param_1 + 0x60);
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffffffef;
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar13 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  puVar8 = PTR_DAT_04bb37e0;
  *(undefined2 *)(puVar23 + 0xb86) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)puVar23 + 0x5c32) = puVar8[2];
  *(undefined *)((long)puVar23 + 0x5c33) = puVar8[3];
  *(undefined4 *)((long)puVar23 + 0x5c34) = *(undefined4 *)(puVar8 + 4);
  uVar25 = (ulong)*(byte *)(param_1 + 0x1900);
  if (7 < uVar25) {
    return;
  }
  bVar20 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar20);
  lVar14 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
  if (lVar14 == 0) goto LAB_02485778;
  lVar14 = lVar14 + uVar25 * 0x2450;
  plVar15 = *(long **)(param_1 + 0x60);
  if (plVar15 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar13 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      plVar15 = &DAT_05240280;
    }
    else {
      plVar15 = &DAT_05240280;
    }
  }
  lVar16 = (**(code **)(*plVar15 + 0x3c8))();
  puVar9 = PTR_DAT_04bb43c0;
  if ((lVar16 != 0) && (*(short *)(lVar16 + 0xcc) == -2)) {
    if ((*(long **)(lVar14 + 0x3f60) == (long *)0x0) ||
       (puVar23 = (undefined8 *)**(long **)(lVar14 + 0x3f60), puVar23 == (undefined8 *)0x0)) {
      uVar25 = 0;
    }
    else {
      uVar25 = (**(code **)*puVar23)();
      uVar25 = uVar25 & 0xffffffff;
    }
    puVar17 = (ulong *)FUN_026e85f0(*(long *)(lVar14 + 0x3f48) + *(long *)(lVar14 + 0x3f40));
    local_68 = (undefined4)*puVar17;
    local_64 = *(undefined4 *)((long)puVar17 + 4);
    uVar6 = *puVar17;
    if ((((uVar25 & 1) != 0) && (*(long *)(lVar14 + 0x3f60) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar14 + 0x3f60) + 8), puVar23 != (undefined8 *)0x0)) {
      (**(code **)*puVar23)();
    }
    lVar16 = *(long *)puVar9;
    uVar12 = FUN_0277d6c4(&local_68);
    lVar24 = *(long *)puVar9;
    if (lVar24 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        local_80 = PTR_DAT_04bc0510 + 0x10;
        local_70 = (uint *)0x0;
        local_78 = (char *)uVar6;
        uVar12 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar9 == 0) {
LAB_02484994:
          uVar21 = 0;
        }
        else {
          lVar16 = *(long *)(lVar24 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02484994;
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(&local_68);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
             (puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8),
             puVar19 == (uint *)0x0)) goto LAB_02484994;
          uVar21 = 0;
          uVar12 = *puVar19;
          local_70 = puVar19;
          if ((uVar12 != 0) && (puVar19 != (uint *)(ulong)uVar12)) {
            puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
            uVar21 = 0;
            if (*puVar22 != 0) {
              uVar12 = puVar22[1];
              if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar22 + lVar16 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar16 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar12);
                  }
                  if (*puVar22 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                     (uVar21 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                     uVar21 < 6)) goto LAB_02484998;
                }
              }
              goto LAB_02484994;
            }
          }
        }
LAB_02484998:
        if (uVar21 != 0) goto LAB_02485358;
      }
    }
  }
  if ((*(long **)(lVar14 + 0x3f60) == (long *)0x0) ||
     (puVar23 = (undefined8 *)**(long **)(lVar14 + 0x3f60), puVar23 == (undefined8 *)0x0)) {
    uVar25 = 0;
  }
  else {
    uVar25 = (**(code **)*puVar23)();
    uVar25 = uVar25 & 0xffffffff;
  }
  puVar17 = (ulong *)FUN_026e88f0(*(long *)(lVar14 + 0x3f48) + *(long *)(lVar14 + 0x3f40));
  local_68 = (undefined4)*puVar17;
  local_64 = *(undefined4 *)((long)puVar17 + 4);
  uVar6 = *puVar17;
  if ((((uVar25 & 1) != 0) && (*(long *)(lVar14 + 0x3f60) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar14 + 0x3f60) + 8), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  lVar16 = *(long *)puVar9;
  uVar12 = FUN_0277d6c4(&local_68);
  lVar24 = *(long *)puVar9;
  if (lVar24 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_70 = (uint *)0x0;
      local_78 = (char *)uVar6;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar9 == 0) {
LAB_02484b88:
        uVar21 = 0;
      }
      else {
        lVar16 = *(long *)(lVar24 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02484b88;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_68);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8),
           puVar19 == (uint *)0x0)) goto LAB_02484b88;
        uVar21 = 0;
        uVar12 = *puVar19;
        local_70 = puVar19;
        if ((uVar12 != 0) && (puVar19 != (uint *)(ulong)uVar12)) {
          puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
          uVar21 = 0;
          if (*puVar22 != 0) {
            uVar12 = puVar22[1];
            if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar22 + lVar16 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar16 != 0) {
                uVar1 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar12);
                }
                if (*puVar22 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                   (uVar21 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                   uVar21 < 6)) goto LAB_02484b8c;
              }
            }
            goto LAB_02484b88;
          }
        }
      }
LAB_02484b8c:
      if (uVar21 != 0) goto LAB_02485358;
    }
  }
  if ((*(long **)(lVar14 + 0x3f60) == (long *)0x0) ||
     (puVar23 = (undefined8 *)**(long **)(lVar14 + 0x3f60), puVar23 == (undefined8 *)0x0)) {
    uVar25 = 0;
  }
  else {
    uVar25 = (**(code **)*puVar23)();
    uVar25 = uVar25 & 0xffffffff;
  }
  puVar17 = (ulong *)FUN_026e8b00(*(long *)(lVar14 + 0x3f48) + *(long *)(lVar14 + 0x3f40));
  local_68 = (undefined4)*puVar17;
  local_64 = *(undefined4 *)((long)puVar17 + 4);
  uVar6 = *puVar17;
  if ((((uVar25 & 1) != 0) && (*(long *)(lVar14 + 0x3f60) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar14 + 0x3f60) + 8), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  lVar16 = *(long *)puVar9;
  uVar12 = FUN_0277d6c4(&local_68);
  lVar24 = *(long *)puVar9;
  if (lVar24 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_70 = (uint *)0x0;
      local_78 = (char *)uVar6;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar9 == 0) {
LAB_02484d7c:
        uVar21 = 0;
      }
      else {
        lVar16 = *(long *)(lVar24 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02484d7c;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_68);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8),
           puVar19 == (uint *)0x0)) goto LAB_02484d7c;
        uVar21 = 0;
        uVar12 = *puVar19;
        local_70 = puVar19;
        if ((uVar12 != 0) && (puVar19 != (uint *)(ulong)uVar12)) {
          puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
          uVar21 = 0;
          if (*puVar22 != 0) {
            uVar12 = puVar22[1];
            if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar22 + lVar16 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar16 != 0) {
                uVar1 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar12);
                }
                if (*puVar22 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                   (uVar21 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                   uVar21 < 6)) goto LAB_02484d80;
              }
            }
            goto LAB_02484d7c;
          }
        }
      }
LAB_02484d80:
      if (uVar21 != 0) goto LAB_02485358;
    }
  }
  if (*(long **)(lVar14 + 0x3f60) == (long *)0x0) {
    uVar25 = 0;
  }
  else {
    puVar23 = (undefined8 *)**(long **)(lVar14 + 0x3f60);
    uVar25 = 0;
    if (puVar23 != (undefined8 *)0x0) {
      uVar25 = (**(code **)*puVar23)();
    }
  }
  local_68 = *(undefined4 *)puVar8;
  local_64 = *(undefined4 *)(puVar8 + 4);
  uVar6 = *(ulong *)puVar8;
  if ((((uVar25 & 1) != 0) && (*(long *)(lVar14 + 0x3f60) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar14 + 0x3f60) + 8), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  lVar16 = *(long *)puVar9;
  uVar12 = FUN_0277d6c4(&local_68);
  lVar24 = *(long *)puVar9;
  if (lVar24 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_70 = (uint *)0x0;
      local_78 = (char *)uVar6;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar9 == 0) {
LAB_02484f60:
        uVar21 = 0;
      }
      else {
        lVar16 = *(long *)(lVar24 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02484f60;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_68);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8),
           puVar19 == (uint *)0x0)) goto LAB_02484f60;
        uVar21 = 0;
        uVar12 = *puVar19;
        local_70 = puVar19;
        if ((uVar12 != 0) && (puVar19 != (uint *)(ulong)uVar12)) {
          puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
          uVar21 = 0;
          if (*puVar22 != 0) {
            uVar12 = puVar22[1];
            if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar22 + lVar16 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar16 != 0) {
                uVar1 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar12);
                }
                if (*puVar22 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                   (uVar21 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                   uVar21 < 6)) goto LAB_02484f64;
              }
            }
            goto LAB_02484f60;
          }
        }
      }
LAB_02484f64:
      if (uVar21 != 0) goto LAB_02485358;
    }
  }
  if ((*(long **)(lVar14 + 0x3f60) == (long *)0x0) ||
     (puVar23 = (undefined8 *)**(long **)(lVar14 + 0x3f60), puVar23 == (undefined8 *)0x0)) {
    uVar25 = 0;
  }
  else {
    uVar25 = (**(code **)*puVar23)();
    uVar25 = uVar25 & 0xffffffff;
  }
  puVar17 = (ulong *)FUN_026e8d10(*(long *)(lVar14 + 0x3f48) + *(long *)(lVar14 + 0x3f40));
  local_68 = (undefined4)*puVar17;
  local_64 = *(undefined4 *)((long)puVar17 + 4);
  uVar6 = *puVar17;
  if ((((uVar25 & 1) != 0) && (*(long *)(lVar14 + 0x3f60) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar14 + 0x3f60) + 8), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  lVar16 = *(long *)puVar9;
  uVar12 = FUN_0277d6c4(&local_68);
  lVar24 = *(long *)puVar9;
  if (lVar24 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_70 = (uint *)0x0;
      local_78 = (char *)uVar6;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar9 == 0) {
LAB_02485154:
        uVar21 = 0;
      }
      else {
        lVar16 = *(long *)(lVar24 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02485154;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_68);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8),
           puVar19 == (uint *)0x0)) goto LAB_02485154;
        uVar21 = 0;
        uVar12 = *puVar19;
        local_70 = puVar19;
        if ((uVar12 != 0) && (puVar19 != (uint *)(ulong)uVar12)) {
          puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
          uVar21 = 0;
          if (*puVar22 != 0) {
            uVar12 = puVar22[1];
            if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar22 + lVar16 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar16 != 0) {
                uVar1 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar12);
                }
                if (*puVar22 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                   (uVar21 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                   uVar21 < 6)) goto LAB_02485158;
              }
            }
            goto LAB_02485154;
          }
        }
      }
LAB_02485158:
      if (uVar21 != 0) goto LAB_02485358;
    }
  }
  if ((*(long **)(lVar14 + 0x3f60) == (long *)0x0) ||
     (puVar23 = (undefined8 *)**(long **)(lVar14 + 0x3f60), puVar23 == (undefined8 *)0x0)) {
    uVar25 = 0;
  }
  else {
    uVar25 = (**(code **)*puVar23)();
    uVar25 = uVar25 & 0xffffffff;
  }
  puVar17 = (ulong *)FUN_026e9010(*(long *)(lVar14 + 0x3f48) + *(long *)(lVar14 + 0x3f40));
  local_68 = (undefined4)*puVar17;
  local_64 = *(undefined4 *)((long)puVar17 + 4);
  uVar6 = *puVar17;
  if ((((uVar25 & 1) != 0) && (*(long *)(lVar14 + 0x3f60) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar14 + 0x3f60) + 8), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  lVar16 = *(long *)puVar9;
  uVar12 = FUN_0277d6c4(&local_68);
  lVar24 = *(long *)puVar9;
  if (lVar24 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_70 = (uint *)0x0;
      local_78 = (char *)uVar6;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar9 == 0) {
LAB_02485348:
        uVar21 = 0;
      }
      else {
        lVar16 = *(long *)(lVar24 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02485348;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_68);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8),
           puVar19 == (uint *)0x0)) goto LAB_02485348;
        uVar21 = 0;
        uVar12 = *puVar19;
        local_70 = puVar19;
        if ((uVar12 != 0) && (puVar19 != (uint *)(ulong)uVar12)) {
          puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
          uVar21 = 0;
          if (*puVar22 != 0) {
            uVar12 = puVar22[1];
            if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar22 + lVar16 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar16 != 0) {
                uVar1 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar12);
                }
                if (*puVar22 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                   (uVar21 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                   uVar21 < 6)) goto LAB_0248534c;
              }
            }
            goto LAB_02485348;
          }
        }
      }
LAB_0248534c:
      if (uVar21 != 0) {
LAB_02485358:
        puVar23 = *(undefined8 **)(param_1 + 0x60);
        if (puVar23 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(&DAT_052461c0);
            puVar23 = &DAT_05240280;
            if (iVar13 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar23 = &DAT_05240280;
          }
        }
        *(undefined4 *)(puVar23 + 0xb86) = local_68;
        *(undefined4 *)((long)puVar23 + 0x5c34) = local_64;
        return;
      }
    }
  }
  if ((*(long **)(lVar14 + 0x3f60) == (long *)0x0) ||
     (puVar23 = (undefined8 *)**(long **)(lVar14 + 0x3f60), puVar23 == (undefined8 *)0x0)) {
    uVar25 = 0;
  }
  else {
    uVar25 = (**(code **)*puVar23)();
    uVar25 = uVar25 & 0xffffffff;
  }
  puVar17 = (ulong *)FUN_026e9470(*(long *)(lVar14 + 0x3f48) + *(long *)(lVar14 + 0x3f40));
  uVar7 = *puVar17;
  uVar3 = *(undefined1 *)((long)puVar17 + 2);
  uVar4 = *(undefined1 *)((long)puVar17 + 3);
  local_68 = (undefined4)*puVar17;
  uVar2 = *(undefined4 *)((long)puVar17 + 4);
  uVar6 = *puVar17;
  local_64 = uVar2;
  if ((((uVar25 & 1) != 0) && (*(long *)(lVar14 + 0x3f60) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar14 + 0x3f60) + 8), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  lVar16 = *(long *)puVar9;
  uVar12 = FUN_0277d6c4(&local_68);
  lVar24 = *(long *)puVar9;
  if (lVar24 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_70 = (uint *)0x0;
      local_78 = (char *)uVar6;
      uVar12 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar9 == 0) {
LAB_02485574:
        uVar21 = 0;
      }
      else {
        lVar16 = *(long *)(lVar24 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02485574;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_68);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar12) ||
           (puVar19 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8),
           puVar19 == (uint *)0x0)) goto LAB_02485574;
        uVar12 = *puVar19;
        uVar21 = 0;
        if ((uVar12 != 0) && (puVar19 != (uint *)(ulong)uVar12)) {
          puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
          uVar21 = 0;
          if (*puVar22 != 0) {
            uVar12 = puVar22[1];
            if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar22 + lVar16 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar16 != 0) {
                uVar1 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar19 - lVar16) / (ulong)uVar12);
                }
                if (*puVar22 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc01a8) &&
                   (uVar21 = *(ushort *)(*(long *)(PTR_DAT_04bc01a8 + 8) + (long)(int)uVar1 * 2),
                   uVar21 < 6)) goto LAB_02485578;
              }
            }
            goto LAB_02485574;
          }
        }
      }
LAB_02485578:
      if (uVar21 != 0) {
        lVar14 = FUN_016e3954(param_1);
        *(short *)(lVar14 + 0x5c30) = (short)uVar7;
        *(undefined1 *)(lVar14 + 0x5c32) = uVar3;
        *(undefined1 *)(lVar14 + 0x5c33) = uVar4;
        *(undefined4 *)(lVar14 + 0x5c34) = uVar2;
        return;
      }
    }
  }
  if ((*(long **)(lVar14 + 0x3f60) == (long *)0x0) ||
     (puVar23 = (undefined8 *)**(long **)(lVar14 + 0x3f60), puVar23 == (undefined8 *)0x0)) {
    uVar12 = 1;
  }
  else {
    uVar12 = (**(code **)*puVar23)();
    uVar12 = uVar12 ^ 1;
  }
  puVar18 = (undefined4 *)FUN_026e9240(*(long *)(lVar14 + 0x3f48) + *(long *)(lVar14 + 0x3f40));
  local_68 = *puVar18;
  local_64 = puVar18[1];
  if ((((uVar12 & 1) == 0) && (*(long *)(lVar14 + 0x3f60) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar14 + 0x3f60) + 8), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  lVar16 = *(long *)puVar9;
  uVar12 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar9 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      FUN_01ad5d04(&local_80,&local_68);
      iVar13 = FUN_01b03e44(&local_80);
      if (iVar13 != 0) goto LAB_0248575c;
    }
  }
  if ((*(long **)(lVar14 + 0x3f60) == (long *)0x0) ||
     (puVar23 = (undefined8 *)**(long **)(lVar14 + 0x3f60), puVar23 == (undefined8 *)0x0)) {
    uVar12 = 1;
  }
  else {
    uVar12 = (**(code **)*puVar23)();
    uVar12 = uVar12 ^ 1;
  }
  puVar18 = (undefined4 *)FUN_026e96a0(*(long *)(lVar14 + 0x3f48) + *(long *)(lVar14 + 0x3f40));
  local_68 = *puVar18;
  local_64 = puVar18[1];
  if ((((uVar12 & 1) == 0) && (*(long *)(lVar14 + 0x3f60) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar14 + 0x3f60) + 8), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  lVar14 = *(long *)puVar9;
  uVar12 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar9 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      FUN_01ad5d04(&local_80,&local_68);
      iVar13 = FUN_01b03e44(&local_80);
      if (iVar13 != 0) {
LAB_0248575c:
        lVar14 = FUN_016e3954(param_1);
        *(undefined4 *)(lVar14 + 0x5c30) = local_68;
        *(undefined4 *)(lVar14 + 0x5c34) = local_64;
        return;
      }
    }
  }
LAB_02485778:
  if (*(int *)(param_1 + 0x178) == 0) {
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "ChangeStickUseCount";
    FUN_0274ca70((byte *)(param_1 + 0x1ee8),&local_80,1);
  }
  return;
}

