
void FUN_0274a060(ushort *param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  char cVar11;
  uint *puVar12;
  int *piVar13;
  ulong uVar14;
  undefined4 local_34;
  
  lVar9 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_0135e7e0(lVar9 + 0x440,&local_34);
  puVar5 = PTR_DAT_04bb6370;
  puVar4 = PTR_DAT_04bb6368;
  if (puVar6 == (uint *)0x0) {
    return;
  }
  puVar10 = param_1;
  if (*puVar6 != 0) {
    cVar11 = *PTR_DAT_04bb6368;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
        uVar8 = *puVar6;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar8) {
          if (((ushort *)((ulong)uVar8 + (long)puVar6) != (ushort *)0x0) &&
             (uVar3 = *(ushort *)((ulong)uVar8 + (long)puVar6), uVar3 < 0x100)) {
            puVar10 = param_1 + uVar3;
          }
          break;
        }
        if (uVar8 != 0xffffffff) break;
        uVar8 = *puVar6;
      }
      if ((uVar8 == 0) || (puVar12 = (uint *)(ulong)uVar8, puVar6 == puVar12)) break;
      lVar9 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
      if (lVar9 == 0) break;
      uVar14 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar13 = (int *)(lVar9 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_0274a1ac;
      }
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar5 + 8) = iVar1;
      if (*puVar6 == 0) break;
    } while( true );
  }
LAB_0274a1ac:
  uVar3 = *puVar10;
  if (*puVar6 == 0) {
LAB_0274a2b4:
    uVar8 = 0;
  }
  else {
    cVar11 = *puVar4;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 4);
        if (-1 < (int)uVar8) {
          if ((uint *)((ulong)uVar8 + (long)puVar6) == (uint *)0x0) goto LAB_0274a2b4;
          uVar8 = *(uint *)((ulong)uVar8 + (long)puVar6);
          goto LAB_0274a2b8;
        }
        if (uVar8 != 0xffffffff) goto LAB_0274a2b4;
      }
      puVar12 = (uint *)(ulong)*puVar6;
      uVar8 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_0274a2b8;
      lVar9 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
      if (lVar9 == 0) goto LAB_0274a2b4;
      uVar14 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
      *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
      uVar8 = 0;
      if (uVar14 == 0) goto LAB_0274a2b8;
      piVar13 = (int *)(lVar9 + 4);
      while (piVar13[-1] != 0x344b17d7) {
        piVar13 = piVar13 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          uVar8 = 0;
          goto LAB_0274a2b8;
        }
      }
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar5 + 4) = iVar1;
    } while (*puVar6 != 0);
    uVar8 = 0;
  }
LAB_0274a2b8:
  uVar2 = param_3;
  if ((int)uVar8 <= (int)param_3) {
    uVar2 = uVar8;
  }
  uVar8 = 0;
  if (-1 < (int)param_3) {
    uVar8 = uVar2;
  }
  if (uVar8 != uVar3) {
    if (*puVar6 != 0) {
      cVar11 = *puVar4;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar2 = *puVar6;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) {
              uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6);
              if (0xfffe < uVar8) {
                uVar8 = 0xffff;
              }
              uVar7 = (ushort)uVar8;
              if (uVar3 < 0x100) {
                param_1 = param_1 + uVar3;
              }
              goto LAB_0274a3d0;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar6;
        }
        if ((uVar2 == 0) || (puVar12 = (uint *)(ulong)uVar2, puVar6 == puVar12)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
        if (lVar9 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar13 = (int *)(lVar9 + 4);
        while (piVar13[-1] != 0x54706054) {
          piVar13 = piVar13 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_0274a3c4;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_0274a3c4:
    if (0xfffe < uVar8) {
      uVar8 = 0xffff;
    }
    uVar7 = (ushort)uVar8;
LAB_0274a3d0:
    *param_1 = uVar7;
  }
  return;
}

