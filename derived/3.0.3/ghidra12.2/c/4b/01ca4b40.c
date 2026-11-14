
void FUN_01ca4b40(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined *local_78 [4];
  int local_54;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  puVar1 = PTR_DAT_04bb21d8;
  pcVar17 = *(char **)(param_1 + 0x2070);
  if (pcVar17[2] == '\0') {
    if (*pcVar17 == '\0') {
      bVar8 = FUN_01c894a0(*(undefined8 *)PTR_DAT_04bb47c8,pcVar17[1] != '\0');
    }
    else {
      bVar8 = FUN_01c893b4();
    }
    pcVar17[1] = '\0';
    pcVar17[2] = bVar8 & 1;
    if ((bVar8 & 1) != 0) goto LAB_01ca4bb0;
  }
  else {
LAB_01ca4bb0:
    uVar11 = (**(code **)(**(long **)(*(long *)puVar1 + 0x3d8) + 0x68))();
    if ((uVar11 & 1) == 0) {
      uVar9 = *(uint *)(param_1 + 0x38);
      if ((uVar9 == 0xffffffff) && (*(char *)(param_1 + 0x50) != '\0')) {
        puVar18 = (undefined1 *)(param_1 + 0x51);
        *puVar18 = 1;
        uVar5 = *(undefined4 *)(param_1 + 0x3c);
        *(undefined8 *)(param_1 + 0x3c) = 0xffffffff00000000;
        *(undefined4 *)(param_1 + 0x44) = uVar5;
        uVar9 = *(uint *)(param_1 + 0x48);
        *(uint *)(param_1 + 0x38) = uVar9;
        if (uVar9 != 0xffffffff) {
          uVar15 = *(uint *)(param_1 + 0x58);
          lVar14 = *(long *)(param_1 + 0x60);
          uVar2 = uVar9;
          if (uVar15 <= uVar9) {
            uVar2 = 0;
          }
          puVar16 = *(undefined8 **)(lVar14 + (long)(int)uVar2 * 0x40);
          if (puVar16 != (undefined8 *)0x0) {
            (*(code *)*puVar16)();
            uVar9 = *(uint *)(param_1 + 0x38);
            goto LAB_01ca4c34;
          }
          *puVar18 = 0;
          goto LAB_01ca4c5c;
        }
        *puVar18 = 0;
      }
      else {
LAB_01ca4c34:
        *(undefined1 *)(param_1 + 0x51) = 0;
        if (uVar9 != 0xffffffff) {
          uVar15 = *(uint *)(param_1 + 0x58);
          lVar14 = *(long *)(param_1 + 0x60);
LAB_01ca4c5c:
          if (uVar15 <= uVar9) {
            uVar9 = 0;
          }
          lVar14 = *(long *)(lVar14 + (long)(int)uVar9 * 0x40);
          if ((lVar14 != 0) && ((**(code **)(lVar14 + 8))(), *(char *)(param_1 + 0x51) != '\0'))
          goto LAB_01ca4c90;
        }
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
  }
LAB_01ca4c90:
  uVar11 = FUN_01c93ba0(*(undefined8 *)(param_1 + 0xf88));
  if (((((uVar11 & 1) != 0) && (*(char *)(DAT_05358908 + 0x2078) != '\0')) &&
      (uVar11 = FUN_01c950bc(*(undefined8 *)(param_1 + 0xf88)), (uVar11 & 1) != 0)) &&
     (pcVar17 = (char *)(**(code **)(**(long **)(param_1 + 0xf80) + 0x100))(), *pcVar17 != '\0')) {
    (**(code **)(**(long **)(param_1 + 0xf80) + 0x38))(*(long **)(param_1 + 0xf80),1);
  }
  if (**(char **)(DAT_05358908 + 0x2070) != '\0') {
    puVar16 = *(undefined8 **)(param_1 + 0xf90);
    (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x28))();
    if ((*(char *)(DAT_05358908 + 0x2078) == '\0') &&
       ((piVar12 = (int *)(**(code **)(*(long *)*puVar16 + 0x100))(),
        *piVar12 != *(int *)(puVar16 + 1) || ((char)piVar12[1] != *(char *)((long)puVar16 + 0xc)))))
    {
      puVar13 = (undefined8 *)(**(code **)(*(long *)*puVar16 + 0x100))();
      *puVar13 = puVar16[1];
      (**(code **)(*(long *)*puVar16 + 0x38))((long *)*puVar16,1);
    }
  }
  if (((**(char **)(DAT_05358908 + 0x2070) != '\0') && (*(int *)(DAT_05358908 + 0xc4) == 0)) &&
     ((*(char *)(*(long *)(*(long *)puVar1 + 0x3d8) + 0x28) != '\0' &&
      (*(char *)(param_1 + 0x207f) == '\0')))) {
    *(char *)(param_1 + 0x207f) = '\x01';
    puVar1 = PTR_DAT_04bb50d8;
    lVar14 = *(long *)PTR_DAT_04bb4860;
    if ((*(char *)(lVar14 + 0x34) == '\0') ||
       (*(int *)(PTR_DAT_04bb50d8 + 8) <= *(int *)(lVar14 + 0x10))) {
      if (*(char *)(lVar14 + 100) == '\0') {
        *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)PTR_DAT_04bb50d8;
        iVar10 = *(int *)(puVar1 + 8);
      }
      else {
        iVar10 = *(int *)(PTR_DAT_04bb50d8 + 8);
        if (*(int *)(lVar14 + 0x40) <= iVar10) goto LAB_01ca4da0;
        *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)PTR_DAT_04bb50d8;
      }
      *(int *)(lVar14 + 0x40) = iVar10;
      uVar6 = puVar1[0x2c];
      *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)(puVar1 + 0x18);
      uVar7 = puVar1[0x20];
      *(undefined1 *)(lVar14 + 100) = uVar6;
      uVar5 = *(undefined4 *)(puVar1 + 0x24);
      uVar4 = *(undefined4 *)(puVar1 + 0x28);
      *(undefined1 *)(lVar14 + 0x58) = uVar7;
      *(undefined4 *)(lVar14 + 0x5c) = uVar5;
      *(undefined4 *)(lVar14 + 0x60) = uVar4;
    }
  }
LAB_01ca4da0:
  if (*(char *)(param_1 + 0x2098) == '\0') {
    return;
  }
  uVar11 = FUN_02640eb0();
  if ((uVar11 & 1) == 0) {
    return;
  }
  FUN_0252d11c(local_24);
  if (7 < (ulong)local_24[0]) {
    return;
  }
  lVar14 = **(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(lVar14 + 0x476) < 2) {
    iVar10 = FUN_02582d8c(local_24,2);
    if (-1 < iVar10) {
LAB_01ca4e90:
      uVar9 = FUN_02582d8c(local_24,1);
      if (((uVar9 < 8) &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(int *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d0) == 2)) {
        return;
      }
    }
  }
  else {
    bVar8 = *(byte *)(lVar14 + (ulong)local_24[0] * 4 + 0x44e);
    if ((long)(char)bVar8 != 0xffffffffffffffff) {
      pbVar3 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
      if (7 < bVar8) {
        pbVar3 = (byte *)(lVar14 + 0x48);
      }
      if ((*pbVar3 >> 3 & 1) != 0) goto LAB_01ca4e90;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "net_error";
  FUN_025ffac8(local_78,&local_50,local_24);
  puVar1 = PTR_DAT_04bc3330 + 0x10;
  local_78[0] = puVar1;
  FUN_025b5698(local_78,param_1 + 0x209c);
  *(undefined1 *)(param_1 + 0x2098) = 0;
  local_78[0] = puVar1;
  iVar10 = FUN_025b5a5c(local_78);
  if (iVar10 != -1) {
    iVar10 = (**(code **)(local_78[0] + 0x20))(local_78);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar10);
    if (iVar10 < 0xd) goto LAB_01ca4f6c;
  }
  if (local_54 == 0) {
    local_54 = 1;
  }
LAB_01ca4f6c:
  FUN_02601530(local_78);
  return;
}

