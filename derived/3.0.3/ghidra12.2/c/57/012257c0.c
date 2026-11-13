
void FUN_012257c0(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *local_68;
  undefined2 local_60;
  byte local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  
  uVar4 = *param_2;
  bVar2 = *(byte *)(param_2 + 1);
  *param_1 = uVar4;
  uVar3 = *(undefined1 *)((long)param_2 + 3);
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(byte *)(param_1 + 1) = bVar2;
  *(undefined1 *)((long)param_1 + 3) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar1;
  puVar5 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar8 = *(long *)puVar5;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_58 = 0;
      local_60 = uVar4;
      local_5e = bVar2;
      local_5d = uVar3;
      local_5c = uVar1;
      uVar6 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar5 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(param_1);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
            local_58 = lVar8;
          }
        }
      }
      uVar7 = FUN_01ae59b0(&local_68);
      bVar2 = local_5e >> 2 & 1;
      if ((uVar7 & 1) == 0) {
        bVar2 = local_5e & 4;
      }
      if (bVar2 != 0) {
        FUN_01afa900(&local_68,0);
      }
      *(byte *)(param_1 + 1) = local_5e;
      *param_1 = local_60;
      *(undefined1 *)((long)param_1 + 3) = local_5d;
      *(undefined4 *)(param_1 + 2) = local_5c;
    }
  }
  return;
}

