
void FUN_02401510(long param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *__src;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  char *pcVar11;
  undefined1 *__dest;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_50;
  undefined1 *local_48;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    puVar8 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_50 = (undefined *)
               CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_48 = (undefined1 *)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar8 + 0x4f,&local_50);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024016a4;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar4 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar4 + 0x5b05afU) {
      iVar10 = (int)((float)iVar4 * 0.1666667);
      iVar4 = 0x10000000;
      if (iVar10 < 1) {
        iVar4 = -0x5b05b0;
      }
      iVar6 = -0x10000000;
      if (0 < iVar10) {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar10;
      if (iVar4 <= iVar10) {
        iVar1 = iVar4;
      }
      if (iVar6 <= iVar10) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
  }
LAB_024016a4:
  uVar3 = *(uint *)(param_1 + 0x1c04);
  if (uVar3 == 10) {
    fVar12 = (float)*(int *)(param_1 + 0x190a) * 0.001;
    fVar14 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
    fVar13 = (float)*(int *)(param_1 + 0x1910) * 0.001;
    lVar7 = *(long *)(param_1 + 0x80);
    if (lVar7 != 0) {
      *(float *)(lVar7 + 0x330) = fVar12;
      *(float *)(lVar7 + 0x334) = fVar14;
      *(float *)(lVar7 + 0x338) = fVar13;
    }
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    *(float *)(param_1 + 0x2b0) = fVar12;
    *(float *)(param_1 + 0x2b4) = fVar14;
    *(float *)(param_1 + 0x2b8) = fVar13;
    if (puVar8 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar8 = &DAT_05240280;
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    puVar5 = PTR_DAT_04bb2020;
    pcVar11 = (char *)(puVar8 + 0xb9e);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = &DAT_040b69da;
    if (*pcVar11 == '\0') {
      lVar7 = 0;
    }
    else {
      pcVar11 = (char *)(puVar8 + 0xbae);
      if (*pcVar11 == '\0') {
        lVar7 = 1;
      }
      else if (*(char *)(puVar8 + 0xbbe) == '\0') {
        pcVar11 = (char *)(puVar8 + 0xbbe);
        lVar7 = 2;
      }
      else {
        if (*(char *)(puVar8 + 0xbce) != '\0') {
          return;
        }
        pcVar11 = (char *)(puVar8 + 0xbce);
        lVar7 = 3;
      }
    }
    *pcVar11 = '\x01';
    __dest = (undefined1 *)puVar8[lVar7 * 0x10 + 0xb90];
    *(int *)((long)puVar8 + lVar7 * 0x80 + 0x5cf4) =
         (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
    (**(code **)(puVar5 + 0x28))(&local_50);
    __src = local_48;
    if (__dest != local_48) {
      (**(code **)(local_50 + 0x18))(&local_50);
      lVar9 = 0;
      do {
        if (local_48[lVar9] == '\0') goto LAB_024019a0;
        if (local_48[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_024019a0;
        }
        if (local_48[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_024019a0;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_024019a0:
      iVar6 = (int)lVar9;
      if (*(int *)(puVar8 + lVar7 * 0x10 + 0xb91) <= (int)lVar9) {
        iVar6 = *(int *)(puVar8 + lVar7 * 0x10 + 0xb91) + -1;
      }
      memcpy(__dest,__src,(long)iVar6);
      __dest[iVar6] = 0;
    }
    *(undefined4 *)(puVar8 + lVar7 * 0x10 + 0xb9d) = 0;
  }
  else if (*(int *)(param_1 + 0x178) == 0) {
    if (uVar3 == 0x1e) {
      local_50 = (undefined *)
                 CONCAT44((float)(int)*(short *)(param_1 + 0x1904) * 0.25,
                          (float)*(int *)(param_1 + 0x1900) * 0.001);
      local_48 = (undefined1 *)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x1906) * 0.001);
      FUN_013fe070(*(undefined8 *)PTR_DAT_04bb3d80,&local_50,param_1 + 0x1ee8);
    }
    else if (0x3c < uVar3) {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined1 *)(param_1 + 0x1983) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined2 *)(param_1 + 0x1980) = 0x601;
      local_50 = (undefined *)CONCAT44(local_50._4_4_,0x19);
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
      FUN_03ebb160(lVar7,0x19);
    }
  }
  return;
}

