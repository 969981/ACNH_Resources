
/* WARNING: Type propagation algorithm not settling */

void FUN_02457698(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  float local_3c;
  float local_38;
  float local_34;
  
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar5 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar2 + 0x2ec) = uVar5;
  *(undefined1 *)((long)puVar2 + 0x2e5) = 1;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_38 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
    local_3c = (float)*(int *)(param_1 + 0x1902) * 0.001;
    local_34 = (float)*(int *)(param_1 + 0x1908) * 0.001;
    FUN_01261e40(0x40200000,PTR_DAT_04bbe200,&local_3c,0,0);
    puVar2 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
      lVar1 = DAT_052413b8;
    }
    else {
      puVar2 = &DAT_05240280;
      lVar1 = DAT_052413b8;
    }
  }
  else {
    lVar1 = puVar2[0x227];
  }
  if (lVar1 == 0) {
    uVar3 = FUN_0170a6d0(puVar2,0);
  }
  else {
    local_3c = 1.4013e-45;
    uVar3 = FUN_0170a6d0(puVar2,*(uint *)(puVar2 + 0x2d3) >> 1 & 1);
  }
  if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    if (*(char *)(param_1 + 0xb48) == '\0') {
      uVar3 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar3 & 1) == 0) {
        local_34 = 0.0;
        local_3c = 8.40779e-45;
        local_38 = (float)CONCAT31(local_38._1_3_,1);
        FUN_02374e74(param_1,&local_3c);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1902) * 0.001 * 999.99994);
      iVar4 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
      if (0x7ffe < iVar4) {
        iVar4 = 0x7fff;
      }
      if (iVar4 < -0x7fff) {
        iVar4 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar4;
      *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
      *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
      *(undefined1 *)(param_1 + 0x198c) = *(undefined1 *)(param_1 + 0x190c);
      local_3c = 2.78858e-43;
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
      FUN_03ebb160(lVar1,199);
    }
  }
  return;
}

