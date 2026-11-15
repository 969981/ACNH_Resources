
void FUN_0240e684(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  int local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  
  local_38 = 0x3f800000;
  local_40 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  bVar4 = *(byte *)(param_1 + 0x1ee8);
  fStack_3c = (float)*(int *)(param_1 + 0x1910) * 0.001;
  local_44 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  local_48 = CONCAT31(local_48._1_3_,bVar4);
  local_34 = 1;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_48,*(undefined4 *)(param_1 + 0x230),1);
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1ee8);
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar3 * 0x740;
    if (7 < uVar3) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined4 *)(lVar1 + 0x424) = 2;
    local_48 = FUN_01392d64(lVar1 + 0x4c8);
    *(int *)(lVar1 + 0x420) = local_48;
    *(int *)(lVar1 + 0x4c0) = *(int *)(lVar1 + 0x4c0) + 1;
    if (local_48 != 3) {
      if (local_48 == 1) {
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(undefined8 *)(param_1 + 0x1997) = 0;
        *(undefined8 *)(param_1 + 0x199f) = 0;
        *(undefined8 *)(param_1 + 0x19a7) = 0;
        *(undefined8 *)(param_1 + 0x19af) = 0;
        *(undefined8 *)(param_1 + 0x19b7) = 0;
        *(undefined8 *)(param_1 + 0x19bf) = 0;
        *(undefined8 *)(param_1 + 0x19c7) = 0;
        *(undefined8 *)(param_1 + 0x19cf) = 0;
        *(undefined4 *)(param_1 + 0x19d6) = 0;
        *(undefined8 *)(param_1 + 0x198f) = *(undefined8 *)(param_1 + 0x190f);
        *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
        local_48 = 0x20;
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
        FUN_03ebb160(lVar1,0x20);
      }
      else {
        uVar2 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
        if ((uVar2 & 1) == 0) {
          local_40 = 0.0;
          local_48 = 6;
          local_44 = (float)CONCAT31(local_44._1_3_,1);
          FUN_02374e74(param_1,&local_48);
        }
      }
    }
  }
  return;
}

