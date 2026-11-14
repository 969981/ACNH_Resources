
undefined8 FUN_01b68870(uint *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  long lVar13;
  byte *pbVar14;
  char cVar15;
  int *piVar16;
  
  puVar4 = PTR_DAT_04bb27d0;
  if ((param_3 & 1) == 0) {
    lVar10 = *(long *)PTR_DAT_04bb27d0;
    if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x28) == 0)) || (*(int *)(lVar10 + 0x80) != 1)) &&
       ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x565b4aba &&
         *(int *)(PTR_DAT_04bc3a80 + 0x38) != -0xbb9f562 ||
        (uVar8 = FUN_01b51200(*(undefined8 *)PTR_DAT_04bb49a0,param_1), (uVar8 & 1) == 0)))) {
      puVar6 = PTR_DAT_04bc0648;
      puVar5 = PTR_DAT_04bc0640;
      if (*param_1 != 0) {
        cVar15 = *PTR_DAT_04bc0640;
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar6 + 0x20);
            if (-1 < (int)uVar3) {
              if (((char *)((ulong)uVar3 + (long)param_1) != (char *)0x0) &&
                 (*(char *)((ulong)uVar3 + (long)param_1) != '\0')) goto LAB_01b68a00;
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          lVar10 = (long)param_1 - (ulong)*param_1;
          if ((*param_1 == 0) || (lVar10 == 0)) break;
          lVar13 = 0xc;
          if (*(char *)(lVar10 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          if (lVar13 + lVar10 == 0) break;
          uVar8 = (ulong)*(ushort *)(lVar10 + 8);
          *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar16 = (int *)(lVar13 + lVar10 + 4);
          while (piVar16[-1] != 0x7ef334a6) {
            piVar16 = piVar16 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_01b689d8;
          }
          iVar1 = 0;
          if (*piVar16 != -1) {
            iVar1 = *piVar16;
          }
          *(int *)(puVar6 + 0x20) = iVar1;
          if (*param_1 == 0) break;
        } while( true );
      }
LAB_01b689d8:
      lVar13 = *(long *)puVar4;
      lVar10 = *(long *)(lVar13 + 0x10);
      if (((lVar10 == 0) || ((*(uint *)(lVar13 + 0x80) & 0xfffffffe) != 2)) ||
         (*(int *)(lVar10 + 0x3e4) == 1)) {
LAB_01b68a00:
        if ((param_2 == (byte *)0x0) || (plVar11 = *(long **)puVar4, *(uint *)(plVar11 + 0x10) < 2))
        goto LAB_01b68884;
        lVar10 = *(long *)PTR_DAT_04bb39b0;
        if (lVar10 == 0) {
          bVar12 = *PTR_DAT_04bb32e0;
LAB_01b68a78:
          if (bVar12 < 8) goto LAB_01b68ad4;
LAB_01b68a80:
          lVar10 = *plVar11;
          bVar12 = *(byte *)(lVar10 + 0x473);
          pbVar14 = PTR_DAT_04bb5038;
          if ((long)(char)bVar12 != 0xffffffffffffffff) {
            puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
            if (7 < bVar12) {
              puVar2 = (uint *)(lVar10 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pbVar14 = (byte *)(lVar10 + 0x471);
            }
          }
          bVar12 = *pbVar14;
          if (7 < bVar12) {
            bVar12 = *PTR_DAT_04bb5038;
            goto LAB_01b68ad4;
          }
        }
        else {
          pbVar14 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar10 + 0x15c) != 0) {
            pbVar14 = (byte *)(lVar10 + 0x158);
          }
          bVar12 = *pbVar14;
          if (7 < bVar12) {
            if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              bVar12 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_01b68a78;
            }
            goto LAB_01b68a80;
          }
LAB_01b68ad4:
          if (7 < bVar12) {
            bVar12 = 0xff;
          }
        }
        bVar9 = *param_2;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        if (bVar12 == bVar9) goto LAB_01b68884;
      }
    }
    uVar7 = 0;
  }
  else {
LAB_01b68884:
    uVar7 = 1;
  }
  return uVar7;
}

