
undefined8
FUN_014cb6a0(long param_1,long param_2,undefined8 param_3,uint *param_4,uint param_5,uint param_6)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  int local_34;
  
  uVar1 = *param_4;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar1);
  if (uVar1 < 2) {
    if (param_2 != 0) {
      puStack_80 = PTR_DAT_04bb2010 + 0x10;
      uStack_58 = 0;
      uStack_68 = 0;
      local_78 = 0;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      local_70 = puStack_80;
      local_60 = puStack_80;
      local_34 = FUN_014d00a0(param_3,param_4,param_5 & 1,&local_88,&local_60,1);
      if ((local_34 != 0) &&
         (uVar4 = FUN_014f1918(param_1 + 0x700,param_2,&local_34,&local_88), (uVar4 & 1) != 0)) {
        return 1;
      }
    }
    uVar4 = FUN_014cb958(param_1,param_2,param_3,param_4,param_5 & 1,param_6 & 1);
    puVar2 = PTR_DAT_04bb59d8;
    if ((uVar4 & 1) == 0) {
      if ((*param_4 == 0) && (*(long *)PTR_DAT_04bb59d8 != 0)) {
        lVar6 = *(long *)PTR_DAT_04bb2720;
        if (lVar6 == 0) {
          puVar5 = &DAT_055c04a0;
        }
        else {
          puVar5 = &DAT_055c04a0;
          if (*(long *)(lVar6 + 0x330) != 0) {
            puVar5 = (undefined8 *)
                     (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                               (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
            iVar3 = FUN_006bd550(*puVar5,0);
            puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar3 != 0x758f7eaf) {
              puVar5 = &DAT_055c04a0;
            }
          }
        }
        if ((param_2 != 0) && (*(int *)(puVar5 + 7) == -0x17df00c3)) {
          puStack_80 = PTR_DAT_04bb2010 + 0x10;
          uStack_58 = 0;
          uStack_68 = 0;
          local_78 = 0;
          local_88 = PTR_DAT_04bbc1a0 + 0x10;
          local_70 = puStack_80;
          local_60 = puStack_80;
          local_34 = FUN_014d0308(param_3,param_5 & 1,&local_88,&local_60);
          if ((local_34 != 0) &&
             (uVar4 = FUN_014f1bc4(param_1 + 0x700,param_2,&local_34,&local_88), (uVar4 & 1) != 0))
          {
            return 1;
          }
        }
        if ((((*param_4 == 0) && (*(long *)puVar2 != 0)) && (uVar4 = FUN_0375e36c(), param_2 != 0))
           && ((uVar4 & 1) != 0)) {
          puStack_80 = PTR_DAT_04bb2010 + 0x10;
          uStack_58 = 0;
          uStack_68 = 0;
          local_78 = 0;
          local_88 = PTR_DAT_04bbc1a0 + 0x10;
          local_70 = puStack_80;
          local_60 = puStack_80;
          local_34 = FUN_014d050c(param_3,param_5 & 1,&local_88,&local_60);
          if ((local_34 != 0) &&
             (uVar4 = FUN_014f1dfc(param_1 + 0x700,param_2,&local_34,&local_88), (uVar4 & 1) != 0))
          {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  else {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar1);
    if (3 < uVar1 - 2 && uVar1 != 7) {
      return 0;
    }
    uVar4 = FUN_014cb958(param_1,param_2,param_3,param_4,param_5 & 1,param_6 & 1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}

