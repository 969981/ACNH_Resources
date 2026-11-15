
/* WARNING: Removing unreachable block (ram,0x024d1658) */
/* WARNING: Removing unreachable block (ram,0x024d1394) */

void FUN_024d10b4(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 local_58 [2];
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar13 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
    iVar7 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
    if (0x7ffe < iVar7) {
      iVar7 = 0x7fff;
    }
    if (iVar7 < -0x7fff) {
      iVar7 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar7;
    fVar18 = *(float *)(lVar8 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar18 * 999.99994);
    uVar13 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar13;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar16 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar15 + 0x2ec) = uVar16;
    *(undefined1 *)((long)puVar15 + 0x2e5) = 1;
  }
  iVar7 = *(int *)(param_1 + 0x178);
  if (iVar7 == 1) {
    local_48 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_4c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_44 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar15 + 0x4f,&local_4c);
    if (*(int *)(param_1 + 0x178) != 0) {
LAB_024d1280:
      iVar7 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar8 = (**(code **)(*plVar2 + 0x148))();
      iVar3 = iVar7 - *(int *)(lVar8 + 4);
      if (0xb60b5e < iVar3 + 0x5b05afU) {
        iVar14 = (int)((float)iVar3 * 0.1666667);
        iVar3 = 0x10000000;
        if (iVar14 < 1) {
          iVar3 = -0x5b05b0;
        }
        iVar7 = -0x10000000;
        if (0 < iVar14) {
          iVar7 = 0x5b05b0;
        }
        iVar1 = iVar14;
        if (iVar3 <= iVar14) {
          iVar1 = iVar3;
        }
        if (iVar7 <= iVar14) {
          iVar7 = iVar1;
        }
        iVar7 = iVar7 + *(int *)(lVar8 + 4);
      }
      *(int *)(lVar8 + 4) = iVar7;
      iVar7 = *(int *)(param_1 + 0x178);
      goto LAB_024d1310;
    }
    local_58[0] = 10;
    local_4c = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024d1280;
  }
  else {
LAB_024d1310:
    if (iVar7 != 0) {
      puVar15 = *(undefined8 **)(param_1 + 0x60);
      if (puVar15 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          puVar15 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar15 = &DAT_05240280;
        }
      }
      local_4c = 0.0;
      if (puVar15[0x227] != 0) {
        local_4c = (float)(*(uint *)(puVar15 + 0x2d3) >> 1 & 1);
      }
      uVar9 = FUN_0073da08(puVar15,local_4c);
      if ((uVar9 & 1) == 0) {
        return;
      }
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
      return;
    }
  }
  FUN_0252d8f0(local_58,param_1 + 0x1ee8);
  if (*(int *)(param_1 + 0x1c04) != 0) {
    puVar15 = *(undefined8 **)(param_1 + 0x60);
    if (puVar15 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = *(undefined8 **)(param_1 + 0x60);
      if (puVar11 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) != 0) || (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 == 0)) {
          puVar15 = &DAT_05240280;
          goto LAB_024d1384;
        }
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        lVar8 = DAT_052413b8;
      }
      else {
        lVar8 = puVar11[0x227];
      }
      puVar15 = &DAT_05240280;
      if (lVar8 == 0) goto LAB_024d1524;
LAB_024d1400:
      local_4c = 1.4013e-45;
      local_50 = *(uint *)(puVar11 + 0x2d3) >> 1 & 1;
    }
    else {
LAB_024d1384:
      puVar11 = puVar15;
      if (puVar15[0x227] != 0) goto LAB_024d1400;
LAB_024d1524:
      local_50 = 0;
    }
    uVar9 = FUN_0073d6e0(puVar15,local_50);
    if ((uVar9 & 1) == 0) {
      pfVar10 = (float *)PTR_DAT_04bc3038;
      if (*(char *)(param_1 + 0x12f8) != '\0') {
        pfVar10 = (float *)(param_1 + 0xeec);
      }
      fVar18 = SQRT(pfVar10[1] * pfVar10[1] + *pfVar10 * *pfVar10);
      lVar8 = FUN_0251e98c(1);
      pfVar10 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
      if (*pfVar10 <= fVar18) {
        lVar8 = FUN_0251e98c(1);
        pfVar10 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
        fVar17 = *pfVar10;
        lVar8 = FUN_0251e98c(1);
        pfVar10 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
        fVar17 = (fVar18 - *pfVar10) / (1.0 - fVar17);
        fVar18 = 0.9999;
        if (fVar17 <= 0.9999) {
          fVar18 = fVar17;
        }
        bVar4 = false;
        bVar5 = true;
        bVar6 = false;
        if (0.0 <= fVar17) {
          bVar4 = false;
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar18)) {
            bVar4 = fVar18 < 0.1;
            bVar5 = fVar18 == 0.1;
            bVar6 = false;
          }
        }
        if (!bVar5 && bVar4 == bVar6) {
          if (*(int *)(param_1 + 0x1810) == 1) {
            local_50 = 0xc;
            lVar12 = *(long *)(param_1 + 0x70);
            uVar13 = 0;
            lVar8 = 0;
            if (lVar12 != 0) {
              uVar13 = 0;
              if (*(uint *)(lVar12 + 0x280) < 0x149) {
                uVar13 = *(uint *)(lVar12 + 0x280);
              }
              lVar8 = lVar12 + 0x278;
            }
            if (uVar13 == 0xc) {
              return;
            }
            local_4c = 1.68156e-44;
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
            FUN_03ebb160(lVar8,0xc);
            return;
          }
          goto LAB_024d166c;
        }
      }
    }
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 == 0)) {
      puVar15 = &DAT_05240280;
      goto LAB_024d162c;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar15 = &DAT_05240280;
    if (DAT_052413b8 != 0) goto LAB_024d1634;
    local_4c = 0.0;
  }
  else {
LAB_024d162c:
    local_4c = 0.0;
    if (puVar15[0x227] != 0) {
LAB_024d1634:
      local_4c = (float)(*(uint *)(puVar15 + 0x2d3) >> 1 & 1);
    }
  }
  uVar9 = FUN_0073da08(puVar15,local_4c);
  if ((uVar9 & 1) == 0) {
    return;
  }
LAB_024d166c:
  uVar9 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
  if ((uVar9 & 1) == 0) {
    local_44 = 0.0;
    local_4c = 8.40779e-45;
    local_48 = (float)CONCAT31(local_48._1_3_,1);
    FUN_02374e74(param_1,&local_4c);
  }
  return;
}

