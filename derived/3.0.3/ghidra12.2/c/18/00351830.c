
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00351830(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar2 = param_2[6];
  puVar7 = (undefined8 *)param_2[4];
  if (param_3 < uVar2) {
    if (((puVar7 == (undefined8 *)0x0) || (*(char *)((long)puVar7 + 0x39) != '\x01')) &&
       ((puVar7[4] == 0 || (*(char *)(puVar7[4] + 0x39) != '\x01')))) {
      *(bool *)((long)param_2 + 0x39) = *(char *)((long)param_2 + 0x39) == '\0';
      *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
      *(bool *)(param_2[5] + 0x39) = *(char *)(param_2[5] + 0x39) == '\0';
      lVar3 = param_2[5];
      puVar7 = *(undefined8 **)(lVar3 + 0x20);
      if ((puVar7 != (undefined8 *)0x0) && (*(char *)((long)puVar7 + 0x39) == '\x01')) {
        *(undefined8 *)(lVar3 + 0x20) = puVar7[5];
        puVar7[5] = lVar3;
        *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)(lVar3 + 0x39);
        *(undefined1 *)(lVar3 + 0x39) = 1;
        param_2[5] = puVar7;
        param_2[5] = puVar7[4];
        puVar7[4] = param_2;
        *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
        *(undefined1 *)((long)param_2 + 0x39) = 1;
        *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
        *(bool *)(puVar7[4] + 0x39) = *(char *)(puVar7[4] + 0x39) == '\0';
        *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
        uVar1 = FUN_00351830(param_1,puVar7[4]);
        puVar7[4] = uVar1;
        puVar4 = (undefined8 *)puVar7[5];
        param_2 = puVar7;
        goto joined_r0x00351afc;
      }
    }
    uVar1 = FUN_00351830(param_1,param_2[4]);
    param_2[4] = uVar1;
    puVar4 = (undefined8 *)param_2[5];
  }
  else {
    if ((puVar7 == (undefined8 *)0x0) || (*(char *)((long)puVar7 + 0x39) != '\x01')) {
      lVar3 = param_2[5];
      puVar7 = param_2;
    }
    else {
      param_2[4] = puVar7[5];
      puVar7[5] = param_2;
      *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      *(undefined1 *)((long)param_2 + 0x39) = 1;
      lVar3 = puVar7[5];
      uVar2 = puVar7[6];
    }
    if ((uVar2 == param_3) && (lVar3 == 0)) {
      *puVar7 = *(undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = puVar7;
      return (undefined8 *)0x0;
    }
    if ((*(char *)(lVar3 + 0x39) != '\x01') &&
       ((*(long *)(lVar3 + 0x20) == 0 || (*(char *)(*(long *)(lVar3 + 0x20) + 0x39) != '\x01')))) {
      *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
      *(bool *)(puVar7[4] + 0x39) = *(char *)(puVar7[4] + 0x39) == '\0';
      *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
      puVar4 = (undefined8 *)puVar7[4];
      if ((puVar4[4] != 0) && (*(char *)(puVar4[4] + 0x39) == '\x01')) {
        puVar7[4] = puVar4[5];
        puVar4[5] = puVar7;
        *(undefined1 *)((long)puVar4 + 0x39) = *(undefined1 *)((long)puVar7 + 0x39);
        *(undefined1 *)((long)puVar7 + 0x39) = 1;
        *(bool *)((long)puVar4 + 0x39) = *(char *)((long)puVar4 + 0x39) == '\0';
        *(bool *)(puVar4[4] + 0x39) = *(char *)(puVar4[4] + 0x39) == '\0';
        *(bool *)(puVar4[5] + 0x39) = *(char *)(puVar4[5] + 0x39) == '\0';
        puVar7 = puVar4;
      }
    }
    puVar4 = (undefined8 *)puVar7[5];
    if (puVar7[6] == param_3) {
      puVar6 = puVar4;
      do {
        puVar5 = puVar6;
        puVar6 = (undefined8 *)puVar5[4];
      } while (puVar6 != (undefined8 *)0x0);
      if (puVar4 == (undefined8 *)0x0) {
        param_2 = (undefined8 *)0x0;
      }
      else {
        uVar2 = puVar5[6];
        param_2 = puVar4;
        do {
          while ((ulong)param_2[6] <= uVar2) {
            if ((uVar2 <= (ulong)param_2[6]) ||
               (param_2 = (undefined8 *)param_2[5], param_2 == (undefined8 *)0x0))
            goto LAB_00351b28;
          }
          param_2 = (undefined8 *)param_2[4];
        } while (param_2 != (undefined8 *)0x0);
      }
LAB_00351b28:
      uVar1 = FUN_00351c78(puVar4);
      param_2[5] = uVar1;
      param_2[4] = puVar7[4];
      *(undefined1 *)((long)param_2 + 0x39) = *(undefined1 *)((long)puVar7 + 0x39);
      *puVar7 = *(undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = puVar7;
      puVar4 = (undefined8 *)param_2[5];
    }
    else {
      puVar4 = (undefined8 *)FUN_00351830(param_1);
      puVar7[5] = puVar4;
      param_2 = puVar7;
    }
  }
joined_r0x00351afc:
  if ((puVar4 == (undefined8 *)0x0) || (*(char *)((long)puVar4 + 0x39) != '\x01')) {
    puVar7 = (undefined8 *)param_2[4];
  }
  else {
    param_2[5] = puVar4[4];
    puVar4[4] = param_2;
    *(undefined1 *)((long)puVar4 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    puVar7 = (undefined8 *)puVar4[4];
    param_2 = puVar4;
  }
  if ((puVar7 == (undefined8 *)0x0) || (*(char *)((long)puVar7 + 0x39) != '\x01')) {
    return param_2;
  }
  if ((puVar7[4] == 0) || (*(char *)(puVar7[4] + 0x39) != '\x01')) {
    lVar3 = param_2[5];
    puVar4 = puVar7;
    puVar7 = param_2;
  }
  else {
    param_2[4] = puVar7[5];
    puVar7[5] = param_2;
    *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    puVar4 = (undefined8 *)puVar7[4];
    if (puVar4 == (undefined8 *)0x0) {
      return puVar7;
    }
    if (*(char *)((long)puVar4 + 0x39) != '\x01') {
      return puVar7;
    }
    lVar3 = puVar7[5];
  }
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x39) != '\x01')) {
    return puVar7;
  }
  *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
  *(bool *)((long)puVar4 + 0x39) = *(char *)((long)puVar4 + 0x39) == '\0';
  *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
  return puVar7;
}

