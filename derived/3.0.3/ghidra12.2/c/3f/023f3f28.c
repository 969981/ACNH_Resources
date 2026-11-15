
/* WARNING: Removing unreachable block (ram,0x023f4044) */

void FUN_023f3f28(long param_1)

{
  int *piVar1;
  undefined1 uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  undefined *local_90 [4];
  int local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  piVar1 = (int *)(param_1 + 0x1902);
  puVar8 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar9 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar8 + 0x2ec) = uVar9;
  *(undefined1 *)((long)puVar8 + 0x2e5) = 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_50 = CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,(float)*piVar1 * 0.001);
    local_48 = CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
    FUN_01261e40(0x40200000,PTR_DAT_04bbe200,&local_50,0,0);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  local_40 = 0;
  local_38 = (long *)0x0;
  local_50 = 0;
  local_48 = 0;
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  if (puVar8[0x227] != 0) {
    local_68 = (float)(*(uint *)(puVar8 + 0x2d3) >> 1 & 1);
    local_5c = 3.36312e-44;
    uVar3 = FUN_03850a90(puVar8[0x227],0x18,&local_50,local_68);
    if ((uVar3 & 1) != 0) {
      fVar10 = 0.0;
      if ((local_38 != (long *)0x0) && (lVar7 = *local_38, lVar7 != 0)) {
        fVar10 = *(float *)(lVar7 + 0x18);
        if (fVar10 < 0.0) {
          fVar10 = *(float *)(local_38[1] + 0xc);
        }
        uVar5 = (uint)(fVar10 - *(float *)(lVar7 + 0x14));
        if (uVar5 < 2) {
          uVar5 = 1;
        }
        fVar10 = (float)(uVar5 - 1);
      }
      plVar4 = *(long **)(param_1 + 0x60);
      if (plVar4 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          plVar4 = &DAT_05240280;
        }
        else {
          plVar4 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar4 + 0x4c0))(1.0 / fVar10);
    }
  }
  fStack_58 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
  local_5c = (float)*piVar1 * 0.001;
  local_54 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  local_68 = (float)*(int *)(param_1 + 0x190c) * 0.001;
  local_60 = (float)*(int *)(param_1 + 0x1912) * 0.001;
  fStack_64 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
  uVar2 = *(undefined1 *)(param_1 + 0x1917);
  local_6c = (uint)*(ushort *)(param_1 + 0x1900) << 0x10;
  local_90[0] = PTR_DAT_04bc3128 + 0x10;
  (**(code **)(*(long *)PTR_DAT_04bbde30 + 0x10))(PTR_DAT_04bbde30,local_90);
  FUN_016d82fc(param_1,&local_5c,&local_68,&local_6c,uVar2,local_90);
  uVar3 = FUN_016d87f8(param_1);
  if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(bool *)(param_1 + 0x198c) = *(char *)(param_1 + 0x1916) != '\0';
    *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
    *(int *)(param_1 + 0x1982) = (int)((float)*piVar1 * 0.001 * 999.99994);
    iVar6 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x1986) = (short)iVar6;
    local_5c = 1.42932e-43;
    *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
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
    FUN_03ebb160(lVar7,0x66);
  }
  return;
}

