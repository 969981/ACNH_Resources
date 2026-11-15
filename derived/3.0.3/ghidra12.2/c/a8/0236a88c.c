
undefined8 FUN_0236a88c(long param_1,undefined1 param_2,ulong param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  undefined4 local_48 [2];
  char local_28 [4];
  undefined4 local_24;
  
  if (((param_3 & 1) == 0) || (uVar5 = FUN_02430730(param_1,0,0,0), (uVar5 & 1) == 0)) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f08c8 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f08c8);
        puVar8 = &DAT_054f08c0;
        if (iVar4 != 0) {
          DAT_054f08c0 = 0;
          __cxa_guard_release(&DAT_054f08c8);
          puVar8 = &DAT_054f08c0;
        }
      }
      else {
        puVar8 = &DAT_054f08c0;
      }
    }
    else {
      puVar8 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
    }
    local_48[0] = 1;
    if ((*puVar8 >> 1 & 1) == 0) {
      pbVar1 = (byte *)(param_1 + 0x1ee8);
      local_28[0] = '\0';
      local_24 = 0xffffffff;
      FUN_0254cf54(local_48,pbVar1,&local_24,local_28);
      if ((local_28[0] != '\0') &&
         (uVar5 = FUN_02535300(pbVar1,*(undefined4 *)(param_1 + 0x230),local_48,local_24),
         (uVar5 & 1) != 0)) {
        if (*pbVar1 < 8) {
          uVar3 = FUN_02582d8c(pbVar1,1);
          puVar2 = PTR_DAT_04bb4fb8;
          if ((((uVar3 < 8) &&
               (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
              (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) &&
             ((uVar3 = FUN_02582d8c(pbVar1,1), uVar3 < 8 &&
              (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))) {
            *(undefined4 *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x4e0) = 0;
          }
        }
        goto LAB_0236aa00;
      }
    }
    local_24 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined1 *)(param_1 + 0x1981) = param_2;
      *(undefined4 *)(param_1 + 0x2244) = param_4;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined1 *)(param_1 + 0x1980) = 1;
      local_48[0] = 5;
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
      lVar7 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar7 = *(long *)(param_1 + 0x70) + 0x278;
      }
    }
    else {
      local_48[0] = 0x13e;
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      lVar7 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar7 = *(long *)(param_1 + 0x70) + 0x278;
      }
    }
    FUN_03ebb160(lVar7,local_48[0]);
    uVar6 = 0;
  }
  else {
LAB_0236aa00:
    uVar6 = 1;
  }
  return uVar6;
}

