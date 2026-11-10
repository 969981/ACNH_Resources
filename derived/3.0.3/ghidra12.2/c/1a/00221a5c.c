
void FUN_00221a5c(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong *puVar9;
  int *piVar10;
  long lVar11;
  
  lVar11 = *param_1;
  plVar8 = (long *)FUN_00228308();
  iVar7 = DAT_04be2348;
  uVar1 = 0;
  if (*plVar8 != 0) {
    uVar1 = lVar11 / *plVar8;
  }
  DAT_04be2350 = DAT_04be2350 + uVar1;
  if (uVar1 < DAT_04be2360) {
    DAT_04be2360 = uVar1;
  }
  if (DAT_04be2358 < uVar1) {
    DAT_04be2358 = uVar1;
  }
  DAT_04be2348 = DAT_04be2348 + 1;
  puVar9 = &DAT_04be2370;
  if (DAT_04be2370 < uVar1) {
    lVar11 = 0;
    bVar2 = true;
    bVar3 = true;
    bVar4 = true;
    bVar5 = true;
    bVar6 = true;
  }
  else {
    puVar9 = &DAT_04be2380;
    if (DAT_04be2380 < uVar1) {
      bVar2 = true;
      bVar3 = true;
      bVar4 = true;
      bVar5 = true;
      bVar6 = true;
      lVar11 = 1;
    }
    else {
      puVar9 = &DAT_04be2390;
      if (DAT_04be2390 < uVar1) {
        bVar6 = false;
        bVar2 = true;
        lVar11 = 2;
        bVar3 = true;
        bVar4 = true;
        bVar5 = true;
      }
      else {
        puVar9 = &DAT_04be23a0;
        if (DAT_04be23a0 < uVar1) {
          bVar5 = false;
          bVar6 = false;
          bVar2 = true;
          lVar11 = 3;
          bVar3 = true;
          bVar4 = true;
        }
        else {
          puVar9 = &DAT_04be23b0;
          if (DAT_04be23b0 < uVar1) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            bVar2 = true;
            lVar11 = 4;
            bVar3 = true;
          }
          else {
            puVar9 = &DAT_04be23c0;
            if (DAT_04be23c0 < uVar1) {
              bVar3 = false;
              bVar4 = false;
              bVar5 = false;
              bVar6 = false;
              bVar2 = true;
              lVar11 = 5;
            }
            else {
              puVar9 = &DAT_04be23d0;
              if (uVar1 <= DAT_04be23d0) {
                piVar10 = &DAT_04be23d8;
                puVar9 = &DAT_04be23e0;
                if (uVar1 <= DAT_04be23e0) {
                  return;
                }
                goto LAB_00221cd8;
              }
              bVar2 = false;
              bVar3 = false;
              bVar4 = false;
              bVar5 = false;
              bVar6 = false;
              lVar11 = 6;
            }
          }
        }
      }
    }
  }
  DAT_04be23d8 = DAT_04be23c8;
  DAT_04be23e0 = DAT_04be23d0;
  if (bVar2) {
    DAT_04be23c8 = DAT_04be23b8;
    DAT_04be23d0 = DAT_04be23c0;
    if (bVar3) {
      DAT_04be23b8 = DAT_04be23a8;
      DAT_04be23c0 = DAT_04be23b0;
      if (bVar4) {
        DAT_04be23a8 = DAT_04be2398;
        DAT_04be23b0 = DAT_04be23a0;
        if (bVar5) {
          DAT_04be2398 = DAT_04be2388;
          DAT_04be23a0 = DAT_04be2390;
          if (bVar6) {
            DAT_04be2388 = DAT_04be2378;
            DAT_04be2390 = DAT_04be2380;
            if (DAT_04be2370 < uVar1) {
              DAT_04be2378 = DAT_04be2368;
              DAT_04be2380 = DAT_04be2370;
            }
          }
        }
      }
    }
  }
  piVar10 = &DAT_04be2368 + lVar11 * 4;
LAB_00221cd8:
  *piVar10 = iVar7;
  *puVar9 = uVar1;
  return;
}

