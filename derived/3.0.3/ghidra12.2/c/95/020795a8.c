
undefined8 FUN_020795a8(long *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  long *plVar12;
  ushort *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long local_90;
  undefined4 local_88;
  undefined8 local_80;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  
  plVar14 = (long *)param_1[0x2f];
  local_64 = 0;
  plVar16 = plVar14 + -2;
  plVar12 = (long *)*plVar14;
  if (plVar12 == plVar14) {
    fVar21 = 0.0;
    fVar18 = 0.0;
    plVar14 = plVar12 + -2;
LAB_020796c8:
    fVar24 = *(float *)((long)param_1 + 0x19c);
    fVar25 = *(float *)(param_1 + 0x34);
    fVar26 = *(float *)((long)param_1 + 0x1a4);
    if (fVar24 == 0.0) {
      if (fVar25 == 0.0) {
        if (fVar26 == 0.0) {
          fVar25 = 0.0;
          fVar26 = fVar18;
          fVar24 = fVar21;
        }
      }
    }
  }
  else {
    plVar14 = (long *)*plVar12;
    if (plVar14 + -2 == plVar16) {
LAB_02079698:
      iVar20 = (int)plVar12[-1];
      iVar23 = *(int *)((long)plVar12 + -4);
LAB_020796b4:
      fVar21 = (float)iVar20 * 5.0;
      fVar18 = (float)iVar23 * 5.0;
      plVar14 = plVar16;
      goto LAB_020796c8;
    }
    plVar12 = (long *)*plVar14;
    if (plVar12 + -2 == plVar16) {
LAB_020796b0:
      iVar20 = (int)plVar14[-1];
      iVar23 = *(int *)((long)plVar14 + -4);
      goto LAB_020796b4;
    }
    plVar14 = (long *)*plVar12;
    if (plVar14 + -2 == plVar16) goto LAB_02079698;
    plVar12 = (long *)*plVar14;
    if (plVar12 + -2 == plVar16) goto LAB_020796b0;
    plVar14 = (long *)*plVar12;
    if (plVar14 + -2 == plVar16) goto LAB_02079698;
    plVar12 = (long *)*plVar14;
    if (plVar12 + -2 == plVar16) goto LAB_020796b0;
    plVar14 = (long *)*plVar12;
    if (plVar14 + -2 == plVar16) goto LAB_02079698;
    plVar12 = (long *)*plVar14;
    if (plVar12 + -2 == plVar16) goto LAB_020796b0;
    lVar15 = *plVar12;
    plVar14 = (long *)(lVar15 + -0x10);
    if (plVar14 == plVar16) goto LAB_02079698;
    fVar25 = 0.0;
    fVar26 = (float)*(int *)(lVar15 + -4) * 5.0;
    fVar24 = (float)*(int *)(lVar15 + -8) * 5.0;
  }
  if (((fVar24 == 0.0) && (fVar25 == 0.0)) && (fVar26 == 0.0)) {
LAB_02079718:
    uVar10 = 3;
  }
  else {
    lVar15 = *param_1;
    lVar17 = *(long *)(lVar15 + 0x3b0);
    local_80 = *(long *)(*(long *)(lVar15 + 0x68) + 0x278);
    local_78 = *(float *)(*(long *)(lVar15 + 0x68) + 0x280);
    if ((*(char *)((long)param_1 + 0x1d1) == '\0') ||
       (fVar18 = *(float *)((long)param_1 + 0x19c) - (float)local_80,
       fVar21 = *(float *)((long)param_1 + 0x1a4) - local_78,
       fVar18 = SQRT(fVar21 * fVar21 + fVar18 * fVar18), *(float *)(param_1 + 3) <= fVar18)) {
      lVar4 = param_1[0xb];
      local_70 = fVar24;
      fStack_6c = fVar25;
      local_68 = fVar26;
      if ((int)lVar4 == 4) {
        if ((*(char *)((long)param_1 + 0x1d6) == '\0') &&
           (iVar20 = *(int *)((long)param_1 + 0x1b4) + 1, *(int *)((long)param_1 + 0x1b4) = iVar20,
           (int)param_1[0x37] <= iVar20)) {
          *(undefined4 *)((long)param_1 + 0x1b4) = 0;
          *(undefined4 *)((long)param_1 + 0x9c) = 2;
          uVar11 = *(uint *)(lVar15 + 0x288) ^ *(uint *)(lVar15 + 0x288) << 0xb;
          uVar7 = *(uint *)(lVar15 + 0x294);
          *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
          uVar11 = uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7;
          uVar10 = *(undefined4 *)(lVar15 + 0x290);
          *(uint *)(lVar15 + 0x290) = uVar7;
          *(uint *)(lVar15 + 0x294) = uVar11;
          *(undefined4 *)(lVar15 + 0x28c) = uVar10;
          iVar20 = (int)((ulong)uVar11 + (ulong)uVar11 * 4 >> 0x20);
LAB_02079984:
          *(float *)(param_1 + 0x33) = local_78;
          param_1[0x32] = local_80;
          *(int *)((long)param_1 + 0x1bc) = iVar20 * 0x1e + 0x5a;
          if (*(char *)((long)param_1 + 0x1d2) == '\0') {
            return 3;
          }
          *(undefined1 *)((long)param_1 + 0x1d2) = 0;
          *(undefined4 *)((long)param_1 + 0x9c) = 3;
          return 3;
        }
        uVar8 = FUN_01ea8d54(*(undefined8 *)(lVar15 + 0x3b8),0x96);
        if ((uVar8 & 1) != 0) {
          lVar15 = *param_1;
          uVar7 = *(uint *)(lVar15 + 0x294);
          uVar11 = *(uint *)(lVar15 + 0x288) ^ *(uint *)(lVar15 + 0x288) << 0xb;
          *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
          uVar11 = uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7;
          uVar10 = *(undefined4 *)(lVar15 + 0x290);
          *(uint *)(lVar15 + 0x290) = uVar7;
          *(uint *)(lVar15 + 0x294) = uVar11;
          *(undefined4 *)(lVar15 + 0x28c) = uVar10;
          iVar20 = (int)((ulong)uVar11 + (ulong)uVar11 * 4 >> 0x20);
          *(undefined4 *)((long)param_1 + 0x9c) = 2;
          goto LAB_02079984;
        }
        cVar9 = *(char *)((long)param_1 + 0x1d2);
        fVar18 = (float)local_80;
      }
      else {
        fVar18 = (float)local_80;
        if (*(char *)((long)param_1 + 0x1d2) == '\0') {
          local_80._4_4_ = (undefined4)((ulong)local_80 >> 0x20);
          *(float *)(param_1 + 0x32) = (float)local_80;
          *(float *)(param_1 + 0x33) = local_78;
          *(undefined4 *)((long)param_1 + 0x194) = local_80._4_4_;
          cVar9 = '\0';
        }
        else {
          cVar9 = '\x01';
        }
      }
      fVar21 = local_78;
      fVar22 = *(float *)(param_1 + 3);
      fVar19 = SQRT((fVar26 - local_78) * (fVar26 - local_78) +
                    (fVar24 - fVar18) * (fVar24 - fVar18));
      *(float *)(param_1 + 0x38) = fVar19;
      if (fVar22 <= fVar19 || cVar9 == '\0') {
        if ((*(char *)((long)param_1 + 0x1d1) != '\0') && (cVar9 != '\0')) {
          *(undefined4 *)((long)param_1 + 0x9c) = 1;
          param_1[0x32] = *(long *)((long)param_1 + 0x19c);
          *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)((long)param_1 + 0x1a4);
          return 4;
        }
        lVar15 = param_1[0x2f];
        if (((lVar15 == 0) || (1 < *(int *)(lVar15 + 0x10))) || (*(long *)(param_1[2] + 0x38) != 0))
        {
          if ((int)lVar4 == 4) {
            if (4.5 < SQRT((*(float *)(param_1 + 0x33) - local_78) *
                           (*(float *)(param_1 + 0x33) - local_78) +
                           (*(float *)(param_1 + 0x32) - fVar18) *
                           (*(float *)(param_1 + 0x32) - fVar18))) goto LAB_02079918;
          }
          else {
            fVar22 = *(float *)((long)param_1 + 0x1c);
          }
          *(undefined4 *)((long)param_1 + 0x9c) = 2;
          if (fVar19 < fVar22 && cVar9 != '\0') {
            return 1;
          }
          uVar8 = FUN_0207a9c0(param_1,&local_80,&local_70,&local_64);
          if ((uVar8 & 1) != 0) {
            if (plVar14 != plVar16) {
              puVar13 = (ushort *)param_1[2];
              uVar1 = *puVar13;
              do {
                uVar11 = *(uint *)(plVar14 + 1);
                if (((uint)uVar1 < (uVar11 & 0xffff) || (uint)uVar1 == (uVar11 & 0xffff)) &&
                   ((uVar11 & 0xffff) <= (((uint)uVar1 + (uint)puVar13[6]) - 1 & 0xffff))) {
                  uVar7 = *(uint *)((long)plVar14 + 0xc);
                  uVar2 = puVar13[1];
                  if (((uint)uVar2 <= (uVar7 & 0xffff)) &&
                     (((uVar7 & 0xffff) <= (((uint)uVar2 + (uint)puVar13[8]) - 1 & 0xffff) &&
                      (uVar3 = (uVar11 - uVar1) +
                               *(int *)(*(long *)(puVar13 + 0x20) + 0x1c) * (uVar7 - uVar2),
                      (*(uint *)(*(long *)(*(long *)(puVar13 + 0x20) + 0x10) +
                                (long)((int)uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0))))
                  {
                    fVar24 = (float)(int)uVar11 * 5.0;
                    local_70 = fVar24;
                    fVar26 = (float)(int)uVar7 * 5.0;
                    local_68 = fVar26;
                    break;
                  }
                }
                plVar14 = (long *)(plVar14[2] + -0x10);
              } while (plVar14 != plVar16);
            }
            bVar5 = false;
            if ((*(float *)(param_1 + 0x33) == 0.0) &&
               (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x194)))) {
              bVar5 = *(float *)((long)param_1 + 0x194) == 0.0;
            }
            bVar6 = false;
            if ((bVar5) && (bVar6 = false, !NAN(*(float *)(param_1 + 0x32)))) {
              bVar6 = *(float *)(param_1 + 0x32) == 0.0;
            }
            plVar12 = &local_80;
            if (!bVar6) {
              plVar12 = param_1 + 0x32;
            }
            local_90 = *plVar12;
            local_88 = (undefined4)plVar12[1];
            uVar8 = FUN_0207af40(param_1,&local_90,&local_70,&local_64,0);
            if ((uVar8 & 1) != 0) {
              fVar19 = *(float *)(param_1 + 0x33) - fVar21;
              if (SQRT(fVar19 * fVar19 +
                       (*(float *)(param_1 + 0x32) - fVar18) * (*(float *)(param_1 + 0x32) - fVar18)
                      ) <= 4.5) {
                uVar7 = FUN_006f0400(fVar24 - fVar18,fVar26 - fVar21);
                uVar11 = *(uint *)(*(long *)(*param_1 + 0x68) + 0x2b4);
                if (uVar7 - uVar11 == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar3 = uVar7 - uVar11;
                  if (uVar7 <= uVar11) {
                    uVar3 = uVar11 - uVar7;
                  }
                  uVar11 = -uVar3;
                  if (uVar3 < 0x80000001) {
                    uVar11 = uVar3;
                  }
                }
                if (uVar11 < *(uint *)(param_1 + 0x39)) {
                  if (*(int *)(lVar17 + 0x360) != 4) {
                    return 1;
                  }
                  if ((*(int *)(lVar17 + 0x4b8) != 0) && (*(int *)(lVar17 + 0x378) == 0x23)) {
                    return 1;
                  }
                }
                return 2;
              }
LAB_02079918:
              *(float *)(param_1 + 0x35) = fVar24;
              *(float *)((long)param_1 + 0x1ac) = fVar25;
              *(float *)(param_1 + 0x36) = fVar26;
              *(undefined4 *)((long)param_1 + 0x9c) = 1;
              return 4;
            }
          }
          lVar15 = *param_1;
          *(undefined4 *)((long)param_1 + 0x9c) = 3;
          uVar11 = *(uint *)(lVar15 + 0x288);
          *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
          uVar11 = uVar11 ^ uVar11 << 0xb;
          *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
          uVar7 = *(uint *)(lVar15 + 0x294);
          *(uint *)(lVar15 + 0x290) = uVar7;
          uVar11 = uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7;
          *(uint *)(lVar15 + 0x294) = uVar11;
          *(int *)((long)param_1 + 0x1bc) =
               (int)((ulong)uVar11 + (ulong)uVar11 * 4 >> 0x20) * 0x1e + 0x5a;
          return 3;
        }
        if (((*(int *)(lVar15 + 0x10) != 0) && (lVar15 = *(long *)(lVar15 + 8), lVar15 != 0)) &&
           (lVar15 != 0x10)) {
          iVar20 = *(int *)(lVar15 + -8);
          iVar23 = *(int *)(lVar15 + -4);
          *(undefined4 *)((long)param_1 + 0x9c) = 1;
          *(undefined2 *)((long)param_1 + 0x1d1) = 0x101;
          *(float *)(param_1 + 0x33) = (float)iVar23 * 5.0;
          *(float *)(param_1 + 0x32) = (float)iVar20 * 5.0;
          return 4;
        }
        goto LAB_02079718;
      }
    }
    else {
      *(float *)(param_1 + 0x38) = fVar18;
    }
    uVar10 = 4;
  }
  *(undefined4 *)((long)param_1 + 0x9c) = uVar10;
  return 1;
}

