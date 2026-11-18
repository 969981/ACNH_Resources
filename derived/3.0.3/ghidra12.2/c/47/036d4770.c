
/* WARNING: Removing unreachable block (ram,0x036d4918) */
/* WARNING: Removing unreachable block (ram,0x036d4928) */
/* WARNING: Removing unreachable block (ram,0x036d494c) */

void FUN_036d4770(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_c8 [8];
  undefined **local_c0;
  undefined **local_b8;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  undefined *puStack_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  undefined4 local_80;
  int local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  local_70 = 0;
  local_78 = PTR_DAT_04bbfe68 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar4 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar7 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  lVar6 = FUN_01a4fa00(&local_78);
  puVar3 = PTR_DAT_04bb27a8;
  puVar2 = PTR_DAT_04bb2010;
  local_90 = *(int *)(lVar6 + 0x10);
  iStack_8c = *(int *)(lVar6 + 0x14);
  local_80 = *(undefined4 *)(lVar6 + 0x20);
  local_7c = *(int *)(lVar6 + 0x24);
  local_a0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_98 = PTR_DAT_04bb2010 + 0x10;
  iVar4 = 0;
  local_88 = puStack_98;
  do {
    iVar8 = local_90;
    if ((iVar4 == 0) || (iVar4 == 1)) {
      local_b0 = puVar2 + 0x10;
      iVar1 = local_7c + 1;
      local_c0 = &puStack_98;
      local_b8 = &local_88;
      local_a8 = local_90;
      local_a4 = iStack_8c;
      while (iVar1 != local_a4) {
        do {
          FUN_01a5033c(auStack_c8,&local_78,iVar4,&local_b0,0);
          uVar5 = FUN_0277e294(auStack_c8);
          if ((((uVar5 & 1) != 0) && (uVar5 = FUN_01a4f798(&local_78,0,&local_b0), (uVar5 & 1) != 0)
              ) && (lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0xd0), lVar6 != 0)) {
            FUN_012e5af4(lVar6,&local_b0);
          }
          if (local_a8 < *(int *)(local_b8 + 1)) {
            local_a8 = local_a8 + 1;
          }
          else {
            local_a4 = local_a4 + 1;
            local_a8 = *(int *)(local_c0 + 1);
          }
        } while (iVar8 != local_a8);
      }
    }
    iVar8 = 8;
    if (iVar4 < 8) {
      iVar8 = iVar4 + 1;
    }
    iVar4 = iVar8;
  } while (iVar8 != 8);
  return;
}

