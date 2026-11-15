
undefined8 FUN_0247fe88(long param_1,long param_2)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x17d4) < '\0') {
    return 0;
  }
  uVar6 = FUN_0247fbe4();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
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
  puVar3 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x298) == 0) {
LAB_0247ff8c:
    puVar7 = (undefined8 *)&DAT_05586008;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    if (*(char *)(lVar8 + 0x1d5) != '\0') {
      puVar7 = (undefined8 *)(lVar8 + 0xcc);
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(puVar7);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0247ff78;
        goto LAB_0247ffac;
      }
LAB_0247ff78:
      iVar5 = FUN_0277d6c4(puVar7);
      if (iVar5 == 0xfffd) goto LAB_0247ff8c;
    }
    puVar7 = (undefined8 *)(lVar8 + 0xd4);
  }
LAB_0247ffac:
  *(undefined8 *)(param_1 + 0x1980) = *puVar7;
  *(undefined2 *)(param_1 + 0x1988) = *(undefined2 *)(*(long *)(param_1 + 0x68) + 0x2b6);
  local_38 = *(undefined4 *)(param_1 + 0x230);
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_34 = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      local_34._2_2_ = 0;
      goto LAB_02480034;
    }
  }
  FUN_016f742c(&local_34,&local_38,0);
LAB_02480034:
  *(undefined2 *)(param_1 + 0x198a) = local_34._2_2_;
  *(undefined1 *)(param_1 + 0x198c) = 0;
  *(char *)(param_1 + 0x198d) = (char)*(undefined4 *)(param_2 + 0xc);
  local_34 = 0xbc;
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
  lVar8 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar8 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar8,0xbc);
  return 1;
}

