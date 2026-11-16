
/* WARNING: Removing unreachable block (ram,0x0291a4d0) */
/* WARNING: Removing unreachable block (ram,0x0291a498) */
/* WARNING: Removing unreachable block (ram,0x0291a4e0) */

undefined8 FUN_0291a460(void)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  undefined *local_b0;
  undefined1 local_a8;
  int local_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined *local_88;
  int local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined1 *local_68;
  undefined4 local_58 [10];
  
  local_88 = PTR_DAT_04bc43f8 + 0x10;
  local_80 = DAT_05636e58;
  local_58[0] = 1;
  lVar11 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x150) == 0)) {
    local_b0 = PTR_DAT_04bc4608 + 0x10;
    local_a8 = PTR_DAT_04bbc570[8];
    local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  }
  else {
    local_b0 = PTR_DAT_04bc4608 + 0x10;
    local_a8 = PTR_DAT_04bbc570[8];
    local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    if (DAT_05636e58 != 0) {
      ppuStack_70 = &local_88;
      local_78 = &PTR_FUN_04a9b150;
      local_68 = (undefined1 *)&local_b0;
      plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x150) + 0x10))();
      iVar3 = (**(code **)(*plVar4 + 0x18))();
      if (0 < iVar3) {
        iVar10 = 0;
        do {
          FUN_01360490(local_58,*(undefined8 *)(lVar11 + 0x150),iVar10);
          uVar6 = (*(code *)*local_78)(&local_78,local_58);
          if ((uVar6 & 1) != 0) break;
          bVar2 = iVar3 + -1 != iVar10;
          iVar10 = iVar10 + 1;
        } while (bVar2);
      }
    }
  }
  if (local_a4 == 0) {
    return 0;
  }
  puVar9 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    puVar5 = &DAT_055c1098;
  }
  else {
    do {
      puVar5 = puVar9 + -8;
      if (*(int *)(puVar9 + -1) == 0x77130016) goto LAB_0291a66c;
      puVar5 = puVar9 + 1;
      puVar9 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != &DAT_055c1b58);
    puVar5 = &DAT_055c1098;
  }
LAB_0291a66c:
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
LAB_0291a6cc:
    if (7 < *pbVar7) {
LAB_0291a6d8:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar11 = **(long **)PTR_DAT_04bb27d0;
        bVar8 = *(byte *)(lVar11 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar1 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar11 + 0x471);
          }
        }
        bVar8 = *pbVar7;
        bVar2 = 7 < bVar8;
        if (bVar2) {
          bVar8 = 0xff;
        }
        local_58[0] = CONCAT31(local_58[0]._1_3_,bVar8);
        if (!bVar2) goto LAB_0291a758;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0291a6cc;
      }
      goto LAB_0291a6d8;
    }
  }
  bVar8 = *pbVar7;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_58[0] = CONCAT31(local_58[0]._1_3_,bVar8);
LAB_0291a758:
  uVar6 = FUN_02917d90(puVar5,local_58,PTR_DAT_04bb7ab0);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  FUN_02921310(*(undefined8 *)PTR_DAT_04bb59b8,1,&local_b0);
  return 1;
}

