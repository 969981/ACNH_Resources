
undefined8 FUN_016dd4c4(undefined8 param_1,undefined4 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) || (*(int *)(lVar7 + 0x80) != 1)) {
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
      if (0xff < (uint)(int)sVar3) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) {
        return 0;
      }
    }
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_2);
    lVar7 = *(long *)puVar1;
    if (lVar7 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_2;
        uStack_4c = param_2[1];
        local_58 = PTR_DAT_04bc0510 + 0x10;
        uVar4 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_2);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0)) {
              local_48 = lVar7;
            }
          }
        }
        iVar5 = FUN_0277d6c4(param_2);
        if (((iVar5 == 0x9c9) && (uVar6 = FUN_01b09bec(&local_58), (uVar6 & 1) != 0)) &&
           ((param_3 & 1) == 0)) {
          uVar8 = *(undefined8 *)PTR_DAT_04bb46f0;
          local_68 = (undefined *)0x15e7;
          FUN_0277d4ac(&local_68);
          uVar6 = FUN_0261f280(uVar8,&local_68,param_1);
          if ((uVar6 & 1) == 0) {
            puVar1 = PTR_DAT_04bb2020 + 0x10;
            pcStack_60 = "PickUpDIYGoldCount";
            local_68 = puVar1;
            FUN_0274ca70(param_1,&local_68,1);
            pcStack_60 = "PickUpDIYGoldCount";
            local_68 = puVar1;
            iVar5 = FUN_0274bce0(param_1,&local_68);
            if (0 < iVar5) {
              pcStack_60 = "MainmenuRecipe";
              local_68 = puVar1;
              iVar5 = FUN_0274bce0(param_1,&local_68);
              if (iVar5 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

