
void FUN_03a507f4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_54;
  
  uVar9 = (uint)*(byte *)(param_2 + 8);
  if (*(uint *)(param_1 + 0x68) <= (uint)*(byte *)(param_2 + 8)) {
    uVar9 = 0;
  }
  pbVar10 = (byte *)(*(long *)(param_1 + 0x70) + (ulong)uVar9 * 0x18);
  lVar14 = *(long *)(pbVar10 + 0x10);
  uVar9 = (uint)*pbVar10;
  if (*(uint *)(pbVar10 + 8) <= (uint)*pbVar10) {
    uVar9 = 0;
  }
  lVar13 = lVar14 + (ulong)uVar9 * 0x350;
  FUN_03a50a30(lVar13,*(long *)(param_2 + 0x18) + 0x60);
  *(uint *)(lVar13 + 0x238) = (uint)*(byte *)(param_2 + 8);
  uVar12 = (uint)*(byte *)(param_2 + 8);
  if (*(uint *)(*(long *)(param_3 + 0x248) + 8) <= (uint)*(byte *)(param_2 + 8)) {
    uVar12 = 0;
  }
  lVar11 = *(long *)(*(long *)(param_3 + 0x248) + 0x10) + (ulong)uVar12 * 0x23c0;
  *(int *)(lVar13 + 0x23c) = (int)(*(float *)(lVar11 + 800) - *(float *)(lVar11 + 0x318));
  fVar16 = *(float *)(lVar11 + 0x324);
  fVar17 = *(float *)(lVar11 + 0x31c);
  *(undefined4 *)(lVar13 + 0x244) = 0;
  fVar18 = *(float *)(lVar13 + 0xe0);
  *(int *)(lVar13 + 0x240) = (int)(fVar16 - fVar17);
  fVar17 = *(float *)(param_1 + 0x60);
  lVar15 = lVar14 + (ulong)uVar9 * 0x350;
  lVar11 = *(long *)(lVar15 + 0x268);
  plVar1 = (long *)(lVar15 + 600);
  fVar16 = fVar18 - *(float *)(lVar13 + 0xe4);
  if (*(char *)(lVar13 + 0x234) != '\0') {
    fVar16 = -(fVar17 * (1.0 - fVar18 / *(float *)(lVar13 + 0xe4)));
  }
  (**(code **)(*(long *)(lVar15 + 600) + 0x20))(plVar1);
  (**(code **)(*(long *)(lVar15 + 600) + 0x20))(plVar1);
  lVar13 = **(long **)(lVar15 + 0x260);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar13 + 8) * 4];
  local_54 = (fVar18 - fVar17) / fVar16;
  (**(code **)(*(long *)(lVar15 + 600) + 0x18))(plVar1);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar11 + (ulong)*(ushort *)(lVar13 + 4)),&local_54,(ulong)bVar5 << 2);
  }
  iVar2 = *(int *)(lVar15 + 0x288);
  lVar14 = lVar14 + (ulong)uVar9 * 0x350;
  bVar5 = *(byte *)(lVar14 + 0x291);
  uVar6 = *(ushort *)(lVar14 + 0x292);
  iVar7 = (**(code **)(*plVar1 + 0x20))(plVar1);
  iVar8 = (**(code **)(*plVar1 + 0x20))(plVar1);
  lVar13 = *(long *)(lVar14 + 0x278);
  if (lVar13 != 0) {
    iVar3 = *(int *)(lVar15 + 0x288);
    iVar4 = *(int *)(lVar14 + 0x270);
    uVar9 = (**(code **)PTR_DAT_04bcf030)(lVar13);
    if ((uVar9 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03a50a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_04c61fd8)(lVar13,iVar4 + (uint)uVar6 * (uint)bVar5 * ((iVar2 + iVar7) - 1U & -iVar8),
                      iVar3);
      return;
    }
  }
  return;
}

