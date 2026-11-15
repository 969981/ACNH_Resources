
bool FUN_01fc1b30(long *param_1,short *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  short *psVar5;
  long lVar6;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined *local_48;
  short local_40;
  short local_3e;
  undefined4 local_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_40 = *param_2;
  if (local_40 == -2) {
    bVar2 = false;
  }
  else {
    local_3e = param_2[1];
    local_38 = 0;
    local_3c = *(undefined4 *)(param_2 + 2);
    local_48 = PTR_DAT_04bc0510 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar1 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_2);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
          local_38 = lVar6;
        }
      }
    }
    local_4c = FUN_01b11a90(&local_48);
    bVar2 = local_4c != 0;
    if (local_4c != 0) {
      psVar5 = (short *)*param_1;
      *psVar5 = *param_2;
      *(char *)(psVar5 + 1) = (char)param_2[1];
      *(undefined1 *)((long)psVar5 + 3) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(psVar5 + 2) = *(undefined4 *)(param_2 + 2);
      *(int *)(*param_1 + 8) = local_4c;
      FUN_01b11fe0(&local_48,*param_1 + 0x10);
      uVar4 = FUN_01b12390(&local_48);
      *(undefined4 *)(*param_1 + 0xc) = uVar4;
      FUN_01b126a0(&local_54,&local_48);
      lVar6 = *param_1;
      *(undefined4 *)(lVar6 + 0x68) = local_54;
      *(undefined4 *)(lVar6 + 0x6c) = uStack_50;
      uVar4 = FUN_01b11c60(&local_48);
      *(undefined4 *)(*param_1 + 0x70) = uVar4;
    }
  }
  return bVar2;
}

