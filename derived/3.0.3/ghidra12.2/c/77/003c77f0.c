
/* WARNING: Removing unreachable block (ram,0x003c7864) */
/* WARNING: Removing unreachable block (ram,0x003c7868) */
/* WARNING: Removing unreachable block (ram,0x003c7870) */
/* WARNING: Removing unreachable block (ram,0x003c7884) */
/* WARNING: Removing unreachable block (ram,0x003c788c) */

void FUN_003c77f0(undefined4 param_1,long param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = PTR_FUN_04bd03d0;
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

