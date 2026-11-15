
/* WARNING: Removing unreachable block (ram,0x023efa60) */
/* WARNING: Removing unreachable block (ram,0x023efa70) */
/* WARNING: Removing unreachable block (ram,0x023efa7c) */

void FUN_023ef908(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  short sVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  float fVar18;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  int iStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  byte local_78;
  byte local_38 [4];
  byte local_34 [4];
  
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_052461c0), iVar15 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "CommonBedOutReady";
  FUN_017081d0(puVar10,&local_88,6,1,0);
  FUN_016f84f0(param_1,*(long *)(param_1 + 0x68) + 0x278);
  puVar2 = PTR_DAT_04bb2010;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  piVar3 = (int *)(param_1 + 0x1902);
  local_80 = (char *)((ulong)local_80 & 0xffffffff00000000);
  iVar15 = *(int *)(param_1 + 0x1908);
  iVar17 = *piVar3;
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  local_a0 = 0;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar8 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_80 = (char *)CONCAT44(*(undefined4 *)(puVar10 + 7),(undefined4)local_80);
  local_78 = FUN_017baf44();
  local_78 = local_78 & 1;
  local_88 = PTR_DAT_04bb6268 + 0x10;
  local_98 = (undefined *)((ulong)local_98._4_4_ << 0x20);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar1 = puVar2 + 0x10;
    fVar18 = (float)iVar15 * 0.001;
    fVar14 = (float)iVar17 * 0.001 + 0.5;
    fVar13 = fVar18 + 0.5;
    iVar15 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    iVar8 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    local_98 = puVar1;
    local_90 = iVar15;
    iStack_8c = iVar8;
    FUN_01a5190c(&local_88,0,&local_98,&local_a8);
    iVar9 = FUN_0277d6c4();
    if (iVar9 == 0xea79) {
LAB_023efbe0:
      lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      *(undefined8 *)(lVar12 + 8) = 0x100000000;
      *(undefined4 *)(lVar12 + 0xa8) = 0;
      bVar7 = FUN_022bf264(lVar12 + 0xb0,&local_a8);
      *(byte *)(param_1 + 0xb48) = bVar7 & 1;
      *(undefined1 *)(param_1 + 0x1921) = 1;
      *(undefined4 *)(param_1 + 0x1924) = (undefined4)local_a0;
      *(undefined4 *)(param_1 + 0x1928) = local_a0._4_4_;
      return;
    }
    fVar18 = fVar18 + -0.5;
    iVar9 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    local_98 = puVar1;
    local_90 = iVar15;
    iStack_8c = iVar9;
    FUN_01a5190c(&local_88,0,&local_98,&local_a8);
    iVar15 = FUN_0277d6c4();
    if (iVar15 == 0xea79) goto LAB_023efbe0;
    fVar13 = (float)iVar17 * 0.001 + -0.5;
    puVar2 = puVar2 + 0x10;
    iVar15 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    local_98 = puVar2;
    local_90 = iVar15;
    iStack_8c = iVar8;
    FUN_01a5190c(&local_88,0,&local_98,&local_a8);
    iVar17 = FUN_0277d6c4();
    if (iVar17 == 0xea79) goto LAB_023efbe0;
    local_98 = puVar2;
    local_90 = iVar15;
    iStack_8c = iVar9;
    FUN_01a5190c(&local_88,0,&local_98,&local_a8);
    iVar15 = FUN_0277d6c4();
    if (iVar15 == 0xea79) goto LAB_023efbe0;
  }
  lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined8 *)(lVar12 + 0x420) = 0x100000000;
  *(undefined4 *)(lVar12 + 0x4c0) = 0;
  cVar5 = *(char *)(param_1 + 0x1922);
  sVar6 = *(short *)PTR_DAT_04bb6298;
  uVar16 = 0x3fc00000;
  if (cVar5 == '\0') {
    uVar16 = 0x40400000;
  }
  if (sVar6 == -1) {
LAB_023efcd0:
    uVar11 = FUN_016e6244();
    if ((((uVar11 & 1) == 0) && (uVar11 = FUN_0180c600(), (uVar11 & 1) == 0)) &&
       (uVar11 = FUN_016cf9f0(), (uVar11 & 1) == 0)) {
      local_38[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_38[0]) {
        local_38[0] = 0xff;
      }
      local_88 = (undefined *)
                 CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,(float)*piVar3 * 0.001);
      local_80 = (char *)CONCAT44(local_80._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
      bVar7 = FUN_023014a4(uVar16,lVar12 + 0x4c8,local_38,&local_88,cVar5 != '\0');
      goto LAB_023efd54;
    }
  }
  else {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,0x15);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 0x15 & 1) == 0) goto LAB_023efcd0;
  }
  local_34[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  local_88 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,(float)*piVar3 * 0.001);
  local_80 = (char *)CONCAT44(local_80._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  bVar7 = FUN_0230127c(uVar16,lVar12 + 0x4c8,local_34,&local_88,cVar5 != '\0');
LAB_023efd54:
  *(byte *)(param_1 + 0xb48) = bVar7 & 1;
  return;
}

