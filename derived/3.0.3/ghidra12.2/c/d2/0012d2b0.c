
ulong FUN_0012d2b0(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  char local_34 [4];
  
  uVar7 = FUN_0012e3d0(param_1,param_3,0xff,param_2 + 0x3b,0x70);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  *(char *)((long)param_2 + 0x15e) = (char)uVar7;
  sVar5 = FUN_0012dfe0(param_1,param_3,param_2 + 3,0x70);
  if (sVar5 < 0) {
    return (ulong)(uint)(int)sVar5;
  }
  *(char *)(param_2 + 0x57) = (char)sVar5;
  if (param_1 == 0) {
    return 0xae42;
  }
  if (param_3 == 0) {
    return 0x8542;
  }
  uVar6 = *(ushort *)(param_3 + 0x80) & 0xf;
  if (4 < uVar6) {
    return 0x9b42;
  }
  puVar1 = param_2 + 0x1f;
  switch(uVar6) {
  case 0:
    uVar7 = FUN_0010b7a0(param_1,param_3,puVar1,0x70);
    sVar5 = (short)uVar7;
    break;
  default:
    uVar7 = FUN_00105e20(param_1,param_3,puVar1,0x70);
    sVar5 = (short)uVar7;
    goto joined_r0x0012d3bc;
  case 2:
    uVar7 = FUN_001310d0(param_1,param_3,puVar1,0x70);
    sVar5 = (short)uVar7;
    break;
  case 3:
    uVar7 = FUN_00105af0(param_1,param_3,puVar1,0x70);
    sVar5 = (short)uVar7;
joined_r0x0012d3bc:
    if (sVar5 < 0) {
      return uVar7;
    }
    goto LAB_0012d3c0;
  }
  if (-1 < sVar5) {
LAB_0012d3c0:
    *(char *)((long)param_2 + 0x15d) = (char)uVar7;
    *param_2 = *(undefined4 *)(param_3 + 0x60);
    *(ushort *)(param_2 + 1) = *(ushort *)(param_3 + 0x70) >> 7;
    puVar9 = (ushort *)(param_2 + 2);
    *puVar9 = *(ushort *)(param_3 + 0x72) >> 7;
    bVar4 = *(byte *)(param_3 + 0x7a);
    *(byte *)((long)param_2 + 0x15f) = bVar4 & 0x7f;
    lVar8 = 0x72;
    if ((bVar4 & 0x7f) != 0) {
      lVar8 = 0x7c;
    }
    *(ushort *)((long)param_2 + 6) = *(ushort *)(param_3 + lVar8) >> 7;
    puVar2 = (undefined8 *)(param_1 + 0x6fb50);
    sVar5 = FUN_0011f660(*puVar2,4);
    if (((sVar5 != 0) && (*(short *)(param_2 + 1) == sVar5)) &&
       (sVar5 = FUN_0011f660(*puVar2,10), sVar5 != 0)) {
      *(short *)(param_2 + 1) = sVar5;
    }
    sVar5 = FUN_0011f660(*puVar2,5);
    if (((sVar5 != 0) && (*(short *)((long)param_2 + 6) == sVar5)) &&
       (sVar5 = FUN_0011f660(*puVar2,0xb), sVar5 != 0)) {
      *(short *)((long)param_2 + 6) = sVar5;
    }
    uVar6 = FUN_0011f660(*puVar2,5);
    if (((uVar6 != 0) && (*puVar9 == uVar6)) && (uVar6 = FUN_0011f660(*puVar2,0xb), uVar6 != 0)) {
      *puVar9 = uVar6;
    }
    if (((((*(byte *)(param_3 + 0x66) & 0xf0) == 0x10) && (*(char *)(param_3 + 0x74) == '\0')) &&
        (lVar8 = *(long *)(param_3 + 0x10), lVar8 != 0)) && (1 < *(byte *)(param_3 + 0x68) - 1)) {
      if (*(byte *)(param_3 + 0x68) == 3) {
        uVar3 = *(uint *)(lVar8 + 0x70);
      }
      else {
        uVar3 = (*(uint *)(lVar8 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar8 + 8) & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      }
      if ((uVar3 == 0x80020000) &&
         (sVar5 = FUN_0011da90(param_1,param_3,puVar9,local_34), sVar5 != 0)) {
        *(char *)((long)param_2 + 0x15f) = *(char *)((long)param_2 + 0x15f) + local_34[0];
        return 0;
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}

