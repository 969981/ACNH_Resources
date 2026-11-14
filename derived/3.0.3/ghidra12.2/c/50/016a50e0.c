
void FUN_016a50e0(long param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  ulong uVar13;
  
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
  puVar2 = PTR_DAT_04bbc448;
  uVar6 = *(uint *)(param_1 + 0x1c0);
  if ((0 < (int)uVar6) ||
     (((*(long *)(param_1 + 0xb0) != 0 &&
       (puVar4 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar4 != (uint *)0x0)) &&
      (uVar6 = *puVar4, 0 < (int)uVar6)))) {
    uVar13 = 0;
    do {
      if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
        if (((((*(long *)(param_1 + 0xb0) == 0) ||
              (puVar4 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar4 == (uint *)0x0)) ||
             ((uVar13 < *(uint *)(param_1 + 200) &&
              (*(char *)(*(long *)(param_1 + 0xd0) + uVar13) == '\0')))) ||
            ((*puVar4 <= uVar13 || (puVar4[1] == 0)))) || ((ushort)puVar4[2] == 0))
        goto LAB_016a52b0;
        iVar12 = 0xc;
        if (*(char *)((long)puVar4 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar4 = (uint *)((ulong)(puVar4[1] * (int)uVar13 + (uint)(ushort)puVar4[2] * 8 + iVar12) +
                         (long)puVar4);
        uVar1 = *puVar4;
      }
      else if (uVar13 < *(uint *)(param_1 + 0x1c0)) {
        uVar9 = uVar13 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
          uVar9 = 0;
        }
        puVar4 = *(uint **)(*(long *)(param_1 + 0x1b8) + uVar9 * 8);
        uVar1 = *puVar4;
      }
      else {
LAB_016a52b0:
        puVar4 = (uint *)0x0;
        uVar1 = uRam0000000000000000;
      }
      if (uVar1 != 0) {
        cVar5 = *puVar2;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined4 *)(puVar3 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar1 = *(uint *)(puVar3 + 0x1c);
            if (-1 < (int)uVar1) {
              if ((byte *)((ulong)uVar1 + (long)puVar4) != (byte *)0x0) {
                if (param_3 + 1U == (uint)*(byte *)((ulong)uVar1 + (long)puVar4)) goto LAB_016a51ec;
                goto LAB_016a51a0;
              }
              break;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar4;
          if ((*puVar4 == 0) || (puVar4 == puVar10)) break;
          lVar7 = 0xc;
          if (*(char *)((long)puVar4 + (10 - (long)puVar10)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar4 + (lVar7 - (long)puVar10);
          if (lVar7 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar10));
          *(undefined4 *)(puVar3 + 0x1c) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != -0x6ac1211a) {
            piVar11 = piVar11 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto joined_r0x016a538c;
          }
          iVar12 = 0;
          if (*piVar11 != -1) {
            iVar12 = *piVar11;
          }
          *(int *)(puVar3 + 0x1c) = iVar12;
          if (*puVar4 == 0) break;
        } while( true );
      }
joined_r0x016a538c:
      if (param_3 == -1) {
LAB_016a51ec:
        if (*param_2 < param_2[1]) {
          puVar8 = *(undefined8 **)(param_2 + 4);
          if (puVar8 != (undefined8 *)0x0) {
            *(undefined8 *)(param_2 + 4) = *puVar8;
          }
          FUN_016ce6a0(puVar8);
          if (*param_2 < param_2[1]) {
            *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar8;
            *param_2 = *param_2 + 1;
          }
        }
      }
LAB_016a51a0:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar6);
  }
  return;
}

