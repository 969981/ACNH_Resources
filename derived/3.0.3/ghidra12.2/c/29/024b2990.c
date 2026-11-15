
/* WARNING: Removing unreachable block (ram,0x024b2b74) */
/* WARNING: Removing unreachable block (ram,0x024b2c8c) */

void FUN_024b2990(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  byte bVar14;
  byte bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    puVar7 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_80 = (undefined *)
               CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_78 = (char *)CONCAT44(local_78._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar7 + 0x4f,&local_80);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_5c = 1.4013e-44;
      local_80 = (undefined *)CONCAT44(local_80._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024b2b28;
    }
    iVar12 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar6 = (**(code **)(*plVar2 + 0x148))();
    iVar3 = iVar12 - *(int *)(lVar6 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar11 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar11 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar12 = -0x10000000;
      if (0 < iVar11) {
        iVar12 = 0x5b05b0;
      }
      iVar1 = iVar11;
      if (iVar3 <= iVar11) {
        iVar1 = iVar3;
      }
      if (iVar12 <= iVar11) {
        iVar12 = iVar1;
      }
      iVar12 = iVar12 + *(int *)(lVar6 + 4);
    }
    *(int *)(lVar6 + 4) = iVar12;
  }
LAB_024b2b28:
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar12 = __cxa_guard_acquire(&DAT_052461c0), iVar12 == 0)) {
      puVar7 = &DAT_05240280;
      goto LAB_024b2b48;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar7 = &DAT_05240280;
    if (DAT_052413b8 != 0) goto LAB_024b2b50;
    uVar10 = 0;
  }
  else {
LAB_024b2b48:
    uVar10 = 0;
    if (puVar7[0x227] != 0) {
LAB_024b2b50:
      local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
      uVar10 = *(uint *)(puVar7 + 0x2d3) >> 1 & 1;
    }
  }
  uVar8 = FUN_0170a6d0(puVar7,uVar10);
  if ((uVar8 & 1) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_052461c0), iVar12 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar7 = &DAT_05240280;
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    puVar4 = PTR_DAT_04bb2020;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "CommonRodWaitHit";
    FUN_017081d0(puVar7,&local_80,6,1,0);
    uVar5 = *(undefined4 *)(param_1 + 0x230);
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0,uVar5);
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar7 = &DAT_05240280;
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    lVar6 = FUN_017067d4(puVar7,uVar5,0);
    if (lVar6 != 0) {
      local_80 = puVar4 + 0x10;
      local_78 = "ToolRodWaitHit";
      FUN_01751d60(lVar6,&local_80,6,0,0);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = (undefined *)0x0;
  local_78 = (char *)0x0;
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  puVar4 = PTR_DAT_04bb48a0;
  if (puVar7[0x227] != 0) {
    local_5c = 8.40779e-45;
    uVar8 = FUN_03850890(puVar7[0x227],6,&local_80,*(uint *)(puVar7 + 0x2d3) >> 1 & 1);
    if ((uVar8 & 1) != 0) {
      pfVar9 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4));
      fVar17 = sinf(fVar16 * 1.4629181e-09);
      fVar16 = cosf(fVar16 * 1.4629181e-09);
      fVar18 = fVar17 * 0.0;
      local_5c = *pfVar9 + fVar18 * 0.0 + fVar16 * 0.0 + (fVar17 + 0.0) * 29.9;
      local_58 = pfVar9[1] + (fVar18 * 0.0 + 1.0) * 0.0 + fVar16 * 0.0 * 0.0 + fVar18 * 29.9;
      local_54 = (fVar16 * 0.0 * 0.0 - fVar17 * 0.0) + fVar16 * 29.9 + pfVar9[2];
      fVar16 = (float)FUN_016e37dc(&local_5c);
      bVar14 = *(byte *)(param_1 + 0x1ee8);
      iVar12 = (int)((fVar16 + -2.0) * 4.0);
      *(int *)(param_1 + 0x1900) = (int)(local_5c * 999.99994);
      if (0x7ffe < iVar12) {
        iVar12 = 0x7fff;
      }
      if (iVar12 < -0x7fff) {
        iVar12 = -0x8000;
      }
      *(short *)(param_1 + 0x1904) = (short)iVar12;
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      *(int *)(param_1 + 0x1906) = (int)(local_54 * 999.99994);
      lVar6 = *(long *)puVar4;
      bVar15 = *(byte *)(lVar6 + 0x44);
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      if (bVar14 == bVar15) {
        lVar13 = 0;
LAB_024b2eac:
        lVar6 = lVar6 + 0x40 + lVar13 * 0x20;
      }
      else {
        bVar15 = *(byte *)(lVar6 + 100);
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (bVar14 == bVar15) {
          lVar13 = 1;
          goto LAB_024b2eac;
        }
        bVar15 = *(byte *)(lVar6 + 0x84);
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (bVar14 == bVar15) {
          lVar13 = 2;
          goto LAB_024b2eac;
        }
        bVar15 = *(byte *)(lVar6 + 0xa4);
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (bVar14 == bVar15) {
          lVar13 = 3;
          goto LAB_024b2eac;
        }
        bVar15 = *(byte *)(lVar6 + 0xc4);
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (bVar14 == bVar15) {
          lVar13 = 4;
          goto LAB_024b2eac;
        }
        bVar15 = *(byte *)(lVar6 + 0xe4);
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (bVar14 == bVar15) {
          lVar13 = 5;
          goto LAB_024b2eac;
        }
        bVar15 = *(byte *)(lVar6 + 0x104);
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (bVar14 == bVar15) {
          lVar13 = 6;
          goto LAB_024b2eac;
        }
        bVar15 = *(byte *)(lVar6 + 0x124);
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (bVar14 == bVar15) {
          lVar13 = 7;
          goto LAB_024b2eac;
        }
        lVar6 = lVar6 + 0x140;
      }
      *(float *)(lVar6 + 0x10) = (float)(int)(local_5c * 999.99994) * 0.001;
      *(float *)(lVar6 + 0x14) = (float)(int)(short)iVar12 * 0.25;
      *(float *)(lVar6 + 0x18) = (float)(int)(local_54 * 999.99994) * 0.001;
      uVar5 = FUN_024b1b70(param_1);
      FUN_024b19e0(uVar5,2);
      FUN_02333278(param_1);
    }
  }
  lVar6 = *(long *)puVar4;
  bVar14 = *(byte *)(param_1 + 0x1ee8);
  bVar15 = *(byte *)(lVar6 + 0x44);
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  if (bVar14 == bVar15) {
    lVar13 = 0;
  }
  else {
    bVar15 = *(byte *)(lVar6 + 100);
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    if (bVar14 == bVar15) {
      lVar13 = 1;
    }
    else {
      bVar15 = *(byte *)(lVar6 + 0x84);
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      if (bVar14 == bVar15) {
        lVar13 = 2;
      }
      else {
        bVar15 = *(byte *)(lVar6 + 0xa4);
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (bVar14 == bVar15) {
          lVar13 = 3;
        }
        else {
          bVar15 = *(byte *)(lVar6 + 0xc4);
          if (7 < bVar15) {
            bVar15 = 0xff;
          }
          if (bVar14 == bVar15) {
            lVar13 = 4;
          }
          else {
            bVar15 = *(byte *)(lVar6 + 0xe4);
            if (7 < bVar15) {
              bVar15 = 0xff;
            }
            if (bVar14 == bVar15) {
              lVar13 = 5;
            }
            else {
              bVar15 = *(byte *)(lVar6 + 0x104);
              if (7 < bVar15) {
                bVar15 = 0xff;
              }
              if (bVar14 == bVar15) {
                lVar13 = 6;
              }
              else {
                bVar15 = *(byte *)(lVar6 + 0x124);
                if (7 < bVar15) {
                  bVar15 = 0xff;
                }
                if (bVar14 != bVar15) {
                  uVar8 = FUN_007d4100(lVar6 + 0x140);
                  goto joined_r0x024b3290;
                }
                lVar13 = 7;
              }
            }
          }
        }
      }
    }
  }
  uVar8 = FUN_007d4100(lVar6 + 0x40 + lVar13 * 0x20);
joined_r0x024b3290:
  if (((uVar8 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    local_58 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
    local_5c = (float)*(int *)(param_1 + 0x1900) * 0.001;
    local_54 = (float)*(int *)(param_1 + 0x1906) * 0.001;
    uVar8 = FUN_024b33f0(&local_5c);
    if ((uVar8 & 1) == 0) {
      local_24 = 0x97;
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
      lVar6 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar6 = *(long *)(param_1 + 0x70) + 0x278;
      }
    }
    else {
      local_58 = (float)FUN_016e37dc(&local_5c);
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1980) = (int)(local_5c * 999.99994);
      iVar12 = (int)(local_58 * 4.0);
      if (0x7ffe < iVar12) {
        iVar12 = 0x7fff;
      }
      if (iVar12 < -0x7fff) {
        iVar12 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar12;
      local_24 = 0x98;
      *(int *)(param_1 + 0x1986) = (int)(local_54 * 999.99994);
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
      lVar6 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar6 = *(long *)(param_1 + 0x70) + 0x278;
      }
    }
    FUN_03ebb160(lVar6,local_24);
  }
  return;
}

