
uint FUN_03f2e940(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (((*(byte *)(param_1 + 8) >> 1 & 1) != 0) &&
     ((*(long *)(param_1 + 0x28) == 0 || (*(int *)(param_1 + 0x20) != 1)))) {
    DataMemoryBarrier(2,3);
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar6 + 0x108);
      if (iVar2 == 6) {
LAB_03f2e994:
        if (*(int *)(lVar6 + 0x10) == 7) goto LAB_03f2ea14;
      }
      else if (iVar2 != 1) {
        if (iVar2 != 0) goto LAB_03f2ea14;
        goto LAB_03f2e994;
      }
      if (((*(byte *)(param_1 + 8) >> 3 & 1) != 0) && (lVar6 != 0)) {
        puVar5 = *(undefined8 **)(lVar6 + 0x30);
        if (((*PTR_DAT_04bb4458 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar2 != 0)) {
          *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4458);
        }
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bb4450);
          if ((uVar3 & 1) == 0) {
            puVar5 = (undefined8 *)0x0;
          }
        }
        if ((*(int *)(lVar6 + 0x10) == 0xe) ||
           (((puVar5 == (undefined8 *)0x0 && (*(int *)(lVar6 + 0x10) == 8)) &&
            (*(long *)(lVar6 + 0x30) != 0)))) {
          return 1;
        }
      }
    }
  }
LAB_03f2ea14:
  if ((*(long *)(param_1 + 0x28) == 0) || (*(int *)(param_1 + 0x20) != 1)) {
    if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
      DataMemoryBarrier(2,3);
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 != 0) {
        iVar2 = *(int *)(lVar6 + 0x108);
        if (iVar2 != 6) {
          if (iVar2 == 1) goto LAB_03f2ea68;
          if (iVar2 != 0) goto LAB_03f2ea28;
        }
        if (*(int *)(lVar6 + 0x10) == 7) goto LAB_03f2ea28;
      }
    }
LAB_03f2ea68:
    if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
        uVar1 = 0;
        if (uVar4 < 0x10) {
          uVar1 = 0x9200U >> (ulong)(uVar4 & 0x1f) & 1;
        }
      }
    }
    if (*(int *)(param_1 + 0xc) < 5) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)(*(int *)(param_1 + 0xc) < 0xf);
    }
    uVar1 = uVar1 | uVar4;
  }
  else {
LAB_03f2ea28:
    uVar1 = 0;
  }
  return uVar1;
}

