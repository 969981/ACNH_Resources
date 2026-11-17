
void FUN_02bd7678(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  long lVar8;
  int *piVar9;
  undefined1 auStack_5e [2];
  undefined2 local_5c [2];
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined8 local_3c;
  undefined2 local_34;
  undefined8 local_18;
  
  local_18 = 0xfffe;
  FUN_0277d4ac(&local_18);
  FUN_02bd74dc(param_1,&local_18);
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = (undefined4)local_18;
  uStack_4c = local_18._4_4_;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_18);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
        local_48 = lVar8;
      }
    }
  }
  puVar2 = PTR_DAT_04bb3170;
  FUN_007ef010(local_5c,PTR_DAT_04bb3170);
  piVar9 = param_2 + 3;
  if ((short)*piVar9 == *(short *)puVar2) {
    if (param_2[2] < 0) {
      if (param_2[1] < 0) {
        iVar1 = *param_2;
        if ((((-1 < iVar1) && (iVar6 = FUN_01ad7260(&local_58), iVar6 != 0)) &&
            ((iVar1 == 0 || (iVar6 = FUN_01ad7260(&local_58), iVar1 < iVar6)))) &&
           (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 != (ushort *)0x0)) {
          *puVar7 = *puVar7 & 0xfff8 | (ushort)iVar1 & 7;
        }
      }
      else {
        FUN_01afdcc4(&local_58);
      }
    }
    else {
      FUN_01afdd70(&local_58);
    }
  }
  else {
    FUN_007ef010(auStack_5e,piVar9);
    FUN_01afde50(&local_58,auStack_5e);
    local_5c[0] = (undefined2)*piVar9;
  }
  uVar4 = uStack_4c;
  uVar3 = local_50;
  local_3c = 0xfffe;
  FUN_0277d4ac(&local_3c);
  local_3c = CONCAT44(uVar4,uVar3);
  local_34 = local_5c[0];
  FUN_033ba168(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),&local_3c);
  return;
}

