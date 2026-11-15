
/* WARNING: Removing unreachable block (ram,0x024b4c14) */

void FUN_024b46a4(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_84;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined1 local_6c;
  byte bStack_6b;
  undefined2 uStack_6a;
  float fStack_68;
  float local_64;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    fStack_68 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar11 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(param_1 + 0x4c8);
    }
    fVar17 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_6c = SUB41(fVar17,0);
    bStack_6b = (byte)((uint)fVar17 >> 8);
    uStack_6a = (undefined2)((uint)fVar17 >> 0x10);
    local_64 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar11 + 0x4f,&local_6c);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_78 = CONCAT44(local_78._4_4_,10);
      local_6c = 10;
      bStack_6b = 0;
      uStack_6a = 0;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024b4840;
    }
    iVar10 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar3 + 0x148))();
    iVar13 = iVar10 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar13 + 0x5b05afU) {
      iVar12 = (int)((float)iVar13 * 0.1666667);
      iVar13 = 0x10000000;
      if (iVar12 < 1) {
        iVar13 = -0x5b05b0;
      }
      iVar10 = -0x10000000;
      if (0 < iVar12) {
        iVar10 = 0x5b05b0;
      }
      iVar2 = iVar12;
      if (iVar13 <= iVar12) {
        iVar2 = iVar13;
      }
      if (iVar10 <= iVar12) {
        iVar10 = iVar2;
      }
      iVar10 = iVar10 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar10;
  }
LAB_024b4840:
  bVar15 = *(byte *)(param_1 + 0x1ee8);
  lVar7 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  bVar16 = *(byte *)(lVar7 + 0x44);
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  if (bVar15 == bVar16) {
    lVar14 = 0;
LAB_024b4944:
    lVar7 = lVar7 + 0x40 + lVar14 * 0x20;
    puVar11 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    bVar16 = *(byte *)(lVar7 + 100);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (bVar15 == bVar16) {
      lVar14 = 1;
      goto LAB_024b4944;
    }
    bVar16 = *(byte *)(lVar7 + 0x84);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (bVar15 == bVar16) {
      lVar14 = 2;
      goto LAB_024b4944;
    }
    bVar16 = *(byte *)(lVar7 + 0xa4);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (bVar15 == bVar16) {
      lVar14 = 3;
      goto LAB_024b4944;
    }
    bVar16 = *(byte *)(lVar7 + 0xc4);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (bVar15 == bVar16) {
      lVar14 = 4;
      goto LAB_024b4944;
    }
    bVar16 = *(byte *)(lVar7 + 0xe4);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (bVar15 == bVar16) {
      lVar14 = 5;
      goto LAB_024b4944;
    }
    bVar16 = *(byte *)(lVar7 + 0x104);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (bVar15 == bVar16) {
      lVar14 = 6;
      goto LAB_024b4944;
    }
    bVar16 = *(byte *)(lVar7 + 0x124);
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (bVar15 == bVar16) {
      lVar14 = 7;
      goto LAB_024b4944;
    }
    lVar7 = lVar7 + 0x140;
    puVar11 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar11 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_052461c0), iVar10 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar11 = &DAT_05240280;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  fVar17 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar18 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  fVar19 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  if ((*(int *)(puVar11 + 0x285) != 1) &&
     (fVar20 = *(float *)((long)puVar11 + 0x133c) - fVar17,
     fVar21 = *(float *)(puVar11 + 0x268) - fVar18,
     fVar22 = *(float *)((long)puVar11 + 0x1344) - fVar19,
     2.0 < SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar22 * fVar22))) {
    *(undefined1 *)((long)puVar11 + 0x142d) = 0;
  }
  *(undefined4 *)(puVar11 + 0x25a) = 0;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  *(undefined1 *)puVar11[0x25c] = 0;
  *(float *)((long)puVar11 + 0x133c) = fVar17;
  *(float *)(puVar11 + 0x268) = fVar18;
  *(float *)((long)puVar11 + 0x1344) = fVar19;
  *(undefined8 *)((long)puVar11 + 0x1334) = 0;
  *(undefined4 *)(puVar11 + 0x285) = 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    if (**(char **)(PTR_DAT_04bc39e0 + 8) == '\0') {
      fStack_68 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
      fVar17 = (float)*(int *)(param_1 + 0x1900) * 0.001;
      local_6c = SUB41(fVar17,0);
      bStack_6b = (byte)((uint)fVar17 >> 8);
      uStack_6a = (undefined2)((uint)fVar17 >> 0x10);
      local_64 = (float)*(int *)(param_1 + 0x1906) * 0.001;
      uVar9 = FUN_024b5340(&local_6c);
      if ((uVar9 & 1) != 0) {
        fVar18 = (float)*(int *)(param_1 + 0x1900) * 0.001;
        fVar17 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
        local_78 = 0;
        local_70 = 0.0;
        local_7c = (float)*(int *)(param_1 + 0x1906) * 0.001;
        local_84 = CONCAT44(fVar17,fVar18);
        if ((*(long *)PTR_DAT_04bb2200 == 0) ||
           (lVar14 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar14 == 0)) {
          local_78._4_4_ = 0.0;
          fVar19 = 0.0;
        }
        else {
          local_6c = 0;
          bStack_6b = 0;
          uStack_6a = 0;
          local_78._4_4_ = 0.0;
          fVar19 = 0.0;
          lVar14 = *(long *)(lVar14 + 0x118);
          if (lVar14 != 0) {
            FUN_015bca00(lVar14,&local_78,&local_84,0,1,1);
            fVar19 = (float)local_78;
            fVar17 = local_84._4_4_;
            fVar18 = (float)local_84;
          }
        }
        fVar18 = fVar19 * 0.2 + fVar18;
        fStack_68 = local_78._4_4_ * 0.2 + fVar17;
        local_64 = local_70 * 0.2 + local_7c;
        local_6c = SUB41(fVar18,0);
        bStack_6b = (byte)((uint)fVar18 >> 8);
        uStack_6a = (undefined2)((uint)fVar18 >> 0x10);
        fStack_68 = (float)FUN_016e37dc(&local_6c);
        fVar18 = local_64;
        fVar17 = (float)CONCAT22(uStack_6a,CONCAT11(bStack_6b,local_6c));
        pfVar8 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
        fVar17 = fVar17 - *pfVar8;
        if ((SQRT((fVar18 - pfVar8[2]) * (fVar18 - pfVar8[2]) + fVar17 * fVar17) < 40.0) &&
           (uVar9 = FUN_024b5340(&local_6c), (uVar9 & 1) != 0)) {
          local_7c = local_64;
          local_84 = CONCAT44(fStack_68,CONCAT22(uStack_6a,CONCAT11(bStack_6b,local_6c)));
        }
        *(int *)(param_1 + 0x1900) = (int)((float)local_84 * 999.99994);
        iVar10 = (int)(local_84._4_4_ * 4.0);
        if (0x7ffe < iVar10) {
          iVar10 = 0x7fff;
        }
        if (iVar10 < -0x7fff) {
          iVar10 = -0x8000;
        }
        *(short *)(param_1 + 0x1904) = (short)iVar10;
        *(int *)(param_1 + 0x1906) = (int)(local_7c * 999.99994);
        pfVar8 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
        iVar10 = FUN_006f0400((float)local_84 - *pfVar8,local_7c - pfVar8[2]);
        if (*(int *)(param_1 + 0x178) == 0) {
          local_78 = CONCAT44(local_78._4_4_,10);
          if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024b4a18;
        }
        plVar3 = &DAT_054e9a58;
        if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
          plVar3 = *(long **)(param_1 + 0x4c8);
        }
        lVar14 = (**(code **)(*plVar3 + 0x148))();
        iVar13 = iVar10 - *(int *)(lVar14 + 4);
        if (0xb60b5e < iVar13 + 0x5b05afU) {
          iVar12 = 0x15555560;
          iVar10 = -0x15555560;
          iVar13 = (int)((float)iVar13 * 0.2);
          if (iVar13 < 1) {
            iVar12 = -0x5b05b0;
          }
          else {
            iVar10 = 0x5b05b0;
          }
          iVar2 = iVar13;
          if (iVar12 <= iVar13) {
            iVar2 = iVar12;
          }
          if (iVar10 <= iVar13) {
            iVar10 = iVar2;
          }
          iVar10 = iVar10 + *(int *)(lVar14 + 4);
        }
        *(int *)(lVar14 + 4) = iVar10;
        goto LAB_024b4a18;
      }
    }
    else {
      uVar9 = FUN_013ec620(lVar7 + 0xc);
      if (((uVar9 & 1) != 0) && (*(char *)(lVar7 + 0x1d) != '\0')) {
        if ((*pbVar1 < 8) &&
           ((uVar6 = FUN_02582d8c(pbVar1,1), uVar6 < 8 &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')))) {
          local_6c = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0';
        }
        else {
          local_6c = false;
        }
        bStack_6b = *pbVar1;
        if (7 < bStack_6b) {
          bStack_6b = 0xff;
        }
        FUN_02307c7c(&local_6c);
      }
    }
    local_6c = 0x9a;
    bStack_6b = 0;
    uStack_6a = 0;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    uVar4 = 0x9a;
    lVar7 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar7 = *(long *)(param_1 + 0x70) + 0x278;
    }
  }
  else {
LAB_024b4a18:
    fStack_68 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
    fVar17 = (float)*(int *)(param_1 + 0x1900) * 0.001;
    local_6c = SUB41(fVar17,0);
    bStack_6b = (byte)((uint)fVar17 >> 8);
    uStack_6a = (undefined2)((uint)fVar17 >> 0x10);
    local_64 = (float)*(int *)(param_1 + 0x1906) * 0.001;
    fStack_68 = (float)FUN_016e37dc(&local_6c);
    *(float *)(lVar7 + 0x14) = fStack_68;
    *(uint *)(lVar7 + 0x10) = CONCAT22(uStack_6a,CONCAT11(bStack_6b,local_6c));
    *(float *)(lVar7 + 0x18) = local_64;
    if ((*(char *)(param_1 + 0x17ac) == '\0') &&
       (local_78 = local_78 & 0xffffffff00000000, (*(uint *)(param_1 + 0xed0) & 1) != 0)) {
      if (*(int *)(param_1 + 0x178) == 0) {
        uVar9 = FUN_013ec620(lVar7 + 0xc);
        if (((uVar9 & 1) != 0) && (*(char *)(lVar7 + 0x1d) != '\0')) {
          uVar5 = FUN_02582f64(pbVar1);
          local_78 = CONCAT71(local_78._1_7_,uVar5) & 0xffffffffffffff01;
          bVar15 = *pbVar1;
          if (7 < bVar15) {
            bVar15 = 0xff;
          }
          local_78._0_2_ = CONCAT11(bVar15,(undefined1)local_78);
          FUN_02307c7c(&local_78);
        }
        local_78 = CONCAT44(local_78._4_4_,0x9a);
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
        *(undefined8 *)(param_1 + 0x18c0) = 0;
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
        *(undefined8 *)(param_1 + 0x18c8) = 0;
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
        *(undefined8 *)(param_1 + 0x18d0) = 0;
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
        *(undefined8 *)(param_1 + 0x18a0) = 0;
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
        *(undefined8 *)(param_1 + 0x18a8) = 0;
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
        *(undefined8 *)(param_1 + 0x18b0) = 0;
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
        *(undefined8 *)(param_1 + 0x18b8) = 0;
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
        *(undefined8 *)(param_1 + 0x1880) = 0;
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1888) = 0;
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
        *(undefined8 *)(param_1 + 0x1890) = 0;
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
        *(undefined8 *)(param_1 + 0x1898) = 0;
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
        lVar14 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar14 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar14,0x9a);
      }
      else {
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
        FUN_023164ec(param_1,6);
      }
    }
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
    if (*(char *)(lVar7 + 0x1c) != '\0') {
      local_78 = CONCAT44(local_78._4_4_,0x99);
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      lVar7 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar7 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar7,0x99);
    }
    uVar9 = FUN_024b33f0(&local_6c);
    if ((uVar9 & 1) == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(int *)(param_1 + 0x1980) = (int)((float)*(int *)(param_1 + 0x1900) * 0.001 * 999.99994);
    iVar10 = (int)((float)(int)*(short *)(param_1 + 0x1904) * 0.25 * 4.0);
    if (0x7ffe < iVar10) {
      iVar10 = 0x7fff;
    }
    if (iVar10 < -0x7fff) {
      iVar10 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar10;
    local_78 = CONCAT44(local_78._4_4_,0x98);
    *(int *)(param_1 + 0x1986) = (int)((float)*(int *)(param_1 + 0x1906) * 0.001 * 999.99994);
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
    uVar4 = 0x98;
    lVar7 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar7 = *(long *)(param_1 + 0x70) + 0x278;
    }
  }
  FUN_03ebb160(lVar7,uVar4);
  return;
}

