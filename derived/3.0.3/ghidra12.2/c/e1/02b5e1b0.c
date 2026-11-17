
/* WARNING: Removing unreachable block (ram,0x02b5e2fc) */
/* WARNING: Removing unreachable block (ram,0x02b5e29c) */
/* WARNING: Removing unreachable block (ram,0x02b5e23c) */
/* WARNING: Removing unreachable block (ram,0x02b5e258) */
/* WARNING: Removing unreachable block (ram,0x02b5e2b8) */
/* WARNING: Removing unreachable block (ram,0x02b5e318) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffbc : 0x02b5e2a0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_02b5e1b0(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  int local_4c;
  undefined2 local_48;
  undefined1 local_46;
  int local_44;
  undefined2 local_40;
  undefined1 local_3e;
  int local_3c;
  byte local_38;
  undefined2 local_37;
  uint local_34;
  
  local_38 = 10;
  local_50 = 0x23;
  local_4e = 8;
  local_4c = 0;
  local_48 = 0x23;
  local_46 = 8;
  local_44 = 0;
  local_37 = 0xa0a;
  local_40 = 0x23;
  local_3e = 8;
  local_3c = 0;
  local_34 = param_1;
  FUN_02202c80(&local_50);
  local_54 = 0;
  iVar1 = FUN_0285e924(0);
  if ((((iVar1 == 0) || (local_4c == 2)) || (9 < local_38)) || (local_34 != local_38)) {
    local_54 = 1;
    iVar1 = FUN_0285e924(1);
    if (((iVar1 == 0) || (local_44 == 2)) || ((9 < (byte)local_37 || (local_34 != (byte)local_37))))
    {
      local_54 = 2;
      iVar1 = FUN_0285e924(2);
      if (((iVar1 == 0) || (local_3c == 2)) ||
         ((9 < local_37._1_1_ || (local_34 != local_37._1_1_)))) {
        return 0;
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_54;
  }
  return 1;
}

