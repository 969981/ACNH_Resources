
/* WARNING: Removing unreachable block (ram,0x02f34944) */

void FUN_02f3490c(void)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc73c0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar7 = puVar6[0x4b];
  if (lVar7 == 0) {
    return;
  }
  if (*(byte *)(lVar7 + 0x1f8) < 8) {
    uVar3 = FUN_02582d8c(lVar7 + 0x1f8,1);
    puVar1 = PTR_DAT_04bb4fb8;
    if ((uVar3 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) {
      bVar2 = false;
      if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) == '\0')
      goto LAB_02f34a38;
      uVar3 = FUN_02582d8c(lVar7 + 0x1f8,1);
      if ((uVar3 < 8) && (*(char *)(*(long *)puVar1 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) {
        uVar3 = *(uint *)(*(long *)puVar1 + (ulong)uVar3 * 0x13f0 + 8);
        if (9 < (int)uVar3) {
          uVar3 = 10;
        }
        bVar2 = (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) == 10;
        goto LAB_02f34a38;
      }
    }
  }
  bVar2 = false;
LAB_02f34a38:
  if ((!bVar2) && (*(int *)(lVar7 + 0x1b0) != 4)) {
    *(undefined1 *)(lVar7 + 0x220) = 1;
    if (*(int *)(lVar7 + 0x1f0 + (ulong)*(byte *)(lVar7 + 0x200) * 4) == -1) {
      *(undefined4 *)(lVar7 + 0x1f0 + (ulong)*(byte *)(lVar7 + 0x200) * 4) = 4;
    }
  }
  return;
}

