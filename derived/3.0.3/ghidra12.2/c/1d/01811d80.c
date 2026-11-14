
void FUN_01811d80(long param_1,long param_2,undefined1 *param_3)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  if ((*(ushort *)
        (*(long *)(*(long *)(param_2 + 8) + 0x10) + *(long *)(*(long *)(param_2 + 8) + 8) + 4) >> 1
      & 1) != 0) {
    *param_3 = 1;
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10) + *(long *)(*(long *)(param_1 + 8) + 8);
  sVar2 = *(short *)(lVar6 + 0x10);
  if (sVar2 == -2) {
    local_60 = 0x2aa7;
    FUN_0277d4ac(&local_60);
    puVar3 = PTR_DAT_04bb43c0;
    local_48 = 0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_50 = (undefined4)local_60;
    local_4c = local_60._4_4_;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar3 == 0) goto LAB_01811f44;
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01811f44;
    lVar6 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_60);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (*(uint *)(lVar6 + 0x1d8) <= uVar4) goto LAB_01811f44;
    lVar6 = *(long *)(lVar6 + 0x1e0);
  }
  else {
    local_48 = 0;
    local_4c = *(undefined4 *)(lVar6 + 0x14);
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_50 = CONCAT22(*(undefined2 *)(lVar6 + 0x12),sVar2);
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar3 == 0) goto LAB_01811f44;
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01811f44;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4((short *)(lVar6 + 0x10));
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_01811f44;
    lVar6 = *(long *)(lVar8 + 0x1e0);
  }
  lVar6 = *(long *)(lVar6 + (long)(int)uVar4 * 8);
  if (lVar6 != 0) {
    local_48 = lVar6;
  }
LAB_01811f44:
  uVar7 = *(undefined8 *)PTR_DAT_04bb46d0;
  uVar5 = FUN_01b020f0(&local_58);
  uVar4 = FUN_017c0190(uVar7,uVar5);
  uVar1 = *(ushort *)
           (*(long *)(*(long *)(param_2 + 8) + 0x10) + *(long *)(*(long *)(param_2 + 8) + 8) + 6);
  if (uVar4 != uVar1) {
    param_3[1] = 1;
    uVar1 = *(ushort *)
             (*(long *)(*(long *)(param_2 + 8) + 0x10) + *(long *)(*(long *)(param_2 + 8) + 8) + 6);
  }
  *(uint *)(param_3 + 4) = (uint)uVar1;
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10) + *(long *)(*(long *)(param_1 + 8) + 8);
  if ((*(byte *)(lVar6 + 0x20) & 0xe) == 6) {
    param_3[2] = 1;
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10) + *(long *)(*(long *)(param_1 + 8) + 8);
  }
  if ((*(byte *)(lVar6 + 0x20) & 1) != 0) {
    param_3[3] = 1;
  }
  return;
}

