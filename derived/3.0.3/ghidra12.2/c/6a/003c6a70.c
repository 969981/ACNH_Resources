
/* WARNING: Removing unreachable block (ram,0x003c6ad4) */
/* WARNING: Removing unreachable block (ram,0x003c6ad8) */
/* WARNING: Removing unreachable block (ram,0x003c6ae0) */
/* WARNING: Removing unreachable block (ram,0x003c6af0) */
/* WARNING: Removing unreachable block (ram,0x003c6af8) */

void FUN_003c6a70(undefined4 param_1,long param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_FUN_04bd0398;
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      if (((param_3 & 1) != 0) && (*(long *)(param_2 + 0x140 + uVar3 * 8) != 0)) {
        (*(code *)puVar2)(param_1);
      }
      if (0xe < uVar3) {
        return;
      }
      uVar3 = uVar3 + 1;
      bVar1 = 1 < param_3;
      param_3 = param_3 >> 1;
    } while (bVar1);
  }
  return;
}

