
void FUN_02691e80(byte *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  char cVar13;
  ushort uVar14;
  int *piVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined2 local_d0;
  byte local_ce;
  byte local_cd;
  undefined4 local_cc;
  undefined2 local_c8;
  byte local_c6;
  byte local_c5;
  undefined4 local_c4;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  local_65 = 0;
  local_70 = 8;
  local_6c[0] = 0;
  local_78 = local_6c;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_80,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_80,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
  }
  uVar16 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_80 + 0x18))(&local_80);
  uVar8 = FUN_006bd550(local_78,0);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar8);
  puVar10 = (uint *)FUN_0079e770(uVar16,&local_b8);
  if (puVar10 != (uint *)0x0) {
    FUN_026942fc(auStack_88,param_1,1);
    puVar7 = PTR_DAT_04bb40b8;
    puVar6 = PTR_DAT_04bb40b0;
    local_90 = *(undefined4 *)(param_1 + 0x125ec);
    uStack_8c = *(undefined4 *)(param_1 + 0x125f0);
    local_98 = *(undefined4 *)(param_1 + 0x13214);
    uStack_94 = *(undefined4 *)(param_1 + 0x13218);
    if (*puVar10 != 0) {
      cVar13 = *PTR_DAT_04bb40b0;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar7 + 0x50);
          if (-1 < (int)uVar9) {
            if ((ushort *)((ulong)uVar9 + (long)puVar10) != (ushort *)0x0) {
              uVar14 = *(ushort *)((ulong)uVar9 + (long)puVar10);
              goto LAB_02692080;
            }
            break;
          }
          if (uVar9 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar10;
        uVar14 = 0xfffe;
        if ((*puVar10 == 0) || (puVar10 == puVar12)) goto LAB_02692080;
        lVar17 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar10 + (lVar17 - (long)puVar12);
        if (lVar17 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
        *(undefined4 *)(puVar7 + 0x50) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar15 = (int *)(lVar17 + 4);
        while (piVar15[-1] != -0x78f0e1d7) {
          piVar15 = piVar15 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0269207c;
        }
        iVar1 = 0;
        if (*piVar15 != -1) {
          iVar1 = *piVar15;
        }
        *(int *)(puVar7 + 0x50) = iVar1;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_0269207c:
    uVar14 = 0xfffe;
LAB_02692080:
    local_a0 = (uint)uVar14;
    local_9c = 0;
    FUN_0277d4ac(&local_a0);
    puVar6 = PTR_DAT_04bb43c0;
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(&local_90);
    lVar18 = *(long *)puVar6;
    if (lVar18 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = PTR_DAT_04bc0510 + 0x10;
        local_b0 = local_90;
        local_ac = uStack_8c;
        uVar9 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar6 != 0) {
          lVar17 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_90);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
               (((puVar10 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar10 != (uint *)0x0 && (uVar9 = *puVar10, uVar9 != 0)) &&
                (puVar10 != (uint *)(ulong)uVar9)))) {
              puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
              if (((*puVar12 != 0) && (uVar9 = puVar12[1], uVar9 != 0)) &&
                 ((ulong)(ushort)puVar12[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar12 + lVar17 + (ulong)(ushort)puVar12[2] * 8;
                if (lVar17 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar17) / (ulong)uVar9);
                  }
                  if (*puVar12 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if (((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                      (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0xac))
                     && (uVar11 = FUN_0277d7b4(auStack_88,&local_90), (uVar11 & 1) == 0)) {
                    FUN_0268e6d0(param_1,&local_a0,0,0,0,0,1,1);
                  }
                }
              }
            }
          }
        }
        lVar18 = *(long *)puVar6;
      }
    }
    uVar9 = FUN_0277d6c4(&local_98);
    lVar17 = *(long *)puVar6;
    if (lVar17 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = PTR_DAT_04bc0510 + 0x10;
        local_b0 = local_98;
        local_ac = uStack_94;
        uVar9 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar6 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_98);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
               (((puVar10 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar10 != (uint *)0x0 && (uVar9 = *puVar10, uVar9 != 0)) &&
                (puVar10 != (uint *)(ulong)uVar9)))) {
              puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
              if (((*puVar12 != 0) && (uVar9 = puVar12[1], uVar9 != 0)) &&
                 ((ulong)(ushort)puVar12[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar12 + lVar17 + (ulong)(ushort)puVar12[2] * 8;
                if (lVar17 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar17) / (ulong)uVar9);
                  }
                  if (*puVar12 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if (((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                      (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0xac))
                     && (uVar11 = FUN_0277d7b4(auStack_88,&local_98), (uVar11 & 1) == 0)) {
                    *(uint *)(param_1 + 0x13214) = local_a0;
                    *(undefined4 *)(param_1 + 0x13218) = local_9c;
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_026942fc(auStack_c0,param_1,0);
    local_d0 = *(undefined2 *)(param_1 + 0x1321c);
    local_c8 = *(undefined2 *)(param_1 + 0x12644);
    local_c6 = param_1[0x12646];
    local_c5 = param_1[0x12647];
    uVar4 = *(undefined4 *)(param_1 + 0x12644);
    uVar8 = *(undefined4 *)(param_1 + 0x12648);
    local_ce = param_1[0x1321e];
    local_cd = param_1[0x1321f];
    uVar5 = *(undefined4 *)(param_1 + 0x1321c);
    uVar3 = *(undefined4 *)(param_1 + 0x13220);
    lVar17 = *(long *)puVar6;
    local_cc = uVar3;
    local_c4 = uVar8;
    uVar9 = FUN_0277d6c4(&local_c8);
    lVar18 = *(long *)puVar6;
    if (lVar18 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_b8 = PTR_DAT_04bc0510 + 0x10;
        local_a8 = 0;
        local_b0 = uVar4;
        local_ac = uVar8;
        uVar9 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar6 != 0) {
          lVar17 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_c8);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
               (((puVar10 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar10 != (uint *)0x0 && (uVar9 = *puVar10, uVar9 != 0)) &&
                (puVar10 != (uint *)(ulong)uVar9)))) {
              puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
              if (((*puVar12 != 0) && (uVar9 = puVar12[1], uVar9 != 0)) &&
                 ((ulong)(ushort)puVar12[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar12 + lVar17 + (ulong)(ushort)puVar12[2] * 8;
                if (lVar17 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar17) / (ulong)uVar9);
                  }
                  if (*puVar12 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if (((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                      (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0xac))
                     && (uVar11 = FUN_0277d7b4(auStack_c0,&local_c8), (uVar11 & 1) == 0)) {
                    FUN_026934e8(param_1,PTR_DAT_04bb37e0,0,0,0,0,1,1);
                  }
                }
              }
            }
          }
        }
        lVar18 = *(long *)puVar6;
      }
    }
    uVar9 = FUN_0277d6c4(&local_d0);
    lVar17 = *(long *)puVar6;
    if (lVar17 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_a8 = 0;
        local_b8 = PTR_DAT_04bc0510 + 0x10;
        local_b0 = uVar5;
        local_ac = uVar3;
        uVar9 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar6 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_d0);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
               (((puVar10 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar10 != (uint *)0x0 && (uVar9 = *puVar10, uVar9 != 0)) &&
                (puVar10 != (uint *)(ulong)uVar9)))) {
              puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
              if (((*puVar12 != 0) && (uVar9 = puVar12[1], uVar9 != 0)) &&
                 ((ulong)(ushort)puVar12[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar12 + lVar17 + (ulong)(ushort)puVar12[2] * 8;
                if (lVar17 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar17) / (ulong)uVar9);
                  }
                  if (*puVar12 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if (((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                      (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0xac))
                     && (uVar11 = FUN_0277d7b4(auStack_c0,&local_d0), puVar6 = PTR_DAT_04bb37e0,
                        (uVar11 & 1) == 0)) {
                    *(undefined2 *)(param_1 + 0x1321c) = *(undefined2 *)PTR_DAT_04bb37e0;
                    param_1[0x1321e] = puVar6[2];
                    param_1[0x1321f] = puVar6[3];
                    *(undefined4 *)(param_1 + 0x13220) = *(undefined4 *)(puVar6 + 4);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

