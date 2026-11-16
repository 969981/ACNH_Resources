
void FUN_02629630(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  byte bVar13;
  char cVar14;
  uint uVar15;
  ulong uVar16;
  void *pvVar17;
  int *piVar18;
  ulong uVar19;
  uint *puVar20;
  undefined *local_f0;
  char *pcStack_e8;
  undefined4 local_e0;
  char local_dc [8];
  char local_d4 [4];
  undefined1 local_d0;
  undefined1 local_5d;
  undefined4 local_58;
  
  local_5d = 0;
  local_d0 = 0;
  local_e0 = 0x80;
  pcStack_e8 = local_dc;
  local_dc = (char  [8])s_invalid_name_040e8f53._0_8_;
  local_f0 = PTR_DAT_04bb2d88 + 0x10;
  local_d4 = (char  [4])s_invalid_name_040e8f53._8_4_;
  plVar1 = (long *)(param_1 + 0xea4e8);
  local_58 = FUN_006bd550("invalid_name",0);
  uVar10 = FUN_03853d00(plVar1,&local_f0);
  if (((uVar10 & 1) != 0) &&
     (uVar10 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_f0,param_2), (uVar10 & 1) != 0)) {
    memset((void *)(param_1 + 0xe98e0),0,0x300);
    lVar8 = DAT_05557778;
    uVar7 = DAT_05557770;
    uVar11 = *(uint *)(param_1 + 0xea6a8);
    if ((0 < (int)uVar11) ||
       (((*(long *)(param_1 + 0xea598) != 0 &&
         (puVar12 = *(uint **)(*(long *)(param_1 + 0xea598) + 8), puVar12 != (uint *)0x0)) &&
        (uVar11 = *puVar12, 0 < (int)uVar11)))) {
      uVar10 = 0;
      lVar2 = param_1 + 0xe9ae0;
LAB_0262978c:
      if ((int)*(uint *)(param_1 + 0xea6a8) < 1) {
        puVar12 = (uint *)0x0;
        if ((*(long *)(param_1 + 0xea598) != 0) &&
           (puVar12 = *(uint **)(*(long *)(param_1 + 0xea598) + 8), puVar12 != (uint *)0x0)) {
          if (((uVar10 < *(uint *)(param_1 + 0xea5b0)) &&
              (*(char *)(*(long *)(param_1 + 0xea5b8) + uVar10) == '\0')) ||
             (((*puVar12 <= uVar10 || (puVar12[1] == 0)) || ((ushort)puVar12[2] == 0))))
          goto LAB_02629824;
          iVar9 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar12 = (uint *)((ulong)(puVar12[1] * (int)uVar10 + (uint)(ushort)puVar12[2] * 8 + iVar9
                                    ) + (long)puVar12);
        }
      }
      else if (uVar10 < *(uint *)(param_1 + 0xea6a8)) {
        uVar16 = uVar10 & 0xffffffff;
        if (*(uint *)(param_1 + 0xea698) <= uVar10) {
          uVar16 = 0;
        }
        puVar12 = *(uint **)(*(long *)(param_1 + 0xea6a0) + uVar16 * 8);
      }
      else {
LAB_02629824:
        puVar12 = (uint *)0x0;
      }
      uVar15 = *puVar12;
      puVar20 = (uint *)((long)puVar12 - (ulong)uVar15);
      if ((uVar15 == 0) || (puVar20 == (uint *)0x0)) {
        if (uVar15 != 0) goto LAB_02629944;
LAB_02629a30:
        if (*puVar12 != 0) {
          cVar14 = DAT_055576f0;
          do {
            if (cVar14 != '\0') {
              if (DAT_0555774c < 0) {
                if (DAT_0555774c._4_4_ == 0xffffffff) goto LAB_02629a78;
              }
              else if ((ushort *)((ulong)DAT_0555774c._4_4_ + (long)puVar12) != (ushort *)0x0) {
                uVar16 = (ulong)*(ushort *)((ulong)DAT_0555774c._4_4_ + (long)puVar12);
                goto LAB_02629b00;
              }
LAB_02629b10:
              uVar16 = 0x4c7b;
              uVar15 = *puVar12;
              if (uVar15 == 0) goto LAB_02629bd0;
LAB_02629b1c:
              uVar19 = DAT_05557754 & 0xffffffff;
              goto LAB_02629b20;
            }
            cVar14 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = 0xffffffffffffffff;
            DAT_05557714 = 0xffffffffffffffff;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = -1;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
LAB_02629a78:
            lVar3 = (long)puVar12 - (ulong)*puVar12;
            if (*puVar12 == 0) goto LAB_02629b10;
            uVar16 = 0x4c7b;
            if (lVar3 == 0) {
LAB_02629b00:
              uVar15 = *puVar12;
              if (uVar15 != 0) goto LAB_02629b1c;
              goto LAB_02629bd0;
            }
            lVar4 = 0xc;
            if (*(char *)(lVar3 + 10) != '\0') {
              lVar4 = 0x1c;
            }
            if (lVar4 + lVar3 == 0) goto LAB_02629b10;
            uVar16 = (ulong)*(ushort *)(lVar3 + 8);
            DAT_0555774c = CONCAT44(0xfffffffe,(undefined4)DAT_0555774c);
            if (uVar16 == 0) goto LAB_02629b10;
            piVar18 = (int *)(lVar4 + lVar3 + 4);
            while (piVar18[-1] != 0x54706054) {
              piVar18 = piVar18 + 2;
              uVar16 = uVar16 - 1;
              if (uVar16 == 0) goto LAB_02629b10;
            }
            iVar9 = 0;
            if (*piVar18 != -1) {
              iVar9 = *piVar18;
            }
            DAT_0555774c = CONCAT44(iVar9,(undefined4)DAT_0555774c);
          } while (*puVar12 != 0);
        }
      }
      else {
        if (((*puVar20 != 0) && (uVar15 = puVar20[1], uVar15 != 0)) &&
           ((ulong)(ushort)puVar20[2] != 0)) {
          lVar3 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar20 + lVar3 + (ulong)(ushort)puVar20[2] * 8;
          if (lVar3 != 0) {
            uVar5 = 0;
            if ((ulong)uVar15 != 0) {
              uVar5 = (uint)((ulong)((long)puVar12 - lVar3) / (ulong)uVar15);
            }
            if (*puVar20 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 < uVar7) && (*(short *)(lVar8 + (long)(int)uVar5 * 2) == 1)) {
              cVar14 = DAT_055576f0;
              do {
                if (cVar14 == '\0') {
                  cVar14 = '\x01';
                  DAT_055576f4 = 0xffffffffffffffff;
                  DAT_055576fc = 0xffffffffffffffff;
                  DAT_055576f0 = '\x01';
                  DAT_05557704 = 0xffffffffffffffff;
                  DAT_0555770c = 0xffffffffffffffff;
                  DAT_05557714 = 0xffffffffffffffff;
                  DAT_0555771c = 0xffffffffffffffff;
                  DAT_05557724 = 0xffffffffffffffff;
                  DAT_0555772c = 0xffffffffffffffff;
                  DAT_05557734 = 0xffffffffffffffff;
                  DAT_0555773c = 0xffffffffffffffff;
                  DAT_05557744 = 0xffffffffffffffff;
                  DAT_0555774c = -1;
                  DAT_05557754 = 0xffffffffffffffff;
                  DAT_0555775c = 0xffffffffffffffff;
                }
                else {
                  if (-1 < DAT_0555774c) {
                    if (((ushort *)((ulong)DAT_0555774c._4_4_ + (long)puVar12) == (ushort *)0x0) ||
                       (uVar6 = *(ushort *)((ulong)DAT_0555774c._4_4_ + (long)puVar12),
                       pvVar17 = (void *)(param_1 + 0xe99e0), 0x7ff < uVar6)) goto LAB_02629a30;
                    goto LAB_02629a14;
                  }
                  if (DAT_0555774c._4_4_ != 0xffffffff) goto LAB_02629a30;
                }
                lVar3 = (long)puVar12 - (ulong)*puVar12;
                if ((*puVar12 == 0) || (lVar3 == 0)) goto LAB_02629a30;
                lVar4 = 0xc;
                if (*(char *)(lVar3 + 10) != '\0') {
                  lVar4 = 0x1c;
                }
                if (lVar4 + lVar3 == 0) goto LAB_02629a30;
                uVar16 = (ulong)*(ushort *)(lVar3 + 8);
                DAT_0555774c = CONCAT44(0xfffffffe,(undefined4)DAT_0555774c);
                if (uVar16 == 0) goto LAB_02629a30;
                piVar18 = (int *)(lVar4 + lVar3 + 4);
                while (piVar18[-1] != 0x54706054) {
                  piVar18 = piVar18 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_02629a30;
                }
                iVar9 = 0;
                if (*piVar18 != -1) {
                  iVar9 = *piVar18;
                }
                DAT_0555774c = CONCAT44(iVar9,(undefined4)DAT_0555774c);
              } while (*puVar12 != 0);
              goto LAB_02629780;
            }
          }
        }
LAB_02629944:
        cVar14 = DAT_055576f0;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = 0xffffffffffffffff;
            DAT_05557714 = 0xffffffffffffffff;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = -1;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
          }
          else {
            if (-1 < DAT_0555774c) {
              if (((ushort *)((ulong)DAT_0555774c._4_4_ + (long)puVar12) != (ushort *)0x0) &&
                 (uVar6 = *(ushort *)((ulong)DAT_0555774c._4_4_ + (long)puVar12),
                 pvVar17 = (void *)(param_1 + 0xe98e0), uVar6 < 0x800)) {
LAB_02629a14:
                *(byte *)((long)pvVar17 + (ulong)(uVar6 >> 3)) =
                     *(byte *)((long)pvVar17 + (ulong)(uVar6 >> 3)) |
                     (byte)(1 << (ulong)(uVar6 & 7));
              }
              goto LAB_02629a30;
            }
            if (DAT_0555774c._4_4_ != 0xffffffff) goto LAB_02629a30;
          }
          lVar3 = (long)puVar12 - (ulong)*puVar12;
          if ((*puVar12 == 0) || (lVar3 == 0)) goto LAB_02629a30;
          lVar4 = 0xc;
          if (*(char *)(lVar3 + 10) != '\0') {
            lVar4 = 0x1c;
          }
          if (lVar4 + lVar3 == 0) goto LAB_02629a30;
          uVar16 = (ulong)*(ushort *)(lVar3 + 8);
          DAT_0555774c = CONCAT44(0xfffffffe,(undefined4)DAT_0555774c);
          if (uVar16 == 0) goto LAB_02629a30;
          piVar18 = (int *)(lVar4 + lVar3 + 4);
          while (piVar18[-1] != 0x54706054) {
            piVar18 = piVar18 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_02629a30;
          }
          iVar9 = 0;
          if (*piVar18 != -1) {
            iVar9 = *piVar18;
          }
          DAT_0555774c = CONCAT44(iVar9,(undefined4)DAT_0555774c);
        } while (*puVar12 != 0);
      }
      goto LAB_02629780;
    }
  }
  return;
LAB_02629b20:
  if ((int)uVar19 < 0) {
    if ((uVar19 != 0xffffffff) || (lVar3 = (long)puVar12 - (ulong)uVar15, lVar3 == 0))
    goto LAB_02629bd0;
    lVar4 = 0xc;
    if (*(char *)(lVar3 + 10) != '\0') {
      lVar4 = 0x1c;
    }
    if (lVar4 + lVar3 == 0) goto LAB_02629bd0;
    uVar19 = (ulong)*(ushort *)(lVar3 + 8);
    DAT_05557754 = CONCAT44(DAT_05557754._4_4_,0xfffffffe);
    if (uVar19 == 0) goto LAB_02629bd0;
    puVar20 = (uint *)(lVar4 + lVar3 + 4);
    while (puVar20[-1] != 0x3ccca419) {
      puVar20 = puVar20 + 2;
      uVar19 = uVar19 - 1;
      if (uVar19 == 0) goto LAB_02629bd0;
    }
    uVar19 = 0;
    if (*puVar20 != 0xffffffff) {
      uVar19 = (ulong)*puVar20;
    }
    DAT_05557754 = CONCAT44(DAT_05557754._4_4_,(int)uVar19);
    uVar15 = *puVar12;
    if (uVar15 == 0) goto LAB_02629bd0;
    goto LAB_02629b20;
  }
  if ((char *)(uVar19 + (long)puVar12) != (char *)0x0) {
    uVar15 = (uint)uVar16;
    if (*(char *)(uVar19 + (long)puVar12) == '\0') goto joined_r0x02629be0;
    if (0x7ff < uVar15) goto LAB_02629780;
    uVar19 = uVar16 >> 3;
    bVar13 = *(byte *)(lVar2 + uVar19) | (byte)(1 << (ulong)(uVar15 & 7));
    goto LAB_0262977c;
  }
LAB_02629bd0:
  uVar15 = (uint)uVar16;
joined_r0x02629be0:
  if (uVar15 < 0x800) {
    uVar19 = uVar16 >> 3;
    bVar13 = *(byte *)(lVar2 + uVar19) & ((byte)(1 << (ulong)((uint)uVar16 & 7)) ^ 0xff);
LAB_0262977c:
    *(byte *)(lVar2 + uVar19) = bVar13;
  }
LAB_02629780:
  uVar10 = uVar10 + 1;
  if (uVar10 == uVar11) {
    return;
  }
  goto LAB_0262978c;
}

