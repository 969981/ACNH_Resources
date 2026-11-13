
uint FUN_014cb958(long param_1,long param_2,long param_3,undefined4 *param_4,ulong param_5,
                 uint param_6)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_2 == 0) {
    return 0;
  }
  local_60 = 0;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
      iVar2 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar8 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  local_68 = PTR_DAT_04bb3140 + 0x10;
  local_78 = &DAT_048f9750;
  local_70 = 0;
  if ((param_5 & 1) == 0) {
    if ((param_6 & 1) == 0) {
      FUN_01a50240(&local_38,&local_68,*param_4,param_3);
    }
    else {
      puVar5 = (undefined2 *)FUN_01a5010c(&local_68,*param_4,param_3);
      local_38._0_2_ = *puVar5;
      local_38._2_1_ = *(undefined1 *)(puVar5 + 1);
      local_38._3_1_ = *(undefined1 *)((long)puVar5 + 3);
      local_34 = *(undefined4 *)(puVar5 + 2);
    }
    local_70 = *(undefined8 *)(param_3 + 8);
  }
  else if ((param_6 & 1) == 0) {
    FUN_01a5033c(&local_80,&local_68,*param_4,param_3,&local_78);
    local_38 = local_80;
    local_34 = uStack_7c;
  }
  else {
    puVar4 = (undefined4 *)FUN_01a5190c(&local_68,*param_4,param_3,&local_78);
    local_38 = *puVar4;
    local_34 = puVar4[1];
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_38);
  lVar6 = DAT_05150358;
  if (*(long *)puVar1 == 0) {
LAB_014cbb6c:
    if (((DAT_05150358 != 0) &&
        ((((*(long *)(DAT_05150358 + 0xb0) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
          (*(long *)(DAT_05150358 + 0x488) != 0)) &&
         ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
          (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
      uVar3 = FUN_0277d6c4(&local_38);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) goto LAB_014cbb50;
    }
    uVar3 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_014cbb6c;
LAB_014cbb50:
    uVar3 = FUN_014f1144(param_1 + 0x700,param_2,&local_38,&local_78,param_4);
  }
  return uVar3 & 1;
}

