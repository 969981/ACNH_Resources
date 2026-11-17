
/* WARNING: Removing unreachable block (ram,0x02aea1f0) */
/* WARNING: Removing unreachable block (ram,0x02aea1a8) */
/* WARNING: Removing unreachable block (ram,0x02aea1cc) */
/* WARNING: Removing unreachable block (ram,0x02aea214) */

undefined8 FUN_02aea188(long param_1,short param_2)

{
  uint local_4;
  
  local_4 = 0;
  if (((((DAT_05618008 == param_2) || (local_4 = 1, DAT_05618028 == param_2)) ||
       (local_4 = 2, DAT_05618048 == param_2)) || (local_4 = 3, DAT_05618068 == param_2)) &&
     (local_4 < *(uint *)(param_1 + 0x420))) {
    return *(undefined8 *)(*(long *)(param_1 + 0x428) + (long)(int)local_4 * 8);
  }
  return 0;
}

