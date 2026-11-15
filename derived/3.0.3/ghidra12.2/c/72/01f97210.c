
void FUN_01f97210(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte bVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined *local_50;
  char *pcStack_48;
  
  puVar3 = PTR_DAT_04bb4718;
  puVar2 = PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  if (lVar13 == 0) {
    uVar10 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01f972a4;
LAB_01f97310:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_01f97324;
    puVar12 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + uVar10 * 4 + 0xde8);
  }
  else {
    pbVar11 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar13 + 0x158);
    }
    uVar10 = (ulong)*pbVar11;
    if ((*pbVar11 < 8) ||
       (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar9 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar10 = (ulong)bVar9, bVar9 < 8))))
    goto LAB_01f97310;
LAB_01f972a4:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar13 = **(long **)PTR_DAT_04bb27d0;
      bVar9 = *(byte *)(lVar13 + 0x473);
      pbVar11 = PTR_DAT_04bb5038;
      if ((long)(char)bVar9 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar1 = (uint *)(lVar13 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar11 = (byte *)(lVar13 + 0x471);
        }
      }
      uVar10 = (ulong)*pbVar11;
      if (*pbVar11 < 8) goto LAB_01f97310;
    }
    uVar10 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_01f97310;
LAB_01f97324:
    puVar12 = (undefined4 *)PTR_DAT_04bb3238;
  }
  FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,*puVar12,PTR_DAT_04bb6928,0);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      pbVar8 = PTR_DAT_04bb32e0;
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "NpcActiveApproach";
  if (((puVar7[0x227] != 0) && (lVar13 = *(long *)(puVar7[0x227] + 0x78), lVar13 != 0)) &&
     (plVar6 = *(long **)(lVar13 + 0x48), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_50,1);
  }
  *(byte *)(param_1 + 0xaa44) = *(byte *)(param_1 + 0xaa44) | 0x40;
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
LAB_01f973fc:
    if (7 < *pbVar8) {
LAB_01f97408:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar9 = *(byte *)(lVar13 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar1 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar13 + 0x471);
          }
        }
        bVar9 = *pbVar8;
        bVar4 = bVar9 < 8;
        if (!bVar4) {
          bVar9 = 0xff;
        }
        local_50 = (undefined *)CONCAT71(local_50._1_7_,bVar9);
        if (bVar4) goto LAB_01f97488;
      }
      pbVar8 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)puVar3 != 0)) {
        pbVar8 = (byte *)(*(long *)puVar3 + 0x11a5);
        goto LAB_01f973fc;
      }
      goto LAB_01f97408;
    }
  }
  bVar9 = *pbVar8;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_50 = (undefined *)CONCAT71(local_50._1_7_,bVar9);
LAB_01f97488:
  FUN_02078080(param_1 + 0x87c0,&local_50,PTR_DAT_04bc22b0);
  *(undefined4 *)(param_1 + 0x897c) = 0;
  return;
}

