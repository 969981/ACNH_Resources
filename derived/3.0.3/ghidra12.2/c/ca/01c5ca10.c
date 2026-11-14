
void FUN_01c5ca10(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  ushort uVar9;
  undefined2 uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  char cVar14;
  short sVar15;
  int *piVar16;
  uint *puVar17;
  undefined *local_40;
  uint *local_38;
  byte local_18 [4];
  undefined2 local_14 [2];
  
  local_14[0] = 0;
  uVar9 = FUN_01c5d250(param_1,local_14);
  *(ushort *)(param_1 + 10) = uVar9;
  local_40 = PTR_DAT_04bc0e38 + 0x10;
  if ((uint)uVar9 - (uint)DAT_0534e320 < DAT_0534e300) {
    puVar17 = *(uint **)(DAT_0534e308 + (long)(int)((uint)uVar9 - (uint)DAT_0534e320) * 8);
  }
  else {
    puVar17 = (uint *)0x0;
  }
  local_38 = puVar17;
  uVar11 = FUN_01c558a0(&local_40);
  uVar10 = FUN_01c5e2dc(uVar11,uVar11 & 0xffffffff,local_14);
  *(undefined2 *)(param_1 + 8) = uVar10;
  sVar8 = DAT_0534f190;
  puVar7 = PTR_DAT_04bc0e48;
  puVar6 = PTR_DAT_04bc0e40;
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_01c5caf8:
    if (*pbVar12 < 8) goto LAB_01c5cb70;
LAB_01c5cb04:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01c5cb68:
      pbVar12 = PTR_DAT_04bb5038;
      goto LAB_01c5cb70;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar13 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar5 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar5 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar5 & 8) != 0) {
        pbVar12 = (byte *)(lVar13 + 0x471);
      }
    }
    local_18[0] = *pbVar12;
    if (7 < local_18[0]) goto LAB_01c5cb68;
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01c5caf8;
      }
      goto LAB_01c5cb04;
    }
LAB_01c5cb70:
    local_18[0] = *pbVar12;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
  }
  if (DAT_0534f190 != -1) {
    if ((puVar17 != (uint *)0x0) && (uVar2 = *puVar17, uVar2 != 0)) {
      cVar14 = *PTR_DAT_04bc0e40;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          uVar2 = *puVar17;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar3) {
            if ((short *)((ulong)uVar3 + (long)puVar17) == (short *)0x0) break;
            sVar15 = *(short *)((ulong)uVar3 + (long)puVar17);
            goto LAB_01c5cc90;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar2;
        sVar15 = 0;
        if ((puVar5 == (uint *)0x0) || (sVar15 = 0, puVar17 == puVar5)) goto LAB_01c5cc90;
        lVar13 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar5)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar17 + (lVar13 - (long)puVar5);
        sVar15 = 0;
        if (lVar13 == 0) goto LAB_01c5cc90;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar16 = (int *)(lVar13 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01c5cc8c;
        }
        sVar15 = 0;
        iVar1 = 0;
        if (*piVar16 != -1) {
          iVar1 = *piVar16;
        }
        *(int *)(puVar7 + 0xc) = iVar1;
        uVar2 = *puVar17;
        if (uVar2 == 0) goto LAB_01c5cc90;
      } while( true );
    }
LAB_01c5cc8c:
    sVar15 = 0;
LAB_01c5cc90:
    if (sVar8 == sVar15) {
      FUN_0274bfe8(local_18,&DAT_0534f180,0);
    }
    else {
      FUN_0274ca70(local_18,&DAT_0534f180,1);
    }
  }
  sVar8 = DAT_0534f1a8;
  puVar7 = PTR_DAT_04bc0e48;
  puVar6 = PTR_DAT_04bc0e40;
  if (DAT_0534f1a8 != -1) {
    if ((puVar17 != (uint *)0x0) && (uVar2 = *puVar17, uVar2 != 0)) {
      cVar14 = *PTR_DAT_04bc0e40;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          uVar2 = *puVar17;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar3) {
            if ((short *)((ulong)uVar3 + (long)puVar17) == (short *)0x0) break;
            sVar15 = *(short *)((ulong)uVar3 + (long)puVar17);
            goto LAB_01c5cdc0;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar2;
        sVar15 = 0;
        if ((puVar5 == (uint *)0x0) || (sVar15 = 0, puVar17 == puVar5)) goto LAB_01c5cdc0;
        lVar13 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar5)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar17 + (lVar13 - (long)puVar5);
        sVar15 = 0;
        if (lVar13 == 0) goto LAB_01c5cdc0;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar16 = (int *)(lVar13 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01c5cdbc;
        }
        sVar15 = 0;
        iVar1 = 0;
        if (*piVar16 != -1) {
          iVar1 = *piVar16;
        }
        *(int *)(puVar7 + 0xc) = iVar1;
        uVar2 = *puVar17;
        if (uVar2 == 0) goto LAB_01c5cdc0;
      } while( true );
    }
LAB_01c5cdbc:
    sVar15 = 0;
LAB_01c5cdc0:
    if (sVar8 == sVar15) {
      FUN_0274bfe8(local_18,&DAT_0534f198,0);
    }
    else {
      FUN_0274ca70(local_18,&DAT_0534f198,1);
    }
  }
  sVar8 = DAT_0534f1c0;
  puVar7 = PTR_DAT_04bc0e48;
  puVar6 = PTR_DAT_04bc0e40;
  if (DAT_0534f1c0 != -1) {
    if ((puVar17 != (uint *)0x0) && (uVar2 = *puVar17, uVar2 != 0)) {
      cVar14 = *PTR_DAT_04bc0e40;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          uVar2 = *puVar17;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar3) {
            if ((short *)((ulong)uVar3 + (long)puVar17) == (short *)0x0) break;
            sVar15 = *(short *)((ulong)uVar3 + (long)puVar17);
            goto LAB_01c5cef0;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar2;
        sVar15 = 0;
        if ((puVar5 == (uint *)0x0) || (sVar15 = 0, puVar17 == puVar5)) goto LAB_01c5cef0;
        lVar13 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar5)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar17 + (lVar13 - (long)puVar5);
        sVar15 = 0;
        if (lVar13 == 0) goto LAB_01c5cef0;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar16 = (int *)(lVar13 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01c5ceec;
        }
        sVar15 = 0;
        iVar1 = 0;
        if (*piVar16 != -1) {
          iVar1 = *piVar16;
        }
        *(int *)(puVar7 + 0xc) = iVar1;
        uVar2 = *puVar17;
        if (uVar2 == 0) goto LAB_01c5cef0;
      } while( true );
    }
LAB_01c5ceec:
    sVar15 = 0;
LAB_01c5cef0:
    if (sVar8 == sVar15) {
      FUN_0274bfe8(local_18,&DAT_0534f1b0,0);
    }
    else {
      FUN_0274ca70(local_18,&DAT_0534f1b0,1);
    }
  }
  sVar8 = DAT_0534f1d8;
  puVar7 = PTR_DAT_04bc0e48;
  puVar6 = PTR_DAT_04bc0e40;
  if (DAT_0534f1d8 != -1) {
    if ((puVar17 != (uint *)0x0) && (uVar2 = *puVar17, uVar2 != 0)) {
      cVar14 = *PTR_DAT_04bc0e40;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          uVar2 = *puVar17;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar3) {
            if ((short *)((ulong)uVar3 + (long)puVar17) == (short *)0x0) break;
            sVar15 = *(short *)((ulong)uVar3 + (long)puVar17);
            goto LAB_01c5d020;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar2;
        sVar15 = 0;
        if ((puVar5 == (uint *)0x0) || (sVar15 = 0, puVar17 == puVar5)) goto LAB_01c5d020;
        lVar13 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar5)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar17 + (lVar13 - (long)puVar5);
        sVar15 = 0;
        if (lVar13 == 0) goto LAB_01c5d020;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar16 = (int *)(lVar13 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01c5d01c;
        }
        sVar15 = 0;
        iVar1 = 0;
        if (*piVar16 != -1) {
          iVar1 = *piVar16;
        }
        *(int *)(puVar7 + 0xc) = iVar1;
        uVar2 = *puVar17;
        if (uVar2 == 0) goto LAB_01c5d020;
      } while( true );
    }
LAB_01c5d01c:
    sVar15 = 0;
LAB_01c5d020:
    if (sVar8 == sVar15) {
      FUN_0274bfe8(local_18,&DAT_0534f1c8,0);
    }
    else {
      FUN_0274ca70(local_18,&DAT_0534f1c8,1);
    }
  }
  sVar8 = DAT_0534f1f0;
  puVar7 = PTR_DAT_04bc0e48;
  puVar6 = PTR_DAT_04bc0e40;
  if (DAT_0534f1f0 == -1) {
LAB_01c5d16c:
  }
  else {
    if ((puVar17 != (uint *)0x0) && (uVar2 = *puVar17, uVar2 != 0)) {
      cVar14 = *PTR_DAT_04bc0e40;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          uVar2 = *puVar17;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar3) {
            if ((short *)((ulong)uVar3 + (long)puVar17) == (short *)0x0) break;
            sVar15 = *(short *)((ulong)uVar3 + (long)puVar17);
            goto LAB_01c5d150;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar2;
        sVar15 = 0;
        if ((puVar5 == (uint *)0x0) || (sVar15 = 0, puVar17 == puVar5)) goto LAB_01c5d150;
        lVar13 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar5)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar17 + (lVar13 - (long)puVar5);
        sVar15 = 0;
        if (lVar13 == 0) goto LAB_01c5d150;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar16 = (int *)(lVar13 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01c5d14c;
        }
        sVar15 = 0;
        iVar1 = 0;
        if (*piVar16 != -1) {
          iVar1 = *piVar16;
        }
        *(int *)(puVar7 + 0xc) = iVar1;
        uVar2 = *puVar17;
        if (uVar2 == 0) goto LAB_01c5d150;
      } while( true );
    }
LAB_01c5d14c:
    sVar15 = 0;
LAB_01c5d150:
    if (sVar8 == sVar15) {
      FUN_0274bfe8(local_18,&DAT_0534f1e0,0);
      goto LAB_01c5d16c;
    }
    FUN_0274ca70(local_18,&DAT_0534f1e0,1);
  }
  if ((char)local_14[0] == '\0') {
    if (puVar17 != (uint *)0x0) {
      puVar5 = (uint *)((long)puVar17 - (ulong)*puVar17);
      if ((((*puVar17 != 0) && (puVar5 != (uint *)0x0)) && (*puVar5 != 0)) &&
         ((uVar2 = puVar5[1], uVar2 != 0 && ((ulong)(ushort)puVar5[2] != 0)))) {
        lVar13 = 0xc;
        if (*(char *)((long)puVar5 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar5 + lVar13 + (ulong)(ushort)puVar5[2] * 8;
        if (lVar13 != 0) {
          uVar3 = 0;
          if ((ulong)uVar2 != 0) {
            uVar3 = (uint)((ulong)((long)puVar17 - lVar13) / (ulong)uVar2);
          }
          if (*puVar5 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc0e50) &&
             (*(short *)(*(long *)((long)PTR_DAT_04bc0e50 + 8) + (long)(int)uVar3 * 2) == 1))
          goto LAB_01c5d174;
        }
      }
    }
    FUN_0274ca70(local_18,&DAT_0534f1e0,1);
  }
  else {
LAB_01c5d174:
    FUN_0274bfe8(local_18,&DAT_0534f1e0,0);
  }
  return;
}

