
void FUN_0284c8f8(long param_1,undefined4 param_2,byte param_3,ulong param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 local_1c;
  byte local_1b;
  uint local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  switch(param_2) {
  case 0:
    *(byte *)(param_1 + 0x79) = param_3 & 1;
    goto joined_r0x0284ca14;
  case 1:
    *(byte *)(param_1 + 0x78) = param_3 & 1;
    goto joined_r0x0284ca14;
  case 2:
    *(byte *)(param_1 + 0x130) = param_3 & 1;
    goto joined_r0x0284ca14;
  case 3:
    *(byte *)(param_1 + 0x168) = param_3 & 1;
    goto joined_r0x0284ca14;
  case 4:
    local_18 = 0;
    break;
  case 5:
    local_18 = 1;
    break;
  case 6:
    local_18 = 2;
    break;
  case 7:
    local_18 = 3;
    break;
  case 8:
    local_18 = 4;
    break;
  case 9:
    local_18 = 5;
    break;
  case 10:
    local_18 = 6;
    break;
  case 0xb:
    local_18 = 7;
    break;
  case 0xc:
    local_18 = 8;
    break;
  case 0xd:
    *(byte *)(param_1 + 0xf4) = param_3 & 1;
    goto joined_r0x0284ca14;
  case 0xe:
    local_18 = 9;
    break;
  case 0xf:
    if ((param_3 & 1) == 0) {
      uVar2 = 1;
      goto LAB_0284cacc;
    }
    uVar2 = 1;
LAB_0284ca08:
    *(byte *)(param_1 + 0x16a) = *(byte *)(param_1 + 0x16a) | (byte)(1 << (ulong)uVar2);
    goto joined_r0x0284ca14;
  case 0x10:
    if ((param_3 & 1) != 0) {
      uVar2 = 2;
      goto LAB_0284ca08;
    }
    uVar2 = 2;
LAB_0284cacc:
    *(byte *)(param_1 + 0x16a) = *(byte *)(param_1 + 0x16a) & ((byte)(1 << (ulong)uVar2) ^ 0xff);
joined_r0x0284ca14:
    if ((param_4 & 1) == 0) {
      return;
    }
    goto LAB_0284ca4c;
  case 0x11:
    local_18 = 10;
    break;
  default:
    goto switchD_0284c928_default;
  }
  uVar3 = (ushort)(1 << (ulong)local_18);
  uVar1 = *(ushort *)(param_1 + 0xbe) | uVar3;
  if ((param_3 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0xbe) & (uVar3 ^ 0xffff);
  }
  *(ushort *)(param_1 + 0xbe) = uVar1;
  if ((param_4 & 1) != 0) {
LAB_0284ca4c:
    local_1b = param_3 & 1;
    local_18 = 0;
    local_12 = 0;
    local_1c = (undefined1)param_2;
    local_14 = 0xff00;
    if (-1 < DAT_053d0d70) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d70,&local_18,&local_1c,2,0);
    }
  }
switchD_0284c928_default:
  return;
}

