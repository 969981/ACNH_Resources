
void FUN_02ce2b44(long param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined2 *)param_2 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_2 + 2) = puVar1[2];
  *(undefined *)((long)param_2 + 3) = puVar1[3];
  param_2[1] = *(undefined4 *)(puVar1 + 4);
  if (param_3 == 0xffffffff) {
    return;
  }
  puVar6 = (undefined4 *)(param_1 + 0x68a64);
  puVar5 = puVar6 + (ulong)param_3 * 4;
  if (9 < param_3) {
    puVar5 = puVar6;
  }
  switch(*puVar5) {
  case 0:
    puVar5 = puVar6 + (ulong)param_3 * 4;
    if (9 < param_3) {
      puVar5 = puVar6;
    }
    puVar2 = (undefined2 *)FUN_0267ce80(param_1 + 8,puVar5[1]);
    break;
  case 1:
    puVar5 = puVar6 + (ulong)param_3 * 4;
    if (9 < param_3) {
      puVar5 = puVar6;
    }
    if ((uint)puVar5[1] < 0x28) {
      puVar2 = (undefined2 *)FUN_02677ea0(param_1 + 8);
    }
    else {
      puVar2 = &DAT_05586008;
    }
    break;
  case 2:
    *(undefined2 *)param_2 = *(undefined2 *)puVar1;
    *(undefined *)((long)param_2 + 2) = puVar1[2];
    *(undefined *)((long)param_2 + 3) = puVar1[3];
    param_2[1] = *(undefined4 *)(puVar1 + 4);
    if (param_3 == 0xffffffff) {
      return;
    }
    if ((int)param_3 < 10) {
      puVar5 = (undefined4 *)(param_1 + 0x80) + (ulong)param_3 * 2;
      if (9 < param_3) {
        puVar5 = (undefined4 *)(param_1 + 0x80);
      }
    }
    else {
LAB_02ce2ccc:
      puVar5 = (undefined4 *)&DAT_05586008;
    }
    goto LAB_02ce2d0c;
  case 3:
    *(undefined2 *)param_2 = *(undefined2 *)puVar1;
    *(undefined *)((long)param_2 + 2) = puVar1[2];
    *(undefined *)((long)param_2 + 3) = puVar1[3];
    param_2[1] = *(undefined4 *)(puVar1 + 4);
    if (param_3 == 0xffffffff) {
      return;
    }
    uVar3 = 0;
    if (param_3 != 0) {
      if (param_3 == 3) {
        uVar3 = 2;
      }
      else {
        if (param_3 != 4) goto LAB_02ce2ccc;
        uVar3 = 1;
      }
    }
    if ((*(byte *)(param_1 + 0x70) >> (ulong)uVar3 & 1) == 0) {
      puVar6 = (undefined4 *)(param_1 + 0x18);
    }
    else {
      puVar6 = (undefined4 *)(param_1 + 0x58);
    }
    puVar5 = puVar6 + (ulong)uVar3 * 2;
    if (2 < uVar3) {
      puVar5 = puVar6;
    }
LAB_02ce2d0c:
    uVar4 = puVar5[1];
    *param_2 = *puVar5;
    goto LAB_02ce2d14;
  default:
    goto switchD_02ce2bc4_default;
  }
  *(undefined2 *)param_2 = *puVar2;
  *(undefined1 *)((long)param_2 + 2) = *(undefined1 *)(puVar2 + 1);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)puVar2 + 3);
  uVar4 = *(undefined4 *)(puVar2 + 2);
LAB_02ce2d14:
  param_2[1] = uVar4;
switchD_02ce2bc4_default:
  return;
}

