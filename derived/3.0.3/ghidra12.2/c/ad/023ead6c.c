
void FUN_023ead6c(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  uint local_3c;
  undefined1 local_38;
  undefined4 local_34;
  
  puVar4 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar6 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar4 + 0x2ec) = uVar6;
  *(undefined1 *)((long)puVar4 + 0x2e5) = 1;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar5 + 0x424) = 2;
  iVar1 = FUN_01392d64(lVar5 + 0x4c8);
  *(int *)(lVar5 + 0x420) = iVar1;
  *(int *)(lVar5 + 0x4c0) = *(int *)(lVar5 + 0x4c0) + 1;
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      return;
    }
    uVar3 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar3 & 1) == 0) {
      local_34 = 0;
      local_3c = 6;
      local_38 = 1;
      FUN_02374e74(param_1,&local_3c);
      return;
    }
    return;
  }
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar2 = &DAT_05240280;
    }
    else {
      plVar2 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar2 + 0x318))(&local_3c);
  if ((short)local_3c != -2) {
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar4 = &DAT_05240280;
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    if ((*(uint *)((long)puVar4 + 0x15f4) >> 4 & 1) == 0) {
      *(uint *)(param_1 + 0xb58) = (uint)*(ushort *)(param_1 + 0x1900) << 0x10;
      lVar5 = *(long *)(param_1 + 0x68);
      *(float *)(param_1 + 0xb4c) = (float)*(int *)(param_1 + 0x1902) * 0.001;
      *(float *)(param_1 + 0xb50) = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
      *(float *)(param_1 + 0xb54) = (float)*(int *)(param_1 + 0x1908) * 0.001;
      *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(lVar5 + 0x278);
      *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(lVar5 + 0x27c);
      uVar6 = *(undefined4 *)(lVar5 + 0x280);
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
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined1 *)(param_1 + 0xb5c) = *(undefined1 *)(param_1 + 0x190c);
      *(undefined4 *)(param_1 + 0xb68) = uVar6;
      *(bool *)(param_1 + 0xb6c) = *(char *)(param_1 + 0x190d) != '\0';
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined2 *)(param_1 + 0x198b) = 0;
      *(undefined1 *)(param_1 + 0x198a) = 5;
      local_3c = 0x2a;
      goto LAB_023eb10c;
    }
  }
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
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
  *(int *)(param_1 + 0x1982) = (int)((float)*(int *)(param_1 + 0x1902) * 0.001 * 999.99994);
  iVar1 = (int)((float)(int)*(short *)(param_1 + 0x1906) * 0.25 * 4.0);
  if (0x7ffe < iVar1) {
    iVar1 = 0x7fff;
  }
  if (iVar1 < -0x7fff) {
    iVar1 = -0x8000;
  }
  *(short *)(param_1 + 0x1986) = (short)iVar1;
  *(int *)(param_1 + 0x1988) = (int)((float)*(int *)(param_1 + 0x1908) * 0.001 * 999.99994);
  *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_1 + 0x1900);
  lVar5 = *(long *)(param_1 + 0x68);
  *(int *)(param_1 + 0x198c) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
  iVar1 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
  if (0x7ffe < iVar1) {
    iVar1 = 0x7fff;
  }
  if (iVar1 < -0x7fff) {
    iVar1 = -0x8000;
  }
  *(short *)(param_1 + 0x1990) = (short)iVar1;
  *(int *)(param_1 + 0x1992) = (int)(*(float *)(lVar5 + 0x280) * 999.99994);
  *(undefined1 *)(param_1 + 0x1996) = *(undefined1 *)(param_1 + 0x190c);
  *(bool *)(param_1 + 0x1997) = *(char *)(param_1 + 0x190d) != '\0';
  local_3c = 0x6e;
LAB_023eb10c:
  if (local_3c < 0x149) {
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
    lVar5 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar5 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar5,local_3c);
  }
  return;
}

