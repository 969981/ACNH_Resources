
/* WARNING: Removing unreachable block (ram,0x02b67498) */
/* WARNING: Removing unreachable block (ram,0x02b67450) */
/* WARNING: Removing unreachable block (ram,0x02b67408) */
/* WARNING: Removing unreachable block (ram,0x02b673c0) */
/* WARNING: Removing unreachable block (ram,0x02b673e4) */
/* WARNING: Removing unreachable block (ram,0x02b6742c) */
/* WARNING: Removing unreachable block (ram,0x02b67474) */
/* WARNING: Removing unreachable block (ram,0x02b674bc) */

undefined8 FUN_02b673a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) ||
     (((((uVar1 = 0, DAT_05636e10 != param_2 && (uVar1 = 1, DAT_05636e14 != param_2)) &&
        (uVar1 = 2, DAT_05636e18 != param_2)) &&
       ((uVar1 = 3, DAT_05636e1c != param_2 && (uVar1 = 4, DAT_05636e20 != param_2)))) &&
      ((uVar1 = 5, DAT_05636e24 != param_2 &&
       ((uVar1 = 6, DAT_05636e28 != param_2 && (uVar1 = 7, DAT_05636e2c != param_2)))))))) {
    return 0;
  }
  *param_1 = uVar1;
  return 1;
}

