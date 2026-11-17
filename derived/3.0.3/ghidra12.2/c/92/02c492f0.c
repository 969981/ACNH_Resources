
void FUN_02c492f0(long param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  plVar8 = *(long **)(*(long *)(param_1 + 0x238) + 0x5e0);
  if (plVar8 == (long *)0x0) {
    return;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x2a8);
  if ((int)*(uint *)(param_1 + 0x2a8) < 1) {
    uVar10 = 0;
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    do {
      if (((uVar11 < (uVar5 & 0xffffffff)) &&
          (lVar12 = *(long *)(*(long *)(param_1 + 0x2b0) + uVar11 * 8),
          lVar12 != 0 && uVar11 != *(uint *)(param_1 + 0x2dc))) &&
         (plVar9 = *(long **)(lVar12 + 0x388), plVar9 != (long *)0x0)) {
        iVar3 = (**(code **)(*plVar9 + 0x80))(plVar9,0);
        iVar4 = (**(code **)(*plVar9 + 0x80))(plVar9,1);
        lVar6 = *(long *)(plVar9[0xd] + (long)(iVar3 + (int)plVar9[0xc] * iVar4) * 0x18);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
          lVar12 = *(long *)(lVar12 + 0x388);
          if (*(char *)(lVar12 + 0x20) == '\0') {
            iVar3 = *(int *)(lVar12 + 0x28);
          }
          else {
            piVar1 = (int *)(lVar12 + 0x24);
            if (*(char *)(lVar12 + 0x21) != '\0') {
              piVar1 = (int *)(lVar12 + 0x28);
            }
            iVar3 = *piVar1;
          }
          if (iVar3 == 0) {
            uVar10 = uVar10 | 1 << (ulong)((uint)uVar11 & 0x1f) & 0xffU;
          }
        }
      }
      uVar5 = (ulong)*(int *)(param_1 + 0x2a8);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)uVar5);
  }
  bVar2 = uVar10 == 0;
  (**(code **)(*plVar8 + 0x140))(plVar8,!bVar2,0);
  if ((uint)bVar2 << 1 < 5) {
    switch(bVar2) {
    case false:
      bVar7 = *(byte *)(plVar8 + 0x58) & 0xf8 | 2;
      break;
    case true:
      bVar7 = *(byte *)(plVar8 + 0x58) & 0xf8 | 1;
    }
    *(byte *)(plVar8 + 0x58) = bVar7;
  }
  *(uint *)(plVar8 + 0x56) = (uint)bVar2 << 1;
  FUN_03d5d0e0(plVar8,0,(param_2 ^ 0xffffffff) & 1);
  return;
}

