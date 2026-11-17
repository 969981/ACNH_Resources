
/* WARNING: Removing unreachable block (ram,0x0305ed00) */
/* WARNING: Removing unreachable block (ram,0x0305ed14) */
/* WARNING: Removing unreachable block (ram,0x0305ecc0) */
/* WARNING: Removing unreachable block (ram,0x0305ecb0) */
/* WARNING: Removing unreachable block (ram,0x0305ec70) */
/* WARNING: Removing unreachable block (ram,0x0305ec84) */
/* WARNING: Removing unreachable block (ram,0x0305ec28) */
/* WARNING: Removing unreachable block (ram,0x0305ec18) */
/* WARNING: Removing unreachable block (ram,0x0305ebd0) */
/* WARNING: Removing unreachable block (ram,0x0305ebec) */
/* WARNING: Removing unreachable block (ram,0x0305eb88) */
/* WARNING: Removing unreachable block (ram,0x0305eb78) */
/* WARNING: Removing unreachable block (ram,0x0305eb30) */
/* WARNING: Removing unreachable block (ram,0x0305eb4c) */
/* WARNING: Removing unreachable block (ram,0x0305eae8) */
/* WARNING: Removing unreachable block (ram,0x0305ead8) */
/* WARNING: Removing unreachable block (ram,0x0305ea90) */
/* WARNING: Removing unreachable block (ram,0x0305eaac) */
/* WARNING: Removing unreachable block (ram,0x0305ea48) */
/* WARNING: Removing unreachable block (ram,0x0305ea30) */
/* WARNING: Removing unreachable block (ram,0x0305ea40) */
/* WARNING: Removing unreachable block (ram,0x0305ea5c) */
/* WARNING: Removing unreachable block (ram,0x0305ea88) */
/* WARNING: Removing unreachable block (ram,0x0305ea98) */
/* WARNING: Removing unreachable block (ram,0x0305eae0) */
/* WARNING: Removing unreachable block (ram,0x0305eafc) */
/* WARNING: Removing unreachable block (ram,0x0305eb28) */
/* WARNING: Removing unreachable block (ram,0x0305eb38) */
/* WARNING: Removing unreachable block (ram,0x0305eb80) */
/* WARNING: Removing unreachable block (ram,0x0305eb9c) */
/* WARNING: Removing unreachable block (ram,0x0305ebc8) */
/* WARNING: Removing unreachable block (ram,0x0305ebd8) */
/* WARNING: Removing unreachable block (ram,0x0305ec20) */
/* WARNING: Removing unreachable block (ram,0x0305ec3c) */
/* WARNING: Removing unreachable block (ram,0x0305ec68) */
/* WARNING: Removing unreachable block (ram,0x0305ec78) */
/* WARNING: Removing unreachable block (ram,0x0305ecb8) */
/* WARNING: Removing unreachable block (ram,0x0305eccc) */
/* WARNING: Removing unreachable block (ram,0x0305ecf8) */
/* WARNING: Removing unreachable block (ram,0x0305ed08) */

undefined8 FUN_0305ea08(long param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 local_4;
  
  if (param_2 == 0) {
    return 0;
  }
  local_4 = 0;
  lVar1 = *(long *)(param_1 + 0x218);
  if ((((((*(long *)(lVar1 + 0x570) != param_2) &&
         (local_4 = 1, *(long *)(lVar1 + 0x578) != param_2)) &&
        (local_4 = 2, *(long *)(lVar1 + 0x580) != param_2)) &&
       ((local_4 = 3, *(long *)(lVar1 + 0x588) != param_2 &&
        (local_4 = 4, *(long *)(lVar1 + 0x590) != param_2)))) &&
      ((local_4 = 5, *(long *)(lVar1 + 0x598) != param_2 &&
       ((local_4 = 6, *(long *)(lVar1 + 0x5a0) != param_2 &&
        (local_4 = 7, *(long *)(lVar1 + 0x5a8) != param_2)))))) &&
     ((local_4 = 8, *(long *)(lVar1 + 0x5b0) != param_2 &&
      (local_4 = 9, *(long *)(lVar1 + 0x5b8) != param_2)))) {
    return 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_4;
  }
  return 1;
}

