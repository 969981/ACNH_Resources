
void FUN_01258ab0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  plVar1 = (long *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0xbc);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe | *(byte *)(param_2 + 0xb8);
  uVar3 = 0;
  do {
    uVar5 = (ulong)uVar3;
    if (7 < uVar3) {
      uVar5 = 0;
    }
    if (*(long *)(param_2 + 0x78 + uVar5 * 8) != 0) {
      uVar5 = (ulong)uVar3;
      if (7 < uVar3) {
        uVar5 = 0;
      }
      plVar2 = plVar1 + uVar3;
      if (7 < uVar3) {
        plVar2 = plVar1;
      }
      *plVar2 = *(long *)(param_2 + 0x78 + uVar5 * 8);
      plVar2 = plVar1 + uVar3;
      if (7 < uVar3) {
        plVar2 = plVar1;
      }
      *(undefined8 *)(*plVar2 + 0x1a8) = *(undefined8 *)(param_2 + 0x60);
      plVar2 = plVar1 + uVar3;
      if (7 < uVar3) {
        plVar2 = plVar1;
      }
      lVar6 = *plVar2;
      *(undefined ***)(lVar6 + 0x108) = &PTR_FUN_049890a8;
      *(long *)(lVar6 + 0x110) = param_1;
      *(uint *)(lVar6 + 0x118) = uVar3;
      plVar2 = plVar1 + uVar3;
      if (7 < uVar3) {
        plVar2 = plVar1;
      }
      if (*plVar2 != 0) {
        lVar6 = param_1 + 200 + (ulong)uVar3 * 0x10;
        if (7 < uVar3) {
          lVar6 = param_1 + 200;
        }
        *(long *)(lVar6 + 8) = *plVar2;
      }
    }
    uVar4 = 8;
    if ((int)uVar3 < 8) {
      uVar4 = uVar3 + 1;
    }
    uVar3 = uVar4;
  } while (uVar4 != 8);
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 != 0) {
    *(long *)(param_1 + 0xa0) = lVar6;
    *(undefined8 *)(lVar6 + 0x48040) = *(undefined8 *)(param_2 + 0x60);
    if (*(long *)(param_2 + 0x50) != 0) {
      *(long *)(param_1 + 0x150) = *(long *)(param_2 + 0x50);
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x34);
    }
  }
  lVar6 = *(long *)(param_2 + 0x58);
  if (lVar6 != 0) {
    *(long *)(param_1 + 0xa8) = lVar6;
    *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(param_2 + 0x60);
  }
  lVar6 = *(long *)(param_2 + 0x60);
  if (lVar6 != 0) {
    *(long *)(param_1 + 0xb0) = lVar6;
    *(long *)(lVar6 + 0x10) = param_1;
  }
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x68);
  lVar6 = *(long *)(param_2 + 0x70);
  if (lVar6 != 0) {
    *(long *)(param_1 + 0xc0) = lVar6;
    *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_2 + 0x60);
  }
  return;
}

