
void FUN_0208d820(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  undefined *local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 != 0) {
    plVar11 = *(long **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      plVar11 = (long *)*plVar11;
    }
    else if ((plVar11 == (long *)0x0) || (plVar11 = (long *)plVar11[0x26], plVar11 == (long *)0x0))
    goto LAB_0208d884;
    (**(code **)(*plVar11 + 0x38))();
  }
LAB_0208d884:
  iVar6 = FUN_016d1b60();
  local_65 = 0;
  local_70 = 8;
  local_6c[0] = 0;
  puStack_78 = local_6c;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  FUN_021d62e0(&local_80,iVar6);
  puVar4 = PTR_DAT_04bc27f0;
  plVar11 = (long *)param_2[1];
  if (plVar11 != param_2) {
    plVar16 = plVar11 + -1;
    do {
      plVar12 = plVar11 + -1;
      plVar11 = (long *)plVar11[1];
      pcVar8 = (char *)FUN_021c9770((int)*plVar12,1);
      if (pcVar8 != (char *)0x0) {
        if ((int)*plVar16 == iVar6) {
          iVar7 = FUN_016d2640(&local_80,0);
          if ((iVar7 == -1) && (*pcVar8 != '\0')) {
            cVar3 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
            bVar2 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
            uVar1 = (int)cVar3 + 0x18;
            if (4 < cVar3) {
              uVar1 = (int)cVar3;
            }
            uVar15 = (uint)(byte)pcVar8[8];
            bVar5 = uVar15 == (uVar1 & 0xff);
            if (((uVar15 < (uVar1 & 0xff)) || (pcVar8[9] == bVar2 && bVar5)) ||
               ((byte)pcVar8[9] < bVar2 && bVar5)) {
              uVar1 = uVar1 & 0xff;
              uVar15 = (uint)(byte)pcVar8[10];
              uVar9 = 0;
              if ((uVar15 <= uVar1 && (bVar2 != pcVar8[0xb] || uVar1 != uVar15)) &&
                  ((byte)pcVar8[0xb] <= bVar2 || uVar1 != uVar15)) {
                uVar9 = 3;
              }
              goto LAB_0208d9b4;
            }
          }
          uVar9 = 3;
        }
        else {
          uVar13 = (ulong)(byte)pcVar8[0x18];
          if (((uVar13 < 0x23) && ((byte)pcVar8[0x19] <= (byte)puVar4[uVar13])) &&
             ((((uint)(&DAT_053e6eb8)[uVar13] >> (ulong)((byte)pcVar8[0x19] & 0x1f) & 1) != 0 &&
              ((*(int *)(param_1 + 8) == -1 || ((int)*plVar16 != *(int *)(param_1 + 8))))))) {
            if ((*(int *)(param_1 + 0xc) == 6) ||
               (*(int *)(pcVar8 + 0x1fc) != *(int *)(param_1 + 0xc))) {
              if (pcVar8[0x6c] != '\0') {
                pcVar8[0x6c] = '\0';
              }
              goto LAB_0208d918;
            }
            uVar9 = 2;
          }
          else {
            uVar9 = 1;
          }
        }
LAB_0208d9b4:
        plVar12 = param_2;
        do {
          plVar12 = (long *)plVar12[1];
          if (plVar12 == param_2) goto LAB_0208d900;
          plVar14 = plVar12 + -1;
        } while ((int)*plVar14 != (int)*plVar16);
        if ((plVar12 != (long *)0x0) && (plVar14 != (long *)0x0)) {
          if (*plVar12 != 0) {
            *(long *)(*plVar12 + 8) = plVar12[1];
          }
          if ((long *)plVar12[1] != (long *)0x0) {
            *(long *)plVar12[1] = *plVar12;
          }
          *plVar12 = 0;
          plVar12[1] = 0;
          *(int *)(param_2 + 2) = (int)param_2[2] + -1;
          plVar12[-1] = param_2[3];
          param_2[3] = (long)plVar14;
        }
LAB_0208d900:
        FUN_02093ad0(pcVar8 + 0x10,uVar9,1);
        if (pcVar8[0x6c] == '\0') {
          pcVar8[0x6c] = '\x01';
        }
        *(undefined4 *)(pcVar8 + 0x68) = uVar9;
      }
LAB_0208d918:
      plVar16 = plVar11 + -1;
    } while (plVar16 != param_2 + -1);
  }
  return;
}

