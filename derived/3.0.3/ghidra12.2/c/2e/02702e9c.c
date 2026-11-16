
/* WARNING: Removing unreachable block (ram,0x02702f2c) */
/* WARNING: Removing unreachable block (ram,0x02702ebc) */
/* WARNING: Removing unreachable block (ram,0x02702ef4) */
/* WARNING: Removing unreachable block (ram,0x02702f3c) */
/* WARNING: Removing unreachable block (ram,0x02702ed0) */
/* WARNING: Removing unreachable block (ram,0x02702f04) */

bool FUN_02702e9c(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((*(byte *)(param_1 + 0x50e) ^ 0xff) & 6) != 0) &&
     (((*(byte *)(param_1 + 0x50f) ^ 0xff) & 6) != 0)) {
    bVar1 = ((*(byte *)(param_1 + 0x510) ^ 0xff) & 6) == 0;
  }
  return bVar1;
}

