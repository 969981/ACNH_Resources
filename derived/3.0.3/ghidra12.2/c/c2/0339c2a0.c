
void FUN_0339c2a0(long param_1)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *local_a0;
  undefined **ppuStack_98;
  undefined1 *local_90;
  undefined **local_80;
  undefined1 uStack_69;
  long local_68;
  
  local_90 = &uStack_69;
  ppuStack_98 = &local_a0;
  local_a0 = &DAT_04b241d0;
  local_80 = ppuStack_98;
  if (*(long *)(param_1 + 0x48) != param_1 + 0x40) {
    lVar8 = (long)*(int *)(param_1 + 0x54);
    lVar10 = *(long *)(param_1 + 0x48) - lVar8;
    do {
      lVar5 = *(long *)(lVar10 + 0xa0);
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x80) != lVar5 + 0x78) {
          lVar11 = (long)*(int *)(lVar5 + 0x8c);
          lVar12 = *(long *)(lVar5 + 0x80) - lVar11;
          do {
            if (*(int *)(lVar12 + 0x48) - 3U < 5) {
              iVar2 = *(int *)(lVar12 + 0x48);
              if (iVar2 == 6) {
                uVar7 = 5;
              }
              else {
                uVar7 = 5;
                if (iVar2 != 4) {
                  if (iVar2 != 3) goto LAB_0339c338;
                  lVar9 = *(long *)(lVar12 + 0x58);
                  FUN_038e2f80(lVar9 + 0x110);
                  plVar1 = (long *)(*(int *)(lVar9 + 0x74) + lVar12);
                  if (*plVar1 != 0) {
                    *(long *)(*plVar1 + 8) = plVar1[1];
                  }
                  if ((long *)plVar1[1] != (long *)0x0) {
                    *(long *)plVar1[1] = *plVar1;
                  }
                  *plVar1 = 0;
                  plVar1[1] = 0;
                  *(int *)(lVar9 + 0x70) = *(int *)(lVar9 + 0x70) + -1;
                  FUN_038e3040(lVar9 + 0x110);
                  uVar7 = 2;
                  *(undefined8 *)(lVar12 + 0x58) = 0;
                }
              }
              *(undefined4 *)(lVar12 + 0x48) = uVar7;
            }
LAB_0339c338:
            lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
          } while (lVar12 != (lVar5 + 0x78) - lVar11);
        }
      }
      local_68 = lVar10;
      if (local_80 == (undefined **)0x0) {
        FUN_032d2700();
                    /* WARNING: Does not return */
        pcVar3 = (code *)UndefinedInstructionException(0,0x339c46c);
        (*pcVar3)();
      }
      (**(code **)(*local_80 + 0x30))(local_80,&local_68);
      lVar10 = *(long *)(lVar10 + lVar8 + 8) - lVar8;
    } while (lVar10 != (param_1 + 0x40) - lVar8);
    if (local_80 != &local_a0) {
      if (local_80 == (undefined **)0x0) {
        return;
      }
      puVar6 = (undefined8 *)(*local_80 + 0x28);
      ppuVar4 = local_80;
      goto LAB_0339c440;
    }
  }
  puVar6 = (undefined8 *)(local_a0 + 0x20);
  ppuVar4 = &local_a0;
LAB_0339c440:
  (*(code *)*puVar6)(ppuVar4);
  return;
}

