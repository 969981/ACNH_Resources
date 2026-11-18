
void FUN_035166e0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **local_40;
  long lStack_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  
  iVar3 = 0;
  do {
    puVar5 = (undefined8 *)(param_1 + 0xdae8 + (long)iVar3 * 0x18);
    puVar6 = (undefined8 *)puVar5[1];
    while (puVar6 != puVar5) {
      puVar7 = (undefined8 *)puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar7;
    }
    iVar3 = iVar3 + 1;
    *(undefined4 *)(puVar5 + 2) = 0;
    *puVar5 = puVar5;
    puVar5[1] = puVar5;
  } while (iVar3 != 0x30);
  if (0 < *(int *)(param_1 + 8)) {
    lVar4 = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar5 = puVar6;
      *(undefined8 **)(param_1 + 0x18) = puVar5;
      puVar6 = puVar5;
    } while (lVar4 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  local_40 = &PTR_LAB_04b34e50;
  local_30 = &LAB_035168a0;
  uStack_28 = 0;
  lStack_38 = param_1;
  FUN_0377a120(&local_40);
  iVar3 = 0;
  do {
    puVar6 = (undefined8 *)(param_1 + 0xdae8 + (long)iVar3 * 0x18);
    if ((1 < *(int *)(puVar6 + 2)) && (*(undefined8 **)(puVar6[1] + 8) != puVar6)) {
      lVar4 = -(long)*(int *)((long)puVar6 + 0x14);
      puVar5 = *(undefined8 **)(puVar6[1] + 8);
      do {
        puVar7 = (undefined8 *)puVar5[1];
        puVar9 = (undefined8 *)*puVar5;
        iVar1 = *(int *)((long)puVar5 + lVar4 + 0x60);
        if (iVar1 < *(int *)((long)puVar9 + lVar4 + 0x60)) {
          puVar8 = puVar9;
          do {
            puVar8 = (undefined8 *)*puVar8;
            puVar2 = puVar6;
            if (puVar8 == puVar6) break;
            puVar2 = puVar8;
          } while (iVar1 < *(int *)((long)puVar8 + lVar4 + 0x60));
          puVar8 = puVar7;
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[1] = puVar7;
            puVar8 = (undefined8 *)puVar5[1];
          }
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = *puVar5;
          }
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar9 = (undefined8 *)puVar2[1];
          puVar2[1] = puVar5;
          *puVar5 = puVar2;
          puVar5[1] = puVar9;
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = puVar5;
          }
        }
        puVar5 = puVar7;
      } while (puVar7 != puVar6);
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x30) {
      return;
    }
  } while( true );
}

