
void FUN_0262c3a0(int *param_1,char *param_2,byte *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_80;
  char *local_78;
  long local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  *param_1 = 0;
  *param_2 = '\0';
  if (*param_3 < 8) {
    local_68 = CONCAT11(local_68._1_1_,*param_3);
    lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_68,1);
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "UpgradePocket40";
      local_80 = puVar1;
      iVar4 = FUN_0274b8d0(lVar6,&local_80);
      if (iVar4 == 0) {
        local_78 = "UpgradePocket30";
        local_80 = puVar1;
        iVar4 = FUN_0274b8d0(lVar6,&local_80);
        uVar5 = (uint)(iVar4 != 0);
      }
      else {
        uVar5 = 2;
      }
    }
    puVar3 = PTR_DAT_04bb43c0;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar5);
    lVar6 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    lVar9 = 0x1e;
    if (uVar5 != 1) {
      lVar9 = 0x14;
    }
    lVar2 = 0x28;
    if (uVar5 != 2) {
      lVar2 = lVar9;
    }
    do {
      puVar7 = (undefined8 *)FUN_02677ea0(param_3,lVar6);
      local_68 = *(undefined2 *)puVar7;
      local_66 = *(undefined1 *)((long)puVar7 + 2);
      local_65 = *(undefined1 *)((long)puVar7 + 3);
      local_64 = *(undefined4 *)((long)puVar7 + 4);
      local_78 = (char *)*puVar7;
      lVar9 = *(long *)puVar3;
      local_70 = 0;
      local_80 = puVar1;
      uVar5 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_68);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8), lVar9 != 0)) {
            local_70 = lVar9;
          }
        }
      }
      uVar8 = FUN_0277d7b4(&local_68,param_4);
      if ((uVar8 & 1) != 0) {
        uVar8 = FUN_01af0020(&local_80);
        if ((uVar8 & 1) == 0) {
          iVar4 = 1;
        }
        else {
          uVar8 = FUN_01af28ac(&local_80,param_4);
          if ((uVar8 & 1) == 0) goto LAB_0262c4c0;
          iVar4 = FUN_01af02d0(&local_80);
        }
        *param_1 = *param_1 + iVar4;
        *param_2 = *param_2 + '\x01';
      }
LAB_0262c4c0:
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
  }
  return;
}

