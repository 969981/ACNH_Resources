
/* WARNING: Removing unreachable block (ram,0x029d08e4) */
/* WARNING: Removing unreachable block (ram,0x029d08ec) */

void FUN_029d0844(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined *local_38;
  long local_30;
  undefined1 local_28;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0xc) ^ *(uint *)(param_1 + 0xc) << 0xb;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  uVar4 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
  *(uint *)(param_1 + 0x14) = uVar1;
  *(uint *)(param_1 + 0x18) = uVar4;
  uVar4 = (uint)((ulong)uVar4 * 100 >> 0x20);
  if (0x45 < uVar4) {
    FUN_029d0994(param_1,param_2,0x54 < uVar4,0,param_3 & 1);
    return;
  }
  if (param_2 != 0) {
    uVar4 = 3;
    if ((param_3 & 1) != 0) {
      local_38 = (undefined *)CONCAT44(local_38._4_4_,3);
      uVar4 = 7;
    }
    puVar5 = (&PTR_DAT_04a98608)[uVar4];
    local_48 = 0;
    local_40 = 0;
    lVar2 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x18) + 0x20))();
    if (((puVar5 != (undefined *)0x0) && (*(char *)(lVar2 + 0x78) != '\0')) &&
       (uVar3 = FUN_03bf46a8(param_2,"searchAndEmit(%s)",puVar5), (uVar3 & 1) != 0)) {
      local_28 = 0;
      local_38 = PTR_DAT_04bcadf8 + 0x10;
      local_30 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18),puVar5);
      if (local_30 != 0) {
        FUN_03bf47b0(param_2,&local_38,&local_48);
      }
    }
  }
  return;
}

