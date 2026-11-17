
/* WARNING: Removing unreachable block (ram,0x02b5f2f4) */
/* WARNING: Removing unreachable block (ram,0x02b5f2fc) */

uint FUN_02b5f280(byte *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_4;
  
  if (*param_1 < 8) {
    local_4 = CONCAT31(local_4._1_3_,*param_1);
    iVar2 = FUN_02582fe0(&local_4);
    if (iVar2 != -1) {
      local_30 = (undefined *)((ulong)local_30._4_4_ << 0x20);
      uVar4 = FUN_02b5e950(&local_30,iVar2);
      if ((uVar4 & 1) != 0) {
        uVar4 = (ulong)local_30 & 0xffffffff;
        puVar1 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
          puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
        }
        if (puVar1[1] != 0) {
          local_28 = 0;
          local_4 = 0;
          local_30 = PTR_DAT_04bc43f8 + 0x10;
          uVar4 = FUN_02b674f0(&local_4,uVar4);
          if ((uVar4 & 1) != 0) {
            local_28 = local_4;
          }
          uVar3 = FUN_02a59140(puVar1,&local_30);
          goto LAB_02b5f360;
        }
      }
    }
  }
  uVar3 = 0;
LAB_02b5f360:
  return uVar3 & 1;
}

