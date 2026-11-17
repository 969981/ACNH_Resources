
void FUN_02e49b30(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined **local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined8 local_2a;
  undefined4 local_20;
  undefined8 local_1c;
  byte local_14;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x590);
  if (lVar3 != 0) {
    uVar6 = *(uint *)(param_1 + 0x588);
    iVar5 = -1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x570))) {
      lVar4 = param_1 + 0x560;
      uVar1 = uVar6 + 1 & 3;
      if (2 < uVar6) {
        uVar6 = uVar6 + 1 & 0xfffffffc;
        do {
          uVar6 = uVar6 - 4;
          lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
        } while (uVar6 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar4 = *(long *)(lVar4 + 8);
      }
      iVar5 = -1;
      if ((lVar4 != 0) && (lVar4 = lVar4 - *(int *)(param_1 + 0x574), lVar4 != 0)) {
        iVar5 = *(int *)(lVar4 + 0x270);
      }
    }
    if (iVar5 - 0x58U < 5) {
      uVar6 = *(uint *)(&DAT_04180b80 + (long)(int)(iVar5 - 0x58U) * 4);
    }
    else {
      uVar6 = 0;
    }
    if ((int)uVar6 < 6) {
      puVar2 = (undefined4 *)(param_1 + 0x310) + (ulong)uVar6 * 4;
      if (5 < uVar6) {
        puVar2 = (undefined4 *)(param_1 + 0x310);
      }
      local_38 = *puVar2;
    }
    else {
      local_38 = 0;
    }
    local_14 = *(byte *)(param_1 + 0x1f8);
    local_1c = 0x60000000c;
    if (7 < local_14) {
      local_14 = 0xff;
    }
    local_20 = 0;
    local_34 = 0;
    local_2c = 0;
    local_40 = &PTR_LAB_04b2b020;
    local_2a = (ulong)CONCAT14(*(undefined1 *)(param_1 + 0x1c6f8),0x1000001);
    FUN_03864290(lVar3,&local_40);
  }
  return;
}

