
undefined4 FUN_02b64720(short param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  undefined4 in_w13;
  
  if (param_1 == 0) {
    return DAT_04c9a0c8;
  }
  iVar3 = 0;
  do {
    sVar2 = *(short *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0 + (long)iVar3 * 0x14 + 4);
    if (sVar2 != 0 && sVar2 == param_1) {
      in_w13 = *(undefined4 *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0 + (long)iVar3 * 0x14);
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x24);
  uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
  if (sVar2 != 0 && sVar2 == param_1) {
    uVar1 = in_w13;
  }
  return uVar1;
}

