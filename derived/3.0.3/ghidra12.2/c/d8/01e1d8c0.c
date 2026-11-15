
/* WARNING: Type propagation algorithm not settling */

uint FUN_01e1d8c0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  int *piVar15;
  char *pcVar16;
  
  puVar7 = PTR_DAT_04bc1540;
  puVar6 = PTR_DAT_04bc1538;
  if (*(char *)(param_1 + 0x99) == '\0') {
    return 0;
  }
  puVar10 = *(uint **)(param_1 + 0x58);
  if (puVar10 == (uint *)0x0) {
LAB_01e1dc74:
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar10;
    if (uVar9 != 0) {
      cVar14 = *PTR_DAT_04bc1538;
      do {
        if (cVar14 == '\0') {
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          cVar14 = '\x01';
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar9 = *puVar10;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0x1c);
          if (-1 < (int)uVar3) {
            if (((byte *)((ulong)uVar3 + (long)puVar10) != (byte *)0x0) &&
               (bVar4 = *(byte *)((ulong)uVar3 + (long)puVar10),
               9 < bVar4 || (1 << (ulong)(bVar4 & 0x1f) & 0x211U) == 0)) goto LAB_01e1dc74;
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar9;
        if ((puVar5 == (uint *)0x0) || (puVar10 == puVar5)) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar10 + (lVar2 - (long)puVar5);
        if (lVar2 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar15 = (int *)(lVar2 + 4);
        while (piVar15[-1] != 0x5b7ca0b2) {
          piVar15 = piVar15 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_01e1d9e8;
        }
        iVar1 = 0;
        if (*piVar15 != -1) {
          iVar1 = *piVar15;
        }
        *(int *)(puVar7 + 0x1c) = iVar1;
        uVar9 = *puVar10;
        if (uVar9 == 0) break;
      } while( true );
    }
LAB_01e1d9e8:
    puVar7 = PTR_DAT_04bc1540;
    puVar6 = PTR_DAT_04bc1538;
    if (**(char **)(param_1 + 0x68) == '\0') {
      uVar9 = *puVar10;
      if (uVar9 != 0) {
        cVar14 = *PTR_DAT_04bc1538;
        do {
          if (cVar14 == '\0') {
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            cVar14 = '\x01';
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            uVar9 = *puVar10;
          }
          else {
            uVar3 = *(uint *)(puVar7 + 0x10);
            if (-1 < (int)uVar3) {
              pcVar16 = (char *)((ulong)uVar3 + (long)puVar10);
              goto LAB_01e1dae8;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar9;
          pcVar16 = (char *)0x0;
          if ((puVar5 == (uint *)0x0) || (pcVar16 = (char *)0x0, puVar10 == puVar5))
          goto LAB_01e1dae8;
          lVar2 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar10 + (lVar2 - (long)puVar5);
          pcVar16 = (char *)0x0;
          if (lVar2 == 0) goto LAB_01e1dae8;
          uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
          *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar15 = (int *)(lVar2 + 4);
          while (piVar15[-1] != 0x34c8eed5) {
            piVar15 = piVar15 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_01e1dae4;
          }
          iVar1 = 0;
          if (*piVar15 != -1) {
            iVar1 = *piVar15;
          }
          *(int *)(puVar7 + 0x10) = iVar1;
          uVar9 = *puVar10;
          if (uVar9 == 0) break;
        } while( true );
      }
LAB_01e1dae4:
      pcVar16 = (char *)0x0;
LAB_01e1dae8:
      pcVar11 = PTR_DAT_04c48688;
      if (pcVar16 != (char *)0x0) {
        pcVar11 = pcVar16;
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x60) + 0x18))((long *)(param_1 + 0x60));
      pcVar11 = *(char **)(param_1 + 0x68);
    }
    if (pcVar11 != "squ19") {
      uVar13 = 0;
      bVar8 = true;
      do {
        if (pcVar11[uVar13] != (&DAT_040bfaf3)[uVar13]) break;
        if (pcVar11[uVar13] == '\0') {
          if ((bool)(pcVar11 == "squ20" | bVar8)) goto LAB_01e1dc94;
          goto LAB_01e1db74;
        }
        bVar8 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      if (pcVar11 != "squ20") {
LAB_01e1db74:
        uVar13 = 0;
        bVar8 = true;
        do {
          if (pcVar11[uVar13] != (&DAT_040f40e9)[uVar13]) break;
          if (pcVar11[uVar13] == '\0') {
            if ((bool)(pcVar11 == "brd20" | bVar8)) goto LAB_01e1dc94;
            goto LAB_01e1dbd8;
          }
          bVar8 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        if (pcVar11 != "brd20") {
LAB_01e1dbd8:
          uVar13 = 0;
          bVar8 = true;
          do {
            if (pcVar11[uVar13] != (&DAT_0407ca93)[uVar13]) break;
            if (pcVar11[uVar13] == '\0') {
              if (!(bool)(pcVar11 == "der12" | bVar8)) goto LAB_01e1dc28;
              goto LAB_01e1dc94;
            }
            bVar8 = uVar13 < 0x80000;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x80001);
          if (pcVar11 != "der12") {
LAB_01e1dc28:
            if (*pcVar11 == 'd') {
              uVar13 = 0;
              do {
                uVar12 = uVar13;
                uVar13 = uVar12;
                if (uVar12 == 0x80000) goto LAB_01e1dca8;
                if (pcVar11[uVar12 + 1] != (&DAT_040cfb84)[uVar12]) {
                  uVar13 = 0;
                  goto LAB_01e1dca8;
                }
                uVar13 = uVar12 + 1;
              } while (pcVar11[uVar12 + 1] != '\0');
              uVar13 = 1;
LAB_01e1dca8:
              return (uint)(uVar12 < 0x80000) & (uint)uVar13;
            }
            goto LAB_01e1dc74;
          }
        }
      }
    }
LAB_01e1dc94:
    uVar9 = 1;
  }
  return uVar9;
}

