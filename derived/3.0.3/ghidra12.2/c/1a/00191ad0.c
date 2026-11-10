
undefined8 FUN_00191ad0(long param_1,void *param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  
  puVar7 = *(uint **)(param_1 + 0x40);
  puVar3 = *(uint **)(param_1 + 0x48);
  if ((param_4 & 1) == 0) {
    if (puVar3 < puVar7 + 6) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 == 0) {
        if (*(long *)(param_1 + 0x28) == 0) {
          if (DAT_04c57ea0 == (code *)0x0) {
            puVar4 = malloc(0x18);
          }
          else {
            puVar4 = (undefined8 *)(*DAT_04c57ea0)(0x18);
          }
          *puVar4 = DAT_04c57ea8;
          lVar5 = *(long *)(param_1 + 0x38);
          puVar7 = *(uint **)(param_1 + 0x40);
          *(undefined8 **)(param_1 + 0x28) = puVar4 + 2;
          *(undefined8 **)(param_1 + 0x30) = puVar4 + 2;
        }
        else {
          lVar5 = 0;
        }
        uVar6 = *(ulong *)(param_1 + 0x50);
      }
      else {
        uVar6 = (long)puVar3 + (((ulong)((long)puVar3 + (1 - lVar5)) >> 1) - lVar5);
      }
      uVar1 = (long)puVar7 + (0x18 - lVar5);
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      FUN_0018f24c((long *)(param_1 + 0x28),uVar6);
      puVar7 = *(uint **)(param_1 + 0x40);
    }
    *(uint **)(param_1 + 0x40) = puVar7 + 6;
    *(void **)(puVar7 + 2) = param_2;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[0] = 0;
    puVar7[1] = 0;
    *(undefined2 *)((long)puVar7 + 0x16) = 0x405;
    *puVar7 = param_3;
    return 1;
  }
  if (puVar3 < puVar7 + 6) {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        if (DAT_04c57ea0 == (code *)0x0) {
          puVar4 = malloc(0x18);
        }
        else {
          puVar4 = (undefined8 *)(*DAT_04c57ea0)(0x18);
        }
        *puVar4 = DAT_04c57ea8;
        lVar5 = *(long *)(param_1 + 0x38);
        puVar7 = *(uint **)(param_1 + 0x40);
        *(undefined8 **)(param_1 + 0x28) = puVar4 + 2;
        *(undefined8 **)(param_1 + 0x30) = puVar4 + 2;
      }
      else {
        lVar5 = 0;
      }
      uVar6 = *(ulong *)(param_1 + 0x50);
    }
    else {
      uVar6 = (long)puVar3 + (((ulong)((long)puVar3 + (1 - lVar5)) >> 1) - lVar5);
    }
    uVar1 = (long)puVar7 + (0x18 - lVar5);
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    FUN_0018f24c((long *)(param_1 + 0x28),uVar6);
    puVar7 = *(uint **)(param_1 + 0x40);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(uint **)(param_1 + 0x40) = puVar7 + 6;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[0] = 0;
  puVar7[1] = 0;
  if (param_3 < 0x16) {
    *(undefined2 *)((long)puVar7 + 0x16) = 0x1c05;
    *(char *)((long)puVar7 + 0x15) = '\x15' - (char)param_3;
    puVar3 = puVar7;
  }
  else {
    *puVar7 = param_3;
    *(undefined2 *)((long)puVar7 + 0x16) = 0xc05;
    puVar3 = (uint *)FUN_00192174(uVar2,param_3 + 1);
    *(uint **)(puVar7 + 2) = puVar3;
  }
  memcpy(puVar3,param_2,(ulong)param_3);
  *(undefined1 *)((long)puVar3 + (ulong)param_3) = 0;
  return 1;
}

