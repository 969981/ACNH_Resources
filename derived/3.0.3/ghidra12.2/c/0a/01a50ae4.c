
uint FUN_01a50ae4(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bb43c0;
  uVar4 = *(undefined2 *)param_2;
  local_68 = 0;
  uVar5 = *(undefined1 *)((long)param_2 + 2);
  uVar6 = *(undefined1 *)((long)param_2 + 3);
  local_70 = *param_2;
  uVar7 = param_2[1];
  local_78 = PTR_DAT_04bc0510 + 0x10;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_6c = uVar7;
  uVar2 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8), lVar8 != 0)) {
        local_68 = lVar8;
      }
    }
  }
  uVar3 = FUN_01ae59b0(&local_78);
  if ((uVar3 & 1) != 0) {
    FUN_01afc110(&local_78,1);
    uVar4 = (undefined2)local_70;
    uVar5 = local_70._2_1_;
    uVar6 = local_70._3_1_;
    uVar7 = local_6c;
  }
  lVar8 = *(long *)puVar1;
  local_48 = CONCAT13(uVar6,CONCAT12(uVar5,uVar4));
  local_44 = uVar7;
  uVar2 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_80 = uVar4;
      local_7e = uVar5;
      local_7d = uVar6;
      local_7c = uVar7;
      FUN_0277e294(&local_80);
    }
  }
  FUN_01afa900(&local_78,1);
  local_48 = local_70;
  local_44 = local_6c;
  uVar2 = FUN_01a50970(param_1,0,&local_48,param_3);
  return uVar2 & 1;
}

