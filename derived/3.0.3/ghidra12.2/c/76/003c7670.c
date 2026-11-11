
/* WARNING: Removing unreachable block (ram,0x003c76d4) */
/* WARNING: Removing unreachable block (ram,0x003c76d8) */
/* WARNING: Removing unreachable block (ram,0x003c76e0) */
/* WARNING: Removing unreachable block (ram,0x003c76f0) */
/* WARNING: Removing unreachable block (ram,0x003c76f8) */

void FUN_003c7670(undefined4 param_1,long param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_FUN_04bd03c0;
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

