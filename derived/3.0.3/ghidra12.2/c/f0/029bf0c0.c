
void FUN_029bf0c0(uint *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined2 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_c4 [4];
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined2 local_b0;
  undefined6 uStack_ae;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined4 local_48;
  uint local_44;
  
  lVar16 = *param_2;
  uVar23 = (undefined4)param_2[1];
  uVar24 = *(undefined4 *)((long)param_2 + 0xc);
  uVar22 = (undefined4)param_2[4];
  uVar19 = *(undefined4 *)((long)param_2 + 0x24);
  puVar2 = (undefined8 *)param_2[5];
  lVar13 = param_2[6];
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  param_1[0x81e] = 0xffffffff;
  param_1[0x81f] = 0xffffffff;
  param_1[0x81a] = 0;
  param_1[0x81b] = 0;
  param_1[0x81c] = 0;
  param_1[0x81d] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((*(byte *)(lVar16 + 8) >> 2 & 1) != 0) {
    *(undefined4 *)(lVar3 + 0xc) = 0;
    *(undefined4 *)(lVar3 + 0x14) = 0;
    *(undefined4 *)(lVar3 + 0x24) = 0;
    *(undefined4 *)(lVar3 + 0x2c) = 0;
    uVar5 = *(undefined4 *)(lVar4 + 0x20);
    uVar26 = *(undefined4 *)(lVar4 + 0x2c);
    uVar25 = *(undefined4 *)(lVar4 + 0x30);
    uVar17 = FUN_02a215b0(uVar25,lVar4 + 0x38);
    *(undefined4 *)(lVar4 + 0xc) = 0;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(undefined4 *)(lVar4 + 0x1c) = uVar17;
    *(undefined4 *)(lVar4 + 0x24) = 0;
    *(undefined4 *)(lVar4 + 0x28) = uVar5;
    *(undefined4 *)(lVar4 + 0x2c) = uVar26;
    *(undefined4 *)(lVar4 + 0x30) = uVar25;
    *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) & 0xfe;
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  lVar10 = FUN_03be8c84(lVar13,*(undefined8 *)(lVar16 + 0x20));
  if (lVar10 != 0) {
    local_88 = FUN_03bdbcf0(lVar13,lVar10);
    local_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    local_b0 = 0xff;
    local_98 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uVar11 = (**(code **)*puVar2)(puVar2,&local_c0,&local_90);
    if ((uVar11 & 1) != 0) {
      *(ulong *)(param_1 + 0x810) = CONCAT62(uStack_ae,local_b0);
      *(undefined8 *)(param_1 + 0x812) = local_a8;
      *(undefined8 *)(param_1 + 0x814) = local_a0;
      *(undefined8 *)(param_1 + 0x816) = local_98;
      *(ulong *)(param_1 + 0x80c) = CONCAT44(uStack_bc,local_c0);
      *(ulong *)(param_1 + 0x80e) = CONCAT44(uStack_b4,uStack_b8);
      if (*(int *)(lVar16 + 0x10) - 0x1abU < 2) {
        lVar13 = *(long *)(param_1 + 0x80c);
        uVar6 = *(uint *)(lVar13 + 0x18);
        lVar13 = (ulong)*(uint *)(lVar13 + 0x40) + lVar13;
        if ((int)uVar6 < 1 || lVar13 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            if ((long)(int)*(uint *)(lVar16 + 0x38) <= (long)uVar11) goto LAB_029bf65c;
            lVar10 = uVar11 * 2;
            uVar1 = uVar11;
            if (*(uint *)(lVar16 + 0x38) <= uVar11) {
              uVar1 = 0;
            }
            uVar11 = uVar11 + 1;
            *(undefined2 *)(*(long *)(lVar16 + 0x40) + uVar1 * 2) = *(undefined2 *)(lVar13 + lVar10)
            ;
          } while (uVar6 != uVar11);
          uVar11 = (ulong)uVar6;
        }
LAB_029bf65c:
        *(ulong *)(lVar16 + 0x30) = (ulong)(uint)((int)uVar11 << 1);
      }
      else {
        local_c4[0] = *(undefined1 *)(lVar16 + 0xd);
        local_48 = 0;
        local_90 = (undefined *)0x0;
        if (*(int *)(lVar16 + 0x10) - 0x10cU < 0x69) {
          FUN_029bf6cc(param_1,uVar19,uVar22,600,lVar16,&local_48,&local_90);
        }
        if ('\0' < *(char *)(lVar16 + 0xc)) {
          FUN_029bf860(uVar23,uVar24,param_1,lVar3,lVar4,lVar16,local_c4);
        }
        FUN_029bf6cc(param_1,uVar19,uVar22,0x640,lVar16,&local_48,&local_90);
        if ('\x01' < *(char *)(lVar16 + 0xc)) {
          FUN_029bf860(uVar23,uVar24,param_1,lVar3,lVar4,lVar16,local_c4);
        }
        FUN_029bf6cc(param_1,uVar19,uVar22,0x640,lVar16,&local_48,&local_90);
        if ('\x02' < *(char *)(lVar16 + 0xc)) {
          FUN_029bf860(uVar23,uVar24,param_1,lVar3,lVar4,lVar16,local_c4);
        }
        FUN_029bf6cc(param_1,uVar19,uVar22,0x640,lVar16,&local_48,&local_90);
        if ('\x03' < *(char *)(lVar16 + 0xc)) {
          FUN_029bf860(uVar23,uVar24,param_1,lVar3,lVar4,lVar16,local_c4);
        }
        FUN_029bf6cc(param_1,uVar19,uVar22,0x640,lVar16,&local_48,&local_90);
        if ('\x04' < *(char *)(lVar16 + 0xc)) {
          FUN_029bf860(uVar23,uVar24,param_1,lVar3,lVar4,lVar16,local_c4);
        }
        FUN_029bf6cc(param_1,uVar19,uVar22,0x640,lVar16,&local_48,&local_90);
        uStack_bc = 0;
        uStack_b8 = 0;
        *(undefined **)(lVar16 + 0x30) = local_90;
        lVar10 = *(long *)(param_1 + 0x820);
        local_c0 = 0xffffffff;
        FUN_029b41c4(lVar10 + 0x30,&local_c0,0,uVar22,uVar19);
        local_44 = local_c0;
        nn::os::LockMutex((MutexType *)(lVar10 + 0x1b20));
        lVar13 = lVar10 + 0x38 + (ulong)local_44 * 0x20;
        if (8 < local_44) {
          lVar13 = lVar10 + 0x38;
        }
        uVar22 = *(undefined4 *)(lVar13 + 8);
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x1b20));
        fVar18 = (float)NEON_ucvtf(uVar22);
        fVar20 = 0.0;
        if (((((*(long *)(param_1 + 0x80e) != 0) &&
              (*(char *)(*(long *)(param_1 + 0x80e) + 0x30) != '\0')) &&
             (piVar12 = *(int **)(param_1 + 0x80c), piVar12 != (int *)0x0)) &&
            ((*piVar12 == 0x56415742 &&
             (((char)(*(ushort *)(piVar12 + 1) >> 8) != -1 ||
              ((*(ushort *)(piVar12 + 1) & 0xff) != 0xfe)))))) &&
           ((*(short *)((long)piVar12 + 6) == 1 && (*(short *)((long)piVar12 + 0xe) != 0)))) {
          fVar20 = (float)NEON_ucvtf(piVar12[5]);
        }
        fVar20 = cosf((fVar18 * 6.2831855) / fVar20);
        fVar20 = fVar20 + 2.0;
        fVar21 = fVar20 * fVar20 + -1.0;
        fVar18 = SQRT(fVar21);
        if (NAN(fVar18)) {
          fVar18 = sqrtf(fVar21);
          iVar7 = *(int *)(lVar16 + 0x38);
        }
        else {
          iVar7 = *(int *)(lVar16 + 0x38);
        }
        if (iVar7 != 0) {
          uVar6 = *param_1;
          uVar11 = 0;
          lVar13 = *(long *)(lVar16 + 0x40);
          fVar21 = 0.0;
          do {
            fVar21 = fVar21 * -(fVar20 - fVar18) +
                     (float)(int)*(short *)(lVar13 + (-(uVar11 >> 0x1f) & 0xfffffffe00000000 |
                                                     uVar11 << 1)) * ((fVar20 - fVar18) + -1.0);
            if (0 < (int)uVar6) {
              uVar9 = (undefined2)(int)fVar21;
              if (3 < uVar6) {
                uVar14 = uVar6 & 0xfffffffc;
                do {
                  lVar10 = uVar11 << 0x20;
                  uVar1 = uVar11 << 1;
                  uVar8 = uVar11 >> 0x1f;
                  uVar11 = (ulong)((int)uVar11 + 4);
                  *(undefined2 *)(lVar13 + (-uVar8 & 0xfffffffe00000000 | uVar1)) = uVar9;
                  uVar14 = uVar14 - 4;
                  *(undefined2 *)(lVar13 + (lVar10 + 0x100000000 >> 0x1f)) = uVar9;
                  *(undefined2 *)(lVar13 + (lVar10 + 0x200000000 >> 0x1f)) = uVar9;
                  *(undefined2 *)(lVar13 + (lVar10 + 0x300000000 >> 0x1f)) = uVar9;
                } while (uVar14 != 0);
              }
              if ((uVar6 & 3) != 0) {
                uVar14 = uVar6 & 3;
                do {
                  uVar1 = uVar11 << 1;
                  uVar8 = uVar11 >> 0x1f;
                  uVar11 = (ulong)((int)uVar11 + 1);
                  uVar14 = uVar14 - 1;
                  *(undefined2 *)(lVar13 + (-uVar8 & 0xfffffffe00000000 | uVar1)) = uVar9;
                } while (uVar14 != 0);
              }
            }
          } while (iVar7 != (int)uVar11);
        }
      }
      if ((*(byte *)(lVar16 + 8) >> 3 & 1) == 0) {
        return;
      }
      *(undefined4 *)(lVar3 + 0xc) = 0;
      *(undefined4 *)(lVar3 + 0x14) = 0;
      *(undefined4 *)(lVar3 + 0x24) = 0;
      *(undefined4 *)(lVar3 + 0x2c) = 0;
      uVar22 = *(undefined4 *)(lVar4 + 0x20);
      uVar24 = *(undefined4 *)(lVar4 + 0x2c);
      uVar23 = *(undefined4 *)(lVar4 + 0x30);
      uVar19 = FUN_02a215b0(uVar23,lVar4 + 0x38);
      *(undefined4 *)(lVar4 + 0xc) = 0;
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(undefined4 *)(lVar4 + 0x1c) = uVar19;
      *(undefined4 *)(lVar4 + 0x24) = 0;
      *(undefined4 *)(lVar4 + 0x28) = uVar22;
      *(undefined4 *)(lVar4 + 0x2c) = uVar24;
      *(undefined4 *)(lVar4 + 0x30) = uVar23;
      *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) & 0xfe;
      return;
    }
  }
  if (*(char *)(lVar16 + 0xc) < '\x01') {
    uVar15 = 0;
  }
  else {
    uVar15 = 16000;
    memset(*(void **)(lVar16 + 0x40),0,16000);
  }
  *(undefined8 *)(lVar16 + 0x30) = uVar15;
  return;
}

