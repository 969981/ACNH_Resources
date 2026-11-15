
undefined8 FUN_023de940(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float fStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined4 local_5c;
  float local_54;
  float fStack_50;
  float local_4c;
  uint local_48;
  byte local_44;
  undefined1 local_43;
  
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar7 = *(float *)(puVar1 + 0x4f);
  *(int *)(param_1 + 0x18e5) = (int)(fVar7 * 999.99994);
  iVar6 = (int)(*(float *)((long)puVar1 + 0x27c) * 4.0);
  if (0x7ffe < iVar6) {
    iVar6 = 0x7fff;
  }
  if (iVar6 < -0x7fff) {
    iVar6 = -0x8000;
  }
  local_44 = *(byte *)(param_1 + 0x1ee8);
  *(short *)(param_1 + 0x18e9) = (short)iVar6;
  fVar8 = *(float *)(puVar1 + 0x50);
  if (7 < local_44) {
    local_44 = 0xff;
  }
  local_43 = *(int *)(param_1 + 0x1810) == 7;
  local_54 = (float)(int)(fVar7 * 999.99994) * 0.001;
  fStack_50 = (float)iVar6 * 0.25;
  *(int *)(param_1 + 0x18eb) = (int)(fVar8 * 999.99994);
  local_48 = *(uint *)((long)puVar1 + 0x2b4) & 0xffff0000;
  local_4c = (float)(int)(fVar8 * 999.99994) * 0.001;
  *(short *)(param_1 + 0x18ef) = (short)(*(uint *)((long)puVar1 + 0x2b4) >> 0x10);
  puVar4 = PTR_DAT_04bb37e0;
  puVar3 = PTR_DAT_04bb2010;
  if (*(char *)(param_1 + 0x2264) != '\0') {
    return 0;
  }
  local_5c = 0;
  local_70 = 0;
  fStack_68 = 0.0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5e = 0;
  local_80 = PTR_DAT_04bb2010 + 0x10;
  uStack_78 = 0;
  local_88 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_84 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  uVar5 = FUN_01505d50(&local_88,&local_54);
  if (((uVar5 & 1) == 0) ||
     ((*(int *)(param_1 + 0x1810) == 7 && (uVar5 = FUN_023de480(param_1), (uVar5 & 1) != 0)))) {
    if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1) {
      return 0;
    }
    local_88 = *(undefined4 *)puVar4;
    uStack_84 = *(undefined4 *)(puVar4 + 4);
    local_80 = puVar3 + 0x10;
    local_5c = 0;
    uStack_78 = 0;
    local_70 = 0;
    fStack_68 = 0.0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    uVar5 = FUN_0150657c(&local_88,&local_54);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if ((param_2 & 1) != 0) {
      return 1;
    }
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined1 *)(param_1 + 0x1980) = uStack_5e;
    iVar6 = (int)(fStack_68 * 4.0);
    *(undefined4 *)(param_1 + 0x1981) = local_70._4_4_;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined4 *)(param_1 + 0x1987) = uStack_64;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x1985) = (short)iVar6;
    *(undefined1 *)(param_1 + 0x198b) = 1;
  }
  else {
    if ((param_2 & 1) != 0) {
      return 1;
    }
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined1 *)(param_1 + 0x1980) = uStack_5e;
    iVar6 = (int)(fStack_68 * 4.0);
    *(undefined4 *)(param_1 + 0x1981) = local_70._4_4_;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined4 *)(param_1 + 0x1987) = uStack_64;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x1985) = (short)iVar6;
  }
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
  lVar2 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar2 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar2,0x55);
  return 1;
}

