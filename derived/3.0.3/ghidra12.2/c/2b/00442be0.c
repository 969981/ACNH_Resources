
void FUN_00442be0(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (DAT_04c6f290 != '\0') {
    return;
  }
  FUN_0043c510();
  nn::os::GetSystemTickFrequency();
  FUN_0043c520();
  FUN_0043c4e0(DAT_04c6f050);
  FUN_00438940(param_1);
  FUN_00443df0();
  puVar3 = (undefined8 *)FUN_00445240();
  if (DAT_04c6f288 != puVar3) {
    puVar4 = DAT_04c6f288;
    do {
      puVar5 = puVar4;
      if (puVar5 == (undefined8 *)0x0) {
        puVar4 = DAT_04c6f288;
        puVar3 = DAT_04c6f288;
        if (DAT_04c6f288 != (undefined8 *)&DAT_04c6f380) goto LAB_00442ca4;
        goto LAB_00442cd4;
      }
      puVar4 = (undefined8 *)puVar5[4];
    } while ((undefined8 *)puVar5[4] != puVar3);
    puVar5[4] = puVar3[4];
    puVar3[4] = DAT_04c6f288;
    DAT_04c6f288 = puVar3;
  }
  puVar4 = puVar3;
  if (puVar3 == (undefined8 *)&DAT_04c6f380) {
LAB_00442cd4:
    if (puVar3 != (undefined8 *)&DAT_04c6f260) goto LAB_00442ce4;
  }
  else {
LAB_00442ca4:
    puVar3 = puVar4;
    do {
      puVar5 = puVar3;
      puVar3 = puVar4;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00442cd4;
      puVar3 = (undefined8 *)puVar5[4];
    } while ((undefined8 *)puVar5[4] != (undefined8 *)&DAT_04c6f380);
    puVar5[4] = DAT_04c6f3a0;
    puVar3 = (undefined8 *)&DAT_04c6f380;
    DAT_04c6f288 = (undefined8 *)&DAT_04c6f380;
    DAT_04c6f3a0 = puVar4;
LAB_00442ce4:
    puVar4 = puVar3;
    do {
      puVar5 = puVar4;
      if (puVar5 == (undefined8 *)0x0) {
        puVar4 = puVar3;
        if (puVar3 != (undefined8 *)&DAT_04c6f0e8) goto LAB_00442d38;
        goto LAB_00442d5c;
      }
      puVar4 = (undefined8 *)puVar5[4];
    } while ((undefined8 *)puVar5[4] != (undefined8 *)&DAT_04c6f260);
    puVar5[4] = DAT_04c6f280;
    DAT_04c6f288 = (undefined8 *)&DAT_04c6f260;
    DAT_04c6f280 = puVar3;
  }
  puVar3 = (undefined8 *)&DAT_04c6f260;
  puVar4 = puVar3;
LAB_00442d38:
  do {
    puVar5 = puVar4;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00442d5c;
    puVar4 = (undefined8 *)puVar5[4];
  } while ((undefined8 *)puVar5[4] != (undefined8 *)&DAT_04c6f0e8);
  puVar5[4] = DAT_04c6f108;
  DAT_04c6f288 = (undefined8 *)&DAT_04c6f0e8;
  DAT_04c6f108 = puVar3;
LAB_00442d5c:
  puVar3 = (undefined8 *)FUN_004439a0();
  if (DAT_04c6f288 != puVar3) {
    puVar4 = DAT_04c6f288;
    do {
      puVar5 = puVar4;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00442d94;
      puVar4 = (undefined8 *)puVar5[4];
    } while ((undefined8 *)puVar5[4] != puVar3);
    puVar5[4] = puVar3[4];
    puVar3[4] = DAT_04c6f288;
    DAT_04c6f288 = puVar3;
  }
LAB_00442d94:
  puVar3 = (undefined8 *)FUN_00446dc0();
  if (DAT_04c6f288 != puVar3) {
    puVar4 = DAT_04c6f288;
    do {
      puVar5 = puVar4;
      if (puVar5 == (undefined8 *)0x0) {
        puVar4 = DAT_04c6f288;
        puVar3 = DAT_04c6f288;
        if (DAT_04c6f288 != &DAT_04c6f6e8) goto LAB_00442df8;
        goto LAB_00442e28;
      }
      puVar4 = (undefined8 *)puVar5[4];
    } while ((undefined8 *)puVar5[4] != puVar3);
    puVar5[4] = puVar3[4];
    puVar3[4] = DAT_04c6f288;
    DAT_04c6f288 = puVar3;
  }
  puVar4 = puVar3;
  if (puVar3 == &DAT_04c6f6e8) {
LAB_00442e28:
    if (puVar3 == (undefined8 *)0x0) goto LAB_00442e9c;
  }
  else {
LAB_00442df8:
    puVar3 = puVar4;
    do {
      puVar5 = puVar3;
      puVar3 = puVar4;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00442e28;
      puVar3 = (undefined8 *)puVar5[4];
    } while ((undefined8 *)puVar5[4] != &DAT_04c6f6e8);
    puVar5[4] = DAT_04c6f708;
    DAT_04c6f288 = &DAT_04c6f6e8;
    puVar3 = &DAT_04c6f6e8;
    DAT_04c6f708 = puVar4;
  }
  do {
    if (((char *)*puVar3 != (char *)0x0) &&
       (iVar2 = strcmp((char *)*puVar3,"Set Keycodes"), iVar2 == 0)) {
      if (DAT_04c6f288 != (undefined8 *)0x0) {
        puVar4 = DAT_04c6f288 + 4;
        puVar1 = (undefined8 *)*puVar4;
        puVar5 = DAT_04c6f288;
        goto joined_r0x00442e64;
      }
      break;
    }
    puVar3 = (undefined8 *)puVar3[4];
  } while (puVar3 != (undefined8 *)0x0);
LAB_00442e9c:
  puVar3 = &DAT_04c6f2a8;
  do {
    if ((code *)puVar3[1] != (code *)0x0) {
      (*(code *)puVar3[1])(puVar3[3]);
    }
    puVar3 = (undefined8 *)puVar3[4];
  } while (puVar3 != (undefined8 *)0x0);
  DAT_04c6f290 = 1;
  return;
joined_r0x00442e64:
  puVar6 = puVar1;
  if (puVar6 == (undefined8 *)0x0) goto LAB_00442e8c;
  if (puVar6 == puVar3) {
    puVar6 = (undefined8 *)puVar3[4];
    *puVar4 = puVar6;
    if (puVar6 == (undefined8 *)0x0) goto LAB_00442e8c;
  }
  puVar4 = puVar6 + 4;
  puVar1 = (undefined8 *)*puVar4;
  puVar5 = puVar6;
  goto joined_r0x00442e64;
LAB_00442e8c:
  if (puVar5 != puVar3) {
    *puVar4 = puVar3;
    puVar3[4] = 0;
  }
  goto LAB_00442e9c;
}

