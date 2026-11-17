
void FUN_02da62a0(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_30;
  undefined1 auStack_2c [12];
  
  lVar4 = *(long *)(param_1 + 8);
  FUN_02d949c0(auStack_2c,lVar4);
  uVar3 = *(uint *)(lVar4 + 0x1c260);
  local_30 = 0xffffffff;
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar4 + 0x1c248))) {
    lVar2 = lVar4 + 0x1c238;
    uVar1 = uVar3 + 1 & 3;
    if (2 < uVar3) {
      uVar3 = uVar3 + 1 & 0xfffffffc;
      do {
        uVar3 = uVar3 - 4;
        lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(lVar2 + 8) + 8) + 8) + 8);
      } while (uVar3 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar2 = *(long *)(lVar2 + 8);
    }
    local_30 = 0xffffffff;
    if ((lVar2 != 0) && (lVar2 = lVar2 - *(int *)(lVar4 + 0x1c24c), lVar2 != 0)) {
      local_30 = *(undefined4 *)(lVar2 + 0x270);
    }
  }
  FUN_0345c6c0(auStack_2c,&local_30);
  return;
}

