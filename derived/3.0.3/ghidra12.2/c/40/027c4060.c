
void FUN_027c4060(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb3350;
  if ((lVar3 != 0) &&
     (lVar2 = nn::os::GetTlsValue(*(undefined4 *)(lVar3 + 0x68)), *(long *)(lVar3 + 0x60) != lVar2))
  {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x12);
  if (iVar1 == 3) {
    if ((DAT_055b1af8 == 0) || (*(int *)(DAT_055b1af8 + 0x58) == 0)) goto LAB_027c40e8;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return;
      }
      *(undefined4 *)*param_1 = 6;
      *param_1 = 0;
LAB_027c40e8:
      if (DAT_0556aa70 != 0) {
        *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) & 0xfffffffd;
      }
      FUN_03ebb160(param_1 + 0x11,0);
      return;
    }
    if (DAT_055b1af8 == 0) goto LAB_027c4128;
  }
  FUN_028bc598(DAT_055b1af8);
LAB_027c4128:
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}

