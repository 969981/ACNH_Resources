
/* WARNING: Removing unreachable block (ram,0x00ad4674) */
/* WARNING: Removing unreachable block (ram,0x00ad4684) */

void FUN_00ad4600(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined *local_98;
  uint local_90;
  uint uStack_8c;
  undefined *local_88;
  uint local_80;
  uint uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte local_68;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  puVar5 = PTR_DAT_04bbbf90;
  FUN_017baf44(*(undefined4 *)(PTR_DAT_04bbbf90 + 0xc));
  local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    local_78 = PTR_DAT_04bbfe68 + 0x10;
    if ((param_3 & 1) == 0) {
      uStack_6c = *(undefined4 *)(puVar5 + 0xc);
      local_70 = 1;
      local_68 = FUN_017baf44();
      local_68 = local_68 & 1;
      lVar7 = FUN_01a4fa00(&local_78);
      puVar5 = PTR_DAT_04bb2010;
      uVar1 = *(int *)(lVar7 + 0x24) + 1;
      uVar10 = *(uint *)(lVar7 + 0x14);
      if (uVar1 != uVar10) {
        uVar4 = *(uint *)(lVar7 + 0x10);
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        uVar12 = uVar4;
        do {
          local_88 = puVar2;
          local_80 = uVar12;
          uStack_7c = uVar10;
          if (((uVar12 | uVar10) & 1) == 0) {
            local_98 = puVar5 + 0x10;
            local_90 = uVar12;
            uStack_8c = uVar10;
            uVar8 = FUN_016771a0(&local_98);
            if (((uVar8 & 1) != 0) &&
               (FUN_01a50240(&local_48,&local_78,0,&local_88), 1 < (ushort)(local_48 + 3U))) {
              FUN_00ad52c0(param_2,&local_48,&local_88);
            }
          }
          if ((int)uVar12 < *(int *)(lVar7 + 0x20)) {
            uVar12 = uVar12 + 1;
          }
          else {
            uVar10 = uVar10 + 1;
            uVar12 = *(uint *)(lVar7 + 0x10);
          }
        } while (uVar4 != uVar12 || uVar1 != uVar10);
      }
    }
    else {
      uStack_6c = *(undefined4 *)(puVar5 + 0xc);
      local_70 = 1;
      local_68 = FUN_017baf44();
      local_68 = local_68 & 1;
      lVar7 = FUN_01a4fa00(&local_78);
      puVar5 = PTR_DAT_04bb2010;
      uVar1 = *(int *)(lVar7 + 0x24) + 1;
      uVar10 = *(uint *)(lVar7 + 0x14);
      if (uVar1 != uVar10) {
        uVar4 = *(uint *)(lVar7 + 0x10);
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        uVar12 = uVar4;
        do {
          local_88 = puVar2;
          local_80 = uVar12;
          uStack_7c = uVar10;
          if (((uVar12 | uVar10) & 1) == 0) {
            local_98 = puVar5 + 0x10;
            local_90 = uVar12;
            uStack_8c = uVar10;
            uVar8 = FUN_016771a0(&local_98);
            if ((uVar8 & 1) != 0) {
              psVar9 = (short *)FUN_01a5010c(&local_78,0,&local_88);
              local_46 = (undefined1)psVar9[1];
              local_48 = *psVar9;
              local_45 = *(undefined1 *)((long)psVar9 + 3);
              local_44 = *(undefined4 *)(psVar9 + 2);
              if (1 < (ushort)(local_48 + 3U)) {
                FUN_00ad52c0(param_2,&local_48,&local_88);
              }
            }
          }
          if ((int)uVar12 < *(int *)(lVar7 + 0x20)) {
            uVar12 = uVar12 + 1;
          }
          else {
            uVar10 = uVar10 + 1;
            uVar12 = *(uint *)(lVar7 + 0x10);
          }
        } while (uVar4 != uVar12 || uVar1 != uVar10);
      }
    }
    lVar7 = 0;
    puVar11 = (undefined4 *)(param_1 + 0x8000);
    do {
      plVar3 = (long *)(param_1 + 0x4000 + lVar7);
      uVar8 = (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar6 = 0xffffffff;
      if ((uVar8 & 1) != 0) {
        uVar6 = (**(code **)*plVar3)(plVar3,param_2);
      }
      lVar7 = lVar7 + 0x20;
      *puVar11 = uVar6;
      puVar11 = puVar11 + 1;
    } while (lVar7 != 0x4000);
  }
  return;
}

