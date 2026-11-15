
/* WARNING: Removing unreachable block (ram,0x01fc7528) */
/* WARNING: Removing unreachable block (ram,0x01fc74e4) */
/* WARNING: Removing unreachable block (ram,0x01fc74a0) */
/* WARNING: Removing unreachable block (ram,0x01fc756c) */

char FUN_01fc7458(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  return (bVar1 >> 1 & 1) + (bVar1 & 1) + (bVar1 >> 2 & 1) + (bVar1 >> 3 & 1);
}

