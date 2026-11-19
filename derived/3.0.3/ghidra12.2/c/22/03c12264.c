
/* WARNING: Removing unreachable block (ram,0x03c122c0) */
/* WARNING: Removing unreachable block (ram,0x03c122a8) */
/* WARNING: Removing unreachable block (ram,0x03c122e0) */

void FUN_03c12264(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined *local_b8;
  undefined8 *puStack_b0;
  undefined **local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb2668;
  uVar4 = (ulong)local_b8 >> 0x20;
  plVar14 = (long *)(*(long *)PTR_DAT_04bb2628 + 0x100);
  lVar13 = *plVar14;
  local_b8 = (undefined *)(uVar4 << 0x20);
  if (*plVar14 != 0) {
    local_b8 = (undefined *)(uVar4 << 0x20);
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      lVar15 = 1;
    }
    else {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar15 = *(long *)(lVar7 + 0xa8);
      *(long **)(lVar7 + 0xa8) = plVar14;
    }
    (**(code **)(*plVar14 + 0x78))(plVar14);
    puVar1 = PTR_DAT_04bb2698;
    if (*(long *)puVar5 == 0) {
      lVar7 = *(long *)PTR_DAT_04bb2698;
      if (lVar7 == 0) {
        plVar9 = malloc(0x160);
      }
      else {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        plVar9 = (long *)(lVar7 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x160,8);
        }
      }
      puVar6 = PTR_DAT_04bd0d40;
      lVar7 = *(long *)puVar1;
      plVar9[0x2a] = 0;
      plVar9[0x2b] = 0;
      plVar9[0x28] = (long)(puVar6 + 0x10);
      plVar9[0x29] = 0;
      if (lVar7 != 0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
        plVar3 = (long *)(lVar7 + 8);
        if (lVar8 != 0) {
          plVar3 = (long *)(lVar8 + 0xa8);
        }
        lVar7 = *plVar3;
        plVar9[0x29] = lVar7;
        if (lVar7 != 0) {
          if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = lVar7 + 0x90;
            nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
          }
          plVar12 = (long *)(lVar7 + 0x70);
          lVar11 = *plVar12;
          plVar3 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(plVar9 + 0x28));
          *plVar12 = (long)plVar3;
          *plVar3 = lVar11;
          plVar3[1] = (long)plVar12;
          if (lVar11 != 0) {
            *(long **)(lVar11 + 8) = plVar3;
          }
          *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
          if (lVar8 != 0) {
            nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
          }
        }
      }
      puVar6 = PTR_DAT_04bd0b70;
      puVar1 = PTR_DAT_04bd0b60 + 0x10;
      *(long **)PTR_DAT_04bd0b68 = plVar9 + 0x28;
      plVar9[0x28] = (long)puVar1;
      *plVar9 = (long)(puVar6 + 0x10);
      memset(plVar9 + 1,0,0x138);
      *(long **)puVar5 = plVar9;
    }
    (**(code **)(*plVar14 + 0x78))(plVar14);
    if (lVar15 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar15;
    }
  }
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "System/GameConfigSetting_Product.xml";
  local_80 = puVar2;
  lVar15 = FUN_03eba220(&local_80,0x1000,0,1);
  local_a8 = &local_98;
  uStack_90 = *(undefined8 *)(lVar15 + 8);
  local_88 = *(undefined4 *)(lVar15 + 0x10);
  local_a0 = 1;
  lVar15 = *(long *)puVar5;
  local_b8 = PTR_DAT_04bd0e38 + 0x10;
  uStack_84 = 0;
  puStack_b0 = &DAT_05ae76e8;
  local_98 = PTR_DAT_04bd0e28 + 0x10;
  pcStack_68 = "sead::GameConfig::mHeap";
  local_70 = puVar2;
  uVar10 = FUN_038c6d48(0,&local_70,lVar13,8,1,0);
  *(undefined8 *)(lVar15 + 0x118) = uVar10;
  FUN_038abbb0(lVar15,&local_b8);
  pcStack_68 = "sead::GameConfig::mWorkHeap";
  local_70 = puVar2;
  uVar10 = FUN_038c6d48(0,&local_70,*(undefined8 *)(lVar15 + 0x118),8,1,0);
  *(undefined8 *)(lVar15 + 0x128) = uVar10;
  FUN_038af120(lVar15,0);
  (**(code **)(**(long **)(lVar15 + 0x128) + 0x28))();
  FUN_038af230(lVar15);
  (**(code **)(**(long **)(lVar15 + 0x118) + 0x28))();
  return;
}

