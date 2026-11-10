
ulong FUN_0012dfe0(long param_1,long *param_2,long param_3,short param_4)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0xae43;
  }
  if (param_2 == (long *)0x0) {
    return 0x8543;
  }
  if (param_3 == 0) {
    return 0x9443;
  }
  if (param_4 == 0) {
    return 0x9443;
  }
  uVar2 = *(ushort *)(param_2 + 0x10);
  switch(uVar2 & 0xf) {
  case 0:
    uVar5 = FUN_0010b5b0(param_1,param_2,param_3);
    return uVar5;
  case 1:
  case 4:
    uVar5 = FUN_00105af0(param_1,param_2,param_3);
    return uVar5;
  case 2:
    uVar5 = FUN_001312d0(param_1,param_2,param_3);
    return uVar5;
  case 3:
    break;
  default:
    return 0x9b43;
  }
  if ((uVar2 & 0xf0) != 0x30) {
    return 0xa843;
  }
  if ((uVar2 >> 0xb & 1) == 0) {
    uVar4 = FUN_0010b5b0(param_1,param_2,param_3);
    sVar3 = (short)uVar4;
  }
  else {
    if (*(char *)((long)param_2 + 0x74) == '\x02') {
      lVar1 = 0x72;
      if (1 < (byte)((*(byte *)((long)param_2 + 0x67) >> 4) - 5)) {
        lVar1 = 0x70;
      }
      uVar2 = *(ushort *)((long)param_2 + lVar1);
      uVar4 = uVar2 & 0x7f;
      FUN_00100380(param_3,*param_2,uVar4);
      *(undefined2 *)(param_3 + ((ulong)uVar2 & 0x7f) * 2) = 0;
      uVar5 = (ulong)*(ushort *)((long)param_2 + 0x7a) & 0x7f;
      iVar6 = (int)uVar5;
      goto joined_r0x0012e12c;
    }
    lVar1 = 0x72;
    if (1 < (byte)((*(byte *)((long)param_2 + 0x67) >> 4) - 5)) {
      lVar1 = 0x70;
    }
    uVar4 = FUN_001141e0(*param_2,param_3,*(ushort *)((long)param_2 + lVar1) & 0x7f,0x37);
    sVar3 = (short)uVar4;
  }
  if (sVar3 < 0) {
    return (ulong)uVar4;
  }
  uVar5 = (ulong)*(ushort *)((long)param_2 + 0x7a) & 0x7f;
  iVar6 = (int)uVar5;
joined_r0x0012e12c:
  if (iVar6 != 0) {
    lVar1 = 0x72;
    if (1 < (byte)((*(byte *)((long)param_2 + 0x67) >> 4) - 5)) {
      lVar1 = 0x70;
    }
    FUN_00100380(param_3 + (long)(short)uVar4 * 2,
                 *param_2 + ((ulong)*(ushort *)((long)param_2 + lVar1) & 0x7f) * 2,uVar5);
  }
  *(undefined2 *)(param_3 + (long)(short)uVar4 * 2 + uVar5 * 2) = 0;
  return (ulong)((int)uVar5 + uVar4);
}

