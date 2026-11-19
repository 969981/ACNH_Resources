
undefined8 FUN_038930b0(long param_1,char *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  long *plVar11;
  
  lVar7 = *(long *)(*(long *)(DAT_05ae6a60 + 0x68) + 0xf8);
  iVar2 = *(int *)(lVar7 + 0x38);
  if (iVar2 != 0) {
    plVar11 = *(long **)(lVar7 + 0x40);
    plVar1 = plVar11 + iVar2;
    lVar7 = DAT_05ae6a60;
    do {
      lVar5 = *plVar11;
      plVar4 = *(long **)(lVar7 + 0x68);
      if (((plVar4[2] != *(long *)(lVar5 + 0x10)) || ((char)plVar4[3] != *(char *)(lVar5 + 0x18)))
         || (lVar6 = param_1 + 0x4c8, *(char *)((long)plVar4 + 0x19) != *(char *)(lVar5 + 0x19))) {
        cVar3 = (**(code **)(*plVar4 + 0x160))();
        uVar10 = (uint)cVar3;
        if (*(uint *)(param_1 + 0x4a8) <= uVar10) {
          uVar10 = 0;
        }
        lVar6 = *(long *)(param_1 + 0x4b0) + (long)(int)uVar10 * 0x70;
        lVar7 = DAT_05ae6a60;
      }
      if ((*(char *)(lVar6 + 0x50) != '\0') &&
         (uVar8 = (ulong)*(uint *)(lVar6 + 0x58), 0 < (int)*(uint *)(lVar6 + 0x58))) {
        cVar3 = *param_2;
        pcVar9 = *(char **)(lVar6 + 0x60);
        do {
          if ((*pcVar9 != -1) && (*pcVar9 == cVar3)) {
            uVar10 = (uint)cVar3;
            if (*(uint *)(lVar6 + 0x30) < (uint)(int)cVar3 || *(uint *)(lVar6 + 0x30) == uVar10) {
              uVar10 = 0;
            }
            if (((*(long *)(*(long *)(lVar6 + 0x38) +
                           (-(ulong)(uVar10 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar10 << 4)) ==
                  *param_3) &&
                (lVar5 = *(long *)(lVar6 + 0x38) + (long)(int)uVar10 * 0x10,
                *(char *)(lVar5 + 8) == (char)param_3[1])) &&
               (*(char *)(lVar5 + 9) == *(char *)((long)param_3 + 9))) {
              return 1;
            }
          }
          uVar8 = uVar8 - 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar8 != 0);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  return 0;
}

