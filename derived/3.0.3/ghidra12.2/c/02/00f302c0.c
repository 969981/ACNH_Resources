
undefined8 FUN_00f302c0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb4740;
  uVar1 = *param_1;
  if ((int)*(uint *)(lVar5 + 0x1c0) < 1) {
    if (*(long *)(lVar5 + 0xb0) == 0) {
      return 0xff;
    }
    puVar3 = *(uint **)(*(long *)(lVar5 + 0xb0) + 8);
    if (puVar3 == (uint *)0x0) {
      return 0xff;
    }
    if ((uVar1 < *(uint *)(lVar5 + 200)) &&
       (*(char *)(*(long *)(lVar5 + 0xd0) + (long)(int)uVar1) == '\0')) {
      return 0xff;
    }
    if (*puVar3 <= uVar1) {
      return 0xff;
    }
    if (puVar3[1] == 0) {
      return 0xff;
    }
    if ((ushort)puVar3[2] == 0) {
      return 0xff;
    }
    iVar4 = 0xc;
    if (*(char *)((long)puVar3 + 10) != '\0') {
      iVar4 = 0x1c;
    }
    lVar5 = (ulong)(puVar3[1] * uVar1 + (uint)(ushort)puVar3[2] * 8 + iVar4) + (long)puVar3;
  }
  else {
    if (*(uint *)(lVar5 + 0x1c0) <= uVar1) {
      return 0xff;
    }
    if (*(uint *)(lVar5 + 0x1b0) <= uVar1) {
      uVar1 = 0;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x1b8) + (ulong)uVar1 * 8);
  }
  if (lVar5 == 0) {
    return 0xff;
  }
  uVar2 = FUN_020fed50(lVar5,&DAT_054540cc,param_2);
  return uVar2;
}

