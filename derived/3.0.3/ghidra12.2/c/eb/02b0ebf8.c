
/* WARNING: Removing unreachable block (ram,0x02b0ed0c) */
/* WARNING: Removing unreachable block (ram,0x02b0ecd0) */

void FUN_02b0ebf8(long param_1,long param_2)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_48 = PTR_DAT_04bbc5d8 + 0x10;
  puStack_40 = PTR_DAT_04bb2018 + 0x10;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
    lVar3 = *(long *)PTR_DAT_04bb27a8;
  }
  else {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    lVar3 = *(long *)PTR_DAT_04bb27a8;
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      local_14 = 0x32;
      local_18 = 0x32;
      puVar4 = (undefined8 *)(lVar3 + 0x1c0);
      goto LAB_02b0ecd4;
    }
  }
  local_14 = 0;
  puVar4 = (undefined8 *)(lVar3 + 0x1f8);
LAB_02b0ecd4:
  local_50 = *puVar4;
  local_38 = *(undefined8 *)(param_2 + 0x10);
  local_28 = *(undefined8 *)(param_2 + 0x20);
  local_20 = 1;
  puStack_30 = puStack_40;
  FUN_013102c0(param_1 + 0xb0,&local_50);
  return;
}

