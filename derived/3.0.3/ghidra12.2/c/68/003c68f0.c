
/* WARNING: Removing unreachable block (ram,0x003c6954) */
/* WARNING: Removing unreachable block (ram,0x003c6958) */
/* WARNING: Removing unreachable block (ram,0x003c6960) */
/* WARNING: Removing unreachable block (ram,0x003c6970) */
/* WARNING: Removing unreachable block (ram,0x003c6978) */

void FUN_003c68f0(long param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = PTR_FUN_04bd0410;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      if (((param_2 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x140 + uVar4 * 8), lVar3 != 0)) {
        (*(code *)puVar2)(lVar3,param_3);
      }
      if (0xe < uVar4) {
        return;
      }
      uVar4 = uVar4 + 1;
      bVar1 = 1 < param_2;
      param_2 = param_2 >> 1;
    } while (bVar1);
  }
  return;
}

