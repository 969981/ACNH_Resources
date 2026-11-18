
void FUN_0345e1f0(uint *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined *local_70;
  undefined4 local_68;
  
  if ((char)param_1[0x546] != '\0') {
    uVar4 = *param_1;
    if ((int)uVar4 < 1) {
      uVar10 = (ulong)-(uint)(-1 < param_2 && uVar4 != 0);
    }
    else {
      lVar8 = *(long *)(param_1 + 2);
      uVar10 = 0;
      do {
        lVar11 = *(long *)(lVar8 + uVar10 * 8);
        iVar2 = *(int *)(lVar11 + 4);
        iVar3 = *(int *)(lVar11 + 8);
        bVar6 = param_2 < iVar2;
        bVar7 = iVar3 <= param_2;
        if (iVar2 <= iVar3) {
          bVar6 = iVar2 <= param_2;
          bVar7 = param_2 < iVar3;
        }
        if ((bVar7) && (bVar6)) goto LAB_0345e2d8;
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
      if (param_2 < 0) {
        uVar10 = 0;
      }
      else {
        uVar12 = 0;
        uVar10 = 0xffffffff;
        do {
          if (*(long *)(lVar8 + uVar12 * 8) == *(long *)(lVar8 + (ulong)(uVar4 - 1) * 8)) {
            uVar10 = uVar12 & 0xffffffff;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar4 != uVar12);
      }
    }
LAB_0345e2d8:
    uVar5 = param_1[0x54f];
    lVar8 = 0;
    uVar9 = (uint)uVar10;
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    uVar4 = uVar5;
    if ((int)(param_1[0x54e] + uVar5) <= (int)uVar9) {
      uVar4 = uVar9 - param_1[0x54e];
    }
    if ((int)uVar5 <= (int)uVar9) {
      uVar9 = uVar4;
    }
    param_1[0x54f] = uVar9;
    do {
      lVar11 = *(long *)((long)param_1 + lVar8 + 0x310);
      if (lVar11 != 0) {
        uVar4 = param_1[0x101];
        if (*(uint *)(lVar11 + 0x228) <= uVar4) {
          uVar4 = 0;
        }
        plVar13 = *(long **)(*(long *)(lVar11 + 0x230) + (long)(int)uVar4 * 8);
        if (plVar13 == (long *)0x0) {
          return;
        }
        local_68 = 0x14;
        uVar14 = 0x3f800000;
        if ((uVar10 & 0xffffffff) * 8 != lVar8) {
          uVar14 = 0;
        }
        local_70 = puVar1;
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_70);
        (**(code **)(plVar13[3] + 0x158))(uVar14,plVar13[1]);
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0xf0);
  }
  return;
}

