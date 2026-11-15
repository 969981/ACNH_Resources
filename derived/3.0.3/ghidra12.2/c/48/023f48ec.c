
void FUN_023f48ec(long param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  short sVar10;
  int iVar11;
  int *piVar12;
  long *plVar13;
  uint *puVar14;
  char cVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  int local_a4;
  undefined8 local_a0;
  float local_98;
  float local_94;
  undefined8 local_90;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    local_7c = (float)*(int *)(param_1 + 0x1902) * 0.001;
    local_74 = (float)*(int *)(param_1 + 0x1908) * 0.001;
    if ((local_7c == 0.0) && (local_74 == 0.0)) {
      lVar7 = *(long *)(param_1 + 0x68);
      *(undefined2 *)(param_1 + 0x1900) = *(undefined2 *)(lVar7 + 0x2b6);
      fVar17 = *(float *)(lVar7 + 0x278) * 999.99994;
      *(int *)(param_1 + 0x1902) = (int)fVar17;
      iVar11 = (int)(*(float *)(lVar7 + 0x27c) * 4.0);
      if (0x7ffe < iVar11) {
        iVar11 = 0x7fff;
      }
      if (iVar11 < -0x7fff) {
        iVar11 = -0x8000;
      }
      sVar10 = (short)iVar11;
      *(short *)(param_1 + 0x1906) = sVar10;
      fVar18 = *(float *)(lVar7 + 0x280) * 999.99994;
      *(int *)(param_1 + 0x1908) = (int)fVar18;
      local_7c = (float)(int)fVar17 * 0.001;
      local_74 = (float)(int)fVar18 * 0.001;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x68);
      sVar10 = *(short *)(param_1 + 0x1906);
    }
    *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(lVar7 + 0x278);
    *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(lVar7 + 0x27c);
    *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(lVar7 + 0x280);
    local_78 = (float)(int)sVar10 * 0.25;
    pfVar6 = (float *)FUN_016e1014(&local_7c,0,0);
    puVar3 = PTR_DAT_04bb43c0;
    local_84 = *(undefined2 *)pfVar6;
    local_82 = *(undefined1 *)((long)pfVar6 + 2);
    local_81 = *(undefined1 *)((long)pfVar6 + 3);
    fVar18 = *pfVar6;
    fVar17 = pfVar6[1];
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    local_80 = fVar17;
    uVar5 = FUN_0277d6c4(&local_84);
    lVar7 = *(long *)puVar3;
    if (lVar7 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_a0 = PTR_DAT_04bc0510 + 0x10;
        local_90 = 0;
        local_98 = fVar18;
        local_94 = fVar17;
        uVar5 = FUN_0277d6c4(&local_98);
        fVar17 = 0.0;
        if (*(long *)puVar3 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_84);
            __s = PTR_DAT_04bbfe90;
            puVar3 = PTR_DAT_04bbfe88;
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
               ((puVar14 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
                puVar14 != (uint *)0x0 && (uVar5 = *puVar14, uVar5 != 0)))) {
              cVar15 = *PTR_DAT_04bbfe88;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *puVar3 = 1;
                  memset(__s,0xff,0x1ac);
                  uVar5 = *puVar14;
                }
                else {
                  uVar2 = *(uint *)(__s + 0xf0);
                  if (-1 < (int)uVar2) {
                    if ((float *)((ulong)uVar2 + (long)puVar14) != (float *)0x0) {
                      fVar17 = *(float *)((ulong)uVar2 + (long)puVar14);
                    }
                    break;
                  }
                  if (uVar2 != 0xffffffff) break;
                }
                puVar8 = (uint *)(ulong)uVar5;
                if ((puVar8 == (uint *)0x0) || (puVar14 == puVar8)) break;
                lVar7 = 0xc;
                if (*(char *)((long)puVar14 + (10 - (long)puVar8)) != '\0') {
                  lVar7 = 0x1c;
                }
                lVar7 = (long)puVar14 + (lVar7 - (long)puVar8);
                if (lVar7 == 0) break;
                uVar9 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar8));
                *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
                if (uVar9 == 0) break;
                piVar12 = (int *)(lVar7 + 4);
                while (piVar12[-1] != -0x499d99d4) {
                  piVar12 = piVar12 + 2;
                  uVar9 = uVar9 - 1;
                  if (uVar9 == 0) goto LAB_023f4c14;
                }
                iVar11 = 0;
                if (*piVar12 != -1) {
                  iVar11 = *piVar12;
                }
                *(int *)(__s + 0xf0) = iVar11;
                uVar5 = *puVar14;
                if (uVar5 == 0) break;
              } while( true );
            }
          }
        }
LAB_023f4c14:
        local_78 = (float)FUN_016e026c(0,&local_7c,0,0);
        local_78 = fVar17 + local_78;
        iVar11 = (int)(local_78 * 4.0);
        *(float *)(param_1 + 0xb40) = local_78;
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        if (iVar11 < -0x7fff) {
          iVar11 = -0x8000;
        }
        *(short *)(param_1 + 0x1906) = (short)iVar11;
        *(int *)(param_1 + 0x1902) = (int)(local_7c * 999.99994);
        *(int *)(param_1 + 0x1908) = (int)(local_74 * 999.99994);
      }
    }
    local_7c = 1.26117e-44;
    if (((*(byte *)(param_1 + 0x18f5) >> 1 & 1) != 0) &&
       (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x11889761)) {
      *(undefined1 *)(param_1 + 0x190d) = 1;
      *(undefined2 *)(param_1 + 0x1912) = 0x28;
      *(undefined4 *)(param_1 + 0x190e) = 0x25d77;
      *(undefined4 *)(param_1 + 0x1914) = 199999;
    }
  }
  *(undefined1 *)(param_1 + 0xb49) = 0;
  *(undefined4 *)(param_1 + 0x1bec) = 0x3f000000;
  bVar4 = *(int *)(param_1 + 0x178) != 0;
  piVar12 = (int *)(param_1 + 0x1902);
  if (bVar4) {
    piVar12 = (int *)(param_1 + 0x18e5);
  }
  puVar1 = (ushort *)(param_1 + 0x1900);
  if (bVar4) {
    puVar1 = (ushort *)(param_1 + 0x18ef);
  }
  local_98 = (float)*(int *)((long)piVar12 + 6) * 0.001;
  local_a0 = (undefined *)CONCAT44((float)(int)(short)piVar12[1] * 0.25,(float)*piVar12 * 0.001);
  local_a4 = (uint)*puVar1 << 0x10;
  FUN_016d88bc(param_1,&local_a0,&local_a4);
  plVar13 = *(long **)(param_1 + 0x60);
  if (plVar13 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      plVar13 = &DAT_05240280;
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar13 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar13 + 0x4b8))(0x3f800000,plVar13);
  return;
}

