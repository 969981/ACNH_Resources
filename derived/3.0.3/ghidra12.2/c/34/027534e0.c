
void FUN_027534e0(ushort *param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  char cVar12;
  uint *puVar13;
  ulong uVar14;
  undefined4 local_34;
  
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_02753d00(lVar8 + 0x1520,&local_34);
  puVar5 = PTR_DAT_04bb63f8;
  puVar4 = PTR_DAT_04bb63f0;
  if (puVar6 == (uint *)0x0) {
    return;
  }
  puVar11 = param_1;
  if (*puVar6 != 0) {
    cVar12 = *PTR_DAT_04bb63f0;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        uVar10 = *puVar6;
      }
      else {
        uVar10 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar10) {
          if (((ushort *)((ulong)uVar10 + (long)puVar6) != (ushort *)0x0) &&
             (uVar3 = *(ushort *)((ulong)uVar10 + (long)puVar6), uVar3 < 0x100)) {
            puVar11 = param_1 + uVar3;
          }
          break;
        }
        if (uVar10 != 0xffffffff) break;
        uVar10 = *puVar6;
      }
      if ((uVar10 == 0) || (puVar13 = (uint *)(ulong)uVar10, puVar6 == puVar13)) break;
      lVar8 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar6 + (lVar8 - (long)puVar13);
      if (lVar8 == 0) break;
      uVar14 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar7 = (int *)(lVar8 + 4);
      while (piVar7[-1] != 0x54706054) {
        piVar7 = piVar7 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_0275362c;
      }
      iVar1 = 0;
      if (*piVar7 != -1) {
        iVar1 = *piVar7;
      }
      *(int *)(puVar5 + 8) = iVar1;
      if (*puVar6 == 0) break;
    } while( true );
  }
LAB_0275362c:
  uVar3 = *puVar11;
  if (*puVar6 == 0) {
LAB_02753734:
    uVar10 = 0;
  }
  else {
    cVar12 = *puVar4;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar10 = *(uint *)(puVar5 + 4);
        if (-1 < (int)uVar10) {
          if ((ushort *)((ulong)uVar10 + (long)puVar6) == (ushort *)0x0) goto LAB_02753734;
          uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar6);
          goto LAB_02753738;
        }
        if (uVar10 != 0xffffffff) goto LAB_02753734;
      }
      puVar13 = (uint *)(ulong)*puVar6;
      uVar10 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar13)) goto LAB_02753738;
      lVar8 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar6 + (lVar8 - (long)puVar13);
      if (lVar8 == 0) goto LAB_02753734;
      uVar14 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
      *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
      uVar10 = 0;
      if (uVar14 == 0) goto LAB_02753738;
      piVar7 = (int *)(lVar8 + 4);
      while (piVar7[-1] != 0x110b14c) {
        piVar7 = piVar7 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          uVar10 = 0;
          goto LAB_02753738;
        }
      }
      iVar1 = 0;
      if (*piVar7 != -1) {
        iVar1 = *piVar7;
      }
      *(int *)(puVar5 + 4) = iVar1;
    } while (*puVar6 != 0);
    uVar10 = 0;
  }
LAB_02753738:
  uVar2 = param_3;
  if ((int)uVar10 <= (int)param_3) {
    uVar2 = uVar10;
  }
  uVar10 = 0;
  if (-1 < (int)param_3) {
    uVar10 = uVar2;
  }
  if (uVar10 != uVar3) {
    if (*puVar6 != 0) {
      cVar12 = *puVar4;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar6;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) {
              uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6);
              if (0xfffe < uVar10) {
                uVar10 = 0xffff;
              }
              uVar9 = (ushort)uVar10;
              if (uVar3 < 0x100) {
                param_1 = param_1 + uVar3;
              }
              goto LAB_02753840;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar6;
        }
        if ((uVar2 == 0) || (puVar13 = (uint *)(ulong)uVar2, puVar6 == puVar13)) break;
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + (lVar8 - (long)puVar13);
        if (lVar8 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar7 = (int *)(lVar8 + 4);
        while (piVar7[-1] != 0x54706054) {
          piVar7 = piVar7 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_02753834;
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_02753834:
    if (0xfffe < uVar10) {
      uVar10 = 0xffff;
    }
    uVar9 = (ushort)uVar10;
LAB_02753840:
    *param_1 = uVar9;
    if (*puVar6 != 0) {
      cVar12 = *puVar4;
      while( true ) {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar6;
        }
        else {
          if (*(int *)(puVar5 + 8) != -1) {
            return;
          }
          uVar10 = *puVar6;
        }
        if (uVar10 == 0) {
          return;
        }
        puVar13 = (uint *)(ulong)uVar10;
        if (puVar6 == puVar13) {
          return;
        }
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + (lVar8 - (long)puVar13);
        if (lVar8 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar14 == 0) {
          return;
        }
        piVar7 = (int *)(lVar8 + 4);
        while (piVar7[-1] != 0x54706054) {
          piVar7 = piVar7 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            return;
          }
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
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

