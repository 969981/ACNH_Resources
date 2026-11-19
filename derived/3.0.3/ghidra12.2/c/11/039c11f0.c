
void FUN_039c11f0(long param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float local_e0 [4];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  uVar12 = *(uint *)(param_1 + 0xb8);
  if (uVar12 != 0) {
    uVar16 = 0;
    lVar15 = param_1 + 0x310;
    do {
      uVar9 = uVar16;
      if (*(uint *)(param_1 + 0xb8) <= uVar16) {
        uVar9 = 0;
      }
      pcVar1 = (char *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar9 * 8);
      cVar7 = pcVar1[1];
      if (*pcVar1 < '\0') {
        lVar18 = *(long *)(param_1 + 800);
        (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
        (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
        plVar14 = *(long **)(param_1 + 0x318);
        local_e0[0] = 0.0;
      }
      else {
        lVar18 = *(long *)(param_1 + 800);
        fVar20 = *(float *)(*(long *)(param_1 + 0xc0) + (long)(int)uVar9 * 8 + 4);
        (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
        (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
        plVar14 = *(long **)(param_1 + 0x318);
        local_e0[0] = fVar20;
      }
      lVar19 = *plVar14;
      bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
      uVar9 = (**(code **)(*(long *)(param_1 + 0x310) + 0x18))(lVar15);
      if ((ulong)bVar5 != 0) {
        memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar19 + 4) +
                       (long)(int)(uVar16 * (uVar9 & 0xff)) * 4),local_e0,(ulong)bVar5 << 2);
      }
      lVar18 = *(long *)(param_1 + 800);
      (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
      (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
      lVar19 = **(long **)(param_1 + 0x318);
      bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x14) * 4];
      local_e0[0] = (float)(int)cVar7;
      uVar9 = (**(code **)(*(long *)(param_1 + 0x310) + 0x18))(lVar15);
      if ((ulong)bVar5 != 0) {
        memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar19 + 0x10) +
                       (long)(int)(uVar16 * (uVar9 & 0xff)) * 4),local_e0,(ulong)bVar5 << 2);
      }
      uVar16 = uVar16 + 1;
    } while (uVar12 != uVar16);
  }
  lVar15 = param_1 + 0x310;
  fVar20 = *(float *)(param_1 + 0xd0);
  lVar18 = *(long *)(param_1 + 800);
  (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
  lVar19 = **(long **)(param_1 + 0x318);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x20) * 4];
  local_e0[0] = fVar20;
  (**(code **)(*(long *)(param_1 + 0x310) + 0x18))(lVar15);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar19 + 0x1c)),local_e0,(ulong)bVar5 << 2);
  }
  bVar5 = *(byte *)(param_1 + 0x349);
  uVar6 = *(ushort *)(param_1 + 0x34a);
  iVar2 = *(int *)(param_1 + 0x340);
  iVar10 = (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
  iVar11 = (**(code **)(*(long *)(param_1 + 0x310) + 0x20))(lVar15);
  lVar15 = *(long *)(param_1 + 0x330);
  uVar17 = extraout_x1;
  if (lVar15 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x340);
    iVar4 = *(int *)(param_1 + 0x328);
    uVar12 = (**(code **)PTR_DAT_04bcf030)(lVar15);
    uVar17 = extraout_x1_00;
    if ((uVar12 >> 2 & 1) != 0) {
      (*DAT_04c61fd8)(lVar15,iVar4 + (uint)uVar6 * (uint)bVar5 * ((iVar2 + iVar10) - 1U & -iVar11),
                      uVar3);
      uVar17 = extraout_x1_01;
    }
  }
  FUN_039c2bf0(local_e0,uVar17,param_1 + 0xe4);
  lVar15 = param_1 + 0x388;
  lVar18 = *(long *)(param_1 + 0x398);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  lVar19 = **(long **)(param_1 + 0x390);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
  (**(code **)(*(long *)(param_1 + 0x388) + 0x18))(lVar15);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar19 + 4)),local_e0,(ulong)bVar5 << 2);
  }
  lVar18 = *(long *)(param_1 + 0x398);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  lVar19 = **(long **)(param_1 + 0x390);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
  bVar8 = (**(code **)(*(long *)(param_1 + 0x388) + 0x18))(lVar15);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar19 + 4) + (ulong)bVar8 * 4),auStack_d0,
           (ulong)bVar5 << 2);
  }
  lVar18 = *(long *)(param_1 + 0x398);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  lVar19 = **(long **)(param_1 + 0x390);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
  bVar8 = (**(code **)(*(long *)(param_1 + 0x388) + 0x18))(lVar15);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar19 + 4) + (ulong)bVar8 * 8),auStack_c0,
           (ulong)bVar5 << 2);
  }
  lVar18 = *(long *)(param_1 + 0x398);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  lVar19 = **(long **)(param_1 + 0x390);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
  uVar13 = (**(code **)(*(long *)(param_1 + 0x388) + 0x18))(lVar15);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar19 + 4) + (uVar13 & 0xff) * 0xc),auStack_b0,
           (ulong)bVar5 << 2);
  }
  lVar18 = *(long *)(param_1 + 0x398);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  lVar19 = **(long **)(param_1 + 0x390);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
  bVar8 = (**(code **)(*(long *)(param_1 + 0x388) + 0x18))(lVar15);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar19 + 4) + (ulong)bVar8 * 0x10),auStack_a0,
           (ulong)bVar5 << 2);
  }
  lVar18 = *(long *)(param_1 + 0x398);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  lVar19 = **(long **)(param_1 + 0x390);
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
  uVar13 = (**(code **)(*(long *)(param_1 + 0x388) + 0x18))(lVar15);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar19 + 4) + (uVar13 & 0xff) * 0x14),auStack_90,
           (ulong)bVar5 << 2);
  }
  uVar17 = *(undefined8 *)(param_1 + 0x398);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  FUN_0390dff0(lVar15,uVar17,0,auStack_80,6,1);
  bVar5 = *(byte *)(param_1 + 0x3c1);
  uVar6 = *(ushort *)(param_1 + 0x3c2);
  iVar2 = *(int *)(param_1 + 0x3b8);
  iVar10 = (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  iVar11 = (**(code **)(*(long *)(param_1 + 0x388) + 0x20))(lVar15);
  lVar15 = *(long *)(param_1 + 0x3a8);
  if (lVar15 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3b8);
    iVar4 = *(int *)(param_1 + 0x3a0);
    uVar12 = (**(code **)PTR_DAT_04bcf030)(lVar15);
    if ((uVar12 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x039c181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_04c61fd8)(lVar15,iVar4 + (uint)uVar6 * (uint)bVar5 * ((iVar2 + iVar10) - 1U & -iVar11),
                      uVar3);
      return;
    }
  }
  return;
}

