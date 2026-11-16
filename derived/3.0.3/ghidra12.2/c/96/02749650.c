
void FUN_02749650(ushort *param_1,undefined1 param_2,long *param_3,uint param_4,ulong param_5)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  ushort *puVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  undefined1 local_70 [2];
  undefined2 local_6e;
  undefined2 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  puVar3 = PTR_DAT_04bb2208;
  lVar11 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_68 = FUN_006bd550(param_3[1],0);
  puVar6 = (uint *)FUN_0135e7e0(lVar11 + 0x440,&local_68);
  puVar5 = PTR_DAT_04bb6370;
  puVar4 = PTR_DAT_04bb6368;
  if (puVar6 == (uint *)0x0) {
    return;
  }
  puVar7 = param_1;
  if (*puVar6 != 0) {
    cVar8 = *PTR_DAT_04bb6368;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
        uVar15 = *puVar6;
      }
      else {
        uVar15 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar15) {
          if (((ushort *)((ulong)uVar15 + (long)puVar6) != (ushort *)0x0) &&
             (uVar2 = *(ushort *)((ulong)uVar15 + (long)puVar6), uVar2 < 0x100)) {
            puVar7 = param_1 + uVar2;
          }
          break;
        }
        if (uVar15 != 0xffffffff) break;
        uVar15 = *puVar6;
      }
      if ((uVar15 == 0) || (puVar12 = (uint *)(ulong)uVar15, puVar6 == puVar12)) break;
      lVar11 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar6 + (lVar11 - (long)puVar12);
      if (lVar11 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      if (uVar13 == 0) break;
      piVar14 = (int *)(lVar11 + 4);
      while (piVar14[-1] != 0x54706054) {
        piVar14 = piVar14 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_027497ac;
      }
      iVar1 = 0;
      if (*piVar14 != -1) {
        iVar1 = *piVar14;
      }
      *(int *)(puVar5 + 8) = iVar1;
      if (*puVar6 == 0) break;
    } while( true );
  }
LAB_027497ac:
  uVar2 = *puVar7;
  if (*puVar6 == 0) {
LAB_027498b4:
    uVar15 = 0;
  }
  else {
    cVar8 = *puVar4;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
      }
      else {
        uVar15 = *(uint *)(puVar5 + 4);
        if (-1 < (int)uVar15) {
          if ((uint *)((ulong)uVar15 + (long)puVar6) == (uint *)0x0) goto LAB_027498b4;
          uVar15 = *(uint *)((ulong)uVar15 + (long)puVar6);
          goto LAB_027498b8;
        }
        if (uVar15 != 0xffffffff) goto LAB_027498b4;
      }
      puVar12 = (uint *)(ulong)*puVar6;
      uVar15 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_027498b8;
      lVar11 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar6 + (lVar11 - (long)puVar12);
      if (lVar11 == 0) goto LAB_027498b4;
      uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
      *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
      uVar15 = 0;
      if (uVar13 == 0) goto LAB_027498b8;
      piVar14 = (int *)(lVar11 + 4);
      while (piVar14[-1] != 0x344b17d7) {
        piVar14 = piVar14 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar15 = 0;
          goto LAB_027498b8;
        }
      }
      iVar1 = 0;
      if (*piVar14 != -1) {
        iVar1 = *piVar14;
      }
      *(int *)(puVar5 + 4) = iVar1;
    } while (*puVar6 != 0);
    uVar15 = 0;
  }
LAB_027498b8:
  uVar10 = param_4;
  if ((int)uVar15 <= (int)param_4) {
    uVar10 = uVar15;
  }
  uVar15 = 0;
  if (-1 < (int)param_4) {
    uVar15 = uVar10;
  }
  if (uVar15 != uVar2) {
    if (*puVar6 != 0) {
      cVar8 = *puVar4;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar10 = *puVar6;
        }
        else {
          uVar10 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar10) {
            if ((ushort *)((ulong)uVar10 + (long)puVar6) != (ushort *)0x0) {
              uVar2 = *(ushort *)((ulong)uVar10 + (long)puVar6);
              uVar10 = uVar15;
              if (0xfffe < uVar15) {
                uVar10 = 0xffff;
              }
              uVar9 = (ushort)uVar10;
              if (uVar2 < 0x100) {
                param_1 = param_1 + uVar2;
              }
              goto LAB_027499c4;
            }
            break;
          }
          if (uVar10 != 0xffffffff) break;
          uVar10 = *puVar6;
        }
        if ((uVar10 == 0) || (puVar12 = (uint *)(ulong)uVar10, puVar6 == puVar12)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar6 + (lVar11 - (long)puVar12);
        if (lVar11 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar14 = (int *)(lVar11 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027499b8;
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_027499b8:
    uVar10 = uVar15;
    if (0xfffe < uVar15) {
      uVar10 = 0xffff;
    }
    uVar9 = (ushort)uVar10;
LAB_027499c4:
    *param_1 = uVar9;
    if ((param_5 & 1) != 0) {
      if (*puVar6 == 0) {
LAB_02749a98:
        local_6e = 0;
      }
      else {
        cVar8 = *puVar4;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          }
          else {
            uVar10 = *(uint *)(puVar5 + 8);
            if (-1 < (int)uVar10) {
              if ((undefined2 *)((ulong)uVar10 + (long)puVar6) == (undefined2 *)0x0)
              goto LAB_02749a98;
              local_6e = *(undefined2 *)((ulong)uVar10 + (long)puVar6);
              goto LAB_02749a9c;
            }
            if (uVar10 != 0xffffffff) goto LAB_02749a98;
          }
          puVar12 = (uint *)(ulong)*puVar6;
          local_6e = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_02749a9c;
          lVar11 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar6 + (lVar11 - (long)puVar12);
          if (lVar11 == 0) goto LAB_02749a98;
          uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          local_6e = 0;
          if (uVar13 == 0) goto LAB_02749a9c;
          piVar14 = (int *)(lVar11 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              local_6e = 0;
              goto LAB_02749a9c;
            }
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar5 + 8) = iVar1;
        } while (*puVar6 != 0);
        local_6e = 0;
      }
LAB_02749a9c:
      local_6c = (undefined2)uVar15;
      local_68 = 0;
      local_62 = 0;
      local_64 = 0xff00;
      local_70[0] = param_2;
      if (-1 < DAT_053d1100) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1100,&local_68,local_70,6,0);
      }
    }
    lVar11 = *(long *)puVar3;
    (**(code **)(*param_3 + 0x18))(param_3);
    local_68 = FUN_006bd550(param_3[1],0);
    puVar6 = (uint *)FUN_0135e7e0(lVar11 + 0x440,&local_68);
    if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
      cVar8 = *puVar4;
      while( true ) {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar15 = *puVar6;
        }
        else {
          if (*(int *)(puVar5 + 8) != -1) {
            return;
          }
          uVar15 = *puVar6;
        }
        if (uVar15 == 0) {
          return;
        }
        puVar12 = (uint *)(ulong)uVar15;
        if (puVar6 == puVar12) {
          return;
        }
        lVar11 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar6 + (lVar11 - (long)puVar12);
        if (lVar11 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar13 == 0) {
          return;
        }
        piVar14 = (int *)(lVar11 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) {
            return;
          }
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar6 == 0) {
          return;
        }
      }
      return;
    }
  }
  return;
}

