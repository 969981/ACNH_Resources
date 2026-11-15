
undefined8 FUN_01ee6628(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined1 auStack_160 [4];
  uint local_15c;
  undefined8 local_158;
  undefined8 *puStack_150;
  int local_148 [27];
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined1 local_cf;
  undefined4 local_cc;
  undefined1 local_ac;
  undefined4 local_34;
  
  if ((((1 < *(byte *)(*DAT_0537d558 + 0x476)) || ((int)param_1[0xef6] - 3U < 5)) ||
      (uVar2 = (**(code **)(*(long *)param_1[1] + 0x180))(), (uVar2 & 1) == 0)) ||
     ((local_148[0] = 10, (*(ushort *)(param_1 + 0x15a5) >> 10 & 1) != 0 ||
      ((*(ushort *)((long)param_1 + 0xad2a) >> 10 & 1) != 0)))) {
    return 0;
  }
  if ((param_1[1] != 0) && (uVar1 = *(uint *)(param_1[1] + 0x508), uVar1 != 0xffffffff)) {
    puVar6 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
    if (9 < uVar1) {
      puVar6 = &DAT_053fe348;
    }
    local_148[0] = *(int *)(puVar6 + 0x4e8);
    if (local_148[0] != 0) {
      return 0;
    }
  }
  uVar2 = (ulong)*(byte *)(param_2 + 8);
  if ((uVar2 < 8) && (DAT_054f5738 != 0)) {
    puVar5 = (undefined4 *)(DAT_054f5738 + uVar2 * 4 + 0xde8);
  }
  else {
    puVar5 = &DAT_04c9a0c8;
  }
  local_34 = *puVar5;
  uVar2 = FUN_02087ce0(param_1[3],&local_34,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (((uint)param_1[0x15ab] >> 0x1c & 1) == 0) {
    param_1[0x15ab] = param_1[0x15ab] | 0x10000000;
    FUN_02087b00(param_1[3],4);
  }
  FUN_02085e20(param_1[3],0,local_34,PTR_DAT_04bb6928,0);
  FUN_01e7b7bc(local_148);
  local_cc = 0x5a;
  FUN_01ea9200(&local_15c,param_1,auStack_160,(byte *)(param_2 + 8));
  if ((int)local_15c < 0x6d) {
    if (local_15c < 0x6d) {
      ppuVar3 = &PTR_s_EmotEnd_04913cd8;
LAB_01ee67fc:
      puStack_150 = (undefined8 *)ppuVar3[local_15c];
      goto LAB_01ee6800;
    }
  }
  else if (local_15c < 0x79) {
    ppuVar3 = (undefined **)FUN_007c3ad0();
    local_15c = local_15c - 0x6d;
    goto LAB_01ee67fc;
  }
  puStack_150 = &DAT_0407ebb1;
LAB_01ee6800:
  local_158 = PTR_DAT_04bb2020 + 0x10;
  FUN_01ed8df0(local_148,0,&local_158);
  local_ac = 1;
  local_cf = 1;
  plVar4 = (long *)FUN_016debb0(param_1[1]);
  (**(code **)(*plVar4 + 0x370))(&local_158);
  local_dc = (undefined4)local_158;
  uStack_d8 = local_158._4_4_;
  (**(code **)(*param_1 + 0x38))(param_1,1,local_148,0);
  return 1;
}

