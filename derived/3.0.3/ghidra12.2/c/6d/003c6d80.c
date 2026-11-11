
/* WARNING: Removing unreachable block (ram,0x003c6e14) */
/* WARNING: Removing unreachable block (ram,0x003c6e18) */
/* WARNING: Removing unreachable block (ram,0x003c6e20) */
/* WARNING: Removing unreachable block (ram,0x003c6e30) */
/* WARNING: Removing unreachable block (ram,0x003c6e38) */
/* WARNING: Removing unreachable block (ram,0x003c6e48) */

bool FUN_003c6d80(long param_1,uint param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  puVar3 = PTR_FUN_04bd0428;
  cVar2 = *(char *)(param_1 + (long)param_3 * 0x18 + 0x278);
  if (cVar2 != '\0' && param_2 != 0) {
    uVar5 = 0;
    do {
      if (((param_2 & 1) != 0) && (lVar4 = *(long *)(param_1 + 0x140 + uVar5 * 8), lVar4 != 0)) {
        (*(code *)puVar3)(lVar4,param_3);
      }
      if (0xe < uVar5) break;
      uVar5 = uVar5 + 1;
      bVar1 = 1 < param_2;
      param_2 = param_2 >> 1;
    } while (bVar1);
  }
  return cVar2 != '\0';
}

