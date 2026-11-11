
void FUN_00453730(byte *param_1,long *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  long *plVar10;
  long local_58;
  byte *pbStack_50;
  ulong local_48;
  
  if ((((((*param_1 >> 5 & 1) != 0) &&
        (puVar5 = (ulong *)FUN_00426db0(param_1,0x20), puVar3 = PTR_DAT_04bd8010,
        puVar2 = PTR_DAT_04bd7450, puVar5 != (ulong *)0x0)) &&
       (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) &&
      ((param_2 <= plVar6 && (plVar6 <= (long *)((long)param_2 + param_3))))) &&
     (lVar7 = *plVar6, lVar7 != 0)) {
    plVar9 = plVar6 + 1;
    do {
      pbStack_50 = (byte *)plVar9[1];
      if (pbStack_50 == (byte *)0x0) {
        local_58 = *plVar9;
        local_48 = 0;
      }
      else {
        bVar1 = false;
        pbVar8 = pbStack_50;
        do {
          bVar4 = pbVar8 == puVar2;
          pbVar8 = *(byte **)(pbVar8 + 8);
          bVar1 = (bool)(bVar1 | bVar4);
        } while (pbVar8 != (byte *)0x0);
        if (bVar1) {
          local_58 = *plVar9;
          pbStack_50 = param_1;
          local_48 = FUN_00428370(param_1);
        }
        else {
          local_58 = *plVar9;
          if (pbStack_50 == (byte *)0x0) {
            local_48 = 0;
            goto LAB_00453840;
          }
          local_48 = FUN_00428370();
        }
        if ((local_48 & 1) != 0) {
          FUN_0043dd30(local_48 & 0xfffffffffffffffe);
        }
      }
LAB_00453840:
      FUN_00440b30(&local_58,3,1);
      if ((local_48 & 1) != 0) {
        FUN_0043dd50(local_48 & 0xfffffffffffffffe);
      }
      plVar10 = plVar9 + 2;
      *plVar9 = 0;
      plVar9[1] = (long)puVar3;
      plVar9 = plVar10;
    } while (plVar10 != plVar6 + lVar7 * 2 + 1);
  }
  if ((((param_1[1] >> 4 & 1) != 0) &&
      (plVar6 = (long *)FUN_00426db0(param_1,0x1000), plVar6 != (long *)0x0)) &&
     (local_58 = *plVar6, local_58 != 0)) {
    pbStack_50 = param_1;
    local_48 = FUN_00428370(param_1);
    if ((local_48 & 1) != 0) {
      FUN_0043dd30(local_48 & 0xfffffffffffffffe);
    }
    FUN_00440b30(&local_58,3,1);
    if ((local_48 & 1) != 0) {
      FUN_0043dd50(local_48 & 0xfffffffffffffffe);
    }
  }
  return;
}

