
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_026126cc(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0558600c;
  uVar1 = *param_2;
  if ((uVar1 < 0x800) &&
     ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar1 >> 3) + 0xe99e0) >> (ulong)(uVar1 & 7) &
      1) != 0)) {
    FUN_02621f00();
    return;
  }
  *param_1 = _DAT_05586008;
  param_1[1] = uVar2;
  return;
}

