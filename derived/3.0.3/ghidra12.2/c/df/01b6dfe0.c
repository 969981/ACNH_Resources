
undefined8 FUN_01b6dfe0(uint *param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  char cVar14;
  int *piVar15;
  byte local_14 [4];
  
  puVar4 = PTR_DAT_04bb27d0;
  if ((param_3 & 1) == 0) {
    lVar10 = *(long *)PTR_DAT_04bb27d0;
    if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x28) == 0)) || (*(int *)(lVar10 + 0x80) != 1)) &&
       ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x565b4aba &&
         *(int *)(PTR_DAT_04bc3a80 + 0x38) != -0xbb9f562 ||
        (uVar9 = FUN_01b51200(*(undefined8 *)PTR_DAT_04bb49a0,param_1), (uVar9 & 1) == 0)))) {
      puVar6 = PTR_DAT_04bc0648;
      puVar5 = PTR_DAT_04bc0640;
      if (*param_1 != 0) {
        cVar14 = *PTR_DAT_04bc0640;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar2 = *(uint *)(puVar6 + 0x20);
            if (-1 < (int)uVar2) {
              if (((char *)((ulong)uVar2 + (long)param_1) != (char *)0x0) &&
                 (*(char *)((ulong)uVar2 + (long)param_1) != '\0')) goto LAB_01b6e170;
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          lVar10 = (long)param_1 - (ulong)*param_1;
          if ((*param_1 == 0) || (lVar10 == 0)) break;
          lVar12 = 0xc;
          if (*(char *)(lVar10 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          if (lVar12 + lVar10 == 0) break;
          uVar9 = (ulong)*(ushort *)(lVar10 + 8);
          *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar15 = (int *)(lVar12 + lVar10 + 4);
          while (piVar15[-1] != 0x7ef334a6) {
            piVar15 = piVar15 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_01b6e148;
          }
          iVar7 = 0;
          if (*piVar15 != -1) {
            iVar7 = *piVar15;
          }
          *(int *)(puVar6 + 0x20) = iVar7;
          if (*param_1 == 0) break;
        } while( true );
      }
LAB_01b6e148:
      lVar12 = *(long *)puVar4;
      lVar10 = *(long *)(lVar12 + 0x10);
      if (((lVar10 == 0) || ((*(uint *)(lVar12 + 0x80) & 0xfffffffe) != 2)) ||
         (*(int *)(lVar10 + 0x3e4) == 1)) {
LAB_01b6e170:
        if ((param_2 == (int *)0x0) || (plVar11 = *(long **)puVar4, *(uint *)(plVar11 + 0x10) < 2))
        goto LAB_01b6dff4;
        lVar10 = *(long *)PTR_DAT_04bb39b0;
        if (lVar10 == 0) {
          local_14[0] = *PTR_DAT_04bb32e0;
LAB_01b6e1e8:
          if (local_14[0] < 8) goto LAB_01b6e250;
LAB_01b6e1f0:
          lVar10 = *plVar11;
          bVar3 = *(byte *)(lVar10 + 0x473);
          pbVar13 = PTR_DAT_04bb5038;
          if ((long)(char)bVar3 != 0xffffffffffffffff) {
            puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
            if (7 < bVar3) {
              puVar1 = (uint *)(lVar10 + 0x48);
            }
            if ((*puVar1 & 8) != 0) {
              pbVar13 = (byte *)(lVar10 + 0x471);
            }
          }
          local_14[0] = *pbVar13;
          if (7 < local_14[0]) {
            local_14[0] = *PTR_DAT_04bb5038;
            goto LAB_01b6e250;
          }
        }
        else {
          pbVar13 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar10 + 0x15c) != 0) {
            pbVar13 = (byte *)(lVar10 + 0x158);
          }
          local_14[0] = *pbVar13;
          if (7 < local_14[0]) {
            if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              local_14[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_01b6e1e8;
            }
            goto LAB_01b6e1f0;
          }
LAB_01b6e250:
          if (7 < local_14[0]) {
            local_14[0] = 0xff;
          }
        }
        iVar7 = FUN_02582fe0(local_14);
        if (iVar7 == *param_2) goto LAB_01b6dff4;
      }
    }
    uVar8 = 0;
  }
  else {
LAB_01b6dff4:
    uVar8 = 1;
  }
  return uVar8;
}

