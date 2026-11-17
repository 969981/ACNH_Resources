
void FUN_02a0b444(long param_1,long *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  undefined8 local_88;
  undefined4 local_80;
  undefined *local_78;
  long local_70;
  undefined1 local_68;
  
  cVar13 = *(char *)(param_1 + 0x23a);
  uVar16 = (uint)(char)param_2[3];
  if (cVar13 <= (char)param_2[3]) {
    uVar16 = 0xffffffff;
  }
  iVar5 = *(int *)(param_1 + 0x1cc);
  cVar8 = (char)uVar16;
  if (iVar5 == 2) {
    if ((*(byte *)(param_1 + 0x238) >> 1 & 1) != 0) {
      if (((*(int *)(param_1 + 0x1d0) != 3) && (lVar18 = *(long *)(param_1 + 0x1a8), lVar18 != 0))
         && (*(int *)(lVar18 + 0x20) == *(int *)(param_1 + 0x1b0))) {
        cVar13 = *(char *)(param_1 + 0x23e);
        *(uint *)(lVar18 + 8) = *(uint *)(lVar18 + 8) | 0x10;
        if ((*(long *)(lVar18 + 0x28) != 0) && (*(long *)(lVar18 + 0x58) != 0)) {
          plVar11 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar18 + 0x28) + 0x30) +
                                                    0x18) + 0x20))();
          plVar11 = (long *)(**(code **)(*plVar11 + 0x38))();
          (**(code **)(*plVar11 + 0x10))();
          (**(code **)(**(long **)(lVar18 + 0x58) + 0x38))(*(long **)(lVar18 + 0x58),(int)cVar13);
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      *(undefined1 *)(param_1 + 0x239) = 1;
      goto LAB_02a0bbe4;
    }
    puVar2 = (undefined8 *)(param_1 + 0x88);
    puVar19 = puVar2 + ((long)(char)*(byte *)(param_1 + 0x23d) & 0xffffffffU) * 2;
    if (0xf < *(byte *)(param_1 + 0x23d)) {
      puVar19 = puVar2;
    }
    sVar7 = *(short *)((long)puVar19 + 0xc);
    if (((*(short *)(param_1 + 0x232) < sVar7) &&
        (iVar5 = *(short *)(param_1 + 0x232) + 1, *(short *)(param_1 + 0x232) = (short)iVar5,
        sVar7 <= iVar5 && *(int *)(param_1 + 0x1d0) != 3)) &&
       ((lVar18 = *(long *)(param_1 + 0x1a8), lVar18 != 0 &&
        (*(int *)(lVar18 + 0x20) == *(int *)(param_1 + 0x1b0))))) {
      cVar13 = *(char *)(param_1 + 0x23e);
      *(uint *)(lVar18 + 8) = *(uint *)(lVar18 + 8) | 0x10;
      if ((*(long *)(lVar18 + 0x28) != 0) && (*(long *)(lVar18 + 0x58) != 0)) {
        plVar11 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar18 + 0x28) + 0x30) + 0x18
                                                  ) + 0x20))();
        plVar11 = (long *)(**(code **)(*plVar11 + 0x38))();
        (**(code **)(*plVar11 + 0x10))();
        (**(code **)(**(long **)(lVar18 + 0x58) + 0x38))(*(long **)(lVar18 + 0x58),(int)cVar13);
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    if (((uVar16 >> 7 & 1) == 0) && (cVar8 <= *(char *)(param_1 + 0x23c))) goto LAB_02a0bbe4;
    *(undefined4 *)(param_1 + 0x1cc) = 1;
    if ((*(int *)(param_1 + 0x1d0) != 3) &&
       ((lVar18 = *(long *)(param_1 + 0x1a8), lVar18 != 0 &&
        (*(int *)(lVar18 + 0x20) == *(int *)(param_1 + 0x1b0))))) {
      cVar13 = *(char *)(param_1 + 0x23e);
      *(uint *)(lVar18 + 8) = *(uint *)(lVar18 + 8) | 0x10;
      if ((*(long *)(lVar18 + 0x28) != 0) && (*(long *)(lVar18 + 0x58) != 0)) {
        plVar11 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar18 + 0x28) + 0x30) + 0x18
                                                  ) + 0x20))();
        plVar11 = (long *)(**(code **)(*plVar11 + 0x38))();
        (**(code **)(*plVar11 + 0x10))();
        (**(code **)(**(long **)(lVar18 + 0x58) + 0x38))(*(long **)(lVar18 + 0x58),(int)cVar13);
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    lVar18 = *param_2;
    pcVar15 = (char *)param_2[2];
    puVar19 = puVar2 + ((long)(char)*(byte *)(param_1 + 0x23d) & 0xffffffffU) * 2;
    if (0xf < *(byte *)(param_1 + 0x23d)) {
      puVar19 = puVar2;
    }
  }
  else {
    if (iVar5 == 1) {
      if ((*(byte *)(param_1 + 0x238) >> 1 & 1) == 0) {
        cVar6 = *(char *)(param_1 + 0x23d);
        uVar20 = (uint)cVar6;
        puVar2 = (undefined8 *)(param_1 + 0x88);
        puVar19 = puVar2 + (ulong)uVar20 * 2;
        if (0xf < (uint)(int)cVar6) {
          puVar19 = puVar2;
        }
        sVar7 = *(short *)((long)puVar19 + 0xc);
        if ((*(short *)(param_1 + 0x232) < sVar7) &&
           (iVar5 = *(short *)(param_1 + 0x232) + 1, *(short *)(param_1 + 0x232) = (short)iVar5,
           sVar7 <= iVar5)) {
          if ((*(int *)(param_1 + 0x1d0) != 3) &&
             ((lVar18 = *(long *)(param_1 + 0x1a8), lVar18 != 0 &&
              (*(int *)(lVar18 + 0x20) == *(int *)(param_1 + 0x1b0))))) {
            cVar13 = *(char *)(param_1 + 0x23e);
            *(uint *)(lVar18 + 8) = *(uint *)(lVar18 + 8) | 0x10;
            if ((*(long *)(lVar18 + 0x28) != 0) && (*(long *)(lVar18 + 0x58) != 0)) {
              plVar11 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar18 + 0x28) + 0x30)
                                                        + 0x18) + 0x20))();
              plVar11 = (long *)(**(code **)(*plVar11 + 0x38))();
              (**(code **)(*plVar11 + 0x10))();
              (**(code **)(**(long **)(lVar18 + 0x58) + 0x38))
                        (*(long **)(lVar18 + 0x58),(int)cVar13);
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
          }
          cVar13 = *(char *)(param_1 + 0x23a);
        }
        uVar17 = (uint)*(char *)(param_1 + 0x23c);
        if (*(char *)(param_1 + 0x23c) < cVar13) {
          if (((uVar16 >> 7 & 1) != 0) || ((int)uVar17 < (int)cVar8)) {
            lVar18 = param_1 + 8 + (ulong)uVar17 * 8;
            if (0xf < uVar17) {
              lVar18 = param_1 + 8;
            }
            iVar5 = *(short *)(param_1 + 0x230) + 1;
            *(short *)(param_1 + 0x230) = (short)iVar5;
            if (*(short *)(lVar18 + 4) <= iVar5) {
              uVar17 = uVar17 + 1;
              *(undefined2 *)(param_1 + 0x230) = 0;
              *(char *)(param_1 + 0x23c) = (char)uVar17;
            }
          }
          bVar1 = -1 < cVar8 && (int)uVar16 <= (int)uVar17;
        }
        else {
          bVar1 = false;
        }
        iVar5 = *(short *)(param_1 + 0x234) + 1;
        *(short *)(param_1 + 0x234) = (short)iVar5;
        if (*(short *)((long)puVar19 + 0xe) <= iVar5) {
          uVar20 = (int)cVar6 + 1;
          *(char *)(param_1 + 0x23d) = (char)uVar20;
          if ((int)uVar20 < (int)*(char *)(param_1 + 0x23b)) {
            lVar18 = *param_2;
            pcVar15 = (char *)param_2[2];
            puVar19 = puVar2 + ((long)(char)uVar20 & 0xffffffffU) * 2;
            if ((uVar20 & 0xf0) != 0) {
              puVar19 = puVar2;
            }
            *(undefined4 *)(param_1 + 0x232) = 0;
            if ((lVar18 != 0) && ((char *)*puVar19 != (char *)0x0)) {
              pcVar4 = (char *)*puVar19;
              if (*pcVar15 != '\0') {
                pcVar4 = pcVar15;
              }
              FUN_03be1268(&local_78,lVar18,pcVar4);
              *(undefined **)(param_1 + 0x1a8) = local_78;
              *(undefined4 *)(param_1 + 0x1b0) = (undefined4)local_70;
              if (((*(int *)(param_1 + 0x1d0) == 3) &&
                  (lVar18 = *(long *)(param_1 + 0x1a8), lVar18 != 0)) &&
                 (*(int *)(lVar18 + 0x20) == *(int *)(param_1 + 0x1b0))) {
                fVar21 = *(float *)(puVar19 + 1);
                *(ushort *)(lVar18 + 0x98) = *(ushort *)(lVar18 + 0x98) | 1;
                fVar22 = 0.0;
                if (0.0 <= fVar21) {
                  fVar22 = fVar21;
                }
                *(ushort *)(lVar18 + 0x9a) = *(ushort *)(lVar18 + 0x9a) | 1;
                *(float *)(lVar18 + 0x9c) = fVar22;
              }
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x239) = 1;
          }
        }
        if ((bVar1) && (*(char *)(param_1 + 0x239) == '\0')) {
          *(char *)(param_1 + 0x23d) = (char)(uVar20 + 1);
          if ((int)*(char *)(param_1 + 0x23b) <= (int)(uVar20 + 1)) goto LAB_02a0ba7c;
          *(undefined4 *)(param_1 + 0x1cc) = 2;
        }
      }
      else {
LAB_02a0ba7c:
        *(undefined1 *)(param_1 + 0x239) = 1;
      }
      iVar5 = *(short *)(param_1 + 0x236) + 1;
      *(short *)(param_1 + 0x236) = (short)iVar5;
      if ('\0' < *(char *)(param_1 + 0x23f)) {
        fVar22 = *(float *)(param_1 + 0x1d4);
        iVar14 = (int)*(char *)(param_1 + 0x23f);
        if (iVar14 - iVar5 != 0 && iVar5 <= iVar14) {
          fVar22 = fVar22 + ((1.0 - fVar22) * (float)(iVar14 - iVar5)) / (float)iVar14;
        }
        lVar18 = *(long *)(param_1 + 0x1a8);
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0x20) == *(int *)(param_1 + 0x1b0))) {
          fVar21 = 0.0;
          if (0.0 <= fVar22) {
            fVar21 = fVar22;
          }
          *(ushort *)(lVar18 + 0x98) = *(ushort *)(lVar18 + 0x98) | 1;
          *(float *)(lVar18 + 0x9c) = fVar21;
          *(ushort *)(lVar18 + 0x9a) = *(ushort *)(lVar18 + 0x9a) | 1;
        }
      }
      if (((*(char *)((long)param_2 + 0x19) != '\0') &&
          (lVar18 = *(long *)(param_1 + 0x1a8), lVar18 != 0)) &&
         (*(int *)(lVar18 + 0x20) == *(int *)(param_1 + 0x1b0))) {
        *(undefined4 *)(lVar18 + 0xb0) = 0;
        *(ushort *)(lVar18 + 0x98) = *(ushort *)(lVar18 + 0x98) | 0x20;
        *(ushort *)(lVar18 + 0x9a) = *(ushort *)(lVar18 + 0x9a) | 0x20;
      }
      if (*(char *)(param_1 + 0x239) != '\0') {
        if (((*(int *)(param_1 + 0x1d0) != 3) && (lVar18 = *(long *)(param_1 + 0x1a8), lVar18 != 0))
           && (*(int *)(lVar18 + 0x20) == *(int *)(param_1 + 0x1b0))) {
          cVar13 = *(char *)(param_1 + 0x23e);
          *(uint *)(lVar18 + 8) = *(uint *)(lVar18 + 8) | 0x10;
          if ((*(long *)(lVar18 + 0x28) != 0) && (*(long *)(lVar18 + 0x58) != 0)) {
            plVar11 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar18 + 0x28) + 0x30) +
                                                      0x18) + 0x20))();
            plVar11 = (long *)(**(code **)(*plVar11 + 0x38))();
            (**(code **)(*plVar11 + 0x10))();
            (**(code **)(**(long **)(lVar18 + 0x58) + 0x38))(*(long **)(lVar18 + 0x58),(int)cVar13);
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
        *(undefined4 *)(param_1 + 0x1cc) = 0;
      }
      goto LAB_02a0bbe4;
    }
    if (iVar5 != 0) goto LAB_02a0bbe4;
    bVar12 = *(byte *)(param_1 + 0x238);
    if ((bVar12 >> 1 & 1) != 0) {
      bVar3 = bVar12 & 0xfe;
      bVar12 = 0;
      *(undefined1 *)(param_1 + 0x239) = 1;
      *(byte *)(param_1 + 0x238) = bVar3;
    }
    if ((bVar12 & 1) == 0) goto LAB_02a0bbe4;
    *(undefined2 *)(param_1 + 0x230) = 0;
    *(undefined2 *)(param_1 + 0x236) = 0;
    *(undefined2 *)(param_1 + 0x23c) = 0;
    FUN_02a0ac90(param_1,param_1 + 0x1e8,*(undefined8 *)(param_1 + 0x220));
    *(undefined4 *)(param_1 + 0x1cc) = 1;
    lVar18 = *param_2;
    pcVar15 = (char *)param_2[2];
    puVar19 = (undefined8 *)(param_1 + 0x88) +
              ((long)(char)*(byte *)(param_1 + 0x23d) & 0xffffffffU) * 2;
    if (0xf < *(byte *)(param_1 + 0x23d)) {
      puVar19 = (undefined8 *)(param_1 + 0x88);
    }
  }
  *(undefined4 *)(param_1 + 0x232) = 0;
  if ((lVar18 != 0) && ((char *)*puVar19 != (char *)0x0)) {
    local_88 = 0;
    local_80 = 0;
    pcVar4 = (char *)*puVar19;
    if (*pcVar15 != '\0') {
      pcVar4 = pcVar15;
    }
    lVar9 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x30) + 0x18) + 0x20))();
    if ((*(char *)(lVar9 + 0x78) != '\0') &&
       (uVar10 = FUN_03bf46a8(lVar18,"searchAndEmit(%s)",pcVar4), (uVar10 & 1) != 0)) {
      local_68 = 0;
      local_78 = PTR_DAT_04bcadf8 + 0x10;
      local_70 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar18 + 0x30) + 0x18),pcVar4);
      if (local_70 != 0) {
        FUN_03bf47b0(lVar18,&local_78,&local_88);
      }
    }
    *(undefined8 *)(param_1 + 0x1a8) = local_88;
    *(undefined4 *)(param_1 + 0x1b0) = local_80;
    if (((*(int *)(param_1 + 0x1d0) == 3) && (lVar18 = *(long *)(param_1 + 0x1a8), lVar18 != 0)) &&
       (*(int *)(lVar18 + 0x20) == *(int *)(param_1 + 0x1b0))) {
      fVar21 = *(float *)(puVar19 + 1);
      *(ushort *)(lVar18 + 0x98) = *(ushort *)(lVar18 + 0x98) | 1;
      fVar22 = 0.0;
      if (0.0 <= fVar21) {
        fVar22 = fVar21;
      }
      *(ushort *)(lVar18 + 0x9a) = *(ushort *)(lVar18 + 0x9a) | 1;
      *(float *)(lVar18 + 0x9c) = fVar22;
    }
  }
LAB_02a0bbe4:
  *(undefined1 *)(param_1 + 0x238) = 0;
  return;
}

