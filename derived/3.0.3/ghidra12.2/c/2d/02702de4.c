
/* WARNING: Removing unreachable block (ram,0x02702e74) */
/* WARNING: Removing unreachable block (ram,0x02702e04) */
/* WARNING: Removing unreachable block (ram,0x02702e3c) */
/* WARNING: Removing unreachable block (ram,0x02702e84) */
/* WARNING: Removing unreachable block (ram,0x02702e18) */
/* WARNING: Removing unreachable block (ram,0x02702e4c) */

bool FUN_02702de4(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((*(byte *)(param_1 + 0x50e) ^ 0xff) & 5) != 0) &&
     (((*(byte *)(param_1 + 0x50f) ^ 0xff) & 5) != 0)) {
    bVar1 = ((*(byte *)(param_1 + 0x510) ^ 0xff) & 5) == 0;
  }
  return bVar1;
}

