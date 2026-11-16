
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0254cf54(undefined4 *param_1,byte *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if ((((*param_2 < 8) && (uVar4 = FUN_02582d8c(param_2,1), puVar2 = PTR_DAT_04bb4fb8, uVar4 < 8))
      && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
     (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar4 = FUN_02582d8c(param_2,1), uVar4 < 8)) &&
      (*(char *)(*(long *)puVar2 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))) {
    iVar1 = *(int *)(*(long *)puVar2 + (ulong)uVar4 * 0x13f0 + 0x4e0);
    if (iVar1 == 1) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
    }
    else if (iVar1 != 0) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      FUN_0254d080(param_1,param_2,iVar1,param_3);
      return;
    }
  }
  uVar3 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar3;
  return;
}

