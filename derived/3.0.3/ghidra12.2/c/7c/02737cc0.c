
void FUN_02737cc0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar3 != 0) {
      param_1[4] = lVar3;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a909a8;
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = param_1 + 7;
  param_1[8] = 0;
  param_1[9] = lVar3;
  if (lVar4 != 0) {
    param_1[0xb] = lVar4;
  }
  plVar6 = param_1 + 0x11;
  *plVar6 = 0;
  param_1[7] = &PTR_LAB_04a90a08;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[10] = param_1 + 0xe;
  param_1[0xf] = 0;
  param_1[0x10] = lVar3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  memset(param_1 + 0x15,0,0xa80);
  lVar4 = 0x120;
  puVar1 = PTR_DAT_04bc3710 + 0x10;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar4);
    lVar4 = lVar4 + 0xa8;
    *(undefined1 *)(puVar2 + -9) = 0;
    puVar2[-0xb] = 0;
    puVar2[-10] = 0;
    *(undefined1 *)(puVar2 + -2) = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[-1] = puVar1;
    puVar2[-0xd] = 0;
    puVar2[-0xc] = 0;
    puVar2[-0xf] = puVar1;
    puVar2[-0xe] = 0;
    puVar2[-6] = 0;
    puVar2[-5] = 0;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-8] = puVar1;
    puVar2[-7] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  } while (lVar4 != 0xba0);
  lVar4 = 0;
  iVar7 = 0;
  param_1[0xe] = PTR_DAT_04bc3758 + 0x10;
  do {
    lVar5 = *plVar6;
    puVar2 = param_1 + 0x15 + (long)iVar7 * 7;
    *plVar6 = (long)puVar2;
    if (lVar5 != 0) {
      puVar2[4] = lVar5;
    }
    puVar2[2] = lVar3 + lVar4 + puVar2[2];
    FUN_026400e0();
    lVar4 = lVar4 + 2;
    iVar7 = iVar7 + 1;
  } while (lVar4 != 0x60);
  param_1[7] = &PTR_LAB_04a909d8;
  return;
}

