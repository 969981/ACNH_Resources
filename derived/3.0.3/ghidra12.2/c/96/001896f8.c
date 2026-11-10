
undefined8 FUN_001896f8(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 == (undefined8 *)param_1[3]) {
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
    if (puVar1 + 2 <= (undefined8 *)param_1[5]) goto LAB_00189794;
  }
  else {
    if (puVar1[-2] != 0) {
      lVar5 = *param_1;
      if (*(char *)(puVar1 + -1) == '\0') {
        uVar3 = 0x2c;
        if ((puVar1[-2] & 1) != 0) {
          uVar3 = 0x3a;
        }
        puVar4 = *(undefined1 **)(lVar5 + 0x18);
        if (*(undefined1 **)(lVar5 + 0x20) < puVar4 + 1) {
          FUN_0018f1a8(lVar5,1);
          puVar4 = *(undefined1 **)(lVar5 + 0x18);
        }
        *(undefined1 **)(lVar5 + 0x18) = puVar4 + 1;
        *puVar4 = uVar3;
      }
      else {
        puVar4 = *(undefined1 **)(lVar5 + 0x18);
        if (*(undefined1 **)(lVar5 + 0x20) < puVar4 + 1) {
          FUN_0018f1a8(lVar5,1);
          puVar4 = *(undefined1 **)(lVar5 + 0x18);
        }
        *(undefined1 **)(lVar5 + 0x18) = puVar4 + 1;
        *puVar4 = 0x2c;
      }
    }
    puVar1[-2] = puVar1[-2] + 1;
    puVar1 = (undefined8 *)param_1[4];
    if (puVar1 + 2 <= (undefined8 *)param_1[5]) goto LAB_00189794;
  }
  FUN_0018f32c(param_1 + 1,1);
  puVar1 = (undefined8 *)param_1[4];
LAB_00189794:
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  param_1[4] = (long)(puVar1 + 2);
  param_1 = (long *)*param_1;
  puVar2 = (undefined1 *)param_1[3];
  puVar4 = (undefined1 *)param_1[4];
  if (puVar4 < puVar2 + 1) {
    lVar5 = param_1[2];
    if (lVar5 == 0) {
      if (*param_1 == 0) {
        if (DAT_04c57ea0 == (code *)0x0) {
          puVar1 = malloc(0x18);
        }
        else {
          puVar1 = (undefined8 *)(*DAT_04c57ea0)(0x18);
        }
        puVar4 = (undefined1 *)param_1[5];
        *puVar1 = DAT_04c57ea8;
        lVar5 = param_1[2];
        puVar2 = (undefined1 *)param_1[3];
        *param_1 = (long)(puVar1 + 2);
        param_1[1] = (long)(puVar1 + 2);
      }
      else {
        puVar4 = (undefined1 *)param_1[5];
        lVar5 = 0;
      }
    }
    else {
      puVar4 = puVar4 + (((ulong)(puVar4 + (1 - lVar5)) >> 1) - lVar5);
    }
    if (puVar4 <= puVar2 + (1 - lVar5)) {
      puVar4 = puVar2 + (1 - lVar5);
    }
    FUN_0018f24c(param_1,puVar4);
    puVar2 = (undefined1 *)param_1[3];
  }
  param_1[3] = (long)(puVar2 + 1);
  *puVar2 = 0x7b;
  return 1;
}

