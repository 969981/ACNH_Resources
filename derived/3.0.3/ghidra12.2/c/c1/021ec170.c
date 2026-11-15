
void FUN_021ec170(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  local_68 = PTR_DAT_04bc0510;
  *param_3 = 3;
  *(undefined8 *)(param_2 + 0x10) = 0x2200000022;
  *(undefined8 *)(param_2 + 0x20) = 0x2500000025;
  puVar4 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_68 = local_68 + 0x10;
  local_60 = *param_5;
  uStack_5c = param_5[1];
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar4 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_5);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8), lVar6 != 0)) {
        local_58 = lVar6;
      }
    }
  }
  uVar5 = FUN_01aee3b4(&local_68);
  if ((uVar5 < 10) && ((0x207U >> (ulong)(uVar5 & 0x1f) & 1) != 0)) {
    lVar6 = (long)(int)uVar5 * 4;
    uVar7 = *(undefined4 *)(&DAT_04179e34 + lVar6);
    uVar1 = *(undefined4 *)(&DAT_04179de4 + lVar6);
    uVar2 = *(undefined4 *)(&DAT_04130b64 + lVar6);
    uVar3 = *(undefined4 *)(&DAT_04179e0c + lVar6);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(&DAT_04179dbc + lVar6);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *param_3 = uVar2;
    *(undefined8 *)(param_2 + 0x20) = 0x2500000025;
    *(undefined4 *)(param_2 + 0x10) = uVar3;
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *param_4 = uVar7;
  }
  return;
}

