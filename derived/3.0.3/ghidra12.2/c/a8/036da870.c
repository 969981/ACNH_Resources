
void FUN_036da870(long param_1)

{
  uint *puVar1;
  ushort uVar2;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 0x1a & 1) != 0) && ((*puVar1 >> 0x1b & 1) == 0)) &&
       ((((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)) &&
         ((*(int *)(param_1 + 0x14) == 4 || (*(int *)(param_1 + 0x14) == 5)))) ||
        (*(int *)(param_1 + 0x18) == 3)))) {
      if ((DAT_05ab8198 == (ushort *)0x0) || (uVar2 = *DAT_05ab8198, (uVar2 & 1) == 0)) {
        if (*(int *)(param_1 + 0x10) == 1) {
LAB_036da964:
          FUN_03747bb0(param_1 + 0x20,*(uint *)(param_1 + 0x1a70) >> 5 & 1);
          return;
        }
        if (*(int *)(param_1 + 0x10) == 2) {
LAB_036da94c:
          FUN_036c96f0(param_1 + 200);
          return;
        }
      }
      else {
        if (((uVar2 ^ 0xffff) & 3) == 0) goto LAB_036da964;
        if (((uVar2 ^ 0xffff) & 5) == 0) goto LAB_036da94c;
      }
    }
  }
  return;
}

