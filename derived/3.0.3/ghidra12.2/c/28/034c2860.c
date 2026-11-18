
void FUN_034c2860(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  uVar6 = *(uint *)(param_1 + 0xe98);
  if (0 < (int)uVar6) {
    bVar2 = false;
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (uVar6 <= uVar5) {
        uVar1 = 0;
      }
      uVar5 = uVar5 + 1;
      lVar7 = *(long *)(param_1 + 0xea0) + (ulong)uVar1 * 0x19440;
      iVar4 = *(int *)(lVar7 + 0x30);
      *(undefined4 *)(lVar7 + 0x30) = 0;
      lVar7 = *(long *)(lVar7 + 0x18);
      *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
      bVar2 = (bool)(iVar4 == 4 | bVar2);
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(param_1 + 0xe48);
      *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(param_1 + 0xe50);
      *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(param_1 + 0xe58);
      uVar6 = *(uint *)(param_1 + 0xe98);
    } while ((int)uVar5 < (int)uVar6);
    if ((((bVar2) && (*(long **)(param_1 + 0x230) != (long *)0x0)) &&
        (lVar7 = (**(code **)(**(long **)(param_1 + 0x230) + 0xc0))(), lVar7 != 0)) &&
       (lVar8 = *(long *)(DAT_05231900 + 0x140), *(char *)(lVar8 + 0x16d) != '\0')) {
      uVar6 = *(uint *)(lVar7 + 4);
      nn::os::LockMutex((MutexType *)(lVar8 + 0x990));
      if (uVar6 < *(uint *)(lVar8 + 0x760)) {
        lVar7 = *(long *)(*(long *)(lVar8 + 0x768) + (long)(int)uVar6 * 8);
      }
      else {
        lVar7 = 0;
      }
      if (*(char *)(lVar7 + 0x32820) != '\0') {
        *(undefined1 *)(lVar7 + 0x32810) = 0;
        *(undefined1 *)(lVar7 + 0x32820) = 0;
        *(undefined1 *)(lVar7 + 0x19400) = 0;
      }
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x990));
    }
  }
  puVar3 = PTR_DAT_04bb2200;
  if (*(char *)(param_1 + 0xe60) == '\0') {
    return;
  }
  lVar7 = 0;
  do {
    lVar8 = param_1 + lVar7;
    *(undefined1 *)(lVar8 + 0x264) = 0;
    *(undefined4 *)(lVar8 + 0x268) = 0;
    if ((*(byte *)(lVar8 + 0x244) & 1) != 0) {
      FUN_015d8190(*(undefined8 *)(*(long *)puVar3 + 0x140),lVar8 + 0x240);
    }
    if (*(int *)(lVar8 + 0x260) != -1) {
      *(undefined4 *)(lVar8 + 0x260) = 0xffffffff;
    }
    lVar8 = DAT_0575aaf0;
    lVar7 = lVar7 + 0x30;
  } while (lVar7 != 0xc00);
  if (*(char *)(param_1 + 0xe60) == '\0') {
    return;
  }
  if (*(int *)(DAT_0575aaf0 + 0x10) == 1) {
    iVar4 = *(int *)(DAT_0575aaf0 + 8) + -1;
    if (0 < *(int *)(DAT_0575aaf0 + 8)) {
      *(int *)(DAT_0575aaf0 + 8) = iVar4;
      if (iVar4 == 0) {
        iVar4 = 0;
        *(undefined8 *)(lVar8 + 0xc) = 0x200000000;
      }
      else {
        iVar4 = 2;
      }
      goto LAB_034c2a2c;
    }
  }
  iVar4 = -2;
LAB_034c2a2c:
  if (-1 < iVar4) {
    *(undefined1 *)(param_1 + 0xe60) = 0;
  }
  return;
}

