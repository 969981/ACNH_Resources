
/* WARNING: Removing unreachable block (ram,0x003c70c4) */
/* WARNING: Removing unreachable block (ram,0x003c70c8) */
/* WARNING: Removing unreachable block (ram,0x003c70d0) */
/* WARNING: Removing unreachable block (ram,0x003c70e0) */
/* WARNING: Removing unreachable block (ram,0x003c70e8) */

void FUN_003c7060(long param_1,uint param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = PTR_FUN_04bd0440;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      if (((param_2 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x140 + uVar4 * 8), lVar3 != 0)) {
        (*(code *)puVar2)(lVar3,0xffffffff);
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

