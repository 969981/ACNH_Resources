
void FUN_01da0eb8(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38 [6];
  
  lVar3 = *(long *)PTR_DAT_04bb49f8;
  uVar1 = 0;
  if (*(uint *)(lVar3 + 0x28) != 0xffffffff) {
    uVar1 = *(uint *)(lVar3 + 0x28);
  }
  if (*(uint *)(lVar3 + 8) <= uVar1) {
    uVar1 = 0;
  }
  lVar3 = *(long *)(lVar3 + 0x10) + (long)(int)uVar1 * 0x40;
  uVar2 = *(undefined4 *)(lVar3 + 0x34);
  if (*(char *)(lVar3 + 0x3a) == '\0') {
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 == 0) {
      return;
    }
    uVar4 = 0x3ffffffff;
  }
  else {
    local_38[0] = uVar2;
    FUN_02645730(local_38,param_1 + 0x50);
    FUN_02647610(local_38,param_1 + 0x58);
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 == 0) {
      return;
    }
    uVar4 = 1;
  }
  *(undefined8 *)(lVar3 + 8) = uVar4;
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 0x14) = uVar2;
  return;
}

