
void FUN_001275b0(long param_1,byte *param_2,long param_3,char param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ushort uVar14;
  byte *pbVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  ushort uVar18;
  undefined2 auStack_d0 [56];
  byte *local_58;
  
  puVar16 = auStack_d0;
  puVar17 = auStack_d0;
  iVar8 = *(int *)(param_1 + 0x70);
  if (param_4 == '\0') {
    iVar11 = -2;
  }
  else {
    if (param_4 != '\x01') goto LAB_0012760c;
    iVar11 = -1;
  }
  *(ushort *)(param_3 + 8) =
       *(byte *)(*(long *)(param_1 + 0x60) + (ulong)(uint)(iVar11 + param_5 * 2)) & 0x3f;
LAB_0012760c:
  lVar10 = *(long *)(param_1 + 8);
  lVar12 = 8;
  if (iVar8 == 0x40050001) {
    lVar12 = 4;
  }
  bVar6 = param_2[lVar12];
  lVar12 = 9;
  if (iVar8 == 0x40050001) {
    lVar12 = 5;
  }
  bVar7 = param_2[lVar12];
  uVar14 = 0;
  if (*(byte *)(lVar10 + 0x4b) != 0) {
    uVar14 = CONCAT11(bVar6,bVar7) >> (ulong)(0x10 - *(byte *)(lVar10 + 0x4b) & 0x1f);
  }
  lVar12 = *(long *)(param_1 + 0x28);
  *(ushort *)(param_3 + 0xe) = uVar14;
  bVar2 = *(byte *)(lVar10 + 0x4a);
  pbVar15 = (byte *)(lVar12 + (ulong)uVar14 * (ulong)bVar2);
  bVar3 = *pbVar15;
  uVar14 = (ushort)bVar3;
  if (bVar2 == 2) {
    uVar14 = CONCAT11(bVar3,pbVar15[1]);
  }
  *(ushort *)(param_3 + 0x12) = uVar14;
  if (*(byte *)(lVar10 + 0x4f) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x10 - *(byte *)(lVar10 + 0x4f);
    uVar13 = (uint)(ushort)(CONCAT11(bVar6,bVar7) >>
                           (ulong)(uVar13 - *(byte *)(lVar10 + 0x4b) & 0x1f)) &
             0xffffU >> (ulong)(uVar13 & 0x1f);
  }
  *(short *)(param_3 + 0x10) = (short)uVar13;
  local_58 = (byte *)(lVar12 + (ulong)(uVar13 * *(byte *)(lVar10 + 0x4e) +
                                      ((int)(short)((ushort)*(byte *)(lVar10 + 0x48) << 8) |
                                      (uint)*(byte *)(lVar10 + 0x49)) * (uint)bVar2));
  uVar14 = (ushort)*local_58;
  if (*(byte *)(lVar10 + 0x4e) == 2) {
    uVar14 = CONCAT11(*local_58,local_58[1]);
  }
  *(ushort *)(param_3 + 0x14) = uVar14;
  if (iVar8 == 0x40050001) {
    uVar13 = (*(uint *)(lVar10 + 0x24) & 0xff00ff00) >> 8 |
             (*(uint *)(lVar10 + 0x24) & 0xff00ff) << 8;
    iVar8 = FUN_0010dbc0(param_1,10,
                         ((uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 | (uint)param_2[3]) +
                         (uVar13 >> 0x10 | uVar13 << 0x10),*param_2 & 0x7f,&local_58);
    uVar14 = *param_2 & 0x7f;
    if (iVar8 < 0) {
      *(ushort *)(param_3 + 10) = uVar14;
      uVar14 = *param_2 & 0x7f;
    }
    else {
      uVar13 = 0;
      if ((*param_2 & 0x7f) != 0) {
        uVar4 = *(undefined1 *)(*(long *)(param_1 + 8) + 0x76);
        uVar5 = *(undefined1 *)(*(long *)(param_1 + 8) + 0x77);
        lVar12 = *(long *)(param_1 + 0x48);
        uVar18 = 0;
        pbVar15 = local_58;
        do {
          pbVar9 = (byte *)(lVar12 + (ulong)CONCAT11(uVar4,uVar5) * (ulong)*pbVar15);
          if ((*pbVar9 & 0xfc) == 0xd8) {
            iVar8 = 1;
            if (*(short *)(pbVar9 + 2) != 0) {
              iVar8 = 2;
            }
          }
          else {
            iVar8 = 1;
          }
          uVar1 = iVar8 * 2 + (uVar13 & 0xffff);
          puVar17 = puVar16;
          if (0x6f < uVar1) goto LAB_0012781c;
          FUN_00100660(puVar16,pbVar9,iVar8 * 2);
          puVar16 = puVar16 + (byte)iVar8;
          uVar18 = uVar18 + 1;
          pbVar15 = pbVar15 + 1;
          uVar13 = uVar1;
        } while (uVar18 < uVar14);
        puVar17 = puVar16;
      }
LAB_0012781c:
      uVar14 = (ushort)(uVar13 >> 1) & 0x7fff;
      *puVar17 = 0;
      *(ushort *)(param_3 + 10) = uVar14;
    }
  }
  else {
    *(ushort *)(param_3 + 10) = param_2[4] >> 1 & 0x3f;
    uVar14 = *param_2 >> 1 & 0x3f;
  }
  *(ushort *)(param_3 + 0xc) = uVar14;
  return;
}

