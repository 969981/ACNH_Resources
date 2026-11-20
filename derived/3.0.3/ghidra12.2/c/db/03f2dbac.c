
undefined8 FUN_03f2dbac(long param_1,long *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_258 [536];
  
  if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
      puVar5 = &DAT_0406a300;
    }
    else {
      (**(code **)(*(long *)(lVar4 + 0x360) + 0x18))(lVar4 + 0x360);
      puVar5 = *(undefined **)(lVar4 + 0x368);
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_0156b428(auStack_258,&DAT_0406f6e3,puVar5,param_2[1]);
    *(undefined4 *)(param_1 + 0xc) = 8;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 8;
    }
    if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x20) == 1)) {
      return 0;
    }
    DataMemoryBarrier(2,3);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
      return 0;
    }
    iVar1 = *(int *)(lVar4 + 0x108);
    if (iVar1 == 6) {
LAB_03f2dd50:
      if (*(int *)(lVar4 + 0x10) == 7) {
        return 0;
      }
    }
    else if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      goto LAB_03f2dd50;
    }
    if ((*(byte *)(param_1 + 8) >> 3 & 1) == 0) {
      return 0;
    }
    if (lVar4 == 0) {
      return 0;
    }
    puVar3 = *(undefined8 **)(lVar4 + 0x30);
    if (((*PTR_DAT_04bb4458 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4458);
    }
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4450);
      if ((uVar2 & 1) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
    }
    iVar1 = *(int *)(lVar4 + 0x10);
    goto joined_r0x03f2ddf4;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf0 | 2;
  FUN_03f34850(*(undefined8 *)PTR_DAT_04bb49b8,param_1,param_2,param_3);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xc);
  }
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x20) == 1)) {
    return 0;
  }
  DataMemoryBarrier(2,3);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return 0;
  }
  iVar1 = *(int *)(lVar4 + 0x108);
  if (iVar1 == 6) {
LAB_03f2dc54:
    if (*(int *)(lVar4 + 0x10) == 7) {
      return 0;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    goto LAB_03f2dc54;
  }
  if ((*(byte *)(param_1 + 8) >> 3 & 1) == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0x30);
  if (((*PTR_DAT_04bb4458 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4450);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  iVar1 = *(int *)(lVar4 + 0x10);
joined_r0x03f2ddf4:
  if (iVar1 != 0xe) {
    if (puVar3 != (undefined8 *)0x0) {
      return 0;
    }
    if (iVar1 != 8) {
      return 0;
    }
    if (*(long *)(lVar4 + 0x30) == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
}

