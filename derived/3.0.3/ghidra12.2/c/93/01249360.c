
byte FUN_01249360(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *__src;
  undefined *local_168;
  undefined1 *puStack_160;
  int local_158;
  undefined1 auStack_154 [255];
  undefined1 local_55;
  
  puVar4 = PTR_DAT_04bb4a98;
  if (param_1[0x16] != 0) {
    bVar5 = 1;
    goto LAB_01249678;
  }
  lVar6 = (**(code **)(**(long **)PTR_DAT_04bb4a98 + 0x20))();
  if (lVar6 == 0 || lVar6 != param_3) {
    lVar6 = (**(code **)(**(long **)puVar4 + 0x18))();
    if ((lVar6 == 0) && (lVar6 = param_3, param_3 == 0)) {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      lVar6 = *plVar7;
    }
  }
  else {
    lVar6 = param_3;
  }
  local_158 = 0x100;
  local_55 = 0;
  local_168 = PTR_DAT_04bb4520 + 0x10;
  puStack_160 = auStack_154;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (auStack_154 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = 0;
    do {
      if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_012494bc;
      lVar8 = param_2[1] + lVar11;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_012494bc;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_012494bc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_012494bc:
    iVar2 = (int)lVar11;
    if (local_158 <= (int)lVar11) {
      iVar2 = local_158 + -1;
    }
    memcpy(auStack_154,__src,(long)iVar2);
    auStack_154[iVar2] = 0;
  }
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  if ((*(long *)puVar4 != 0) &&
     (plVar7 = (long *)FUN_03854200(*(long *)puVar4,&local_168),
     plVar7 != (long *)0x0 && plVar7 != param_1)) {
    bVar5 = FUN_0124b090(param_1,plVar7,lVar6);
    goto LAB_01249678;
  }
  puVar3 = PTR_DAT_04bb3350;
  DAT_05150d60 = 1;
  DAT_05150d64 = 0xffffffffffffffff;
  DAT_05150d6c = 0xffffffffffffffff;
  if (lVar6 == 0) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    lVar6 = *plVar7;
    param_1[0x15] = lVar6;
    if (lVar6 != 0) goto LAB_01249594;
    lVar6 = 0;
    lVar11 = 1;
  }
  else {
    param_1[0x15] = lVar6;
LAB_01249594:
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    lVar11 = *(long *)(lVar8 + 0xa8);
    *(long *)(lVar8 + 0xa8) = lVar6;
    lVar6 = param_1[0x15];
  }
  lVar6 = (**(code **)(**(long **)puVar4 + 0x38))(*(long **)puVar4,&local_168,lVar6);
  bVar5 = lVar6 != 0;
  param_1[0x16] = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*param_1 + 0x40))(param_1,&local_168,param_1[0x15]);
    lVar8 = *(long *)puVar4;
    uVar9 = 0;
    lVar6 = lVar8 + 8;
    do {
      if (*(long **)(lVar6 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3)) == param_1)
      goto LAB_01249660;
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
    } while (uVar1 != 0x100);
    uVar9 = 0;
    do {
      if (*(long *)(lVar6 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3)) == 0) {
        lVar10 = (long)(int)uVar9 * 8;
        *(long **)(lVar6 + lVar10) = param_1;
        *(int *)(lVar8 + 0x82c) = *(int *)(lVar8 + 0x82c) + 1;
        if (*(long *)(*(long *)(lVar6 + lVar10) + 0xb8) == 0) {
          *(int *)(lVar8 + 0x828) = *(int *)(lVar8 + 0x828) + 1;
        }
        break;
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
    } while (uVar1 != 0x100);
  }
LAB_01249660:
  if (lVar11 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar11;
  }
LAB_01249678:
  return bVar5 & 1;
}

