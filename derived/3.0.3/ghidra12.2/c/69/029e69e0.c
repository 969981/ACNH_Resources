
void FUN_029e69e0(long *param_1,undefined1 *param_2)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long local_b0;
  long lStack_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  undefined1 local_70 [4];
  int local_6c;
  long local_68;
  
  uVar7 = *param_2;
  iVar5 = *(int *)(param_2 + 4);
  lVar16 = *(long *)(param_2 + 8);
  if ((lVar16 != 0) && (-1 < iVar5)) {
    iVar10 = *(int *)(lVar16 + 0x14);
    iVar4 = *(int *)(lVar16 + 0x18);
    local_78 = -1;
    iVar6 = *(int *)(lVar16 + 0x1c);
    local_80 = -1;
    local_90 = 0;
    local_88 = 0;
    local_70[0] = uVar7;
    local_6c = iVar5;
    local_68 = lVar16;
    lVar8 = (**(code **)(*param_1 + 0x40))(param_1,lVar16);
    uStack_9c = (undefined4)param_1[3];
    local_b0 = lVar16;
    lStack_a8 = lVar8;
    local_a0 = iVar5;
    local_98 = uVar7;
    uVar9 = (**(code **)(*param_1 + 0x38))(param_1,&local_90,&local_b0);
    if ((uVar9 & 1) != 0) {
      if (lVar8 == 0) {
        uVar11 = *(uint *)(lVar16 + 0x44);
        if (uVar11 != 0) {
          puVar3 = (uint *)((ulong)uVar11 + lVar16 + 0x44);
          uVar9 = (ulong)*puVar3;
          if (*puVar3 != 0) {
            lVar8 = -(long)puVar3;
            do {
              lVar8 = lVar8 + -8;
              if (puVar3[1] == *(uint *)(param_1 + 3)) {
                lVar8 = (ulong)puVar3[2] - lVar8;
                if (lVar8 != 0) {
                  uVar11 = (uint)*(ushort *)(lVar8 + 8);
                  goto LAB_029e6b50;
                }
                break;
              }
              uVar9 = uVar9 - 1;
              puVar3 = puVar3 + 2;
            } while (uVar9 != 0);
          }
        }
        uVar11 = *(uint *)(lVar16 + 0x40);
        if (uVar11 != 0) {
          puVar3 = (uint *)((ulong)uVar11 + lVar16 + 0x40);
          uVar9 = (ulong)*puVar3;
          if (*puVar3 != 0) {
            lVar16 = -(long)puVar3;
            do {
              lVar16 = lVar16 + -8;
              if (puVar3[1] == *(uint *)(param_1 + 3)) {
                lVar16 = (ulong)puVar3[2] - lVar16;
                uVar11 = 0;
                if (lVar16 != 0) {
                  uVar11 = (uint)*(ushort *)(lVar16 + 4);
                }
                goto LAB_029e6b50;
              }
              uVar9 = uVar9 - 1;
              puVar3 = puVar3 + 2;
            } while (uVar9 != 0);
          }
        }
        uVar11 = 0;
      }
      else {
        uVar11 = *(uint *)(lVar8 + 0xc);
      }
LAB_029e6b50:
      fVar17 = (float)iVar10;
      *(uint *)((long)param_1 + 0x2c) = uVar11;
      iVar10 = (int)(fVar17 * 0.016666668);
      if (local_80 < 0) {
        bVar2 = false;
      }
      else {
        iVar12 = iVar6 - iVar4;
        if (iVar5 <= local_90._4_4_) {
          iVar12 = 0;
        }
        bVar2 = iVar5 <= iVar12 + local_90._4_4_ && (iVar12 + local_90._4_4_) - iVar10 <= iVar5;
      }
      if ((int)local_80 < 0) {
        bVar1 = false;
      }
      else {
        iVar12 = iVar4 - iVar6;
        if ((int)local_90 <= iVar5) {
          iVar12 = 0;
        }
        bVar1 = iVar12 + (int)local_90 <= iVar5 &&
                iVar5 < local_88._4_4_ + iVar10 + iVar12 + (int)local_90;
      }
      bVar1 = (bool)(bVar2 | bVar1);
      *(bool *)(param_1 + 1) = bVar1;
      if (bVar2) {
        iVar12 = local_80._4_4_;
        iVar14 = local_78;
        iVar15 = local_90._4_4_;
        iVar13 = (int)local_88;
      }
      else {
        iVar12 = (int)local_80;
        iVar14 = local_80._4_4_;
        iVar15 = (int)local_90;
        iVar13 = local_90._4_4_;
      }
      *(int *)((long)param_1 + 0x1c) = iVar12;
      *(int *)(param_1 + 4) = iVar14;
      iVar12 = iVar6 - iVar4;
      if (iVar5 <= iVar13) {
        iVar12 = 0;
      }
      *(int *)((long)param_1 + 0x24) = iVar15;
      *(int *)(param_1 + 5) = iVar13;
      fVar18 = -1.0;
      if (-1 < iVar14) {
        fVar19 = 0.0;
        iVar12 = (iVar13 - iVar10) + iVar12;
        if ((iVar12 < iVar5) || (fVar19 = (float)(iVar12 - iVar5) / fVar17, 0.0 <= fVar19)) {
          fVar18 = fVar19;
        }
      }
      *(float *)((long)param_1 + 0xc) = fVar18;
      if ((int)local_80 < 0) {
        *(undefined4 *)(param_1 + 2) = 0xbf800000;
        fVar18 = 0.0;
        if (!bVar1) {
          fVar18 = -1.0;
        }
      }
      else {
        iVar12 = local_90._4_4_;
        if (!bVar2) {
          iVar12 = (int)local_90;
        }
        iVar4 = iVar4 - iVar6;
        iVar6 = iVar4;
        if (iVar12 - iVar10 <= iVar5) {
          iVar6 = 0;
        }
        *(float *)(param_1 + 2) = (float)((iVar5 - (iVar12 - iVar10)) - iVar6) / fVar17;
        fVar18 = 0.0;
        if (!bVar1) {
          iVar10 = local_88._4_4_ + iVar10 + (int)local_90;
          if (iVar10 <= iVar5) {
            iVar4 = 0;
          }
          fVar18 = (float)((iVar5 - iVar10) - iVar4) / fVar17;
        }
      }
      *(float *)((long)param_1 + 0x14) = fVar18;
      (**(code **)(*param_1 + 0x30))(param_1,local_70);
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0xbf800000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xc) = 0xbf800000bf800000;
  *(undefined8 *)((long)param_1 + 0x24) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}

