
void FUN_039bd440(long param_1)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float local_6c [3];
  
  if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
    plVar14 = (long *)(param_1 + 0x78);
    uVar4 = *(ushort *)(param_1 + 0xb2);
    bVar3 = 1 - *(char *)(param_1 + 0x70);
    iVar2 = *(int *)(param_1 + 0xa8);
    *(byte *)(param_1 + 0x70) = bVar3;
    *(byte *)(param_1 + 0xb1) = bVar3;
    iVar5 = (**(code **)(*plVar14 + 0x20))(plVar14);
    iVar6 = (**(code **)(*plVar14 + 0x20))(plVar14);
    iVar7 = *(int *)(param_1 + 0x90);
    if (*(long *)(param_1 + 0x98) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (*DAT_04c61fd0)();
    }
    fVar19 = *(float *)(param_1 + 100);
    uVar15 = (ulong)(iVar7 + (uint)uVar4 * (uint)bVar3 * ((iVar2 + iVar5) - 1U & -iVar6));
    lVar16 = lVar9 + uVar15;
    *(long *)(param_1 + 0x88) = lVar16;
    (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar14);
    (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar14);
    lVar17 = **(long **)(param_1 + 0x80);
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 8) * 4];
    local_6c[0] = fVar19;
    (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(plVar14);
    if (bVar3 != 0) {
      uVar12 = (ulong)*(ushort *)(lVar17 + 4);
      uVar10 = (ulong)bVar3 & 3;
      if (bVar3 < 4) {
        lVar17 = 0;
        pfVar11 = local_6c;
      }
      else {
        lVar17 = 0;
        pfVar11 = local_6c;
        pfVar13 = (float *)(uVar12 + uVar15 + lVar9 + 8);
        do {
          lVar17 = lVar17 + -4;
          pfVar13[-2] = *pfVar11;
          pfVar13[-1] = pfVar11[1];
          pfVar1 = pfVar11 + 2;
          fVar19 = pfVar11[3];
          pfVar11 = pfVar11 + 4;
          *pfVar13 = *pfVar1;
          pfVar13[1] = fVar19;
          pfVar13 = pfVar13 + 4;
        } while (-lVar17 != ((ulong)bVar3 & 0xfc));
        lVar17 = -lVar17;
      }
      if ((bVar3 & 3) != 0) {
        pfVar13 = (float *)(lVar16 + uVar12 + lVar17 * 4);
        do {
          uVar10 = uVar10 - 1;
          *pfVar13 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar10 != 0);
      }
    }
    lVar9 = *(long *)(param_1 + 0x88);
    fVar18 = *(float *)(param_1 + 100);
    fVar19 = *(float *)(param_1 + 0x68);
    (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar14);
    (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar14);
    lVar16 = **(long **)(param_1 + 0x80);
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar16 + 0x14) * 4];
    local_6c[1] = fVar19 - fVar18;
    (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(plVar14);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar9 + (ulong)*(ushort *)(lVar16 + 0x10)),local_6c + 1,(ulong)bVar3 << 2);
    }
    uVar20 = *(undefined4 *)(param_1 + 0x6c);
    lVar9 = *(long *)(param_1 + 0x88);
    (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar14);
    (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar14);
    lVar16 = **(long **)(param_1 + 0x80);
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar16 + 0x20) * 4];
    local_6c[2] = (float)uVar20;
    (**(code **)(*(long *)(param_1 + 0x78) + 0x18))(plVar14);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar9 + (ulong)*(ushort *)(lVar16 + 0x1c)),local_6c + 2,(ulong)bVar3 << 2);
    }
    bVar3 = *(byte *)(param_1 + 0xb1);
    uVar4 = *(ushort *)(param_1 + 0xb2);
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar7 = (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar14);
    iVar5 = (**(code **)(*(long *)(param_1 + 0x78) + 0x20))(plVar14);
    lVar9 = *(long *)(param_1 + 0x98);
    if (lVar9 != 0) {
      uVar20 = *(undefined4 *)(param_1 + 0xa8);
      iVar6 = *(int *)(param_1 + 0x90);
      uVar8 = (**(code **)PTR_DAT_04bcf030)(lVar9);
      if ((uVar8 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x039bd778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_04c61fd8)(lVar9,iVar6 + (uint)uVar4 * (uint)bVar3 * ((iVar2 + iVar7) - 1U & -iVar5),
                        uVar20);
        return;
      }
    }
  }
  return;
}

