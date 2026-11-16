
void FUN_029f1230(long param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  undefined8 uVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *local_88;
  char *local_80;
  long local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  puVar10 = PTR_DAT_04bb26a8;
  lVar14 = *(long *)PTR_DAT_04bb26a8;
  nn::os::LockMutex((MutexType *)(lVar14 + 0x896c8));
  cVar2 = *(char *)(lVar14 + 0x89693);
  cVar3 = *(char *)(lVar14 + 0x89691);
  cVar4 = *(char *)(lVar14 + 0x89692);
  lVar19 = *(long *)(lVar14 + 0x89698);
  lVar18 = *(long *)(lVar14 + 0x896a0);
  nn::os::UnlockMutex((MutexType *)(lVar14 + 0x896c8));
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  bVar5 = *(byte *)(param_1 + 0x81);
  bVar6 = *(byte *)(param_1 + 0x80);
  *(undefined2 *)(param_1 + 0x80) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  puVar11 = PTR_DAT_04bb29d0;
  bVar15 = *(byte *)(param_1 + 0x82);
  if ((bVar15 & 1) != 0) {
    bVar1 = bVar15 & 0xfe;
    if (*(char *)(*(long *)puVar10 + 0xb3889) != '\0') {
      bVar1 = bVar15;
    }
    bVar15 = bVar1;
  }
  bVar1 = bVar5 & bVar15 & 1;
  bVar16 = bVar15 & 0xfe;
  if (bVar1 == 0) {
    bVar16 = bVar15;
  }
  lVar17 = *(long *)PTR_DAT_04bb29d0;
  lVar14 = (long)(lVar17 * (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                           (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000;
  if (-1 < lVar19) {
    lVar18 = lVar14 - lVar18;
    lVar7 = 0;
    if (lVar17 != 0) {
      lVar7 = lVar18 / lVar17;
    }
    lVar8 = 0;
    if (lVar17 != 0) {
      lVar8 = (lVar18 * 1000) / lVar17;
    }
    lVar7 = lVar7 * 1000;
    if (lVar18 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar7 = lVar8;
    }
    lVar19 = lVar7 + lVar19;
  }
  if ((((bVar5 >> 1 & 1) == 0) || ((bVar16 & 1) != 0)) ||
     ((bVar12 = cVar3 != '\0', cVar3 != '\0' && (cVar4 == '\0')))) {
    bVar12 = false;
    bVar9 = false;
  }
  else {
    bVar16 = bVar16 | 1;
    *(long *)(param_1 + 0x78) = lVar14 + lVar17;
    bVar9 = true;
  }
  if (((((bVar6 >> 1 & 1) != 0) && ((bVar16 & 1) == 0)) && (cVar3 != '\0')) && (cVar4 == '\0')) {
    bVar16 = bVar16 | 1;
    bVar9 = true;
    *(long *)(param_1 + 0x78) = ((*(long *)(param_1 + 0x70) - lVar19) * lVar17) / 1000 + lVar14;
  }
  *(byte *)(param_1 + 0x82) = bVar16;
  if ((bVar1 == 0) || (!bVar9)) {
    if (bVar1 == 0) {
      if (!bVar9) goto LAB_029f1478;
      lVar18 = *(long *)puVar10;
      uVar13 = 1;
    }
    else {
      lVar18 = *(long *)puVar10;
      uVar13 = 0;
    }
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "RadioExerciseState_v20000";
    FUN_02a0d6e0(lVar18 + 0xa7660,&local_88,uVar13);
  }
LAB_029f1478:
  local_88 = (undefined *)((ulong)local_88 & 0xffffffffffffff00);
  local_70 = 0;
  if (bVar12) {
    local_80 = (char *)((ulong)local_80 & 0xffffffffffffff00);
    local_6f = 1;
    lVar14 = *(long *)(param_1 + 0x78) - lVar14;
    if (lVar14 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar18 = *(long *)puVar11;
      local_78 = 0;
      if (lVar18 != 0) {
        local_78 = (lVar14 * 1000) / lVar18;
      }
    }
    else {
      lVar18 = *(long *)puVar11;
      local_78 = 0;
      if (lVar18 != 0) {
        local_78 = lVar14 / lVar18;
      }
      local_78 = local_78 * 1000;
    }
    local_78 = local_78 + lVar19;
    if (cVar4 == '\0') {
      if (cVar2 == '\0') {
        return;
      }
      local_64 = 0xff01;
    }
    else {
      local_64 = 0xff00;
    }
    local_68 = 0;
    local_62 = 0;
    if (-1 < *(int *)(param_1 + 8)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 8),&local_68,&local_88,
                   0x20,0);
    }
  }
  return;
}

