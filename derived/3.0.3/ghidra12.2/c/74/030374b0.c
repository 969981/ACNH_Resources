
void FUN_030374b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  byte local_44 [4];
  
  if (0 < *(int *)(param_1 + 0x220)) {
    lVar10 = 0;
    puVar8 = *(undefined8 **)(param_1 + 0x230);
    do {
      puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x228) + lVar10 * 8);
      lVar10 = lVar10 + 1;
      *puVar12 = puVar8;
      *(undefined8 **)(param_1 + 0x230) = puVar12;
      puVar8 = puVar12;
    } while (lVar10 < *(int *)(param_1 + 0x220));
  }
  local_44[0] = *(byte *)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar10 = FUN_025830c0(DAT_055021a0,local_44,1);
  if (lVar10 != 0) {
    lVar11 = lVar10 + 0x194b0;
    if (*(long *)(lVar10 + 0x194b8) == 0) {
      lVar11 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar11 + 0x2ae60) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x2ae60), puVar8 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar8)();
      uVar7 = uVar7 ^ 1;
    }
    lVar10 = 0;
    plVar1 = (long *)(*(long *)(lVar11 + 0x2ae48) + *(long *)(lVar11 + 0x2ae40));
    iVar9 = *(int *)(param_1 + 0x220);
    do {
      if (*(int *)(param_1 + 0x224) <= iVar9) break;
      uVar6 = *(uint *)((long)plVar1 + lVar10 + 0x60e0);
      plVar2 = plVar1 + (ulong)uVar6 * 0x1f;
      if (99 < uVar6) {
        plVar2 = plVar1;
      }
      if ((*plVar2 != 0 && plVar2[1] != 0) && ((int)plVar2[2] != 0 && plVar2[6] != 0)) {
        if ((*(int *)((long)plVar2 + 0x54) != 0 && (int)plVar2[7] != 0) && ((short)plVar2[0xe] != 0)
           ) {
          plVar15 = *(long **)(param_1 + 0x230);
          if (plVar15 != (long *)0x0) {
            *(long *)(param_1 + 0x230) = *plVar15;
          }
          lVar4 = plVar2[1];
          lVar13 = plVar2[2];
          *plVar15 = *plVar2;
          plVar15[1] = lVar4;
          plVar15[2] = lVar13;
          lVar4 = plVar2[3];
          lVar13 = plVar2[4];
          lVar14 = plVar2[6];
          plVar15[5] = plVar2[5];
          plVar15[6] = lVar14;
          plVar15[3] = lVar4;
          plVar15[4] = lVar13;
          lVar14 = plVar2[9];
          lVar4 = plVar2[7];
          lVar13 = plVar2[8];
          *(int *)(plVar15 + 10) = (int)plVar2[10];
          plVar15[8] = lVar13;
          plVar15[9] = lVar14;
          plVar15[7] = lVar4;
          uVar3 = *(undefined8 *)((long)plVar2 + 0x54);
          uVar5 = *(undefined8 *)((long)plVar2 + 0x5c);
          *(undefined8 *)((long)plVar15 + 100) = *(undefined8 *)((long)plVar2 + 100);
          *(undefined8 *)((long)plVar15 + 0x5c) = uVar5;
          *(undefined8 *)((long)plVar15 + 0x54) = uVar3;
          uVar6 = *(uint *)((long)plVar2 + 0x6c);
          if (1 < uVar6) {
            uVar6 = 0;
          }
          *(uint *)((long)plVar15 + 0x6c) = uVar6;
          memcpy(plVar15 + 0xe,plVar2 + 0xe,0x88);
          iVar9 = *(int *)(param_1 + 0x220);
          if (iVar9 < *(int *)(param_1 + 0x224)) {
            *(long **)(*(long *)(param_1 + 0x228) + (long)iVar9 * 8) = plVar15;
            iVar9 = *(int *)(param_1 + 0x220) + 1;
            *(int *)(param_1 + 0x220) = iVar9;
          }
        }
      }
      lVar10 = lVar10 + 4;
    } while (lVar10 != 400);
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar11 + 0x2ae60) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x2ae60) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return;
}

