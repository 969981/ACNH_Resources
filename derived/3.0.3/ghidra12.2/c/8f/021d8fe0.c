
undefined8 FUN_021d8fe0(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  uint uVar9;
  char *pcVar10;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined1 local_24 [4];
  
  uVar12 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar3 = FUN_006bd550(param_2[1],0);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar3);
  puVar4 = (uint *)FUN_0079e770(uVar12,&local_78);
  if (puVar4 == (uint *)0x0) {
    pcVar10 = (char *)param_2[1];
    if (((*pcVar10 != 'p') || (pcVar10[1] != 'l')) || (pcVar10[2] != 'm')) {
      return 0;
    }
    uVar3 = (undefined4)param_1[2];
    local_24[0] = 0;
    local_88 = PTR_DAT_04bb2020 + 0x10;
    puStack_70 = &DAT_0408d1f4;
    puStack_80 = &DAT_0409275f;
    lVar13 = param_1[1];
    local_78 = local_88;
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar14 = param_1[1];
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar6 = 0;
    do {
      if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_021d9294;
      lVar1 = param_1[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_021d9294;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_021d9294;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_021d9294:
    ppuVar7 = &local_78;
    ppuVar8 = &local_88;
    goto LAB_021d9254;
  }
  uVar9 = *puVar4;
  if (uVar9 == 0 || puVar4 == (uint *)(ulong)uVar9) {
LAB_021d904c:
    uVar9 = 0;
  }
  else {
    puVar11 = (uint *)((long)puVar4 - (long)(ulong)uVar9);
    uVar9 = 0;
    if (*puVar11 != 0) {
      uVar9 = puVar11[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar6 != 0) {
          uVar2 = 0;
          if ((ulong)uVar9 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar6) / (ulong)uVar9);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bb6a50) &&
             (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar2 * 2),
             uVar9 < 8)) goto LAB_021d9050;
        }
      }
      goto LAB_021d904c;
    }
  }
LAB_021d9050:
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar9);
  if (uVar9 < 8) {
    puVar5 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)uVar9 * 8 + 0x20);
  }
  else {
    puVar5 = &DAT_0407ebb1;
  }
  FUN_006d8678(&local_78,&DAT_04062dda,puVar5);
  uVar3 = (undefined4)param_1[2];
  local_24[0] = 0;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  puStack_80 = &DAT_040f9233;
  lVar13 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar14 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_021d924c;
    lVar1 = param_1[1] + lVar6;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_021d924c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_021d924c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_021d924c:
  ppuVar7 = &local_88;
  ppuVar8 = &local_78;
LAB_021d9254:
  FUN_038d0770(lVar13,0,uVar3,lVar14,lVar6,ppuVar7,ppuVar8,local_24);
  return 1;
}

