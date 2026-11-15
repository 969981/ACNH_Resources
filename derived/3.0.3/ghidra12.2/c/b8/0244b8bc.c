
undefined8 FUN_0244b8bc(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined1 local_28;
  undefined4 local_24;
  
  local_34 = param_2;
  if ((*(int *)(param_1 + 0x1810) == 7) || (*(int *)(param_1 + 0x1810) == 4)) {
    if (param_2 == 1) {
      uVar2 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar2 & 1) == 0) {
        local_24 = 0;
        local_2c = 6;
        local_28 = 1;
        FUN_02374e74(param_1,&local_2c);
        return 1;
      }
      return 1;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x70);
    local_2c = 0x2a;
    if (lVar3 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = 0;
      if (*(uint *)(lVar3 + 0x280) < 0x149) {
        local_30 = *(uint *)(lVar3 + 0x280);
      }
    }
    if ((local_30 == 0x2a) && (*(char *)(param_1 + 0x190b) != '\0')) {
      local_2c = (uint)*(byte *)(param_1 + 0x190a);
      if (0xd < local_2c) {
        local_2c = 0;
      }
      if (local_2c != 9) {
        *(byte *)(param_1 + 0x190a) = (byte)param_2;
        return 1;
      }
    }
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x280) < 0x149)) &&
       ((*(uint *)(lVar3 + 0x280) & 0xfffffffe) == 0x2a)) {
      return 0;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar4 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    local_2c = 5;
    if ((*(uint *)((long)puVar4 + 0x15f4) >> 5 & 1) == 0) {
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
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      local_2c = 0x2a;
      *(byte *)(param_1 + 0x198a) = (byte)param_2;
      *(undefined2 *)(param_1 + 0x198b) = 1;
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
      lVar3 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar3 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar3,0x2a);
    }
    else {
      FUN_024771a8(param_1,&local_34);
    }
  }
  return 1;
}

