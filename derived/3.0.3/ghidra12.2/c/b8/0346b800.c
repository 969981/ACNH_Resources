
void FUN_0346b800(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x31) == '\0') {
    if (*(char *)(param_1 + 0x28) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    return;
  }
  lVar3 = FUN_02535188();
  if (lVar3 == 0) {
    return;
  }
  if (((*(uint *)(lVar3 + 8) ^ 0xffffffff) & 0x24) == 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      uVar4 = nn::os::GetSystemTick();
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      *(undefined1 *)(param_1 + 0x28) = 1;
      bVar1 = *(byte *)(lVar3 + 0x8c);
      goto joined_r0x0346b908;
    }
    if (((DAT_0575c3e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0575c3e8), iVar2 != 0)) {
      DAT_0575c3e0 = *(long *)PTR_DAT_04bb29d0;
      __cxa_guard_release(&DAT_0575c3e8);
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      uVar4 = nn::os::GetSystemTick();
      *(undefined8 *)(param_1 + 0x20) = uVar4;
    }
    lVar5 = nn::os::GetSystemTick();
    if ((DAT_0575c3e0 < lVar5 - *(long *)(param_1 + 0x20)) &&
       ((((*(long **)(param_1 + 0x10) == (long *)0x0 ||
          (lVar5 = **(long **)(param_1 + 0x10), lVar5 == 0)) ||
         ((*(long *)(lVar5 + 0x210) != 0 &&
          (uVar6 = FUN_0346ca6c(*(long *)(lVar5 + 0x210),0), (uVar6 & 1) != 0)))) ||
        (((*(int *)(lVar5 + 0x1f0) == -1 && (*(int *)(lVar5 + 500) == -1)) &&
         (*(uint *)(lVar5 + 0x1b0) < 2)))))) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  bVar1 = *(byte *)(lVar3 + 0x8c);
joined_r0x0346b908:
  if ((((((bVar1 >> 6 & 1) == 0) || (*(long **)(param_1 + 0x10) == (long *)0x0)) ||
       ((lVar3 = **(long **)(param_1 + 0x10), lVar3 == 0 ||
        (((*(long *)(lVar3 + 0x210) == 0 ||
          (uVar6 = FUN_0346ca6c(*(long *)(lVar3 + 0x210),0), (uVar6 & 1) == 0)) &&
         ((*(int *)(lVar3 + 0x1f0) != -1 ||
          ((*(int *)(lVar3 + 500) != -1 || (1 < *(uint *)(lVar3 + 0x1b0))))))))))) ||
      (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0)) ||
     (plVar7 = (long *)**(undefined8 **)(param_1 + 0x10), plVar7 == (long *)0x0)) {
    return;
  }
  if ((plVar7[0x42] == 0) || (uVar6 = FUN_0346ca6c(plVar7[0x42],0), (uVar6 & 1) == 0)) {
    uVar4 = 1;
    lVar3 = 0x15;
  }
  else {
    uVar4 = 0;
    lVar3 = 0x16;
  }
  (**(code **)(*plVar7 + lVar3 * 8))(plVar7);
  FUN_0347170c(*(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)(1 < *(uint *)(param_1 + 8)) * 8),
               uVar4);
  return;
}

