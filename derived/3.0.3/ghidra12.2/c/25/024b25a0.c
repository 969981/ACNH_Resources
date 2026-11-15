
void FUN_024b25a0(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  undefined *local_60;
  char *pcStack_58;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    fVar15 = (float)(*(uint *)(*(long *)(param_1 + 0x68) + 0x2b4) ^ 0x80000000) * 1.4629181e-09;
    fVar9 = sinf(fVar15);
    fVar15 = cosf(fVar15);
    fVar12 = fVar9 * 0.0;
    pfVar4 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
    fVar10 = *pfVar4;
    fVar13 = pfVar4[2];
    iVar11 = (int)(((fVar15 * 0.0 * 3.0 - (fVar12 * 0.0 + 1.0)) + fVar12 * -16.0 + pfVar4[1]) * 4.0)
    ;
    if (0x7ffe < iVar11) {
      iVar11 = 0x7fff;
    }
    if (iVar11 < -0x7fff) {
      iVar11 = -0x8000;
    }
    *(short *)(param_1 + 0x1904) = (short)iVar11;
    *(int *)(param_1 + 0x1900) =
         (int)(((fVar15 * 3.0 - fVar12) + (fVar9 + 0.0) * -16.0 + fVar10) * 999.99994);
    *(int *)(param_1 + 0x1906) =
         (int)(((-(fVar9 * 3.0) - fVar15 * 0.0) + fVar15 * -16.0 + fVar13) * 999.99994);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "CommonRodCasting";
  FUN_017081d0(puVar3,&local_60,6,1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x230);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar11 = __cxa_guard_acquire(&DAT_052461c0,uVar2);
      if (iVar11 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  lVar5 = FUN_017067d4(puVar3,uVar2,0);
  if (lVar5 != 0) {
    local_60 = puVar1 + 0x10;
    pcStack_58 = "ToolRodCasting";
    FUN_01751d60(lVar5,&local_60,6,0,0);
  }
  uVar2 = FUN_024b1b70(param_1);
  bVar7 = *(byte *)(param_1 + 0x1ee8);
  lVar5 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  bVar8 = *(byte *)(lVar5 + 0x44);
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if (bVar7 == bVar8) {
    lVar6 = 0;
  }
  else {
    bVar8 = *(byte *)(lVar5 + 100);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (bVar7 == bVar8) {
      lVar6 = 1;
    }
    else {
      bVar8 = *(byte *)(lVar5 + 0x84);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) {
        lVar6 = 2;
      }
      else {
        bVar8 = *(byte *)(lVar5 + 0xa4);
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
        if (bVar7 == bVar8) {
          lVar6 = 3;
        }
        else {
          bVar8 = *(byte *)(lVar5 + 0xc4);
          if (7 < bVar8) {
            bVar8 = 0xff;
          }
          if (bVar7 == bVar8) {
            lVar6 = 4;
          }
          else {
            bVar8 = *(byte *)(lVar5 + 0xe4);
            if (7 < bVar8) {
              bVar8 = 0xff;
            }
            if (bVar7 == bVar8) {
              lVar6 = 5;
            }
            else {
              bVar8 = *(byte *)(lVar5 + 0x104);
              if (7 < bVar8) {
                bVar8 = 0xff;
              }
              if (bVar7 == bVar8) {
                lVar6 = 6;
              }
              else {
                bVar8 = *(byte *)(lVar5 + 0x124);
                if (7 < bVar8) {
                  bVar8 = 0xff;
                }
                if (bVar7 != bVar8) {
                  lVar5 = lVar5 + 0x140;
                  goto LAB_024b2864;
                }
                lVar6 = 7;
              }
            }
          }
        }
      }
    }
  }
  lVar5 = lVar5 + 0x40 + lVar6 * 0x20;
LAB_024b2864:
  *(undefined4 *)(lVar5 + 8) = uVar2;
  iVar11 = *(int *)(param_1 + 0x1900);
  iVar14 = *(int *)(param_1 + 0x1906);
  *(float *)(lVar5 + 0x14) = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  *(float *)(lVar5 + 0x10) = (float)iVar11 * 0.001;
  *(float *)(lVar5 + 0x18) = (float)iVar14 * 0.001;
  return;
}

