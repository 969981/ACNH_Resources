
void FUN_03f2e80c(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if ((*(long *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x20) == 1)) {
    return;
  }
  DataMemoryBarrier(2,3);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    return;
  }
  iVar2 = *(int *)(lVar6 + 0x108);
  if (iVar2 != 6) {
    if (iVar2 == 1) goto LAB_03f2e86c;
    if (iVar2 != 0) {
      return;
    }
  }
  if (*(int *)(lVar6 + 0x10) == 7) {
    return;
  }
LAB_03f2e86c:
  if (((*(byte *)(param_1 + 8) >> 3 & 1) != 0) && (lVar6 != 0)) {
    puVar4 = *(undefined8 **)(lVar6 + 0x30);
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
    if (*(int *)(lVar6 + 0x10) == 0xe) {
      bVar1 = true;
    }
    else {
      if (puVar4 != (undefined8 *)0x0) {
        return;
      }
      if (*(int *)(lVar6 + 0x10) != 8) {
        return;
      }
      bVar1 = *(long *)(lVar6 + 0x30) != 0;
    }
    if ((bVar1) && (lVar5 != 0)) {
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) & 0xfffdffff;
    }
  }
  return;
}

