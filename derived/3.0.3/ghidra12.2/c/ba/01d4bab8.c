
void FUN_01d4bab8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if ((int)uVar2 < (int)uVar3) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = &DAT_0536d3b0;
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar2 = (uint)((long)(int)uVar1 + 1);
    *param_1 = uVar2;
    if ((int)uVar2 < (int)uVar3) {
      *(undefined8 **)(*(long *)(param_1 + 2) + ((long)(int)uVar1 + 1) * 8) = &DAT_0536d418;
      uVar3 = param_1[1];
      uVar2 = *param_1 + 1;
      *param_1 = uVar2;
      if ((int)uVar2 < (int)uVar3) goto LAB_01d4bb60;
LAB_01d4bafc:
      if ((int)uVar3 <= (int)uVar2) goto LAB_01d4bb04;
LAB_01d4bb84:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = &DAT_0536d4e8;
      uVar3 = param_1[1];
      uVar2 = *param_1 + 1;
      *param_1 = uVar2;
      if ((int)uVar2 < (int)uVar3) goto LAB_01d4bba8;
LAB_01d4bb0c:
      if ((int)uVar3 <= (int)uVar2) goto LAB_01d4bb14;
LAB_01d4bbcc:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = &DAT_0536d5b8;
      uVar3 = param_1[1];
      uVar2 = *param_1 + 1;
      *param_1 = uVar2;
      if ((int)uVar2 < (int)uVar3) goto LAB_01d4bbf0;
LAB_01d4bb1c:
      if ((int)uVar2 < (int)uVar3) {
LAB_01d4bc14:
        *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = &DAT_0536d688;
        uVar3 = param_1[1];
        uVar2 = *param_1 + 1;
        *param_1 = uVar2;
        if ((int)uVar2 < (int)uVar3) goto LAB_01d4bc38;
        goto LAB_01d4bc7c;
      }
    }
    else {
      if ((int)uVar3 <= (int)uVar2) goto LAB_01d4bafc;
LAB_01d4bb60:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = &DAT_0536d480;
      uVar3 = param_1[1];
      uVar2 = *param_1 + 1;
      *param_1 = uVar2;
      if ((int)uVar2 < (int)uVar3) goto LAB_01d4bb84;
LAB_01d4bb04:
      if ((int)uVar3 <= (int)uVar2) goto LAB_01d4bb0c;
LAB_01d4bba8:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = &DAT_0536d550;
      uVar3 = param_1[1];
      uVar2 = *param_1 + 1;
      *param_1 = uVar2;
      if ((int)uVar2 < (int)uVar3) goto LAB_01d4bbcc;
LAB_01d4bb14:
      if ((int)uVar3 <= (int)uVar2) goto LAB_01d4bb1c;
LAB_01d4bbf0:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = &DAT_0536d620;
      uVar3 = param_1[1];
      uVar2 = *param_1 + 1;
      *param_1 = uVar2;
      if ((int)uVar2 < (int)uVar3) goto LAB_01d4bc14;
    }
    if ((int)uVar2 < (int)uVar3) {
LAB_01d4bc38:
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = 0;
      uVar3 = param_1[1];
      uVar4 = (long)(int)*param_1 + 1;
      uVar2 = (uint)uVar4;
      *param_1 = uVar2;
      if ((int)uVar2 < (int)uVar3) {
        *(undefined8 *)(*(long *)(param_1 + 2) + uVar4 * 8) = 0;
        uVar3 = param_1[1];
        uVar2 = *param_1 + 1;
        uVar4 = (ulong)uVar2;
        *param_1 = uVar2;
        if ((int)uVar2 < (int)uVar3) goto LAB_01d4bd18;
LAB_01d4bc60:
        uVar2 = (uint)uVar4;
        if ((int)uVar3 <= (int)uVar2) goto LAB_01d4bc7c;
      }
      else {
        if ((int)uVar3 <= (int)uVar2) goto LAB_01d4bc60;
LAB_01d4bd18:
        *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar4 * 8) = 0;
        uVar3 = param_1[1];
        uVar2 = *param_1 + 1;
        *param_1 = uVar2;
        if ((int)uVar3 <= (int)uVar2) goto LAB_01d4bc7c;
      }
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = 0;
      uVar3 = param_1[1];
      uVar2 = *param_1 + 1;
      *param_1 = uVar2;
    }
  }
  else if ((int)uVar2 < (int)uVar3) goto LAB_01d4bc38;
LAB_01d4bc7c:
  if ((int)uVar3 <= (int)uVar2) {
    return;
  }
  *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 8) = &DAT_0536d6f0;
  uVar2 = param_1[1];
  uVar4 = (long)(int)*param_1 + 1;
  uVar3 = (uint)uVar4;
  *param_1 = uVar3;
  if ((int)uVar3 < (int)uVar2) {
    *(undefined8 **)(*(long *)(param_1 + 2) + uVar4 * 8) = &DAT_0536d758;
    uVar2 = param_1[1];
    uVar3 = *param_1 + 1;
    uVar4 = (ulong)uVar3;
    *param_1 = uVar3;
    if ((int)uVar3 < (int)uVar2) goto LAB_01d4bd5c;
LAB_01d4bcb4:
    uVar3 = (uint)uVar4;
    if ((int)uVar2 <= (int)uVar3) goto LAB_01d4bcbc;
LAB_01d4bd80:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = &DAT_0536d828;
    uVar2 = param_1[1];
    uVar3 = *param_1 + 1;
    *param_1 = uVar3;
    if ((int)uVar3 < (int)uVar2) goto LAB_01d4bda4;
LAB_01d4bcc4:
    if ((int)uVar2 <= (int)uVar3) goto LAB_01d4bccc;
LAB_01d4bdc8:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = &DAT_0536d8f8;
    uVar2 = param_1[1];
    uVar3 = *param_1 + 1;
    *param_1 = uVar3;
    if ((int)uVar3 < (int)uVar2) goto LAB_01d4bdec;
  }
  else {
    if ((int)uVar2 <= (int)uVar3) goto LAB_01d4bcb4;
LAB_01d4bd5c:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar4 * 8) = &DAT_0536d7c0;
    uVar2 = param_1[1];
    uVar3 = *param_1 + 1;
    *param_1 = uVar3;
    if ((int)uVar3 < (int)uVar2) goto LAB_01d4bd80;
LAB_01d4bcbc:
    if ((int)uVar2 <= (int)uVar3) goto LAB_01d4bcc4;
LAB_01d4bda4:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = &DAT_0536d890;
    uVar2 = param_1[1];
    uVar3 = *param_1 + 1;
    *param_1 = uVar3;
    if ((int)uVar3 < (int)uVar2) goto LAB_01d4bdc8;
LAB_01d4bccc:
    if ((int)uVar3 < (int)uVar2) {
LAB_01d4bdec:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = &DAT_0536d960;
      uVar3 = *param_1 + 1;
      *param_1 = uVar3;
      if ((int)param_1[1] <= (int)uVar3) {
        return;
      }
      goto LAB_01d4bcdc;
    }
  }
  if ((int)uVar2 <= (int)uVar3) {
    return;
  }
LAB_01d4bcdc:
  *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = &DAT_0536d9c8;
  *param_1 = *param_1 + 1;
  return;
}

