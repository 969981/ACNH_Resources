
void FUN_01b09918(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_18 = *(undefined2 *)param_2;
  local_16 = *(undefined1 *)((long)param_2 + 2);
  local_48 = &PTR_FUN_04a36b50;
  local_15 = *(undefined1 *)((long)param_2 + 3);
  local_40 = *param_2;
  local_3c = param_2[1];
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  local_38 = 0;
  local_14 = local_3c;
  uVar2 = FUN_0277d6c4(&local_40);
  lVar4 = DAT_0532a768;
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar2 = FUN_0277d6c4(&local_18);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
        local_38 = lVar4;
      }
    }
  }
  uVar3 = FUN_01b09a34(&local_48);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_01b09bec(&local_48), (uVar3 & 1) != 0)) {
    FUN_01b09f44(&local_48);
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  return;
}

