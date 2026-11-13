
undefined4 FUN_00eb50cc(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "Fireworks";
  iVar2 = FUN_008841f4(*(undefined8 *)PTR_DAT_04bb32f0,&local_30);
  if (iVar2 == 2) {
    return 6;
  }
  uVar6 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar7 = (uint)((ulong)uVar6 >> 0x20);
  uVar8 = uVar7 & 0xff;
  uVar7 = uVar7 >> 8 & 0xff;
  cVar1 = (char)((ulong)uVar6 >> 0x28);
  if (iVar2 != 1) {
    if ((iVar2 != 0) || ((char)((ulong)uVar6 >> 0x20) < '\x12')) {
      return 0;
    }
    if (uVar8 == 0x12) {
      if (cVar1 < '\x1e') {
        return 0;
      }
      if (uVar7 < 0x32) {
        return 1;
      }
      uVar5 = 2;
      if (0x3a < uVar7) {
        uVar5 = 3;
      }
      return uVar5;
    }
  }
  if (uVar8 == 0x13 && cVar1 < '\x01') {
    iVar2 = (int)(char)((ulong)uVar6 >> 0x30);
    if (param_1 != 0) {
      puVar9 = *(undefined8 **)(param_1 + 0x3b8);
      if (((*PTR_DAT_04bb6908 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6908), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6900 = PTR_DAT_04bb6850 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6908);
      }
      if (((puVar9 != (undefined8 *)0x0) &&
          (uVar4 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6900), (uVar4 & 1) != 0)) &&
         (*(int *)(puVar9 + 0xef6) == 0x67)) {
        if (iVar2 < 0x1e) {
          return 4;
        }
        if (*(int *)((long)puVar9 + 0x787c) < iVar2) {
          return 5;
        }
        return 4;
      }
    }
    if (iVar2 < 0x1e) {
      return 4;
    }
  }
  return 5;
}

