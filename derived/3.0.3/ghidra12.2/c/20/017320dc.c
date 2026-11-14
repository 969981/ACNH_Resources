
void FUN_017320dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  long lVar6;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined *local_f0;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  undefined1 local_dc [127];
  undefined1 local_5d;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined1 local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_017321bc;
  if (*(char *)(param_1 + 0x1d5) == '\0') {
LAB_0173217c:
    puVar5 = (undefined2 *)(param_1 + 0xd4);
  }
  else {
    puVar5 = (undefined2 *)(param_1 + 0xcc);
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(puVar5);
    if (*(long *)puVar1 == 0) {
LAB_0173215c:
      iVar4 = FUN_0277d6c4(puVar5);
      if (iVar4 != 0xfffd) goto LAB_0173217c;
      puVar5 = &DAT_05586008;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0173215c;
    }
  }
  FUN_00765f94(&local_120,puVar5,*(undefined1 *)(param_1 + 0xed),*(undefined4 *)(param_1 + 0x1d0));
  *(undefined4 *)(param_1 + 0x9c) = local_120;
  *(ulong *)(param_1 + 0xa0) = CONCAT44(uStack_118,uStack_11c);
  *(undefined4 *)(param_1 + 0xa8) = local_114;
  *(undefined1 *)(param_1 + 0xac) = (undefined1)local_110;
  *(undefined1 *)(param_1 + 0xb0) = 1;
LAB_017321bc:
  local_110 = 0;
  local_10c = 0x3f800000;
  local_120 = 0;
  uStack_11c = 0xffffffff;
  uStack_118 = 0;
  local_114 = 0;
  puStack_e8 = local_dc;
  local_e0 = 0x80;
  local_5d = 0;
  local_dc[0] = 0;
  local_f0 = PTR_DAT_04bb2d88 + 0x10;
  local_50 = 0;
  local_54 = 0;
  local_104 = 0;
  local_fc = 0;
  local_48 = 0;
  local_58 = 7;
  bVar2 = FUN_0076b570(param_1,param_2,&local_120);
  *(byte *)(param_1 + 0xee) = bVar2 & 1;
  *(byte *)(param_1 + 0xef) = bVar2 & 1;
  return;
}

