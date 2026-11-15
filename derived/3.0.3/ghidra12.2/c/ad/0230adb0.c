
void FUN_0230adb0(char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **local_48;
  undefined4 *local_40;
  char *local_38;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb3968;
  if (*param_1 != '\0') {
    if (param_1[2] == '\0') {
      if ((param_1[3] != '\0') && (lVar6 = *(long *)PTR_DAT_04bb4e28, lVar6 != 0)) {
        local_48 = (undefined **)0xf00000035;
        local_40 = (undefined4 *)CONCAT44(local_40._4_4_,0x12);
        lVar4 = *(long *)PTR_DAT_04bb3968;
        uVar1 = *(int *)(lVar6 + 0x122c) + 1;
        *(uint *)(lVar6 + 0x122c) = uVar1;
        local_38 = param_1 + 1;
        if (uVar1 < 3) {
          local_24 = *(undefined4 *)((long)&local_48 + (ulong)uVar1 * 4);
        }
        else {
          local_24 = 0x35;
        }
        local_40 = &local_24;
        local_48 = &PTR_FUN_04a72f90;
        iVar2 = *(int *)(lVar4 + 0xb88);
        if (iVar2 != 0) {
          lVar6 = (long)iVar2 << 3;
          puVar5 = *(undefined8 **)(lVar4 + 0xb90);
          do {
            (*(code *)*local_48)(&local_48,*puVar5);
            lVar6 = lVar6 + -8;
            puVar5 = puVar5 + 1;
          } while (lVar6 != 0);
        }
      }
    }
    else if (*(long *)PTR_DAT_04bb4e28 != 0) {
      *(undefined4 *)(*(long *)PTR_DAT_04bb4e28 + 0x122c) = 0;
      local_24 = 0x35;
      local_40 = &local_24;
      local_38 = param_1 + 1;
      local_48 = &PTR_FUN_04a72f68;
      iVar2 = *(int *)(*(long *)puVar3 + 0xb88);
      if (iVar2 != 0) {
        lVar6 = (long)iVar2 << 3;
        puVar5 = *(undefined8 **)(*(long *)puVar3 + 0xb90);
        do {
          (*(code *)*local_48)(&local_48,*puVar5);
          lVar6 = lVar6 + -8;
          puVar5 = puVar5 + 1;
        } while (lVar6 != 0);
      }
    }
  }
  return;
}

