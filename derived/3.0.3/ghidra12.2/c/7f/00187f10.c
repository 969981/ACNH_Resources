
void FUN_00187f10(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  ulong uVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar4 = PTR_DAT_04bcbd18;
  (**(code **)(*(long *)PTR_DAT_04bcbd18 + 0x10))(PTR_DAT_04bcbd18);
  if (*(long *)(param_1 + 0x40) != 0) goto LAB_00187f40;
  (**(code **)(*(long *)puVar4 + 0x10))(puVar4);
  cVar5 = DAT_04be20e8;
  (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  if ((cVar5 == '\0') || (uVar6 = FUN_00188244(), puVar2 = PTR_DAT_04bcb900, (uVar6 & 1) == 0))
  goto LAB_00187f40;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_00187fe4:
    if (((*plVar8 != 0) && (lVar10 = *(long *)(*plVar8 + 0x10), lVar10 != 0)) &&
       (plVar8 = *(long **)(lVar10 + 0xe8), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0xa0))();
    }
  }
  else {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    puVar3 = PTR_DAT_04bcbc88;
    uVar1 = *puVar7;
    if (uVar1 == 0) goto LAB_00187fe4;
    lVar10 = **(long **)(puVar2 + 0xa0);
    if ((ulong)uVar1 < (ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar10 >> 3)) {
      plVar8 = (long *)(*(long *)(lVar10 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_00187fe4;
    }
    local_24 = 0xe0000003;
    local_28 = 0;
    FUN_0018cd00(*(long *)PTR_DAT_04bcbc88 + 0x38,&local_24);
    FUN_0018cd00(*(long *)puVar3 + 0xb8,&local_28);
  }
  FUN_00188568(param_1);
  plVar8 = *(long **)(param_1 + 0x68);
  if (plVar8 != (long *)0x0) {
    if ((char)plVar8[3] != '\0') {
      lVar10 = *plVar8;
      uVar6 = plVar8[1];
      *(undefined1 *)(plVar8 + 3) = 0;
      if (uVar6 == 0) {
        if (lVar10 != 0) goto LAB_001880cc;
      }
      else {
        uVar11 = uVar6 & 3;
        if (uVar6 < 4) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          puVar9 = (undefined8 *)(lVar10 + 0xf0);
          do {
            uVar13 = uVar13 + 4;
            puVar9[-0x1a] = 0;
            puVar9[-0xd] = 0;
            *puVar9 = 0;
            puVar9[0xd] = 0;
            puVar9 = puVar9 + 0x34;
          } while ((uVar6 & 0xfffffffffffffffc) != uVar13);
        }
        if (uVar11 != 0) {
          puVar9 = (undefined8 *)(lVar10 + uVar13 * 0x68 + 0x20);
          do {
            uVar11 = uVar11 - 1;
            *puVar9 = 0;
            puVar9 = puVar9 + 0xd;
          } while (uVar11 != 0);
        }
LAB_001880cc:
        pcVar12 = *(code **)(lVar10 + -0x18);
        if (pcVar12 == (code *)0x0) {
          free((undefined8 *)(lVar10 + -0x18));
        }
        else {
          (*pcVar12)();
        }
      }
      *plVar8 = 0;
      if ((long *)plVar8[4] != (long *)0x0) {
        (**(code **)(*(long *)plVar8[4] + 8))();
        plVar8[4] = 0;
      }
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x68) + -0x10);
      pcVar12 = (code *)*puVar9;
      if (pcVar12 == (code *)0x0) {
        free(puVar9);
      }
      else {
        (*pcVar12)();
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
  plVar8 = *(long **)(param_1 + 0x60);
  if (plVar8 != (long *)0x0) {
    if ((char)plVar8[3] != '\0') {
      lVar10 = *plVar8;
      uVar6 = plVar8[1];
      *(undefined1 *)(plVar8 + 3) = 0;
      if (uVar6 == 0) {
        if (lVar10 != 0) goto LAB_0018819c;
      }
      else {
        uVar11 = uVar6 & 3;
        if (uVar6 < 4) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          puVar9 = (undefined8 *)(lVar10 + 0xf0);
          do {
            uVar13 = uVar13 + 4;
            puVar9[-0x1a] = 0;
            puVar9[-0xd] = 0;
            *puVar9 = 0;
            puVar9[0xd] = 0;
            puVar9 = puVar9 + 0x34;
          } while ((uVar6 & 0xfffffffffffffffc) != uVar13);
        }
        if (uVar11 != 0) {
          puVar9 = (undefined8 *)(lVar10 + uVar13 * 0x68 + 0x20);
          do {
            uVar11 = uVar11 - 1;
            *puVar9 = 0;
            puVar9 = puVar9 + 0xd;
          } while (uVar11 != 0);
        }
LAB_0018819c:
        pcVar12 = *(code **)(lVar10 + -0x18);
        if (pcVar12 == (code *)0x0) {
          free((undefined8 *)(lVar10 + -0x18));
        }
        else {
          (*pcVar12)();
        }
      }
      *plVar8 = 0;
      if ((long *)plVar8[4] != (long *)0x0) {
        (**(code **)(*(long *)plVar8[4] + 8))();
        plVar8[4] = 0;
      }
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x60) + -0x10);
      pcVar12 = (code *)*puVar9;
      if (pcVar12 == (code *)0x0) {
        free(puVar9);
      }
      else {
        (*pcVar12)();
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + -0x10);
    pcVar12 = (code *)*puVar9;
    if (pcVar12 == (code *)0x0) {
      free(puVar9);
    }
    else {
      (*pcVar12)();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
LAB_00187f40:
  (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  return;
}

