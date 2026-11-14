
void FUN_016a56b0(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  char *pcVar12;
  ulong uVar13;
  int iVar14;
  
  if (0 < *param_2) {
    lVar7 = 0;
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar7 * 8);
      if (*(char *)((long)puVar8 + 2) != '\0') {
        *(undefined1 *)((long)puVar8 + 2) = 0;
      }
      lVar7 = lVar7 + 1;
      *puVar8 = *(undefined8 *)(param_2 + 4);
      *(undefined8 **)(param_2 + 4) = puVar8;
    } while (lVar7 < *param_2);
  }
  *param_2 = 0;
  puVar3 = PTR_DAT_04bbc450;
  uVar6 = *(uint *)(param_1 + 0x1c0);
  if ((0 < (int)uVar6) ||
     (((*(long *)(param_1 + 0xb0) != 0 &&
       (puVar4 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar4 != (uint *)0x0)) &&
      (uVar6 = *puVar4, 0 < (int)uVar6)))) {
    uVar13 = 0;
    pcVar12 = PTR_DAT_04bbc448;
    do {
      if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
        if (((((*(long *)(param_1 + 0xb0) == 0) ||
              (puVar4 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar4 == (uint *)0x0)) ||
             ((uVar13 < *(uint *)(param_1 + 200) &&
              (*(char *)(*(long *)(param_1 + 0xd0) + uVar13) == '\0')))) ||
            ((*puVar4 <= uVar13 || (puVar4[1] == 0)))) || ((ushort)puVar4[2] == 0))
        goto LAB_016a5830;
        iVar14 = 0xc;
        if (*(char *)((long)puVar4 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar4 = (uint *)((ulong)(puVar4[1] * (int)uVar13 + (uint)(ushort)puVar4[2] * 8 + iVar14) +
                         (long)puVar4);
        uVar2 = *puVar4;
      }
      else if (uVar13 < *(uint *)(param_1 + 0x1c0)) {
        uVar10 = uVar13 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
          uVar10 = 0;
        }
        puVar4 = *(uint **)(*(long *)(param_1 + 0x1b8) + uVar10 * 8);
        uVar2 = *puVar4;
      }
      else {
LAB_016a5830:
        puVar4 = (uint *)0x0;
        uVar2 = uRam0000000000000000;
      }
      if (uVar2 != 0) {
        cVar5 = *pcVar12;
        do {
          if (cVar5 != '\0') {
            uVar2 = *(uint *)(puVar3 + 0x20);
            if ((int)uVar2 < 0) {
              if (uVar2 == 0xffffffff) goto LAB_016a5874;
            }
            else if (((char *)((ulong)uVar2 + (long)puVar4) != (char *)0x0) &&
                    (*(char *)((ulong)uVar2 + (long)puVar4) != '\0')) goto LAB_016a5994;
LAB_016a5900:
            uVar2 = *puVar4;
            if (uVar2 != 0) {
              uVar10 = (ulong)*(uint *)(puVar3 + 0x1c);
              goto LAB_016a590c;
            }
            break;
          }
          cVar5 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *pcVar12 = '\x01';
          *(undefined4 *)(puVar3 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
LAB_016a5874:
          lVar7 = (long)puVar4 - (ulong)*puVar4;
          if ((*puVar4 == 0) || (lVar7 == 0)) goto LAB_016a5900;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_016a5900;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
          if (uVar10 == 0) goto LAB_016a5900;
          piVar11 = (int *)(lVar1 + lVar7 + 4);
          while (piVar11[-1] != -0xadf9240) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_016a5900;
          }
          iVar14 = 0;
          if (*piVar11 != -1) {
            iVar14 = *piVar11;
          }
          *(int *)(puVar3 + 0x20) = iVar14;
        } while (*puVar4 != 0);
      }
LAB_016a5774:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar6);
  }
  return;
LAB_016a590c:
  if (-1 < (int)uVar10) {
    if (((byte *)(uVar10 + (long)puVar4) != (byte *)0x0) &&
       (*(byte *)(uVar10 + (long)puVar4) - 1 < 8)) {
LAB_016a5994:
      if (*param_2 < param_2[1]) {
        puVar8 = *(undefined8 **)(param_2 + 4);
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar8;
        }
        FUN_016ce6a0();
        pcVar12 = PTR_DAT_04bbc448;
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar8;
          *param_2 = *param_2 + 1;
        }
      }
    }
    goto LAB_016a5774;
  }
  if ((uVar10 != 0xffffffff) || (lVar7 = (long)puVar4 - (ulong)uVar2, lVar7 == 0))
  goto LAB_016a5774;
  lVar1 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar7 == 0) goto LAB_016a5774;
  uVar10 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar3 + 0x1c) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_016a5774;
  puVar9 = (uint *)(lVar1 + lVar7 + 4);
  while (puVar9[-1] != 0x953edee6) {
    puVar9 = puVar9 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_016a5774;
  }
  uVar10 = 0;
  if (*puVar9 != 0xffffffff) {
    uVar10 = (ulong)*puVar9;
  }
  *(int *)(puVar3 + 0x1c) = (int)uVar10;
  uVar2 = *puVar4;
  if (uVar2 == 0) goto LAB_016a5774;
  goto LAB_016a590c;
}

