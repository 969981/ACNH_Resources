
undefined8 FUN_02beeaf0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint local_24;
  
  lVar5 = *(long *)PTR_DAT_04bb3960;
  if (((lVar5 != 0) && (uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8)) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) {
    uVar1 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d8);
    uVar7 = (ulong)uVar1;
    if (uVar1 != 0xffffffff) {
      lVar4 = (long)*(int *)(*(long *)PTR_DAT_04bc95e0 + 0x184);
      lVar3 = *(long *)(*(long *)PTR_DAT_04bc95e0 + 0x178) - lVar4;
      if (*(int *)(lVar3 + 0x18) != 0xd) {
        do {
          lVar3 = *(long *)(lVar3 + lVar4 + 8) - lVar4;
        } while (*(int *)(lVar3 + 0x18) != 0xd);
      }
      if ((*(int *)(lVar3 + 0x2c) == 1) &&
         (local_24 = uVar1, iVar2 = nn::hid::GetNpadJoyAssignment(&local_24), iVar2 == 1)) {
        if (3 < uVar1) {
          uVar7 = 0;
        }
        if ((*(int *)(lVar5 + uVar7 * 4 + 0xf5b40) - 3U < 2) &&
           (lVar5 = FUN_009b56e8(lVar5,uVar1), lVar5 != 0)) {
          puVar6 = *(undefined8 **)(lVar5 + 0xc20);
          if (((*PTR_DAT_04bb4f38 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar2 != 0)) {
            *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb4f38);
          }
          if (((puVar6 != (undefined8 *)0x0) &&
              (uVar7 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb4f30), (uVar7 & 1) != 0)) &&
             ((*(byte *)((long)puVar6 + 0x17c) >> 1 & 1) != 0)) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

