
/* WARNING: Removing unreachable block (ram,0x027030ec) */
/* WARNING: Removing unreachable block (ram,0x02703078) */
/* WARNING: Removing unreachable block (ram,0x027030b4) */
/* WARNING: Removing unreachable block (ram,0x027030fc) */
/* WARNING: Removing unreachable block (ram,0x0270308c) */
/* WARNING: Removing unreachable block (ram,0x027030c4) */

void FUN_02703058(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((((*(byte *)(param_2 + 0x50e) ^ 0xff) & 6) == 0) ||
      (uVar1 = 1, ((*(byte *)(param_2 + 0x50f) ^ 0xff) & 6) == 0)) ||
     (uVar1 = 2, ((*(byte *)(param_2 + 0x510) ^ 0xff) & 6) == 0)) {
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

