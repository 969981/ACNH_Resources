
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037bc50(long param_1,undefined8 param_2,undefined8 param_3,long param_4,float *param_5)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  void *__dest;
  char *pcVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  uint *puVar23;
  void *__src;
  char *pcVar24;
  float *pfVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 local_98 [2];
  undefined8 local_90;
  float local_84;
  float local_80;
  undefined4 uStack_7c;
  undefined5 uStack_78;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar12 = _UNK_04102888;
  uVar11 = _DAT_04102880;
  uVar10 = _UNK_04102208;
  uVar9 = _DAT_04102200;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  pcVar21 = (char *)(param_4 + 0x2c);
  pcVar20 = (char *)(param_4 + 0x38);
  pfVar26 = (float *)(param_4 + 0x44);
  pfVar25 = (float *)(param_4 + 0x4c);
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  *(undefined8 *)(param_1 + 0x88) = uVar12;
  *(undefined8 *)(param_1 + 0x80) = uVar11;
  uVar9 = _DAT_041023d0;
  pcVar24 = (char *)(param_4 + 10);
  pcVar22 = (char *)(param_4 + 0x24);
  *(undefined8 *)(param_1 + 0x98) = _UNK_041023d8;
  *(undefined8 *)(param_1 + 0x90) = uVar9;
  pcVar14 = *(char **)(param_5 + 0x12);
  if (pcVar14 != (char *)0x0) {
    uVar8 = *(ushort *)((long)param_5 + 0x42);
    if ((uVar8 & 8) != 0) {
      pcVar21 = pcVar14 + 8;
    }
    if ((uVar8 & 0x40) != 0) {
      pcVar20 = pcVar14 + 0x14;
    }
    if ((uVar8 & 0x20) != 0) {
      pfVar26 = (float *)(pcVar14 + 0x20);
    }
    if ((uVar8 & 0x10) != 0) {
      pfVar25 = (float *)(pcVar14 + 0x28);
    }
    if ((uVar8 & 0x80) != 0) {
      pcVar24 = pcVar14 + 0x30;
    }
    if ((uVar8 & 4) != 0) {
      pcVar22 = pcVar14;
    }
  }
  *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_4 + 9);
  pvVar13 = (void *)FUN_0037c2a0(param_1,param_4 + 0xc);
  if (*pcVar22 == '\0') {
    puVar15 = (undefined1 *)(param_1 + 0xc9);
  }
  else {
    *(char *)(param_1 + 0xc9) = *pcVar22;
    pcVar14 = pcVar22 + 1;
    if (*pcVar14 == '\0') {
      puVar15 = (undefined1 *)(param_1 + 0xca);
    }
    else {
      *(char *)(param_1 + 0xca) = *pcVar14;
      pcVar14 = pcVar22 + 2;
      if (*pcVar14 == '\0') {
        puVar15 = (undefined1 *)(param_1 + 0xcb);
      }
      else {
        *(char *)(param_1 + 0xcb) = *pcVar14;
        pcVar14 = pcVar22 + 3;
        if (*pcVar14 == '\0') {
          puVar15 = (undefined1 *)(param_1 + 0xcc);
        }
        else {
          *(char *)(param_1 + 0xcc) = *pcVar14;
          pcVar14 = pcVar22 + 4;
          if (*pcVar14 == '\0') {
            puVar15 = (undefined1 *)(param_1 + 0xcd);
          }
          else {
            *(char *)(param_1 + 0xcd) = *pcVar14;
            pcVar14 = pcVar22 + 5;
            if (*pcVar14 == '\0') {
              puVar15 = (undefined1 *)(param_1 + 0xce);
            }
            else {
              *(char *)(param_1 + 0xce) = *pcVar14;
              pcVar14 = pcVar22 + 6;
              if (*pcVar14 == '\0') {
                puVar15 = (undefined1 *)(param_1 + 0xcf);
              }
              else {
                *(char *)(param_1 + 0xcf) = *pcVar14;
                pcVar14 = pcVar22 + 7;
                if (*pcVar14 != '\0') {
                  puVar15 = (undefined1 *)(param_1 + 0xd1);
                  *(char *)(param_1 + 0xd0) = *pcVar14;
                  pcVar22 = pcVar22 + 8;
                  goto LAB_0037bdfc;
                }
                puVar15 = (undefined1 *)(param_1 + 0xd0);
              }
            }
          }
        }
      }
    }
    pcVar22 = pcVar14;
  }
LAB_0037bdfc:
  *puVar15 = 0;
  do {
    cVar6 = *pcVar22;
    pcVar22 = pcVar22 + 1;
  } while (cVar6 != '\0');
  bVar7 = *(byte *)(param_4 + 0xb);
  *(byte *)(param_1 + 0x5c) = bVar7;
  if (((bVar7 >> 2 & 1) == 0) || (__src = *(void **)(param_5 + 0x30), __src == (void *)0x0)) {
    *(byte *)(param_1 + 0x5c) = bVar7 & 0xfb;
    lVar16 = *(long *)(param_5 + 0x30);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(long *)(param_1 + 0xa8) = lVar16;
    if (lVar16 != 0) {
      if (*(char *)(lVar16 + 0x16) == '\x03') {
        lVar1 = lVar16 + 0xc;
        puVar23 = (uint *)(lVar16 + 0x10);
        lVar16 = lVar1 + (ulong)*puVar23;
        uVar17 = (ulong)*(ushort *)(lVar16 + 2);
        if (uVar17 != 0) {
          uVar18 = 0;
          piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar16 + 4) + *puVar23));
          do {
            uVar19 = (ulong)(*(int *)((long)puVar23 + uVar18 * 4 + (ulong)*puVar23) + *puVar23);
            *(uint *)(param_1 + 0x60) =
                 *(uint *)(param_1 + 0x60) | 1 << (ulong)(*(uint *)(lVar1 + uVar19) & 0x1f);
            if (*piVar2 == 0x15) {
              iVar5 = *(int *)(lVar1 + uVar19);
              iVar3 = iVar5 + -9;
              if (iVar5 < 0x10) {
                iVar3 = iVar5;
              }
              *(char *)((long)piVar2 + (long)iVar3 + 4) = (char)uVar18;
            }
            uVar18 = uVar18 + 1;
          } while (uVar17 != uVar18);
        }
      }
      goto LAB_0037bf78;
    }
  }
  else {
    __dest = (void *)FUN_00367b30(*(undefined4 *)((long)__src + 4));
    pvVar13 = memcpy(__dest,__src,(ulong)*(uint *)((long)__src + 4));
    *(void **)(param_1 + 0xa8) = __dest;
    if (__dest != (void *)0x0) {
      if (*(char *)((long)__dest + 0x16) == '\x03') {
        puVar23 = (uint *)((long)__dest + 0x10);
        uVar4 = *puVar23;
        uVar17 = (ulong)*(ushort *)((long)__dest + (ulong)uVar4 + 0xe);
        if (uVar17 != 0) {
          uVar18 = 0;
          piVar2 = (int *)((long)__dest +
                          (ulong)(*(int *)((long)__dest + (ulong)uVar4 + 0x10) + uVar4) + 0xc);
          do {
            uVar19 = (ulong)(*(int *)((long)puVar23 + uVar18 * 4 + (ulong)*puVar23) + *puVar23);
            *(uint *)(param_1 + 0x60) =
                 *(uint *)(param_1 + 0x60) |
                 1 << (ulong)(*(uint *)((long)__dest + uVar19 + 0xc) & 0x1f);
            if (*piVar2 == 0x15) {
              iVar5 = *(int *)((long)__dest + uVar19 + 0xc);
              iVar3 = iVar5 + -9;
              if (iVar5 < 0x10) {
                iVar3 = iVar5;
              }
              *(char *)((long)piVar2 + (long)iVar3 + 4) = (char)uVar18;
            }
            uVar18 = uVar18 + 1;
          } while (uVar17 != uVar18);
        }
      }
LAB_0037bf78:
      if ((*(long *)(param_1 + 0xa8) != 0) &&
         (*(char *)(*(long *)(param_1 + 0xa8) + 0x16) == '\x03')) {
        local_84 = 2.94273e-44;
        local_80 = -NAN;
        uStack_7c = 0xffffffff;
        uStack_78 = 0xffffffffff;
        pvVar13 = (void *)FUN_0037db40(param_1,0x15,&local_84,0x14,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)pcVar21;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(pcVar21 + 4);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(pcVar21 + 8);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)pcVar20;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(pcVar20 + 4);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(pcVar20 + 8);
  *(float *)(param_1 + 0x48) = *pfVar26;
  *(float *)(param_1 + 0x4c) = pfVar26[1];
  if ((*(long *)(param_5 + 0xe) == 0) ||
     (((*param_5 == 1.0 && (param_5[1] == 1.0)) || ((*(byte *)(param_4 + 0xb) & 1) != 0)))) {
    *(float *)(param_1 + 0x50) = *pfVar25;
    fVar27 = pfVar25[1];
LAB_0037c050:
    *(float *)(param_1 + 0x54) = fVar27;
  }
  else {
    if ((*(byte *)(param_4 + 0xb) >> 1 & 1) != 0) {
      fVar27 = 1.0;
      if ((*(byte *)(param_1 + 0x5b) & 3) != 0) {
        fVar27 = 0.5;
      }
      fVar30 = 1.0;
      if ((*(byte *)(param_1 + 0x5b) & 0xc) != 0) {
        fVar30 = 0.5;
      }
      FUN_0037c500(pvVar13,&local_84,*(undefined8 *)(param_5 + 0x26));
      fVar28 = param_5[3];
      fVar29 = param_5[1];
      *(float *)(param_1 + 0x50) =
           *pfVar25 + (fVar27 * (param_5[2] * *param_5 - param_5[2])) / (local_84 * *pfVar26);
      fVar27 = pfVar25[1] + (fVar30 * (fVar28 * fVar29 - fVar28)) / (local_80 * pfVar26[1]);
      goto LAB_0037c050;
    }
    *(float *)(param_1 + 0x50) = *param_5 * *pfVar25;
    *(float *)(param_1 + 0x54) = pfVar25[1] * param_5[1];
  }
  cVar6 = *pcVar24;
  *(char *)(param_1 + 0x59) = cVar6;
  *(char *)(param_1 + 0x5a) = cVar6;
  bVar7 = *(byte *)(param_4 + 8);
  *(byte *)(param_1 + 0x58) = bVar7;
  if ((*(long *)(param_5 + 0xe) != 0) && ((*(ushort *)((long)param_5 + 0x42) & 1) != 0)) {
    *(byte *)(param_1 + 0x58) = bVar7 & 0xfe | (byte)(*(ushort *)((long)param_5 + 0x42) >> 1) & 1;
  }
  FUN_0037c600(param_1,param_5);
  if (((*(uint *)(param_1 + 0x60) != 0) &&
      (lVar16 = *(long *)(param_1 + 0xa8) + 0xc, uVar4 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10)
      , piVar2 = (int *)(lVar16 + (ulong)(*(int *)((ulong)uVar4 + lVar16 + 4) + uVar4)),
      *piVar2 == 0x15)) && (-1 < *(char *)((long)piVar2 + 10))) {
    local_98[0] = 0x12;
    if ((*(uint *)(param_1 + 0x60) >> 0x15 & 1) == 0) {
      local_84 = 2.94273e-44;
      local_80 = -NAN;
      uStack_7c = 0xffffffff;
      uStack_78 = 0xffffffffff;
      FUN_0037db40(param_1,0x15,&local_84,0x14,1);
    }
    FUN_0037db40(param_1,0x12,local_98,0x14,0);
  }
  if (*(char *)(param_5 + 0x36) == '\0') goto LAB_0037c1b4;
  if (*(uint *)(param_1 + 0x60) == 0) {
LAB_0037c174:
    local_90 = 0;
    local_98[0] = 0x14;
    local_84 = 2.94273e-44;
    local_80 = -NAN;
    uStack_7c = 0xffffffff;
    uStack_78 = 0xffffffffff;
    FUN_0037db40(param_1,0x15,&local_84,0x14,1);
  }
  else {
    lVar16 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar4 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar16 + (ulong)(*(int *)((ulong)uVar4 + lVar16 + 4) + uVar4));
    if ((*piVar2 == 0x15) && (-1 < *(char *)((long)piVar2 + 0xf))) goto LAB_0037c1b4;
    local_90 = 0;
    local_98[0] = 0x14;
    if ((*(uint *)(param_1 + 0x60) >> 0x15 & 1) == 0) goto LAB_0037c174;
  }
  FUN_0037db40(param_1,0x14,local_98,0x10,0);
LAB_0037c1b4:
  FUN_0037c830(param_1,param_2,param_3,param_5);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  return;
}

