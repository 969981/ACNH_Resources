
void FUN_027124a0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  
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
  *param_1 = &PTR_LAB_04a8cfa0;
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
  param_1[7] = &PTR_LAB_04a8d000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[10] = param_1 + 0xe;
  param_1[0xf] = 0;
  param_1[0x10] = lVar3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  memset(param_1 + 0x15,0,0x1c00);
  lVar4 = -0x1c00;
  do {
    lVar1 = lVar4 + 0x70;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1cd0) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1cc8) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1cc0) = 0;
    *(undefined1 *)((long)param_1 + lVar4 + 0x1cd8) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1cb8) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1cb0) = 0;
    *(undefined **)((long)param_1 + lVar4 + 0x1ca8) = &DAT_04a8f390;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1ce8) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1cf0) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1cf8) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1d00) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1d08) = 0;
    *(undefined1 *)((long)param_1 + lVar4 + 0x1d10) = 0;
    *(undefined **)((long)param_1 + lVar4 + 0x1ce0) = &DAT_04a8f390;
    lVar4 = lVar1;
  } while (lVar1 != 0);
  param_1[0xe] = &PTR_LAB_04a8d030;
  iVar5 = 0;
  do {
    lVar4 = *plVar6;
    puVar2 = param_1 + 0x15 + (long)iVar5 * 7;
    *plVar6 = (long)puVar2;
    if (lVar4 != 0) {
      puVar2[4] = lVar4;
    }
    puVar2[2] = lVar3 + puVar2[2];
    FUN_026400e0(puVar2,lVar3);
    iVar5 = iVar5 + 1;
    lVar3 = lVar3 + 2;
  } while (iVar5 != 0x80);
  param_1[7] = &PTR_LAB_04a8cfd0;
  return;
}

