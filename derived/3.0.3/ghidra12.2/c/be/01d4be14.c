
void FUN_01d4be14(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int local_2c;
  int local_28;
  int local_24;
  
  if ((*(char *)(param_1 + 0xab0) != '\0') &&
     (((((((lVar5 = *DAT_0537d558, *(int *)(lVar5 + 0x554) != 0 ||
           ((*(uint *)(lVar5 + 0x48) & 6) == 4)) || ((*(uint *)(lVar5 + 200) & 6) == 4)) ||
         (((*(uint *)(lVar5 + 0x148) & 6) == 4 || ((*(uint *)(lVar5 + 0x1c8) & 6) == 4)))) ||
        (((*(uint *)(lVar5 + 0x248) & 6) == 4 ||
         (((*(uint *)(lVar5 + 0x2c8) & 6) == 4 || ((*(uint *)(lVar5 + 0x348) & 6) == 4)))))) ||
       ((*(uint *)(lVar5 + 0x3c8) & 6) == 4)) || (DAT_0537bdb8 != -1)))) {
    if ((*(char *)(param_1 + 0xab2) == '\0') &&
       (((0x22 < *(uint *)(param_1 + 0x380) ||
         ((1L << ((ulong)*(uint *)(param_1 + 0x380) & 0x3f) & 0x5e9e88000U) == 0)) &&
        (*(int *)(lVar5 + 0x554) == 0)))) {
      bVar3 = *(byte *)(lVar5 + 0x472);
      if ((long)(char)bVar3 == 0xffffffffffffffff) goto LAB_01d4bf0c;
      pbVar2 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
      if (7 < bVar3) {
        pbVar2 = (byte *)(lVar5 + 0x48);
      }
      if ((*pbVar2 >> 1 & 1) == 0) goto LAB_01d4bf0c;
      if (*(int *)(param_1 + 0x3e4) == 1) {
        local_2c = 0x23;
        FUN_03ebb160(param_1 + 0x378,0x23);
        local_24 = local_2c;
      }
      else {
        local_28 = 0x24;
        FUN_03ebb160(param_1 + 0x378,0x24);
        local_24 = local_28;
      }
    }
    else {
LAB_01d4bf0c:
      *(undefined8 *)(param_1 + 1000) = 0xb;
      local_24 = 0x26;
      FUN_03ebb160(param_1 + 0x378,0x26);
    }
    if (local_24 == *(int *)(param_1 + 0x3e0)) {
      lVar5 = *(long *)(param_1 + 0x3f0);
      if (*(int *)(param_1 + 1000) == 0) {
        if (lVar5 != 0) {
          uVar6 = 0;
          uVar7 = 0;
          uVar9 = 1;
          goto LAB_01d4bf68;
        }
      }
      else if (lVar5 != 0) {
        uVar6 = *(undefined4 *)(param_1 + 1000);
        uVar9 = 0xffffffff;
        uVar7 = *(undefined4 *)(param_1 + 0x3ec);
LAB_01d4bf68:
        *(undefined4 *)(lVar5 + 8) = uVar9;
        *(undefined4 *)(lVar5 + 0xc) = uVar6;
        *(undefined4 *)(lVar5 + 0x10) = uVar7;
        *(undefined4 *)(lVar5 + 0x14) = 0;
        if (*(undefined8 **)(param_1 + 0x3f0) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x3f0) = 0;
          *(undefined8 *)(param_1 + 0x3f0) = 0;
        }
      }
    }
  }
  FUN_01d6980c(param_1);
  uVar4 = *(uint *)(param_1 + 0x380);
  if ((uVar4 == 0xffffffff) && (*(char *)(param_1 + 0x398) != '\0')) {
    uVar6 = *(undefined4 *)(param_1 + 900);
    *(undefined8 *)(param_1 + 900) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x399) = 1;
    *(undefined4 *)(param_1 + 0x38c) = uVar6;
    uVar4 = *(uint *)(param_1 + 0x390);
    *(uint *)(param_1 + 0x380) = uVar4;
    if (uVar4 == 0xffffffff) {
      *(undefined1 *)(param_1 + 0x399) = 0;
      goto LAB_01d4c048;
    }
    uVar8 = *(uint *)(param_1 + 0x3a0);
    lVar5 = *(long *)(param_1 + 0x3a8);
    uVar1 = uVar4;
    if (uVar8 <= uVar4) {
      uVar1 = 0;
    }
    puVar10 = *(undefined8 **)(lVar5 + (long)(int)uVar1 * 0x40);
    if (puVar10 != (undefined8 *)0x0) {
      (*(code *)*puVar10)();
      uVar4 = *(uint *)(param_1 + 0x380);
      goto LAB_01d4bff8;
    }
    *(undefined1 *)(param_1 + 0x399) = 0;
  }
  else {
LAB_01d4bff8:
    *(undefined1 *)(param_1 + 0x399) = 0;
    if (uVar4 == 0xffffffff) goto LAB_01d4c048;
    uVar8 = *(uint *)(param_1 + 0x3a0);
    lVar5 = *(long *)(param_1 + 0x3a8);
  }
  if (uVar8 <= uVar4) {
    uVar4 = 0;
  }
  lVar5 = *(long *)(lVar5 + (long)(int)uVar4 * 0x40);
  if ((lVar5 != 0) && ((**(code **)(lVar5 + 8))(), *(char *)(param_1 + 0x399) != '\0')) {
    return;
  }
LAB_01d4c048:
  *(int *)(param_1 + 900) = *(int *)(param_1 + 900) + 1;
  return;
}

