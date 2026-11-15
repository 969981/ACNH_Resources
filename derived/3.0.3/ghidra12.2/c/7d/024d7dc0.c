
void FUN_024d7dc0(long param_1,byte param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  byte local_6a;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  short local_4c [2];
  short local_48 [2];
  int local_44;
  
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  if ((((*(byte *)(param_1 + 0x1ee8) < 8) &&
       (uVar3 = FUN_02582d8c(pbVar1,1), puVar2 = PTR_DAT_04bb4fb8, uVar3 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
     (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar3 = FUN_02582d8c(pbVar1,1), uVar3 < 8)) &&
      (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))) {
    lVar4 = *(long *)puVar2 + (ulong)uVar3 * 0x13f0;
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar4 + 0x13b0));
    FUN_007ef010((long)&local_68 + 4,lVar4 + 0x13b4);
    local_44 = (int)local_68;
  }
  else {
    FUN_007ef010((long)&local_68 + 4,PTR_DAT_04bb3170);
    local_44 = 0;
  }
  if (((*pbVar1 < 8) && (uVar3 = FUN_02582d8c(pbVar1,1), puVar2 = PTR_DAT_04bb4fb8, uVar3 < 8)) &&
     ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0' &&
      (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
        (uVar3 = FUN_02582d8c(pbVar1,1), uVar3 < 8)) &&
       (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))))) {
    lVar4 = *(long *)puVar2 + (ulong)uVar3 * 0x13f0;
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar4 + 0x13b0));
    FUN_007ef010((long)&local_68 + 4,lVar4 + 0x13b4);
  }
  else {
    puVar2 = PTR_DAT_04bb3170;
    FUN_007ef010((long)&local_68 + 4,PTR_DAT_04bb3170);
    local_68 = (ulong)CONCAT22((short)((ulong)local_68 >> 0x30),*(undefined2 *)puVar2) << 0x20;
  }
  FUN_007ef010(local_48,(long)&local_68 + 4);
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  puVar2 = PTR_DAT_04bb3170;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_007ef010(local_4c,PTR_DAT_04bb3170);
  if (*(int *)(param_1 + 0x1810) == 7) {
    local_6a = *pbVar1;
    local_74 = 0x100000000;
    lVar4 = *(long *)(param_1 + 0x68);
    local_6c = *(undefined2 *)puVar2;
    local_7c = *(undefined4 *)(lVar4 + 0x280);
    if (7 < local_6a) {
      local_6a = 0xff;
    }
    local_84 = *(undefined8 *)(lVar4 + 0x278);
    local_78 = *(undefined4 *)(lVar4 + 0x2b4);
    FUN_0150a560(&local_68,&local_84);
  }
  else {
    FUN_01509db4(&local_68,pbVar1);
  }
  if (local_44 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = (uStack_58._4_4_ != local_44 || local_4c[0] != local_48[0]) & param_2;
  }
  *(byte *)(param_1 + 0x1980) = param_2;
  local_84 = CONCAT44(local_84._4_4_,local_44);
  *(bool *)(param_1 + 0x1981) = *(int *)(param_1 + 0x1810) == 7;
  *(short *)(param_1 + 0x1984) = local_48[0];
  local_68 = CONCAT44(local_68._4_4_,0x10f);
  *(char *)(param_1 + 0x1982) = (char)local_44;
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
  lVar4 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar4 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar4,0x10f);
  return;
}

