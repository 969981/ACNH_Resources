
/* WARNING: Removing unreachable block (ram,0x024e1334) */

void FUN_024e1128(byte *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 local_70;
  char *local_68;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
  if (7 < *param_1) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_2 + 1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar1 + 0xc) = 3;
    FUN_01393458(lVar1 + 0xb0);
  }
  else {
    *(undefined4 *)(lVar1 + 0xc) = 4;
  }
  uVar16 = 0;
  fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x20));
  fVar9 = fVar9 * 5.0 + 2.5;
  fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x21));
  local_68._0_4_ = fVar13 * 5.0 + 2.5;
  local_70 = (undefined *)(ulong)(uint)fVar9;
  bVar4 = local_68._0_4_ < 0.0;
  iVar15 = (int)local_68._0_4_;
  uVar10 = FUN_016e026c(0,&local_70,0,0);
  local_70 = (undefined *)
             CONCAT44(uVar10,(float)(int)((int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0) &
                                         0xfffffffe) * 5.0 + 5.0);
  local_68 = (char *)CONCAT44(local_68._4_4_,
                              (float)(int)((int)((float)iVar15 / 5.0) - (uint)bVar4 & 0xfffffffe) *
                              5.0 + 5.0);
  uVar11 = FUN_016e026c(0,&local_70,0,0);
  bVar2 = *param_1;
  uVar10 = (undefined4)local_70;
  bVar4 = true;
  uVar7 = (uint)bVar2;
  uVar3 = local_68._0_4_;
  if (7 < uVar7) {
    uVar7 = 0xff;
  }
  if ((bVar2 < 8) && (uVar5 = FUN_02582d8c(param_1,1), uVar5 < 8)) {
    if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) == '\0') {
      bVar4 = true;
    }
    else {
      bVar4 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) == '\0';
    }
  }
  puVar6 = (undefined4 *)FUN_0251b3b0(param_1,1);
  uVar12 = 0;
  uVar14 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar12 = *puVar6;
    uVar16 = puVar6[1];
    uVar14 = puVar6[2];
  }
  puVar8 = &DAT_0548ed14 + (ulong)uVar7 * 0x8c;
  if (7 < bVar2) {
    puVar8 = &DAT_0548f0e8;
  }
  *puVar8 = 1;
  *(undefined4 *)(puVar8 + 4) = uVar12;
  *(undefined4 *)(puVar8 + 8) = uVar16;
  *(undefined4 *)(puVar8 + 0xc) = uVar14;
  *(undefined4 *)(puVar8 + 0x10) = uVar10;
  *(undefined4 *)(puVar8 + 0x14) = uVar11;
  *(undefined4 *)(puVar8 + 0x18) = uVar3;
  if (!bVar4) {
    local_28[0] = (undefined1)uVar7;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "ShakeTreeCount";
    local_24 = FUN_02582fe0(local_28);
    FUN_021294b0(&local_70,1,&local_24);
  }
  return;
}

