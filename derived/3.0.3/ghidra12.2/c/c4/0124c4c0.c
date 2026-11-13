
bool FUN_0124c4c0(long param_1,undefined2 *param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  uint *puVar12;
  int *piVar13;
  
  uVar7 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),4);
  if (((uVar7 & 1) == 0) || ((param_3 & 1) != 0)) {
    lVar1 = param_1 + 8;
    iVar5 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
    if (iVar5 != 0x2d) {
      iVar5 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
      if ((iVar5 - 0x23U < 9) && ((*(uint *)(param_1 + 0xc) & 0x7fe000) != 0)) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xff801fff;
      }
      iVar5 = FUN_0123c9b0(*(undefined8 *)(param_1 + 0x10));
      if (param_2 == (undefined2 *)0x0) {
        return iVar5 != 0xfffe;
      }
      if (iVar5 == 0xfffe) {
        return false;
      }
      iVar6 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
      puVar4 = PTR_DAT_04bbbc78;
      puVar3 = PTR_DAT_04bbbc70;
      if (((6 < iVar6 - 0xbU) || (puVar10 = *(uint **)(param_1 + 0x10), puVar10 == (uint *)0x0)) ||
         (*puVar10 == 0)) {
LAB_0124c6d0:
        *param_2 = *(undefined2 *)(param_1 + 8);
        *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 10);
        *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0xb);
        uVar2 = *(undefined4 *)(param_1 + 0xc);
        *param_2 = (short)iVar5;
        *(undefined4 *)(param_2 + 2) = uVar2;
        return true;
      }
      cVar11 = *PTR_DAT_04bbbc70;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar4 + 0x4c);
          if (-1 < (int)uVar9) {
            if (((byte *)((ulong)uVar9 + (long)puVar10) != (byte *)0x0) &&
               (1 < *(byte *)((ulong)uVar9 + (long)puVar10))) {
              *(undefined4 *)(param_1 + 0xc) = 0;
              if ((*(long *)(param_1 + 0x10) == 0) ||
                 (pcVar8 = (char *)FUN_01246470(*(long *)(param_1 + 0x10),0x13,0xf5a73337,
                                                *(undefined8 *)PTR_DAT_04bbbcb0),
                 pcVar8 == (char *)0x0)) {
LAB_0124c6c4:
                uVar9 = *(uint *)(param_1 + 0xc) & 0xfffffffc;
              }
              else if (*pcVar8 == '\x03') {
                uVar9 = *(uint *)(param_1 + 0xc) & 0xfffffffc | 2;
              }
              else {
                if (*pcVar8 != '\x02') goto LAB_0124c6c4;
                uVar9 = *(uint *)(param_1 + 0xc) & 0xfffffffc | 1;
              }
              *(uint *)(param_1 + 0xc) = uVar9;
            }
            goto LAB_0124c6d0;
          }
          if (uVar9 != 0xffffffff) goto LAB_0124c6d0;
        }
        puVar12 = (uint *)(ulong)*puVar10;
        if ((*puVar10 == 0) || (puVar10 == puVar12)) goto LAB_0124c6d0;
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + (lVar1 - (long)puVar12);
        if (lVar1 == 0) goto LAB_0124c6d0;
        uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
        *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
        if (uVar7 == 0) goto LAB_0124c6d0;
        piVar13 = (int *)(lVar1 + 4);
        while (piVar13[-1] != -0xa58ccc9) {
          piVar13 = piVar13 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_0124c6d0;
        }
        iVar6 = 0;
        if (*piVar13 != -1) {
          iVar6 = *piVar13;
        }
        *(int *)(puVar4 + 0x4c) = iVar6;
        if (*puVar10 == 0) goto LAB_0124c6d0;
      } while( true );
    }
  }
  return false;
}

