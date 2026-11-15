
/* WARNING: Removing unreachable block (ram,0x01e95600) */
/* WARNING: Removing unreachable block (ram,0x01e958a0) */
/* WARNING: Removing unreachable block (ram,0x01e958bc) */
/* WARNING: Removing unreachable block (ram,0x01e958d0) */
/* WARNING: Removing unreachable block (ram,0x01e95968) */
/* WARNING: Removing unreachable block (ram,0x01e959c4) */
/* WARNING: Removing unreachable block (ram,0x01e95978) */
/* WARNING: Removing unreachable block (ram,0x01e95988) */
/* WARNING: Removing unreachable block (ram,0x01e959a0) */
/* WARNING: Removing unreachable block (ram,0x01e959c8) */
/* WARNING: Removing unreachable block (ram,0x01e958ec) */
/* WARNING: Removing unreachable block (ram,0x01e959d0) */
/* WARNING: Removing unreachable block (ram,0x01e95a2c) */

void FUN_01e95554(long param_1)

{
  ulong uVar1;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  local_60 = 0;
  local_70 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_68 = PTR_DAT_04bb2010 + 0x10;
  local_50 = 0;
  local_58 = puStack_68;
  uVar1 = FUN_021e7360(&local_48,&local_70);
  if ((uVar1 & 1) == 0) {
    FUN_01e95d94(param_1,1);
    return;
  }
  *(undefined4 *)(param_1 + 0x13330) = 1;
  *(undefined4 *)(param_1 + 0x133a8) = 0;
                    /* WARNING: Could not recover jumptable at 0x01e955fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)DAT_04179052 * 4 + 0x1e95600))();
  return;
}

