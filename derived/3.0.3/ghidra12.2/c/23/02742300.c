
void FUN_02742300(ushort *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint *puVar9;
  long lVar10;
  ushort *puVar11;
  char cVar12;
  ushort uVar13;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  int *piVar17;
  uint local_64;
  uint local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  lVar10 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_64 = FUN_006bd550(param_2[1],0);
  puVar9 = (uint *)FUN_027457e0(lVar10 + 0xca0,&local_64);
  puVar7 = PTR_DAT_04bb63a8;
  puVar6 = PTR_DAT_04bb63a0;
  if (puVar9 == (uint *)0x0) {
    return;
  }
  puVar11 = param_1;
  if (*puVar9 != 0) {
    cVar12 = *PTR_DAT_04bb63a0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        uVar14 = *puVar9;
      }
      else {
        uVar14 = *(uint *)(puVar7 + 8);
        if (-1 < (int)uVar14) {
          if (((ushort *)((ulong)uVar14 + (long)puVar9) != (ushort *)0x0) &&
             (uVar5 = *(ushort *)((ulong)uVar14 + (long)puVar9), uVar5 < 0x80)) {
            puVar11 = param_1 + uVar5;
          }
          break;
        }
        if (uVar14 != 0xffffffff) break;
        uVar14 = *puVar9;
      }
      if ((uVar14 == 0) || (puVar16 = (uint *)(ulong)uVar14, puVar9 == puVar16)) break;
      lVar10 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar9 + (lVar10 - (long)puVar16);
      if (lVar10 == 0) break;
      uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
      *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
      if (uVar15 == 0) break;
      piVar17 = (int *)(lVar10 + 4);
      while (piVar17[-1] != 0x54706054) {
        piVar17 = piVar17 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_0274244c;
      }
      iVar2 = 0;
      if (*piVar17 != -1) {
        iVar2 = *piVar17;
      }
      *(int *)(puVar7 + 8) = iVar2;
      if (*puVar9 == 0) break;
    } while( true );
  }
LAB_0274244c:
  uVar5 = *puVar11;
  if (*puVar9 == 0) {
LAB_02742554:
    uVar14 = 0;
  }
  else {
    cVar12 = *puVar6;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar14 = *(uint *)(puVar7 + 4);
        if (-1 < (int)uVar14) {
          if ((ushort *)((ulong)uVar14 + (long)puVar9) == (ushort *)0x0) goto LAB_02742554;
          uVar14 = (uint)*(ushort *)((ulong)uVar14 + (long)puVar9);
          goto LAB_02742558;
        }
        if (uVar14 != 0xffffffff) goto LAB_02742554;
      }
      puVar16 = (uint *)(ulong)*puVar9;
      uVar14 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_02742558;
      lVar10 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar9 + (lVar10 - (long)puVar16);
      if (lVar10 == 0) goto LAB_02742554;
      uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
      *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
      uVar14 = 0;
      if (uVar15 == 0) goto LAB_02742558;
      piVar17 = (int *)(lVar10 + 4);
      while (piVar17[-1] != 0x110b14c) {
        piVar17 = piVar17 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) {
          uVar14 = 0;
          goto LAB_02742558;
        }
      }
      iVar2 = 0;
      if (*piVar17 != -1) {
        iVar2 = *piVar17;
      }
      *(int *)(puVar7 + 4) = iVar2;
    } while (*puVar9 != 0);
    uVar14 = 0;
  }
LAB_02742558:
  uVar1 = param_3;
  if ((int)uVar14 <= (int)param_3) {
    uVar1 = uVar14;
  }
  local_60 = 0;
  if (-1 < (int)param_3) {
    local_60 = uVar1;
  }
  if (local_60 != uVar5) {
    if (*puVar9 != 0) {
      cVar12 = *puVar6;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar14 = *puVar9;
        }
        else {
          uVar14 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar14) {
            if ((ushort *)((ulong)uVar14 + (long)puVar9) != (ushort *)0x0) {
              uVar5 = *(ushort *)((ulong)uVar14 + (long)puVar9);
              uVar14 = local_60;
              if (0xfffe < local_60) {
                uVar14 = 0xffff;
              }
              uVar13 = (ushort)uVar14;
              if (uVar5 < 0x80) {
                param_1 = param_1 + uVar5;
              }
              goto LAB_02742664;
            }
            break;
          }
          if (uVar14 != 0xffffffff) break;
          uVar14 = *puVar9;
        }
        if ((uVar14 == 0) || (puVar16 = (uint *)(ulong)uVar14, puVar9 == puVar16)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar16);
        if (lVar10 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar17 = (int *)(lVar10 + 4);
        while (piVar17[-1] != 0x54706054) {
          piVar17 = piVar17 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02742658;
        }
        iVar2 = 0;
        if (*piVar17 != -1) {
          iVar2 = *piVar17;
        }
        *(int *)(puVar7 + 8) = iVar2;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_02742658:
    uVar14 = local_60;
    if (0xfffe < local_60) {
      uVar14 = 0xffff;
    }
    uVar13 = (ushort)uVar14;
LAB_02742664:
    *param_1 = uVar13;
    if (*puVar9 == 0) {
LAB_02742740:
      local_64 = 0;
    }
    else {
      cVar12 = *puVar6;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar14 = *(uint *)(puVar7 + 0x1c);
          if (-1 < (int)uVar14) {
            if (((byte *)((ulong)uVar14 + (long)puVar9) == (byte *)0x0) ||
               (bVar4 = *(byte *)((ulong)uVar14 + (long)puVar9), local_64 = (uint)bVar4, 6 < bVar4))
            goto LAB_02742740;
            goto LAB_02742744;
          }
          if (uVar14 != 0xffffffff) goto LAB_02742740;
        }
        puVar16 = (uint *)(ulong)*puVar9;
        local_64 = 0;
        if ((*puVar9 == 0) || (puVar9 == puVar16)) goto LAB_02742744;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar16);
        if (lVar10 == 0) goto LAB_02742740;
        uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
        *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
        local_64 = 0;
        if (uVar15 == 0) goto LAB_02742744;
        piVar17 = (int *)(lVar10 + 4);
        while (piVar17[-1] != 0x4f7333fd) {
          piVar17 = piVar17 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            local_64 = 0;
            goto LAB_02742744;
          }
        }
        iVar2 = 0;
        if (*piVar17 != -1) {
          iVar2 = *piVar17;
        }
        *(int *)(puVar7 + 0x1c) = iVar2;
      } while (*puVar9 != 0);
      local_64 = 0;
    }
LAB_02742744:
    if (local_64 != 2) {
      (**(code **)(*param_2 + 0x18))(param_2);
      local_64 = FUN_006bd550(param_2[1],0);
      local_58 = 0;
      local_5c = 9;
      local_52 = 0;
      local_54 = 0xff00;
      if (-1 < *(int *)(PTR_DAT_04bb6328 + 8)) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bb6328 + 8),&local_58,
                     &local_64,0xc,0);
      }
    }
    if (*puVar9 != 0) {
      cVar12 = *puVar6;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar14 = *puVar9;
        }
        else {
          if (*(int *)(puVar7 + 0x1c) != -1) goto LAB_02742888;
          uVar14 = *puVar9;
        }
        if ((uVar14 == 0) || (puVar16 = (uint *)(ulong)uVar14, puVar9 == puVar16)) {
LAB_02742888:
          uVar14 = *puVar9;
          if (uVar14 == 0) {
            return;
          }
          bVar8 = *(int *)(puVar7 + 8) == -1;
          do {
            if (!bVar8) {
              return;
            }
            lVar10 = (long)puVar9 - (ulong)uVar14;
            if (lVar10 == 0) {
              return;
            }
            lVar3 = 0xc;
            if (*(char *)(lVar10 + 10) != '\0') {
              lVar3 = 0x1c;
            }
            if (lVar3 + lVar10 == 0) {
              return;
            }
            uVar15 = (ulong)*(ushort *)(lVar10 + 8);
            *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
            if (uVar15 == 0) {
              return;
            }
            piVar17 = (int *)(lVar3 + lVar10 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                return;
              }
            }
            bVar8 = false;
            iVar2 = 0;
            if (*piVar17 != -1) {
              iVar2 = *piVar17;
            }
            *(int *)(puVar7 + 8) = iVar2;
            uVar14 = *puVar9;
          } while (uVar14 != 0);
          return;
        }
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar16);
        if (lVar10 == 0) goto LAB_02742888;
        uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
        *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
        if (uVar15 == 0) goto LAB_02742888;
        piVar17 = (int *)(lVar10 + 4);
        while (piVar17[-1] != 0x4f7333fd) {
          piVar17 = piVar17 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02742888;
        }
        iVar2 = 0;
        if (*piVar17 != -1) {
          iVar2 = *piVar17;
        }
        *(int *)(puVar7 + 0x1c) = iVar2;
      } while (*puVar9 != 0);
    }
  }
  return;
}

