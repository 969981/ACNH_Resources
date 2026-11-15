
/* WARNING: Removing unreachable block (ram,0x023baf3c) */
/* WARNING: Removing unreachable block (ram,0x023baf60) */

void FUN_023bacf4(long param_1,long param_2,undefined4 *param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  cVar4 = '\0';
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined2 *)(param_1 + 0x1980) = *(undefined2 *)(param_2 + 2);
  if (*(int *)(param_1 + 0x178) != 1) {
    uVar3 = FUN_00a738a0(param_1 + 0x1ee8,0);
    cVar4 = '\0';
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_00a74b78(param_1 + 0x1ee8);
      cVar4 = '\x01';
      if (uVar2 < 0xf) {
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x600dU) == 0) {
          if ((uVar2 == 7) || (uVar2 == 9)) {
            cVar4 = ((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
          }
        }
        else {
          cVar4 = '\x02';
        }
      }
    }
  }
  *(byte *)(param_1 + 0x1983) = param_4 & 1;
  *(char *)(param_1 + 0x1982) = cVar4;
  if (*(int *)(param_1 + 0x1810) == 1) {
    if (param_3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x874) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x874) = 1;
      *(undefined4 *)(param_1 + 0x878) = *param_3;
      *(undefined4 *)(param_1 + 0x87c) = param_3[1];
      *(undefined4 *)(param_1 + 0x880) = param_3[2];
      *(undefined2 *)(param_1 + 0x884) = *(undefined2 *)(param_3 + 3);
      *(undefined4 *)(param_1 + 0x888) = param_3[4];
      uVar5 = *(undefined8 *)(param_3 + 5);
      *(undefined8 *)(param_1 + 0x891) = *(undefined8 *)((long)param_3 + 0x19);
      *(undefined8 *)(param_1 + 0x88c) = uVar5;
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
    lVar1 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar1,0x17);
    return;
  }
  if (param_3 != (undefined4 *)0x0) {
    FUN_023ca3ec(param_1,param_3);
    return;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_023752f4(param_1,cVar4,6);
    return;
  }
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
  if (cVar4 == '\x01') {
    FUN_0231b68c(param_1,6);
    return;
  }
  FUN_023164ec(param_1,6);
  return;
}

