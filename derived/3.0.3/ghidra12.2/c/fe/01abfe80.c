
byte FUN_01abfe80(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *__src;
  undefined *local_168;
  undefined1 *puStack_160;
  int local_158;
  undefined1 auStack_154 [255];
  undefined1 local_55;
  
  puVar4 = PTR_DAT_04bb4a98;
  if (param_1[0x16] != 0) {
    bVar6 = 1;
    goto LAB_01ac01a4;
  }
  lVar7 = (**(code **)(**(long **)PTR_DAT_04bb4a98 + 0x20))();
  if (lVar7 == 0 || lVar7 != param_3) {
    lVar7 = (**(code **)(**(long **)puVar4 + 0x18))();
    if ((lVar7 == 0) && (lVar7 = param_3, param_3 == 0)) {
      lVar12 = *(long *)PTR_DAT_04bb2698;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      lVar7 = *plVar8;
    }
  }
  else {
    lVar7 = param_3;
  }
  local_158 = 0x100;
  local_55 = 0;
  local_168 = PTR_DAT_04bb4520 + 0x10;
  puStack_160 = auStack_154;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (auStack_154 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar12 = 0;
    do {
      if (*(char *)(param_2[1] + lVar12) == '\0') goto LAB_01abffdc;
      lVar9 = param_2[1] + lVar12;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01abffdc;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01abffdc;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_01abffdc:
    iVar2 = (int)lVar12;
    if (local_158 <= (int)lVar12) {
      iVar2 = local_158 + -1;
    }
    memcpy(auStack_154,__src,(long)iVar2);
    auStack_154[iVar2] = 0;
  }
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  if ((*(long *)puVar4 != 0) &&
     (plVar8 = (long *)FUN_03854200(*(long *)puVar4,&local_168),
     plVar8 != (long *)0x0 && plVar8 != param_1)) {
    bVar6 = FUN_01ac1700(param_1,plVar8,lVar7);
    goto LAB_01ac01a4;
  }
  *PTR_DAT_04bbffb8 = 1;
  puVar5 = PTR_DAT_04bbffc0;
  *(undefined8 *)PTR_DAT_04bbffc0 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  puVar3 = PTR_DAT_04bb3350;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  if (lVar7 == 0) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar8 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    lVar7 = *plVar8;
    param_1[0x15] = lVar7;
    if (lVar7 != 0) goto LAB_01ac00c0;
    lVar7 = 0;
    lVar12 = 1;
  }
  else {
    param_1[0x15] = lVar7;
LAB_01ac00c0:
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    lVar12 = *(long *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = lVar7;
    lVar7 = param_1[0x15];
  }
  lVar7 = (**(code **)(**(long **)puVar4 + 0x38))(*(long **)puVar4,&local_168,lVar7);
  bVar6 = lVar7 != 0;
  param_1[0x16] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*param_1 + 0x40))(param_1,&local_168,param_1[0x15]);
    lVar9 = *(long *)puVar4;
    uVar10 = 0;
    lVar7 = lVar9 + 8;
    do {
      if (*(long **)(lVar7 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3)) == param_1)
      goto LAB_01ac018c;
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar1;
    } while (uVar1 != 0x100);
    uVar10 = 0;
    do {
      if (*(long *)(lVar7 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3)) == 0) {
        lVar11 = (long)(int)uVar10 * 8;
        *(long **)(lVar7 + lVar11) = param_1;
        *(int *)(lVar9 + 0x82c) = *(int *)(lVar9 + 0x82c) + 1;
        if (*(long *)(*(long *)(lVar7 + lVar11) + 0xb8) == 0) {
          *(int *)(lVar9 + 0x828) = *(int *)(lVar9 + 0x828) + 1;
        }
        break;
      }
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar1;
    } while (uVar1 != 0x100);
  }
LAB_01ac018c:
  if (lVar12 != 1) {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar7 + 0xa8) = lVar12;
  }
LAB_01ac01a4:
  return bVar6 & 1;
}

