
void FUN_02828db8(undefined1 *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 1;
  param_1[1] = *(undefined1 *)(param_2 + 0xcc);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x36e);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0xc0);
  param_1[6] = *(undefined1 *)(param_2 + 0xc2);
  param_1[7] = *(undefined1 *)(param_2 + 0xc3);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xbc);
  uVar3 = *(undefined8 *)(param_2 + 0xce);
  uVar5 = *(undefined8 *)(param_2 + 0xe6);
  uVar4 = *(undefined8 *)(param_2 + 0xd6);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xee);
  uVar3 = *(undefined8 *)(param_2 + 0xf6);
  uVar5 = *(undefined8 *)(param_2 + 0x106);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0xfe);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x10e);
  uVar3 = *(undefined8 *)(param_2 + 0x116);
  uVar5 = *(undefined8 *)(param_2 + 0x126);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x11e);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  memcpy(param_1 + 0x70,(void *)(param_2 + 0x12e),0x1e0);
  uVar4 = *(undefined8 *)(param_2 + 0x316);
  uVar3 = *(undefined8 *)(param_2 + 0x31e);
  uVar5 = *(undefined8 *)(param_2 + 0x326);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x30e);
  *(undefined8 *)(param_1 + 0x268) = uVar5;
  *(undefined8 *)(param_1 + 0x260) = uVar3;
  *(undefined8 *)(param_1 + 600) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x336);
  uVar3 = *(undefined8 *)(param_2 + 0x33e);
  uVar5 = *(undefined8 *)(param_2 + 0x346);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x32e);
  *(undefined8 *)(param_1 + 0x288) = uVar5;
  *(undefined8 *)(param_1 + 0x280) = uVar3;
  *(undefined8 *)(param_1 + 0x278) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x356);
  uVar3 = *(undefined8 *)(param_2 + 0x35e);
  uVar5 = *(undefined8 *)(param_2 + 0x366);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x34e);
  *(undefined8 *)(param_1 + 0x2a8) = uVar5;
  *(undefined8 *)(param_1 + 0x2a0) = uVar3;
  *(undefined8 *)(param_1 + 0x298) = uVar4;
  param_1[0x2b0] = *(undefined1 *)(param_2 + 200);
  if (((DAT_04f292d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04f292d0), iVar2 != 0)) {
    FUN_00dd5f80(&DAT_04f292c0);
    __cxa_guard_release(&DAT_04f292d0);
  }
  uVar1 = *param_3;
  if (*(uint *)PTR_DAT_04bb8aa0 <= uVar1) {
    uVar1 = 0;
  }
  param_1[0x2b4] = (char)*(undefined4 *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + (long)(int)uVar1 * 4);
  return;
}

