
/* WARNING: Removing unreachable block (ram,0x024d644c) */
/* WARNING: Removing unreachable block (ram,0x024d5f58) */
/* WARNING: Removing unreachable block (ram,0x024d6384) */
/* WARNING: Removing unreachable block (ram,0x024d68f8) */

void FUN_024d5ecc(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_70;
  float local_68;
  undefined4 local_64;
  long local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  local_70._0_4_ = 9.18327e-41;
  local_70._4_4_ = 0.0;
  FUN_0277d4ac(&local_70);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  if (puVar10[0x227] == 0) {
    local_4c = 0;
  }
  else {
    local_4c = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
    local_70._0_4_ = 2.8026e-44;
    uVar7 = FUN_03850890(puVar10[0x227],0x14,0,local_4c);
    if ((uVar7 & 1) != 0) {
      local_70._0_4_ = 9.18327e-41;
      local_70._4_4_ = 0.0;
      FUN_0277d4ac(&local_70);
      if (*(short *)(param_1 + 0x1908) == -2) {
        uVar14 = *(undefined4 *)(param_1 + 0x230);
        puVar10 = *(undefined8 **)(param_1 + 0x60);
        if (puVar10 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(&DAT_052461c0,uVar14);
            if (iVar6 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
            puVar10 = &DAT_05240280;
          }
          else {
            puVar10 = &DAT_05240280;
          }
        }
        lVar8 = FUN_017067d4(puVar10,uVar14,0);
        if (lVar8 != 0) {
          *(uint *)(lVar8 + 0x11a0) = *(uint *)(lVar8 + 0x11a0) & 0xfffffffe;
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
    iVar6 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar6;
    fVar15 = *(float *)(lVar8 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar15 * 999.99994);
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar5;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar14 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar10 + 0x2ec) = uVar14;
    *(undefined1 *)((long)puVar10 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    local_70._4_4_ = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_70._0_4_ = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_68 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar10 + 0x4f,&local_70);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_4c = 10;
      local_70._0_4_ = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024d6210;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar8 = (**(code **)(*plVar2 + 0x148))();
    iVar3 = iVar6 - *(int *)(lVar8 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar13 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar13 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar6 = -0x10000000;
      if (0 < iVar13) {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar13;
      if (iVar3 <= iVar13) {
        iVar1 = iVar3;
      }
      if (iVar6 <= iVar13) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar8 + 4);
    }
    *(int *)(lVar8 + 4) = iVar6;
  }
LAB_024d6210:
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  puVar4 = PTR_DAT_04bb43c0;
  local_58 = *(undefined8 *)(param_1 + 0x1900);
  local_60 = 0;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_68 = (float)local_58;
  local_64 = (undefined4)((ulong)local_58 >> 0x20);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
        local_60 = lVar8;
      }
    }
  }
  iVar6 = FUN_01ad78cc(&local_70);
  if (((iVar6 == 0x66) || (iVar6 == 0x67)) || (iVar6 == 0x68)) {
    if (*(int *)(param_1 + 0x178) == 0) {
      if (*(int *)(param_1 + 0x1c04) != 0) {
        puVar10 = *(undefined8 **)(param_1 + 0x60);
        if (puVar10 == (undefined8 *)0x0) {
          if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0))
          {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          puVar11 = *(undefined8 **)(param_1 + 0x60);
          if (puVar11 == (undefined8 *)0x0) {
            if (((DAT_052461c0 & 1) != 0) ||
               (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 == 0)) {
              puVar10 = &DAT_05240280;
              goto LAB_024d6374;
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
          puVar10 = &DAT_05240280;
          if (lVar8 == 0) goto LAB_024d6664;
LAB_024d6428:
          local_4c = 1;
          local_50 = *(uint *)(puVar11 + 0x2d3) >> 1 & 1;
        }
        else {
LAB_024d6374:
          puVar11 = puVar10;
          if (puVar10[0x227] != 0) goto LAB_024d6428;
LAB_024d6664:
          local_50 = 0;
        }
        uVar7 = FUN_0073d6e0(puVar10,local_50);
        if ((uVar7 & 1) == 0) {
          pfVar9 = (float *)PTR_DAT_04bc3038;
          if (*(char *)(param_1 + 0x12f8) != '\0') {
            pfVar9 = (float *)(param_1 + 0xeec);
          }
          fVar17 = SQRT(pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9);
          lVar8 = FUN_0251e98c(1);
          pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
          fVar15 = 0.0;
          if (*pfVar9 <= fVar17) {
            lVar8 = FUN_0251e98c(1);
            pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
            fVar15 = *pfVar9;
            lVar8 = FUN_0251e98c(1);
            pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
            fVar16 = (fVar17 - *pfVar9) / (1.0 - fVar15);
            fVar17 = 0.9999;
            if (fVar16 <= 0.9999) {
              fVar17 = fVar16;
            }
            fVar15 = 0.0;
            if (0.0 <= fVar16) {
              fVar15 = fVar17;
            }
          }
          if ((*(char *)(param_1 + 0x17ac) == '\0') &&
             (local_4c = 0, (*(uint *)(param_1 + 0xed0) & 1) != 0)) {
            FUN_024d4da0(param_1,0,&local_58);
            return;
          }
          if (0.1 < fVar15) {
            if (*(int *)(param_1 + 0x1810) == 1) {
              local_50 = 0xc;
              lVar12 = *(long *)(param_1 + 0x70);
              uVar5 = 0;
              lVar8 = 0;
              if (lVar12 != 0) {
                uVar5 = 0;
                if (*(uint *)(lVar12 + 0x280) < 0x149) {
                  uVar5 = *(uint *)(lVar12 + 0x280);
                }
                lVar8 = lVar12 + 0x278;
              }
              if (uVar5 == 0xc) {
                return;
              }
              local_4c = 0xc;
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
            goto LAB_024d690c;
          }
        }
      }
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) != 0) || (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 == 0)) {
          puVar10 = &DAT_05240280;
          goto LAB_024d68cc;
        }
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (DAT_052413b8 != 0) goto LAB_024d68d4;
        local_4c = 0;
      }
      else {
LAB_024d68cc:
        local_4c = 0;
        if (puVar10[0x227] != 0) {
LAB_024d68d4:
          local_4c = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
        }
      }
      uVar7 = FUN_0073da08(puVar10,local_4c);
      if ((uVar7 & 1) == 0) {
        return;
      }
      goto LAB_024d690c;
    }
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) != 0) || (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 == 0)) {
        puVar10 = &DAT_05240280;
        goto LAB_024d6338;
      }
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (DAT_052413b8 != 0) goto LAB_024d6340;
      local_4c = 0;
    }
    else {
LAB_024d6338:
      local_4c = 0;
      if (puVar10[0x227] != 0) {
LAB_024d6340:
        local_4c = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
      }
    }
    uVar7 = FUN_0073da08(puVar10,local_4c);
    if ((uVar7 & 1) == 0) {
      return;
    }
    goto LAB_024d6398;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 == 0)) {
      puVar10 = &DAT_05240280;
      goto LAB_024d63d4;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar10 = &DAT_05240280;
    if (DAT_052413b8 != 0) goto LAB_024d63dc;
    local_4c = 0;
  }
  else {
LAB_024d63d4:
    local_4c = 0;
    if (puVar10[0x227] != 0) {
LAB_024d63dc:
      local_4c = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
    }
  }
  uVar7 = FUN_0073da08(puVar10,local_4c);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
LAB_024d690c:
    uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar7 & 1) == 0) {
      local_44 = 0;
      local_4c = 6;
      local_48 = 1;
      FUN_02374e74(param_1,&local_4c);
      return;
    }
    return;
  }
LAB_024d6398:
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
  FUN_023164ec(param_1,6);
  return;
}

