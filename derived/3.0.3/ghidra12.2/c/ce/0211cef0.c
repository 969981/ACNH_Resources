
void FUN_0211cef0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  puVar6 = PTR_DAT_04bb2028;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    plVar13 = *(long **)(param_1 + 0x1f0);
    plVar3 = plVar13 + *(int *)(param_1 + 0x1e8);
    puVar1 = PTR_DAT_04bb2a08 + 0x10;
    puVar2 = PTR_DAT_04bb2028 + 0x10;
    do {
      lVar14 = *plVar13;
      local_65 = 0;
      local_88 = 0x20;
      plVar12 = (long *)(lVar14 + 0xf8);
      local_98 = puVar1;
      local_90 = local_84;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puVar11 = *(undefined1 **)(lVar14 + 0x100);
      if (local_84 != puVar11) {
        (**(code **)(*(long *)(lVar14 + 0xf8) + 0x18))(plVar12);
        lVar8 = 0;
        do {
          if (*(char *)(*(long *)(lVar14 + 0x100) + lVar8) == '\0') goto LAB_0211cffc;
          lVar4 = *(long *)(lVar14 + 0x100) + lVar8;
          if (*(char *)(lVar4 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0211cffc;
          }
          if (*(char *)(lVar4 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0211cffc;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0211cffc:
        iVar5 = (int)lVar8;
        if (local_88 <= (int)lVar8) {
          iVar5 = local_88 + -1;
        }
        memcpy(local_84,puVar11,(long)iVar5);
        local_84[iVar5] = 0;
      }
      local_90[(long)local_88 + -1] = 0;
      local_98 = puVar2;
      (**(code **)(puVar6 + 0x28))(&local_98);
      puVar11 = local_90;
      (**(code **)(*param_2 + 0x18))(param_2);
      puVar9 = (undefined1 *)param_2[1];
      if (puVar11 == puVar9) {
LAB_0211d0dc:
        *(undefined4 *)(lVar14 + 0xe8) = *(undefined4 *)PTR_DAT_04bb3238;
        return;
      }
      uVar10 = 0;
      bVar7 = true;
      do {
        if (local_90[uVar10] != puVar9[uVar10]) break;
        if (local_90[uVar10] == '\0') {
          if (bVar7) goto LAB_0211d0dc;
          break;
        }
        if (local_90[uVar10 + 1] != puVar9[uVar10 + 1]) break;
        if (local_90[uVar10 + 1] == '\0') goto LAB_0211d0dc;
        if (local_90[uVar10 + 2] != puVar9[uVar10 + 2]) break;
        if (local_90[uVar10 + 2] == '\0') goto LAB_0211d0dc;
        bVar7 = uVar10 < 0x7fffe;
        uVar10 = uVar10 + 3;
      } while (uVar10 != 0x80001);
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar3);
  }
  return;
}

