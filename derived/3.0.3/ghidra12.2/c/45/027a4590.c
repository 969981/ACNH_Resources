
void FUN_027a4590(ushort *param_1,undefined8 param_2,long *param_3,int param_4)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  char cVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar6 = PTR_DAT_04bb2208;
  lVar11 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_4c = FUN_006bd550(param_3[1],0);
  puVar9 = (uint *)FUN_00ad5fc0(lVar11 + 0x1960,&local_4c);
  puVar8 = PTR_DAT_04bb6428;
  puVar7 = PTR_DAT_04bb6420;
  if (puVar9 == (uint *)0x0) goto LAB_027a4954;
  lVar11 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar11 + 0x473);
  if ((long)(char)bVar5 == 0xffffffffffffffff) {
LAB_027a4640:
    lVar11 = *(long *)PTR_DAT_04bb64a0;
    if (*puVar9 != 0) {
      cVar13 = *PTR_DAT_04bb6420;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar10 = *(uint *)(puVar8 + 0x20);
          if (-1 < (int)uVar10) {
            if ((ushort *)((ulong)uVar10 + (long)puVar9) != (ushort *)0x0) {
              uVar17 = (ulong)*(ushort *)((ulong)uVar10 + (long)puVar9);
              goto LAB_027a4820;
            }
            break;
          }
          if (uVar10 != 0xffffffff) break;
        }
        puVar14 = (uint *)(ulong)*puVar9;
        uVar17 = 0;
        if ((*puVar9 == 0) || (puVar9 == puVar14)) goto LAB_027a4820;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar14);
        if (lVar2 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
        *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
        uVar17 = 0;
        if (uVar15 == 0) goto LAB_027a4820;
        piVar16 = (int *)(lVar2 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            uVar17 = 0;
            goto LAB_027a4820;
          }
        }
        iVar3 = 0;
        if (*piVar16 != -1) {
          iVar3 = *piVar16;
        }
        *(int *)(puVar8 + 0x20) = iVar3;
      } while (*puVar9 != 0);
    }
    uVar17 = 0;
LAB_027a4820:
    piVar16 = (int *)(lVar11 + uVar17 * 4 + 0x8000);
    iVar3 = *piVar16;
    if (0 < iVar3) {
      *piVar16 = iVar3 + -1;
    }
  }
  else {
    pbVar1 = (byte *)(lVar11 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar1 = (byte *)(lVar11 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar11 + 0x472) == bVar5)) goto LAB_027a4640;
    if (*puVar9 != 0) {
      cVar13 = *PTR_DAT_04bb6420;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          uVar10 = *puVar9;
        }
        else {
          if (*(int *)(puVar8 + 0x30) != -1) break;
          uVar10 = *puVar9;
        }
        if ((uVar10 == 0) || (puVar14 = (uint *)(ulong)uVar10, puVar9 == puVar14)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar9 + (lVar11 - (long)puVar14);
        if (lVar11 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
        *(undefined4 *)(puVar8 + 0x30) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar16 = (int *)(lVar11 + 4);
        while (piVar16[-1] != -0x504e0c9a) {
          piVar16 = piVar16 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_027a4838;
        }
        iVar3 = 0;
        if (*piVar16 != -1) {
          iVar3 = *piVar16;
        }
        *(int *)(puVar8 + 0x30) = iVar3;
        if (*puVar9 == 0) break;
      } while( true );
    }
  }
LAB_027a4838:
  lVar11 = *(long *)puVar6;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_48 = FUN_006bd550(param_3[1],0);
  puVar9 = (uint *)FUN_00ad5fc0(lVar11 + 0x1960,&local_48);
  puVar8 = PTR_DAT_04bb6428;
  puVar7 = PTR_DAT_04bb6420;
  if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
    cVar13 = *PTR_DAT_04bb6420;
    do {
      if (cVar13 == '\0') {
        cVar13 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar7 = 1;
        *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        uVar10 = *puVar9;
      }
      else {
        if (*(int *)(puVar8 + 0x20) != -1) break;
        uVar10 = *puVar9;
      }
      if ((uVar10 == 0) || (puVar14 = (uint *)(ulong)uVar10, puVar9 == puVar14)) break;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar14);
      if (lVar11 == 0) break;
      uVar17 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
      *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
      if (uVar17 == 0) break;
      piVar16 = (int *)(lVar11 + 4);
      while (piVar16[-1] != 0x54706054) {
        piVar16 = piVar16 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_027a4954;
      }
      iVar3 = 0;
      if (*piVar16 != -1) {
        iVar3 = *piVar16;
      }
      *(int *)(puVar8 + 0x20) = iVar3;
      if (*puVar9 == 0) break;
    } while( true );
  }
LAB_027a4954:
  lVar11 = *(long *)puVar6;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_44 = FUN_006bd550(param_3[1],0);
  puVar9 = (uint *)FUN_00ad5fc0(lVar11 + 0x1960,&local_44);
  puVar7 = PTR_DAT_04bb6428;
  puVar6 = PTR_DAT_04bb6420;
  if (puVar9 == (uint *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar12 = param_1;
    if (*puVar9 != 0) {
      cVar13 = *PTR_DAT_04bb6420;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          uVar10 = *puVar9;
        }
        else {
          uVar10 = *(uint *)(puVar7 + 0x20);
          if (-1 < (int)uVar10) {
            if (((ushort *)((ulong)uVar10 + (long)puVar9) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar10 + (long)puVar9), uVar4 < 0x200)) {
              puVar12 = param_1 + uVar4;
            }
            break;
          }
          if (uVar10 != 0xffffffff) break;
          uVar10 = *puVar9;
        }
        if ((uVar10 == 0) || (puVar14 = (uint *)(ulong)uVar10, puVar9 == puVar14)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar9 + (lVar11 - (long)puVar14);
        if (lVar11 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
        *(undefined4 *)(puVar7 + 0x20) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar16 = (int *)(lVar11 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_027a4a8c;
        }
        iVar3 = 0;
        if (*piVar16 != -1) {
          iVar3 = *piVar16;
        }
        *(int *)(puVar7 + 0x20) = iVar3;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_027a4a8c:
    uVar10 = (uint)*puVar12;
  }
  FUN_027a3630(param_1,param_2,param_3,uVar10 + param_4);
  return;
}

