
bool FUN_035afdc0(int *param_1,long *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  long lVar10;
  ushort *puVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  
  if (param_1[2] != 2) {
    return false;
  }
  if (*param_4 == *param_1) {
    plVar12 = (long *)param_2[1];
    while (plVar12 != param_2) {
      plVar14 = (long *)plVar12[1];
      plVar5 = plVar14;
      if (*plVar12 != 0) {
        *(long **)(*plVar12 + 8) = plVar14;
        plVar5 = (long *)plVar12[1];
      }
      if (plVar5 != (long *)0x0) {
        *plVar5 = *plVar12;
      }
      *plVar12 = 0;
      plVar12[1] = 0;
      *(int *)(param_2 + 2) = (int)param_2[2] + -1;
      plVar12 = plVar12 + -2;
      (**(code **)*plVar12)(plVar12);
      *plVar12 = param_2[3];
      param_2[3] = (long)plVar12;
      plVar12 = plVar14;
    }
    *param_3 = param_1[0x14];
    param_1[2] = 0;
    *param_1 = 0;
    if (param_1[0x14] != 2) {
      return false;
    }
    if (DAT_05779f60 != (ushort *)0x0) {
      iVar7 = 1;
      lVar10 = (long)DAT_05779f60;
      do {
        lVar10 = *(long *)(lVar10 + 0x18);
        iVar7 = iVar7 + -1;
      } while (lVar10 != 0);
      if (iVar7 != 0) {
        puVar11 = *(ushort **)((long)DAT_05779f60 + 0x18);
        if (puVar11 == (ushort *)0x0) {
          DAT_05779f60 = puVar11;
          return true;
        }
        puVar9 = puVar11;
        uVar2 = 0xffffffff;
        do {
          uVar6 = uVar2;
          puVar9 = *(ushort **)(puVar9 + 0xc);
          uVar2 = uVar6 + 1;
        } while (puVar9 != (ushort *)0x0);
        uVar8 = 0x100;
        if (uVar2 < 0x100) {
          uVar8 = uVar6 + 2;
        }
        DAT_05779f60 = puVar11;
        do {
          uVar6 = uVar8 - 1;
          puVar9 = puVar11;
          if ((uVar6 != 0) && (puVar11 != (ushort *)0x0)) {
            uVar13 = uVar6;
            do {
              puVar9 = *(ushort **)(puVar9 + 0xc);
              if (uVar13 < 2) break;
              uVar13 = uVar13 - 1;
            } while (puVar9 != (ushort *)0x0);
          }
          if ((int)param_2[2] < (int)param_2[5]) {
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            plVar12 = (long *)param_2[3];
            if (plVar12 != (long *)0x0) {
              param_2[3] = *plVar12;
            }
            *plVar12 = (long)&PTR_FUN_048fc9b0;
            *(uint *)(plVar12 + 1) = (uint)uVar3;
            *(uint *)((long)plVar12 + 0xc) = (uint)uVar4;
            plVar14 = plVar12 + 2;
            *plVar14 = 0;
            plVar12[3] = 0;
            lVar10 = *param_2;
            *param_2 = (long)plVar14;
            plVar12[3] = (long)param_2;
            *plVar14 = lVar10;
            if (lVar10 != 0) {
              *(long **)(lVar10 + 8) = plVar14;
            }
            *(int *)(param_2 + 2) = (int)param_2[2] + 1;
            puVar11 = DAT_05779f60;
          }
          bVar1 = (int)uVar8 < 2;
          uVar8 = uVar6;
          if (bVar1) {
            return uVar2 < 0x100;
          }
        } while( true );
      }
    }
  }
  return false;
}

