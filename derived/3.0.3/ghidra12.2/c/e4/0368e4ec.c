
bool FUN_0368e4ec(long param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x690) != 0) {
    return false;
  }
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x278))) &&
      (*(int *)(param_1 + 0x688) != 1)) &&
     (*(int *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8) + 0x44) != 2)) {
    FUN_0376baa0(param_3);
    uVar1 = FUN_0376f950();
    if ((uVar1 & 1) == 0) {
      if (DAT_05ab3138 == 0) {
        return false;
      }
      if (param_2 < *(uint *)(param_1 + 0x278)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8);
      }
      else {
        lVar3 = 0;
      }
      lVar3 = FUN_036afd70(DAT_05ab3138,*(undefined4 *)(lVar3 + 0x30));
      if (lVar3 == 0) {
        return false;
      }
      pcVar2 = (char *)FUN_01d38ff0(lVar3,0x1a,0x94a611be,*(undefined8 *)PTR_DAT_04bc3958);
      if (pcVar2 == (char *)0x0) {
        return true;
      }
      return *pcVar2 == '\0';
    }
  }
  return false;
}

