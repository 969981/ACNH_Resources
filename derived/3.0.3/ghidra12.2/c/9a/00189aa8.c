
void FUN_00189aa8(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  
  lVar1 = param_1[4];
  if (lVar1 == param_1[3]) {
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
    FUN_0018ff40(param_1,param_2);
    return;
  }
  if (*(ulong *)(lVar1 + -0x10) != 0) {
    plVar7 = (long *)*param_1;
    if (*(char *)(lVar1 + -8) == '\0') {
      uVar4 = 0x2c;
      if ((*(ulong *)(lVar1 + -0x10) & 1) != 0) {
        uVar4 = 0x3a;
      }
      puVar3 = (undefined1 *)plVar7[3];
      puVar6 = (undefined1 *)plVar7[4];
      if (puVar6 < puVar3 + 1) {
        lVar5 = plVar7[2];
        if (lVar5 == 0) {
          if (*plVar7 == 0) {
            if (DAT_04c57ea0 == (code *)0x0) {
              puVar2 = malloc(0x18);
            }
            else {
              puVar2 = (undefined8 *)(*DAT_04c57ea0)(0x18);
            }
            puVar6 = (undefined1 *)plVar7[5];
            *puVar2 = DAT_04c57ea8;
            lVar5 = plVar7[2];
            puVar3 = (undefined1 *)plVar7[3];
            *plVar7 = (long)(puVar2 + 2);
            plVar7[1] = (long)(puVar2 + 2);
          }
          else {
            puVar6 = (undefined1 *)plVar7[5];
            lVar5 = 0;
          }
        }
        else {
          puVar6 = puVar6 + (((ulong)(puVar6 + (1 - lVar5)) >> 1) - lVar5);
        }
        if (puVar6 <= puVar3 + (1 - lVar5)) {
          puVar6 = puVar3 + (1 - lVar5);
        }
        FUN_0018f24c(plVar7,puVar6);
        puVar3 = (undefined1 *)plVar7[3];
      }
      plVar7[3] = (long)(puVar3 + 1);
    }
    else {
      puVar3 = (undefined1 *)plVar7[3];
      puVar6 = (undefined1 *)plVar7[4];
      if (puVar6 < puVar3 + 1) {
        lVar5 = plVar7[2];
        if (lVar5 == 0) {
          if (*plVar7 == 0) {
            if (DAT_04c57ea0 == (code *)0x0) {
              puVar2 = malloc(0x18);
            }
            else {
              puVar2 = (undefined8 *)(*DAT_04c57ea0)(0x18);
            }
            puVar6 = (undefined1 *)plVar7[5];
            *puVar2 = DAT_04c57ea8;
            lVar5 = plVar7[2];
            puVar3 = (undefined1 *)plVar7[3];
            *plVar7 = (long)(puVar2 + 2);
            plVar7[1] = (long)(puVar2 + 2);
          }
          else {
            puVar6 = (undefined1 *)plVar7[5];
            lVar5 = 0;
          }
        }
        else {
          puVar6 = puVar6 + (((ulong)(puVar6 + (1 - lVar5)) >> 1) - lVar5);
        }
        if (puVar6 <= puVar3 + (1 - lVar5)) {
          puVar6 = puVar3 + (1 - lVar5);
        }
        FUN_0018f24c(plVar7,puVar6);
        puVar3 = (undefined1 *)plVar7[3];
      }
      plVar7[3] = (long)(puVar3 + 1);
      uVar4 = 0x2c;
    }
    *puVar3 = uVar4;
  }
  *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x10) + 1;
  FUN_0018ff40(param_1,param_2);
  return;
}

