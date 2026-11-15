
void FUN_023e2aa0(long param_1,undefined4 *param_2,long param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x178) != 1) && (*(byte *)(param_1 + 0x1ee8) < 8)) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    uVar4 = FUN_02582d8c(pbVar1,1);
    puVar3 = PTR_DAT_04bb4fb8;
    if (((uVar4 < 8) &&
        (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) &&
         (uVar4 = FUN_02582d8c(pbVar1,1), uVar4 < 8)))) &&
       ((*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
        (*(int *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x4f8) != 0)))) {
      lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
      if (7 < *pbVar1) {
        lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      *(undefined8 *)(lVar2 + 0x5b0) = 0x100000000;
      *(undefined4 *)(lVar2 + 0x650) = 0;
      uVar5 = FUN_022ccfd4(lVar2 + 0x658);
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x20f0) = *(undefined4 *)(lVar2 + 0x66c);
        uVar4 = *(uint *)(param_1 + 0x17d0) & 0xfffffffe;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x17d0) | 1;
      }
      *(uint *)(param_1 + 0x17d0) = uVar4;
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined4 *)(param_1 + 0x1980) = *param_2;
      iVar6 = (int)((float)param_2[1] * 4.0);
      if (0x7ffe < iVar6) {
        iVar6 = 0x7fff;
      }
      if (iVar6 < -0x7fff) {
        iVar6 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar6;
      *(undefined4 *)(param_1 + 0x1986) = param_2[2];
      *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)(param_3 + 2);
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
      FUN_03ebb160(lVar2,0x4d);
    }
  }
  return;
}

