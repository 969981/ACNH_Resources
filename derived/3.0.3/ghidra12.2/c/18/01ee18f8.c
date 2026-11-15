
undefined1 FUN_01ee18f8(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *local_50;
  char *pcStack_48;
  undefined1 auStack_28 [8];
  
  piVar1 = (int *)(param_1 + 0x77b0);
  if ((((4 < *piVar1 - 3U) && (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0)) &&
      (uVar5 = FUN_0212ef10(param_1 + 0xaa50), (uVar5 & 1) == 0)) &&
     (((*(byte *)(param_1 + 0xad5a) >> 2 & 1) == 0 &&
      (uVar4 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar4 < 10)))) {
    lVar2 = (ulong)uVar4 * 0xba0;
    if ((&DAT_053fee41)[lVar2] == '\0') {
      return 0;
    }
    if (*piVar1 == 0x13) {
      return 0;
    }
    if (*piVar1 == 0x1a) {
      return 0;
    }
    if ((&DAT_053fede8)[(ulong)uVar4 * 0x174] == 0) {
      return 0;
    }
    if (0xfffffffb < *(int *)((&DAT_053fede8)[(ulong)uVar4 * 0x174] + 4) - 0xeU) {
      uVar3 = FUN_021d6100();
      FUN_021e2c70(auStack_28,uVar3);
      plVar6 = (long *)FUN_01ee1a98(*(undefined8 *)(param_1 + 8));
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x2d8))(&local_50);
        uVar5 = FUN_0277d7b4(&local_50,auStack_28);
        if ((((uVar5 & 1) == 0) &&
            (uVar7 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060),
            '\x16' < (char)((ulong)uVar7 >> 0x20))) &&
           (uVar4 = FUN_021e2c30(uVar3), uVar4 <= (uint)((int)((ulong)uVar7 >> 0x10) >> 0x18))) {
          local_50 = PTR_DAT_04bb2020 + 0x10;
          pcStack_48 = "WearNewYearHat";
          FUN_02199310(&DAT_053fe348 + lVar2,&local_50,1);
          FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
          *(int *)(param_1 + 0x77f0) = *piVar1;
          return 1;
        }
      }
    }
  }
  return 0;
}

