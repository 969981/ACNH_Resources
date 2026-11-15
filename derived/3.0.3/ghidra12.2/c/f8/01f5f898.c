
undefined8 FUN_01f5f898(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  iVar5 = *(int *)(param_1 + 0x13648);
  if ((iVar5 == 0) || (iVar5 = iVar5 + -1, *(int *)(param_1 + 0x13648) = iVar5, iVar5 == 0)) {
    lVar6 = *(long *)(param_1 + 8);
    uVar1 = *(uint *)(lVar6 + 0x288);
    *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
    uVar1 = uVar1 ^ uVar1 << 0xb;
    *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
    uVar2 = *(uint *)(lVar6 + 0x294);
    *(uint *)(lVar6 + 0x290) = uVar2;
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    *(uint *)(lVar6 + 0x294) = uVar1;
    iVar5 = (int)((ulong)uVar1 + (ulong)uVar1 * 2 >> 0x20);
    if (iVar5 == 1) {
      uVar3 = 0x26;
      uVar4 = 1;
    }
    else {
      if (iVar5 == 2) {
        uVar3 = 0x25;
      }
      else {
        uVar3 = 0x27;
      }
      uVar4 = 0;
    }
    FUN_01e6648c(param_1,uVar3,0,uVar4);
    if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "ApproachUpdateStop";
      FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_40,1);
    }
    if (*(char *)(param_1 + 0x13716) != '\0') {
      *(char *)(param_1 + 0x13716) = '\0';
    }
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x1367c) = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

