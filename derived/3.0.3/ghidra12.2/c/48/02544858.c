
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff6c : 0x025448c8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_02544858(byte *param_1)

{
  long lVar1;
  short sVar2;
  short sVar3;
  
  sVar2 = *(short *)(param_1 + 2);
  sVar3 = *(short *)PTR_DAT_04bb6298;
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
  if (7 < *param_1) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if ((param_1[4] & 1) == 0) {
    if (sVar2 == sVar3) {
      *(undefined4 *)(lVar1 + 0x424) = 3;
      FUN_01393458(lVar1 + 0x4c8);
    }
    else {
      *(undefined4 *)(lVar1 + 0x424) = 4;
    }
  }
  else if (sVar2 == sVar3) {
    *(undefined4 *)(lVar1 + 0x4ec) = 3;
    FUN_01393458(lVar1 + 0x590);
  }
  else {
    *(undefined4 *)(lVar1 + 0x4ec) = 4;
  }
  return sVar2 == sVar3;
}

