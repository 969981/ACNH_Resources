
void FUN_0041ff80(undefined8 *param_1,uint param_2)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  
  lVar1 = param_1[4];
  if (lVar1 == param_1[3]) {
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  else {
    if (*(ulong *)(lVar1 + -0x10) != 0) {
      plVar8 = (long *)*param_1;
      if (*(char *)(lVar1 + -8) == '\0') {
        uVar5 = 0x2c;
        if ((*(ulong *)(lVar1 + -0x10) & 1) != 0) {
          uVar5 = 0x3a;
        }
        puVar3 = (undefined1 *)plVar8[3];
        puVar6 = (undefined1 *)plVar8[4];
        if (puVar6 < puVar3 + 1) {
          pvVar7 = (void *)plVar8[2];
          if (pvVar7 == (void *)0x0) {
            if (*plVar8 == 0) {
              lVar9 = FUN_00187df4(1);
              pvVar7 = (void *)plVar8[2];
              puVar3 = (undefined1 *)plVar8[3];
              puVar6 = (undefined1 *)plVar8[5];
              *plVar8 = lVar9;
              plVar8[1] = lVar9;
            }
            else {
              puVar6 = (undefined1 *)plVar8[5];
              pvVar7 = (void *)0x0;
            }
          }
          else {
            puVar6 = puVar6 + (((ulong)(puVar6 + (1 - (long)pvVar7)) >> 1) - (long)pvVar7);
          }
          lVar9 = (long)puVar3 - (long)pvVar7;
          if (puVar6 <= (undefined1 *)(lVar9 + 1U)) {
            puVar6 = (undefined1 *)(lVar9 + 1);
          }
          if (puVar6 == (undefined1 *)0x0) {
            pvVar2 = (void *)0x0;
          }
          else {
            lVar4 = plVar8[4];
            pvVar2 = (void *)FUN_00187df4(puVar6);
            puVar3 = puVar6;
            if ((undefined1 *)(lVar4 - (long)pvVar7) <= puVar6) {
              puVar3 = (undefined1 *)(lVar4 - (long)pvVar7);
            }
            memcpy(pvVar2,pvVar7,(size_t)puVar3);
          }
          FUN_00187e4c(pvVar7);
          puVar3 = (undefined1 *)((long)pvVar2 + lVar9);
          plVar8[2] = (long)pvVar2;
          plVar8[4] = (long)((long)pvVar2 + (long)puVar6);
        }
        plVar8[3] = (long)(puVar3 + 1);
      }
      else {
        puVar3 = (undefined1 *)plVar8[3];
        puVar6 = (undefined1 *)plVar8[4];
        if (puVar6 < puVar3 + 1) {
          pvVar7 = (void *)plVar8[2];
          if (pvVar7 == (void *)0x0) {
            if (*plVar8 == 0) {
              lVar9 = FUN_00187df4(1);
              pvVar7 = (void *)plVar8[2];
              puVar3 = (undefined1 *)plVar8[3];
              puVar6 = (undefined1 *)plVar8[5];
              *plVar8 = lVar9;
              plVar8[1] = lVar9;
            }
            else {
              puVar6 = (undefined1 *)plVar8[5];
              pvVar7 = (void *)0x0;
            }
          }
          else {
            puVar6 = puVar6 + (((ulong)(puVar6 + (1 - (long)pvVar7)) >> 1) - (long)pvVar7);
          }
          lVar9 = (long)puVar3 - (long)pvVar7;
          if (puVar6 <= (undefined1 *)(lVar9 + 1U)) {
            puVar6 = (undefined1 *)(lVar9 + 1);
          }
          if (puVar6 == (undefined1 *)0x0) {
            pvVar2 = (void *)0x0;
          }
          else {
            lVar4 = plVar8[4];
            pvVar2 = (void *)FUN_00187df4(puVar6);
            puVar3 = puVar6;
            if ((undefined1 *)(lVar4 - (long)pvVar7) <= puVar6) {
              puVar3 = (undefined1 *)(lVar4 - (long)pvVar7);
            }
            memcpy(pvVar2,pvVar7,(size_t)puVar3);
          }
          FUN_00187e4c(pvVar7);
          puVar3 = (undefined1 *)((long)pvVar2 + lVar9);
          plVar8[2] = (long)pvVar2;
          plVar8[4] = (long)((long)pvVar2 + (long)puVar6);
        }
        plVar8[3] = (long)(puVar3 + 1);
        uVar5 = 0x2c;
      }
      *puVar3 = uVar5;
    }
    *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x10) + 1;
  }
  FUN_00421adc(param_1,param_2 & 1);
  return;
}

