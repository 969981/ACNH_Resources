
/* WARNING: Removing unreachable block (ram,0x0284dc18) */
/* WARNING: Removing unreachable block (ram,0x0284dc24) */
/* WARNING: Removing unreachable block (ram,0x0284dc40) */
/* WARNING: Removing unreachable block (ram,0x0284dbac) */
/* WARNING: Removing unreachable block (ram,0x0284dbb8) */
/* WARNING: Removing unreachable block (ram,0x0284dbd4) */
/* WARNING: Removing unreachable block (ram,0x0284dd58) */
/* WARNING: Removing unreachable block (ram,0x0284dc84) */
/* WARNING: Removing unreachable block (ram,0x0284dc90) */
/* WARNING: Removing unreachable block (ram,0x0284dcac) */
/* WARNING: Removing unreachable block (ram,0x0284dcf0) */
/* WARNING: Removing unreachable block (ram,0x0284dcfc) */
/* WARNING: Removing unreachable block (ram,0x0284dd14) */
/* WARNING: Removing unreachable block (ram,0x0284db40) */
/* WARNING: Removing unreachable block (ram,0x0284db4c) */
/* WARNING: Removing unreachable block (ram,0x0284db68) */
/* WARNING: Removing unreachable block (ram,0x0284da90) */

long FUN_0284da58(long param_1,int param_2,uint param_3)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x34) != param_2) {
                    /* WARNING: Could not recover jumptable at 0x0284db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (*(code *)(&UNK_0284db14 + (ulong)DAT_0417bb61 * 4))();
    return lVar1;
  }
  if ((*(char *)(param_1 + 0x37) == '\0') ||
     ((*(char *)(param_1 + 0x37) == '\x03' && ((param_3 & 1) == 0)))) {
    return 7;
  }
  return (long)*(char *)(param_1 + 0x35);
}

