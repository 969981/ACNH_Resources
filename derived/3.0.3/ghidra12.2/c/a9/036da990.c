
void FUN_036da990(long param_1)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  
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
        iVar3 = *(int *)(param_1 + 0x10);
      }
      else if (((uVar2 ^ 0xffff) & 3) == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = (uint)(((uVar2 ^ 0xffff) & 5) == 0) << 1;
      }
      if (iVar3 == 1) {
        FUN_03746970(param_1 + 0x20);
        return;
      }
      if ((DAT_05ab8198 == (ushort *)0x0) || (uVar2 = *DAT_05ab8198, (uVar2 & 1) == 0)) {
        iVar3 = *(int *)(param_1 + 0x10);
      }
      else if (((uVar2 ^ 0xffff) & 3) == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = (uint)(((uVar2 ^ 0xffff) & 5) == 0) << 1;
      }
      if (iVar3 == 2) {
        FUN_036c7820(param_1 + 200);
        return;
      }
    }
  }
  return;
}

