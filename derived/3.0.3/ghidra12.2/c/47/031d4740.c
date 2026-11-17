
/* WARNING: Removing unreachable block (ram,0x031d48e8) */
/* WARNING: Removing unreachable block (ram,0x031d4964) */
/* WARNING: Removing unreachable block (ram,0x031d4990) */
/* WARNING: Removing unreachable block (ram,0x031d49d4) */
/* WARNING: Removing unreachable block (ram,0x031d49e8) */
/* WARNING: Removing unreachable block (ram,0x031d4904) */
/* WARNING: Removing unreachable block (ram,0x031d4a2c) */
/* WARNING: Removing unreachable block (ram,0x031d4a54) */
/* WARNING: Removing unreachable block (ram,0x031d4a64) */
/* WARNING: Removing unreachable block (ram,0x031d4a34) */
/* WARNING: Removing unreachable block (ram,0x031d4a44) */
/* WARNING: Removing unreachable block (ram,0x031d4a6c) */
/* WARNING: Removing unreachable block (ram,0x031d4a70) */
/* WARNING: Removing unreachable block (ram,0x031d4958) */
/* WARNING: Removing unreachable block (ram,0x031d4a8c) */
/* WARNING: Removing unreachable block (ram,0x031d4a98) */
/* WARNING: Removing unreachable block (ram,0x031d4ab4) */
/* WARNING: Removing unreachable block (ram,0x031d4ac0) */
/* WARNING: Removing unreachable block (ram,0x031d4ad0) */
/* WARNING: Removing unreachable block (ram,0x031d4aa4) */
/* WARNING: Removing unreachable block (ram,0x031d4ae8) */
/* WARNING: Removing unreachable block (ram,0x031d4aec) */
/* WARNING: Removing unreachable block (ram,0x031d4af8) */
/* WARNING: Removing unreachable block (ram,0x031d4b10) */
/* WARNING: Removing unreachable block (ram,0x031d4b1c) */
/* WARNING: Removing unreachable block (ram,0x031d4b24) */
/* WARNING: Removing unreachable block (ram,0x031d4b38) */
/* WARNING: Removing unreachable block (ram,0x031d4b80) */
/* WARNING: Removing unreachable block (ram,0x031d4b48) */
/* WARNING: Removing unreachable block (ram,0x031d4bb4) */
/* WARNING: Removing unreachable block (ram,0x031d4bc0) */
/* WARNING: Removing unreachable block (ram,0x031d4c18) */
/* WARNING: Removing unreachable block (ram,0x031d4c5c) */
/* WARNING: Removing unreachable block (ram,0x031d4c38) */
/* WARNING: Removing unreachable block (ram,0x031d4c54) */
/* WARNING: Removing unreachable block (ram,0x031d4bc8) */
/* WARNING: Removing unreachable block (ram,0x031d4c68) */
/* WARNING: Removing unreachable block (ram,0x031d4c84) */
/* WARNING: Removing unreachable block (ram,0x031d4bd0) */
/* WARNING: Removing unreachable block (ram,0x031d4c0c) */
/* WARNING: Removing unreachable block (ram,0x031d4808) */
/* WARNING: Removing unreachable block (ram,0x031d4c14) */
/* WARNING: Removing unreachable block (ram,0x031d4c88) */
/* WARNING: Removing unreachable block (ram,0x031d4838) */
/* WARNING: Removing unreachable block (ram,0x031d4844) */

void FUN_031d4740(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(*(long *)(param_1 + 0x210) + 0x590 + lVar1 * 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x031d48a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_031d48a8 + (ulong)DAT_0418426c * 4))();
      return;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x2c);
  return;
}

