
void FUN_023dc024(long param_1)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_7c;
  float fStack_78;
  float local_74;
  
  sVar4 = *(short *)(param_1 + 0x1904);
  fVar13 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fStack_78 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  local_7c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  fVar12 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_74 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  puVar11 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*pfVar8 * 0.5,0x41200000,0x3e4ccccc,puVar11 + 0x4f,&local_7c);
  iVar6 = FUN_006f0400(fVar13 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       fVar12 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar14 = *pfVar8;
  if ((*(int *)(param_1 + 0x178) != 0) ||
     (local_7c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar10 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar10 + 0x5b05afU) {
      iVar5 = 0x15555560;
      iVar6 = -0x15555560;
      iVar10 = (int)(fVar14 * 0.5 * (float)iVar10);
      if (iVar10 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar5 <= iVar10) {
        iVar1 = iVar5;
      }
      if (iVar6 <= iVar10) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  local_7c = 0.0;
  if ((puVar11[0x227] == 0) || (uVar9 = FUN_03850368(puVar11[0x227],0), (uVar9 & 1) == 0)) {
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    local_7c = 0.0;
    if ((((puVar11[0x227] == 0) || (uVar9 = FUN_03850368(puVar11[0x227],0), (uVar9 & 1) != 0)) ||
        (puVar11[0x227] == 0)) ||
       ((uVar9 = FUN_03850368(puVar11[0x227],0), (uVar9 & 1) != 0 ||
        (uVar9 = FUN_0384fca4(puVar11[0x227],0), (uVar9 & 1) != 0)))) {
      if (*(int *)(param_1 + 0x178) == 0) {
        *(undefined8 *)(param_1 + 0x1990) = 0;
        *(undefined8 *)(param_1 + 0x1998) = 0;
        *(undefined8 *)(param_1 + 0x19a0) = 0;
        *(undefined8 *)(param_1 + 0x19a8) = 0;
        *(undefined8 *)(param_1 + 0x19b0) = 0;
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x19b8) = 0;
        *(undefined8 *)(param_1 + 0x19c0) = 0;
        *(undefined8 *)(param_1 + 0x19c8) = 0;
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x19d0) = 0;
        bVar3 = *(byte *)(param_1 + 0x1914);
        if (1 < bVar3) {
          bVar3 = 0;
        }
        *(undefined2 *)(param_1 + 0x19d8) = 0;
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        iVar6 = (int)((float)(int)sVar4 * 0.25 * 4.0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(int *)(param_1 + 0x1980) = (int)(fVar13 * 999.99994);
        if (0x7ffe < iVar6) {
          iVar6 = 0x7fff;
        }
        if (iVar6 < -0x7fff) {
          iVar6 = -0x8000;
        }
        *(short *)(param_1 + 0x1984) = (short)iVar6;
        *(int *)(param_1 + 0x1986) = (int)(fVar12 * 999.99994);
        *(int *)(param_1 + 0x198a) = (int)((float)*(int *)(param_1 + 0x190a) * 0.001 * 999.99994);
        iVar6 = (int)((float)(int)*(short *)(param_1 + 0x190e) * 0.25 * 4.0);
        if (0x7ffe < iVar6) {
          iVar6 = 0x7fff;
        }
        if (iVar6 < -0x7fff) {
          iVar6 = -0x8000;
        }
        *(short *)(param_1 + 0x198e) = (short)iVar6;
        *(int *)(param_1 + 0x1990) = (int)((float)*(int *)(param_1 + 0x1910) * 0.001 * 999.99994);
        *(bool *)(param_1 + 0x1995) = *(char *)(param_1 + 0x1915) != '\0';
        *(byte *)(param_1 + 0x1994) = bVar3;
        local_7c = 1.68156e-43;
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
        lVar7 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar7 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar7,0x78);
      }
      else {
        puVar11 = *(undefined8 **)(param_1 + 0x60);
        if (puVar11 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(&DAT_052461c0);
            puVar11 = &DAT_05240280;
            if (iVar6 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar11 = &DAT_05240280;
          }
        }
        FUN_017029bc(puVar11,&DAT_054b17f0,6,0,0);
      }
    }
  }
  return;
}

