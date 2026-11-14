
void FUN_016a53d0(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  int iVar13;
  
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
    uVar12 = 0;
    pcVar11 = PTR_DAT_04bbc448;
    do {
      if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
        if (((((*(long *)(param_1 + 0xb0) == 0) ||
              (puVar4 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar4 == (uint *)0x0)) ||
             ((uVar12 < *(uint *)(param_1 + 200) &&
              (*(char *)(*(long *)(param_1 + 0xd0) + uVar12) == '\0')))) ||
            ((*puVar4 <= uVar12 || (puVar4[1] == 0)))) || ((ushort)puVar4[2] == 0))
        goto LAB_016a5540;
        iVar13 = 0xc;
        if (*(char *)((long)puVar4 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar4 = (uint *)((ulong)(puVar4[1] * (int)uVar12 + (uint)(ushort)puVar4[2] * 8 + iVar13) +
                         (long)puVar4);
        uVar2 = *puVar4;
      }
      else if (uVar12 < *(uint *)(param_1 + 0x1c0)) {
        uVar9 = uVar12 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1b0) <= uVar12) {
          uVar9 = 0;
        }
        puVar4 = *(uint **)(*(long *)(param_1 + 0x1b8) + uVar9 * 8);
        uVar2 = *puVar4;
      }
      else {
LAB_016a5540:
        puVar4 = (uint *)0x0;
        uVar2 = uRam0000000000000000;
      }
      if (uVar2 != 0) {
        cVar5 = *pcVar11;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *pcVar11 = '\x01';
            *(undefined4 *)(puVar3 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar2 = *(uint *)(puVar3 + 0x1c);
            if (-1 < (int)uVar2) {
              if ((((byte *)((ulong)uVar2 + (long)puVar4) != (byte *)0x0) &&
                  (*(byte *)((ulong)uVar2 + (long)puVar4) - 1 < 8)) && (*param_2 < param_2[1])) {
                puVar8 = *(undefined8 **)(param_2 + 4);
                if (puVar8 != (undefined8 *)0x0) {
                  *(undefined8 *)(param_2 + 4) = *puVar8;
                }
                FUN_016ce6a0();
                pcVar11 = PTR_DAT_04bbc448;
                if (*param_2 < param_2[1]) {
                  *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar8;
                  *param_2 = *param_2 + 1;
                }
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          lVar7 = (long)puVar4 - (ulong)*puVar4;
          if ((*puVar4 == 0) || (lVar7 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) break;
          uVar9 = (ulong)*(ushort *)(lVar7 + 8);
          *(undefined4 *)(puVar3 + 0x1c) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar10 = (int *)(lVar1 + lVar7 + 4);
          while (piVar10[-1] != -0x6ac1211a) {
            piVar10 = piVar10 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_016a5490;
          }
          iVar13 = 0;
          if (*piVar10 != -1) {
            iVar13 = *piVar10;
          }
          *(int *)(puVar3 + 0x1c) = iVar13;
          if (*puVar4 == 0) break;
        } while( true );
      }
LAB_016a5490:
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar6);
  }
  return;
}

