
bool FUN_03f2d924(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (((*(byte *)(param_1 + 8) >> 1 & 1) == 0) ||
     ((*(long *)(param_1 + 0x28) != 0 && (*(int *)(param_1 + 0x20) == 1)))) {
    return false;
  }
  DataMemoryBarrier(2,3);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
LAB_03f2d988:
    bVar1 = false;
  }
  else {
    iVar2 = *(int *)(lVar5 + 0x108);
    if (iVar2 == 6) {
LAB_03f2d97c:
      if (*(int *)(lVar5 + 0x10) == 7) goto LAB_03f2d988;
    }
    else if (iVar2 != 1) {
      if (iVar2 != 0) goto LAB_03f2d988;
      goto LAB_03f2d97c;
    }
    bVar1 = false;
    if (((*(byte *)(param_1 + 8) >> 3 & 1) != 0) && (lVar5 != 0)) {
      puVar4 = *(undefined8 **)(lVar5 + 0x30);
      if (((*PTR_DAT_04bb4458 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4458);
      }
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb4450);
        if ((uVar3 & 1) == 0) {
          puVar4 = (undefined8 *)0x0;
        }
      }
      if (*(int *)(lVar5 + 0x10) == 0xe) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
        if ((puVar4 == (undefined8 *)0x0) && (*(int *)(lVar5 + 0x10) == 8)) {
          bVar1 = *(long *)(lVar5 + 0x30) != 0;
        }
      }
    }
  }
  return bVar1;
}

