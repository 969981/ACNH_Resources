
uint FUN_036e7344(undefined8 *param_1,long param_2,int *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  long local_60;
  undefined *local_58;
  int local_50;
  int iStack_4c;
  undefined8 local_48;
  
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  puVar2 = PTR_DAT_04bb43c0;
  local_68 = *(undefined2 *)param_1;
  local_66 = *(undefined1 *)((long)param_1 + 2);
  local_65 = *(undefined1 *)((long)param_1 + 3);
  local_64 = *(undefined4 *)((long)param_1 + 4);
  local_48 = *param_1;
  if ((*param_3 == 2) || (*param_3 == 3)) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
  }
  if ((*param_3 == 1) || (*param_3 == 3)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_60 = 0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  local_58 = puVar1;
  uVar3 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(&local_48);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
        local_60 = lVar7;
      }
    }
  }
  local_78 = 0;
  local_88 = 0;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_90 = puVar1;
  local_80 = puVar1;
  FUN_01afb480(&local_70,&local_98);
  local_50 = *(int *)(param_2 + 8) + (((int)local_88 - (int)local_78) + 5) * iVar6;
  iStack_4c = *(int *)(param_2 + 0xc) + ((local_88._4_4_ - local_78._4_4_) + 5) * iVar5;
  uVar4 = FUN_01ae98d0(&local_70);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar4);
  FUN_01afb8e8(&local_70);
  uVar3 = FUN_036e7000(&local_48,&local_58,&local_98);
  return uVar3 & 1;
}

