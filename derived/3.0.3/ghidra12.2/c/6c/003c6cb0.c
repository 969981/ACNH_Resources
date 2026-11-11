
/* WARNING: Removing unreachable block (ram,0x003c6d24) */
/* WARNING: Removing unreachable block (ram,0x003c6d28) */
/* WARNING: Removing unreachable block (ram,0x003c6d30) */
/* WARNING: Removing unreachable block (ram,0x003c6d44) */
/* WARNING: Removing unreachable block (ram,0x003c6d4c) */

void FUN_003c6cb0(undefined4 param_1,long param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = PTR_FUN_04bd0420;
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      if (((param_3 & 1) != 0) && (lVar3 = *(long *)(param_2 + 0x140 + uVar4 * 8), lVar3 != 0)) {
        (*(code *)puVar2)(param_1,lVar3,param_4);
      }
      if (0xe < uVar4) {
        return;
      }
      uVar4 = uVar4 + 1;
      bVar1 = 1 < param_3;
      param_3 = param_3 >> 1;
    } while (bVar1);
  }
  return;
}

