
void FUN_023c5664(long param_1,undefined4 *param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_28);
  if (*(long *)puVar3 == 0) {
LAB_023c56e0:
    local_48 = 0x8a5;
    FUN_0277d4ac(&local_48);
    local_28 = (undefined4)local_48;
    uStack_24 = local_48._4_4_;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_023c56e0;
  }
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
  uVar2 = (undefined4)((ulong)local_48 >> 0x20);
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(ulong *)(param_1 + 0x1980) = CONCAT44(uStack_24,local_28);
  *(ulong *)(param_1 + 0x1988) = CONCAT44(uStack_24,local_28);
  local_48 = CONCAT44(uVar2,param_3);
  *(undefined1 *)(param_1 + 0x1991) = 0;
  local_4c = *(undefined4 *)(param_1 + 0x230);
  *(char *)(param_1 + 0x1990) = (char)param_3;
  if (DAT_04c487d4 != -1) {
    local_48 = CONCAT44(uVar2,1);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      uVar5 = 0;
      goto LAB_023c57d8;
    }
  }
  FUN_016f742c(&local_48,&local_4c,0);
  uVar5 = local_48._2_2_;
LAB_023c57d8:
  *(undefined2 *)(param_1 + 0x1992) = uVar5;
  local_48 = CONCAT44(local_48._4_4_,0x27);
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
  lVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar6 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar6,0x27);
  return;
}

