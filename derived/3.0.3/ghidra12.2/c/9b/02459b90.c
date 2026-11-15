
void FUN_02459b90(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar8 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar2 + 0x2ec) = uVar8;
  *(undefined1 *)((long)puVar2 + 0x2e5) = 1;
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
      lVar1 = DAT_052413b8;
      goto joined_r0x02459c00;
    }
    puVar2 = &DAT_05240280;
  }
  lVar1 = puVar2[0x227];
joined_r0x02459c00:
  if (lVar1 == 0) {
    uVar3 = FUN_0170a6d0(puVar2,0);
  }
  else {
    uVar3 = FUN_0170a6d0(puVar2,*(uint *)(puVar2 + 0x2d3) >> 1 & 1);
  }
  if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    if (*(char *)(param_1 + 0xb48) == '\0') {
      *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1916) * 0.001 * 999.99994);
      iVar7 = (int)((float)(int)*(short *)(param_1 + 0x191a) * 0.25 * 4.0);
      if (0x7ffe < iVar7) {
        iVar7 = 0x7fff;
      }
      if (iVar7 < -0x7fff) {
        iVar7 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar7;
      *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x191c) * 0.001 * 999.99994);
      uVar5 = *(undefined2 *)(*(long *)(param_1 + 0x68) + 0x2b6);
      uVar4 = 0xce;
    }
    else {
      *(undefined1 *)(param_1 + 0x19a0) = *(undefined1 *)(param_1 + 0x1920);
      *(undefined4 *)(param_1 + 0x19a4) = *(undefined4 *)(param_1 + 0x1924);
      iVar7 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
      iVar6 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
      if (0x7ffe < iVar7) {
        iVar7 = 0x7fff;
      }
      if (iVar7 < -0x7fff) {
        iVar7 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar7;
      if (0x7ffe < iVar6) {
        iVar6 = 0x7fff;
      }
      if (iVar6 < -0x7fff) {
        iVar6 = -0x8000;
      }
      *(short *)(param_1 + 0x1990) = (short)iVar6;
      uVar5 = *(undefined2 *)(param_1 + 0x1900);
      *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1902) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x198c) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x1992) = (int)((float)*(int *)(param_1 + 0x1912) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x1996) = (int)((float)*(int *)(param_1 + 0x1916) * 0.001 * 999.99994);
      *(int *)(param_1 + 0x199c) = (int)((float)*(int *)(param_1 + 0x191c) * 0.001 * 999.99994);
      iVar7 = (int)((float)(int)*(short *)(param_1 + 0x191a) * 0.25 * 4.0);
      if (0x7ffe < iVar7) {
        iVar7 = 0x7fff;
      }
      if (iVar7 < -0x7fff) {
        iVar7 = -0x8000;
      }
      *(short *)(param_1 + 0x199a) = (short)iVar7;
      *(bool *)(param_1 + 0x19a1) = *(char *)(param_1 + 0x1921) != '\0';
      *(undefined4 *)(param_1 + 0x19a8) = *(undefined4 *)(param_1 + 0x1928);
      uVar4 = 0xcc;
    }
    *(undefined2 *)(param_1 + 0x1980) = uVar5;
    if (uVar4 < 0x149) {
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
      lVar1 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar1 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar1,uVar4);
    }
  }
  return;
}

