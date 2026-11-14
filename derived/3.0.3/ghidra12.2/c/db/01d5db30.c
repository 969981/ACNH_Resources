
void FUN_01d5db30(long param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0xab6) != '\0') {
    FUN_026f5fbc(DAT_05574040);
  }
  *(undefined1 *)(param_1 + 0xab6) = 0;
  if (DAT_0556aa70 != 0) {
    *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 8;
  }
  FUN_01dad900();
  if (DAT_05590f40 != 0) {
    FUN_027c4060();
  }
  lVar4 = *DAT_0537d558;
  cVar3 = *(char *)(lVar4 + 0x473);
  if (cVar3 == '\0') {
LAB_01d5dbd4:
    if ((*(uint *)(lVar4 + 200) >> 2 & 1) != 0) {
      *(uint *)(lVar4 + 200) = *(uint *)(lVar4 + 200) & 0xfffffffb;
    }
    FUN_01d3e314(lVar4 + 8);
    if (cVar3 != '\x02') goto LAB_01d5dbf4;
LAB_01d5dc1c:
    lVar4 = *DAT_0537d558;
    if ((*(uint *)(lVar4 + 0x1c8) >> 2 & 1) != 0) {
      *(uint *)(lVar4 + 0x1c8) = *(uint *)(lVar4 + 0x1c8) & 0xfffffffb;
    }
    FUN_01d3e314(lVar4 + 8);
    if (cVar3 != '\x04') goto LAB_01d5dc44;
LAB_01d5dc6c:
    lVar4 = *DAT_0537d558;
    if ((*(uint *)(lVar4 + 0x2c8) >> 2 & 1) != 0) {
      *(uint *)(lVar4 + 0x2c8) = *(uint *)(lVar4 + 0x2c8) & 0xfffffffb;
    }
    FUN_01d3e314(lVar4 + 8);
    if (cVar3 != '\x06') goto LAB_01d5dc94;
LAB_01d5dcbc:
    lVar4 = *DAT_0537d558;
    if ((*(uint *)(lVar4 + 0x3c8) >> 2 & 1) != 0) {
      *(uint *)(lVar4 + 0x3c8) = *(uint *)(lVar4 + 0x3c8) & 0xfffffffb;
    }
    FUN_01d3e314(lVar4 + 8);
  }
  else {
    if ((*(uint *)(lVar4 + 0x48) >> 2 & 1) != 0) {
      *(uint *)(lVar4 + 0x48) = *(uint *)(lVar4 + 0x48) & 0xfffffffb;
    }
    FUN_01d3e314(lVar4 + 8);
    if (cVar3 != '\x01') {
      lVar4 = *DAT_0537d558;
      goto LAB_01d5dbd4;
    }
LAB_01d5dbf4:
    lVar4 = *DAT_0537d558;
    if ((*(uint *)(lVar4 + 0x148) >> 2 & 1) != 0) {
      *(uint *)(lVar4 + 0x148) = *(uint *)(lVar4 + 0x148) & 0xfffffffb;
    }
    FUN_01d3e314(lVar4 + 8);
    if (cVar3 != '\x03') goto LAB_01d5dc1c;
LAB_01d5dc44:
    lVar4 = *DAT_0537d558;
    if ((*(uint *)(lVar4 + 0x248) >> 2 & 1) != 0) {
      *(uint *)(lVar4 + 0x248) = *(uint *)(lVar4 + 0x248) & 0xfffffffb;
    }
    FUN_01d3e314(lVar4 + 8);
    if (cVar3 != '\x05') goto LAB_01d5dc6c;
LAB_01d5dc94:
    lVar4 = *DAT_0537d558;
    if ((*(uint *)(lVar4 + 0x348) >> 2 & 1) != 0) {
      *(uint *)(lVar4 + 0x348) = *(uint *)(lVar4 + 0x348) & 0xfffffffb;
    }
    FUN_01d3e314(lVar4 + 8);
    if (cVar3 != '\a') goto LAB_01d5dcbc;
  }
  lVar4 = *DAT_0537d558;
  uVar2 = *(uint *)PTR_DAT_04bc1408;
  if (0 < (int)uVar2) {
    lVar5 = *(long *)(PTR_DAT_04bc1408 + 8);
    if (uVar2 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        lVar7 = *(long *)(lVar5 + uVar6 * 8);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x40) = 0;
        }
        lVar7 = *(long *)(lVar5 + uVar6 * 8 + 8);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x40) = 0;
        }
        uVar6 = uVar6 + 2;
      } while (((ulong)uVar2 & 0xfffffffe) != uVar6);
    }
    if (((uVar2 & 1) != 0) && (lVar5 = *(long *)(lVar5 + uVar6 * 8), lVar5 != 0)) {
      *(undefined1 *)(lVar5 + 0x40) = 0;
    }
  }
  *(undefined4 *)(lVar4 + 0x490) = 0xffffffff;
  FUN_01db0074(lVar4 + 0x480);
  if ((*(int *)(param_1 + 0xaa0) == 3) && (*(int *)(param_1 + 0x380) == 0x26)) {
    if (DAT_04c487d4 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 5 & 1) != 0) goto LAB_01d5dd94;
    }
    FUN_02918280();
  }
LAB_01d5dd94:
  *PTR_DAT_04bb4518 = 1;
  return;
}

