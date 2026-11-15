
void FUN_01fe2dd0(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  short local_58 [5];
  undefined2 local_4e;
  undefined4 local_4c;
  short local_48 [4];
  
  puVar4 = PTR_DAT_04bc23c8;
  puVar3 = PTR_DAT_04bc23c0;
  if ((*(int *)(param_1 + 0x124bc) < 0) && (lVar8 = *(long *)PTR_DAT_04bb4960, lVar8 != 0)) {
    uVar5 = *param_2;
    if ((int)*(uint *)(lVar8 + 0x5c0) < 1) {
      if (*(long *)(lVar8 + 0x4b0) == 0) {
        return;
      }
      puVar12 = *(uint **)(*(long *)(lVar8 + 0x4b0) + 8);
      if (puVar12 == (uint *)0x0) {
        return;
      }
      if ((uVar5 < *(uint *)(lVar8 + 0x4c8)) &&
         (*(char *)(*(long *)(lVar8 + 0x4d0) + (long)(int)uVar5) == '\0')) {
        return;
      }
      if (*puVar12 <= uVar5) {
        return;
      }
      if (puVar12[1] == 0) {
        return;
      }
      if ((ushort)puVar12[2] == 0) {
        return;
      }
      iVar6 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar12 = (uint *)((ulong)(puVar12[1] * uVar5 + (uint)(ushort)puVar12[2] * 8 + iVar6) +
                        (long)puVar12);
    }
    else {
      if (*(uint *)(lVar8 + 0x5c0) <= uVar5) {
        return;
      }
      if (*(uint *)(lVar8 + 0x5b0) <= uVar5) {
        uVar5 = 0;
      }
      puVar12 = *(uint **)(*(long *)(lVar8 + 0x5b8) + (ulong)uVar5 * 8);
    }
    if (puVar12 != (uint *)0x0) {
      if (*puVar12 != 0) {
        cVar7 = *PTR_DAT_04bc23c0;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar4 + 0x10);
            if (-1 < (int)uVar5) {
              if ((short *)((ulong)uVar5 + (long)puVar12) != (short *)0x0) {
                local_48[0] = *(short *)((ulong)uVar5 + (long)puVar12);
                goto LAB_01fe2fb0;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar12;
          local_48[0] = -2;
          if ((*puVar12 == 0) || (puVar12 == puVar10)) goto LAB_01fe2fb0;
          lVar8 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar12 + (lVar8 - (long)puVar10);
          if (lVar8 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar11 = (int *)(lVar8 + 4);
          while (piVar11[-1] != 0x2ca34410) {
            piVar11 = piVar11 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_01fe2fac;
          }
          iVar6 = 0;
          if (*piVar11 != -1) {
            iVar6 = *piVar11;
          }
          *(int *)(puVar4 + 0x10) = iVar6;
          if (*puVar12 == 0) break;
        } while( true );
      }
LAB_01fe2fac:
      local_48[0] = -2;
LAB_01fe2fb0:
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      FUN_0277d4ac(local_48);
      if (*puVar12 != 0) {
        cVar7 = *puVar3;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar4 + 0x14);
            if (-1 < (int)uVar5) {
              if ((short *)((ulong)uVar5 + (long)puVar12) != (short *)0x0) {
                local_58[4] = *(short *)((ulong)uVar5 + (long)puVar12);
                goto LAB_01fe309c;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar12;
          local_58[4] = -2;
          if ((*puVar12 == 0) || (puVar12 == puVar10)) goto LAB_01fe309c;
          lVar8 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar12 + (lVar8 - (long)puVar10);
          if (lVar8 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar11 = (int *)(lVar8 + 4);
          while (piVar11[-1] != -0x21fdbe63) {
            piVar11 = piVar11 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_01fe3098;
          }
          iVar6 = 0;
          if (*piVar11 != -1) {
            iVar6 = *piVar11;
          }
          *(int *)(puVar4 + 0x14) = iVar6;
          if (*puVar12 == 0) break;
        } while( true );
      }
LAB_01fe3098:
      local_58[4] = -2;
LAB_01fe309c:
      local_4e = 0;
      local_4c = 0;
      FUN_0277d4ac(local_58 + 4);
      if (*puVar12 != 0) {
        cVar7 = *puVar3;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar4 + 0x18);
            if (-1 < (int)uVar5) {
              if ((short *)((ulong)uVar5 + (long)puVar12) != (short *)0x0) {
                local_58[0] = *(short *)((ulong)uVar5 + (long)puVar12);
                goto LAB_01fe318c;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar12;
          local_58[0] = -2;
          if ((*puVar12 == 0) || (puVar12 == puVar10)) goto LAB_01fe318c;
          lVar8 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar12 + (lVar8 - (long)puVar10);
          if (lVar8 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar11 = (int *)(lVar8 + 4);
          while (piVar11[-1] != -0x1c9d97d3) {
            piVar11 = piVar11 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_01fe3188;
          }
          iVar6 = 0;
          if (*piVar11 != -1) {
            iVar6 = *piVar11;
          }
          *(int *)(puVar4 + 0x18) = iVar6;
          if (*puVar12 == 0) break;
        } while( true );
      }
LAB_01fe3188:
      local_58[0] = -2;
LAB_01fe318c:
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      FUN_0277d4ac(local_58);
      if (local_48[0] != -2) {
        lVar8 = *(long *)(param_1 + 8);
        iVar6 = 0;
        uVar5 = *(uint *)(lVar8 + 0x288);
        *(undefined4 *)(lVar8 + 0x288) = *(undefined4 *)(lVar8 + 0x28c);
        uVar5 = uVar5 ^ uVar5 << 0xb;
        *(undefined4 *)(lVar8 + 0x28c) = *(undefined4 *)(lVar8 + 0x290);
        uVar1 = *(uint *)(lVar8 + 0x294);
        *(uint *)(lVar8 + 0x290) = uVar1;
        *(uint *)(lVar8 + 0x294) = uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1;
      }
      else {
        iVar6 = -1;
      }
      uVar5 = (uint)(local_48[0] != -2);
      if (local_58[4] != -2) {
        lVar8 = *(long *)(param_1 + 8);
        uVar5 = uVar5 + 1;
        uVar1 = *(uint *)(lVar8 + 0x288);
        *(undefined4 *)(lVar8 + 0x288) = *(undefined4 *)(lVar8 + 0x28c);
        uVar1 = uVar1 ^ uVar1 << 0xb;
        *(undefined4 *)(lVar8 + 0x28c) = *(undefined4 *)(lVar8 + 0x290);
        uVar2 = *(uint *)(lVar8 + 0x294);
        *(uint *)(lVar8 + 0x290) = uVar2;
        uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
        *(uint *)(lVar8 + 0x294) = uVar1;
        if (((ulong)uVar1 * (ulong)uVar5 & 0xffffffff00000000) == 0) {
          iVar6 = 1;
        }
      }
      if (local_58[0] != -2) {
        lVar8 = *(long *)(param_1 + 8);
        uVar1 = *(uint *)(lVar8 + 0x288);
        *(undefined4 *)(lVar8 + 0x288) = *(undefined4 *)(lVar8 + 0x28c);
        uVar1 = uVar1 ^ uVar1 << 0xb;
        *(undefined4 *)(lVar8 + 0x28c) = *(undefined4 *)(lVar8 + 0x290);
        uVar2 = *(uint *)(lVar8 + 0x294);
        *(uint *)(lVar8 + 0x290) = uVar2;
        uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
        *(uint *)(lVar8 + 0x294) = uVar1;
        if (((ulong)uVar1 * (ulong)(uVar5 + 1) & 0xffffffff00000000) == 0) {
          iVar6 = 2;
        }
      }
      *(int *)(param_1 + 0x124bc) = iVar6;
    }
  }
  return;
}

