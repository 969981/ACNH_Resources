
void FUN_0214ca00(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  char *pcVar14;
  uint *puVar15;
  int *piVar16;
  long local_58;
  char *local_50;
  
  *param_1 = 0;
  puVar6 = PTR_DAT_04bc2638;
  puVar5 = PTR_DAT_04bc2630;
  if (*param_2 != 0) {
    cVar12 = *PTR_DAT_04bc2630;
    uVar11 = 5;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0x20);
        if (-1 < (int)uVar13) {
          if ((undefined1 *)((ulong)uVar13 + (long)param_2) == (undefined1 *)0x0) break;
          uVar11 = *(undefined1 *)((ulong)uVar13 + (long)param_2);
          goto LAB_0214cb10;
        }
        if (uVar13 != 0xffffffff) goto LAB_0214cb10;
      }
      lVar3 = (long)param_2 - (ulong)*param_2;
      if ((*param_2 == 0) || (lVar3 == 0)) goto LAB_0214cb10;
      lVar2 = 0xc;
      if (*(char *)(lVar3 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar3 == 0) goto LAB_0214cb10;
      uVar10 = (ulong)*(ushort *)(lVar3 + 8);
      *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
      if (uVar10 == 0) goto LAB_0214cb10;
      piVar16 = (int *)(lVar2 + lVar3 + 4);
      while (piVar16[-1] != -0x751b799f) {
        piVar16 = piVar16 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0214cb10;
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar6 + 0x20) = iVar1;
      if (*param_2 == 0) goto LAB_0214cb10;
    } while( true );
  }
  uVar11 = 5;
LAB_0214cb10:
  *(undefined1 *)param_1 = uVar11;
  if (*param_2 == 0) {
LAB_0214cbec:
    uVar11 = 0;
  }
  else {
    cVar12 = *puVar5;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0x24);
        if (-1 < (int)uVar13) {
          if ((undefined1 *)((ulong)uVar13 + (long)param_2) == (undefined1 *)0x0) goto LAB_0214cbec;
          uVar11 = *(undefined1 *)((ulong)uVar13 + (long)param_2);
          goto LAB_0214cbf0;
        }
        if (uVar13 != 0xffffffff) goto LAB_0214cbec;
      }
      puVar15 = (uint *)(ulong)*param_2;
      uVar11 = 0;
      if ((*param_2 == 0) || (param_2 == puVar15)) goto LAB_0214cbf0;
      lVar3 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar15)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_2 + (lVar3 - (long)puVar15);
      if (lVar3 == 0) goto LAB_0214cbec;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar15));
      *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
      uVar11 = 0;
      if (uVar10 == 0) goto LAB_0214cbf0;
      piVar16 = (int *)(lVar3 + 4);
      while (piVar16[-1] != 0x3835a9dd) {
        piVar16 = piVar16 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar11 = 0;
          goto LAB_0214cbf0;
        }
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar6 + 0x24) = iVar1;
    } while (*param_2 != 0);
    uVar11 = 0;
  }
LAB_0214cbf0:
  *(undefined1 *)((long)param_1 + 1) = uVar11;
  if (*param_2 != 0) {
    cVar12 = *puVar5;
    uVar11 = 0x1d;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0x10);
        if (-1 < (int)uVar13) {
          if ((undefined1 *)((ulong)uVar13 + (long)param_2) == (undefined1 *)0x0) break;
          uVar11 = *(undefined1 *)((ulong)uVar13 + (long)param_2);
          goto LAB_0214ccd0;
        }
        if (uVar13 != 0xffffffff) goto LAB_0214ccd0;
      }
      lVar3 = (long)param_2 - (ulong)*param_2;
      if ((*param_2 == 0) || (lVar3 == 0)) goto LAB_0214ccd0;
      lVar2 = 0xc;
      if (*(char *)(lVar3 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar3 == 0) goto LAB_0214ccd0;
      uVar10 = (ulong)*(ushort *)(lVar3 + 8);
      *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
      if (uVar10 == 0) goto LAB_0214ccd0;
      piVar16 = (int *)(lVar2 + lVar3 + 4);
      while (piVar16[-1] != 0x675ca211) {
        piVar16 = piVar16 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0214ccd0;
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar6 + 0x10) = iVar1;
      if (*param_2 == 0) goto LAB_0214ccd0;
    } while( true );
  }
  uVar11 = 0x1d;
LAB_0214ccd0:
  *(undefined1 *)((long)param_1 + 2) = uVar11;
  if (*param_2 == 0) {
LAB_0214cdac:
    uVar11 = 0;
  }
  else {
    cVar12 = *puVar5;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0x14);
        if (-1 < (int)uVar13) {
          if ((undefined1 *)((ulong)uVar13 + (long)param_2) == (undefined1 *)0x0) goto LAB_0214cdac;
          uVar11 = *(undefined1 *)((ulong)uVar13 + (long)param_2);
          goto LAB_0214cdb0;
        }
        if (uVar13 != 0xffffffff) goto LAB_0214cdac;
      }
      puVar15 = (uint *)(ulong)*param_2;
      uVar11 = 0;
      if ((*param_2 == 0) || (param_2 == puVar15)) goto LAB_0214cdb0;
      lVar3 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar15)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_2 + (lVar3 - (long)puVar15);
      if (lVar3 == 0) goto LAB_0214cdac;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar15));
      *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
      uVar11 = 0;
      if (uVar10 == 0) goto LAB_0214cdb0;
      piVar16 = (int *)(lVar3 + 4);
      while (piVar16[-1] != 0x2b09d942) {
        piVar16 = piVar16 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar11 = 0;
          goto LAB_0214cdb0;
        }
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar6 + 0x14) = iVar1;
    } while (*param_2 != 0);
    uVar11 = 0;
  }
LAB_0214cdb0:
  *(undefined1 *)((long)param_1 + 3) = uVar11;
  if (*param_2 == 0) {
LAB_0214ce94:
    uVar13 = 0;
  }
  else {
    cVar12 = *puVar5;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 8);
        if (-1 < (int)uVar13) {
          if (((byte *)((ulong)uVar13 + (long)param_2) == (byte *)0x0) ||
             (bVar8 = *(byte *)((ulong)uVar13 + (long)param_2), uVar13 = (uint)bVar8, 0x22 < bVar8))
          goto LAB_0214ce94;
          goto LAB_0214ce98;
        }
        if (uVar13 != 0xffffffff) goto LAB_0214ce94;
      }
      puVar15 = (uint *)(ulong)*param_2;
      uVar13 = 0;
      if ((*param_2 == 0) || (param_2 == puVar15)) goto LAB_0214ce98;
      lVar3 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar15)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_2 + (lVar3 - (long)puVar15);
      if (lVar3 == 0) goto LAB_0214ce94;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar15));
      *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
      uVar13 = 0;
      if (uVar10 == 0) goto LAB_0214ce98;
      piVar16 = (int *)(lVar3 + 4);
      while (piVar16[-1] != 0x69a9bb3c) {
        piVar16 = piVar16 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar13 = 0;
          goto LAB_0214ce98;
        }
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar6 + 8) = iVar1;
    } while (*param_2 != 0);
    uVar13 = 0;
  }
LAB_0214ce98:
  *(uint *)((long)param_1 + 4) = uVar13;
  if (*param_2 == 0) {
LAB_0214cf84:
    bVar7 = false;
  }
  else {
    cVar12 = *puVar5;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0x1c);
        if (-1 < (int)uVar13) {
          if ((char *)((ulong)uVar13 + (long)param_2) == (char *)0x0) goto LAB_0214cf84;
          bVar7 = *(char *)((ulong)uVar13 + (long)param_2) != '\0';
          goto LAB_0214cf88;
        }
        if (uVar13 != 0xffffffff) goto LAB_0214cf84;
      }
      puVar15 = (uint *)(ulong)*param_2;
      bVar7 = false;
      if ((*param_2 == 0) || (param_2 == puVar15)) goto LAB_0214cf88;
      lVar3 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar15)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_2 + (lVar3 - (long)puVar15);
      if (lVar3 == 0) goto LAB_0214cf84;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar15));
      *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
      bVar7 = false;
      if (uVar10 == 0) goto LAB_0214cf88;
      piVar16 = (int *)(lVar3 + 4);
      while (piVar16[-1] != -0x5872f33b) {
        piVar16 = piVar16 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          bVar7 = false;
          goto LAB_0214cf88;
        }
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar6 + 0x1c) = iVar1;
    } while (*param_2 != 0);
    bVar7 = false;
  }
LAB_0214cf88:
  *(bool *)(param_1 + 1) = bVar7;
  if (*param_2 == 0) {
LAB_0214d074:
    bVar7 = false;
  }
  else {
    cVar12 = *puVar5;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0xc);
        if (-1 < (int)uVar13) {
          if ((char *)((ulong)uVar13 + (long)param_2) == (char *)0x0) goto LAB_0214d074;
          bVar7 = *(char *)((ulong)uVar13 + (long)param_2) != '\0';
          goto LAB_0214d078;
        }
        if (uVar13 != 0xffffffff) goto LAB_0214d074;
      }
      puVar15 = (uint *)(ulong)*param_2;
      bVar7 = false;
      if ((*param_2 == 0) || (param_2 == puVar15)) goto LAB_0214d078;
      lVar3 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar15)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_2 + (lVar3 - (long)puVar15);
      if (lVar3 == 0) goto LAB_0214d074;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar15));
      *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
      bVar7 = false;
      if (uVar10 == 0) goto LAB_0214d078;
      piVar16 = (int *)(lVar3 + 4);
      while (piVar16[-1] != -0x2af820c2) {
        piVar16 = piVar16 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          bVar7 = false;
          goto LAB_0214d078;
        }
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar6 + 0xc) = iVar1;
    } while (*param_2 != 0);
    bVar7 = false;
  }
LAB_0214d078:
  *(bool *)((long)param_1 + 9) = bVar7;
  if (*param_2 != 0) {
    cVar12 = *puVar5;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar6 + 0x18);
        if (-1 < (int)uVar13) {
          pcVar14 = (char *)((ulong)uVar13 + (long)param_2);
          goto LAB_0214d14c;
        }
        if (uVar13 != 0xffffffff) break;
      }
      puVar15 = (uint *)(ulong)*param_2;
      pcVar14 = (char *)0x0;
      if ((*param_2 == 0) || (param_2 == puVar15)) goto LAB_0214d14c;
      lVar3 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar15)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_2 + (lVar3 - (long)puVar15);
      if (lVar3 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar15));
      *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
      pcVar14 = (char *)0x0;
      if (uVar10 == 0) goto LAB_0214d14c;
      piVar16 = (int *)(lVar3 + 4);
      while (piVar16[-1] != 0x7d740fa4) {
        piVar16 = piVar16 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          pcVar14 = (char *)0x0;
          goto LAB_0214d14c;
        }
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar6 + 0x18) = iVar1;
    } while (*param_2 != 0);
  }
  pcVar14 = (char *)0x0;
LAB_0214d14c:
  pcVar4 = "NotEvent";
  if (pcVar14 != (char *)0x0) {
    pcVar4 = pcVar14;
  }
  FUN_006d8678(&local_58,pcVar4);
  (**(code **)(local_58 + 0x18))(&local_58);
  (**(code **)(local_58 + 0x18))(&local_58);
  if (local_50 == "NotEvent") {
    bVar8 = 0;
  }
  else if (*local_50 == 'N') {
    uVar10 = 0;
    do {
      uVar9 = uVar10;
      uVar10 = uVar9;
      if (uVar9 == 0x80000) goto LAB_0214d1e8;
      if (local_50[uVar9 + 1] != "NotEvent"[uVar9 + 1]) {
        uVar10 = 0;
        goto LAB_0214d1e8;
      }
      uVar10 = uVar9 + 1;
    } while (local_50[uVar9 + 1] != '\0');
    uVar10 = 1;
LAB_0214d1e8:
    bVar8 = (uVar9 & 0xfffffffffff80000) != 0 | (byte)uVar10 ^ 1;
  }
  else {
    bVar8 = 1;
  }
  *(byte *)((long)param_1 + 10) = bVar8 & 1;
  return;
}

