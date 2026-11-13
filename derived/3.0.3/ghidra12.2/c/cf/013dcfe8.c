
char FUN_013dcfe8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 undefined4 *param_5,uint param_6,uint param_7)

{
  char cVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  if (param_5 == (undefined4 *)0x0) {
    return '\0';
  }
  if (0 < *(int *)(param_4 + 0xa8)) {
    if ((int)(param_7 | param_6) < 0) {
      return '\0';
    }
    if (*(int *)(param_4 + 0xa8) <= (int)param_6) {
      return '\0';
    }
    if ((param_6 < *(uint *)(param_4 + 0x88)) &&
       (lVar2 = *(long *)(*(long *)(param_4 + 0x90) + (ulong)param_6 * 8),
       (int)param_7 < *(int *)(lVar2 + 0x1f8))) {
      uVar6 = (ulong)param_6;
      uVar7 = FUN_013dd230(lVar2,param_7);
      *param_5 = uVar7;
      param_5[1] = param_2;
      param_5[2] = param_3;
      if (param_6 < *(uint *)(param_4 + 0x88)) {
        lVar2 = *(long *)(*(long *)(param_4 + 0x90) + uVar6 * 8);
      }
      else {
        lVar2 = 0;
      }
      if (param_7 < *(uint *)(lVar2 + 0x1d8)) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x1e0) + (ulong)param_7 * 8);
      }
      else {
        lVar2 = 0;
      }
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x98) + 0xf0))();
      param_5[3] = *puVar3;
      if (param_6 < *(uint *)(param_4 + 0x88)) {
        lVar2 = *(long *)(*(long *)(param_4 + 0x90) + uVar6 * 8);
      }
      else {
        lVar2 = 0;
      }
      if (param_7 < *(uint *)(lVar2 + 0x1d8)) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x1e0) + (ulong)param_7 * 8);
      }
      else {
        lVar2 = 0;
      }
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 200) + 0xf0))();
      param_5[4] = *puVar3;
      if (param_6 < *(uint *)(param_4 + 0x88)) {
        lVar2 = *(long *)(*(long *)(param_4 + 0x90) + uVar6 * 8);
      }
      else {
        lVar2 = 0;
      }
      if (param_7 < *(uint *)(lVar2 + 0x1d8)) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x1e0) + (ulong)param_7 * 8);
      }
      else {
        lVar2 = 0;
      }
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0xf8) + 0xf0))();
      param_5[5] = *puVar3;
      if (param_6 < *(uint *)(param_4 + 0x88)) {
        lVar2 = *(long *)(*(long *)(param_4 + 0x90) + uVar6 * 8);
      }
      else {
        lVar2 = 0;
      }
      if (param_7 < *(uint *)(lVar2 + 0x1d8)) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x1e0) + (ulong)param_7 * 8);
      }
      else {
        lVar2 = 0;
      }
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x68) + 0xf0))();
      param_5[6] = *puVar3;
      if (param_6 < *(uint *)(param_4 + 0x88)) {
        lVar2 = *(long *)(*(long *)(param_4 + 0x90) + uVar6 * 8);
      }
      else {
        lVar2 = 0;
      }
      if (param_7 < *(uint *)(lVar2 + 0x1d8)) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x1e0) + (ulong)param_7 * 8);
      }
      else {
        lVar2 = 0;
      }
      puVar4 = (undefined1 *)(**(code **)(*(long *)(lVar2 + 0x128) + 0xf0))(lVar2 + 0x128);
      *(undefined1 *)(param_5 + 7) = *puVar4;
      cVar5 = '\x01';
      if (param_5[3] != -1) {
        cVar5 = '\x02';
      }
      cVar1 = param_5[3] != -1;
      if (param_5[4] != -1) {
        cVar1 = cVar5;
      }
      if (param_5[5] != -1) {
        cVar1 = cVar1 + '\x01';
      }
      return cVar1;
    }
  }
  return '\0';
}

