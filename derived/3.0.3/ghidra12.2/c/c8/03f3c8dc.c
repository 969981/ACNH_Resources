
undefined8 FUN_03f3c8dc(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined *local_88;
  char *pcStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_73;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  local_48 = 0;
  uStack_40 = 0;
  local_73 = 0x1010001;
  local_78 = 0x1000000;
  local_6c = 8;
  uStack_50 = *(undefined8 *)(param_2 + 8);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_38 = 0;
  local_58 = 0;
  local_98 = PTR_DAT_04bdf0b0 + 0x10;
  local_74 = 0;
  pcStack_80 = "ResourceSizeTable";
  local_28 = *(undefined8 *)(param_2 + 0x18);
  local_90 = 1;
  local_68 = 0;
  uStack_60 = 0;
  puStack_30 = local_88;
  puVar3 = (undefined8 *)FUN_03f2dbac(param_1 + 0x10,&puStack_30,&local_98,0);
  if (((*PTR_DAT_04bb4458 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  if ((puVar3 == (undefined8 *)0x0) ||
     (uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4450), (uVar4 & 1) == 0)) {
    return 0;
  }
  pcVar5 = (char *)puVar3[1];
  if (((*pcVar5 == 'R') && (pcVar5[1] == 'S')) && (pcVar5[2] == 'T')) {
    if (pcVar5[3] == 'B') {
      uVar1 = *(uint *)(pcVar5 + 4);
      iVar2 = *(int *)(pcVar5 + 8);
      pcVar5 = pcVar5 + 0xc;
      if (0 < (int)uVar1) {
        *(char **)(param_1 + 0x50) = pcVar5;
        pcVar5 = pcVar5 + (ulong)uVar1 * 8;
        *(uint *)(param_1 + 0x48) = uVar1;
      }
      if (0 < iVar2) {
        *(int *)(param_1 + 0x58) = iVar2;
        *(char **)(param_1 + 0x60) = pcVar5;
      }
      goto LAB_03f3ca44;
    }
    if (pcVar5[3] == 'C') {
      uVar1 = *(uint *)(pcVar5 + 4);
      iVar2 = *(int *)(pcVar5 + 8);
      pcVar5 = pcVar5 + 0xc;
      if (0 < (int)uVar1) {
        *(char **)(param_1 + 0x70) = pcVar5;
        pcVar5 = pcVar5 + (ulong)uVar1 * 0xc;
        *(uint *)(param_1 + 0x68) = uVar1;
      }
      if (0 < iVar2) {
        *(int *)(param_1 + 0x78) = iVar2;
        *(char **)(param_1 + 0x80) = pcVar5;
      }
      *(undefined1 *)(param_1 + 8) = 1;
      return 1;
    }
  }
  uVar1 = *(uint *)(puVar3 + 2);
  if (7 < uVar1) {
    *(char **)(param_1 + 0x50) = pcVar5;
    *(uint *)(param_1 + 0x48) = uVar1 >> 3;
  }
LAB_03f3ca44:
  *(undefined1 *)(param_1 + 8) = 0;
  return 1;
}

