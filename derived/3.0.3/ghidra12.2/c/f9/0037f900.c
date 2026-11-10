
void FUN_0037f900(float param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  fVar5 = *(float *)(*param_2 + 0x50);
  fVar6 = *(float *)(*param_2 + 0x54);
  if ((param_5 == 0) || ((param_6 == 0 && ((*(byte *)(param_5 + 4) >> 1 & 1) == 0)))) {
    param_2[9] = 0;
  }
  else {
    plVar3 = (long *)FUN_00367b30(0xd8);
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 2) = 0;
      puVar2 = PTR_DAT_04bd07b8;
      plVar3[7] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      *plVar3 = (long)(puVar2 + 0x10);
      plVar3[1] = -1;
      FUN_0034f974(plVar3 + 8);
      FUN_0034f3dc(plVar3 + 0x11);
      plVar3[0x1a] = -0x100000000;
    }
    param_2[9] = (long)plVar3;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    iStack_7c = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    FUN_0034fd48(&local_90);
    iStack_7c = (int)fVar5;
    uStack_84 = 0xb01;
    local_80 = 0xa0;
    local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
    uStack_78 = CONCAT44(uStack_78._4_4_,(int)fVar6);
    local_90 = CONCAT26(1,(undefined6)local_90);
    FUN_0038ba78(param_2[9],param_3,param_4,&local_90,0);
  }
  if (param_6 == 0) {
    return;
  }
  fVar5 = fVar5 * param_1;
  fVar6 = fVar6 * param_1;
  plVar3 = (long *)FUN_00367b30(0xd8);
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 2) = 0;
    puVar2 = PTR_DAT_04bd07b8;
    plVar3[7] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = -1;
    FUN_0034f974(plVar3 + 8);
    FUN_0034f3dc(plVar3 + 0x11);
    plVar3[0x1a] = -0x100000000;
  }
  param_2[0xf] = (long)plVar3;
  bVar1 = *(byte *)(param_6 + 0xc);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  iStack_7c = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  FUN_0034fd48(&local_90);
  fVar4 = (float)((uint)bVar1 << 1);
  uStack_84 = 0x201;
  local_80 = 0xa0;
  local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
  iStack_7c = (int)(fVar5 + fVar4);
  uStack_78 = CONCAT44(uStack_78._4_4_,(int)(fVar6 + fVar4));
  local_90 = CONCAT26(1,(undefined6)local_90);
  FUN_0038ba78(param_2[0xf],param_3,param_4,&local_90,0);
  if ((*(byte *)(param_6 + 8) >> 5 & 1) == 0) {
    return;
  }
  if ((*(byte *)(param_6 + 8) & 1) == 0) {
    param_2[0x10] = 0;
    bVar1 = *(byte *)(param_6 + 8);
  }
  else {
    plVar3 = (long *)FUN_00367b30(0xd8);
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 2) = 0;
      puVar2 = PTR_DAT_04bd07b8;
      plVar3[7] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      *plVar3 = (long)(puVar2 + 0x10);
      plVar3[1] = -1;
      FUN_0034f974(plVar3 + 8);
      FUN_0034f3dc(plVar3 + 0x11);
      plVar3[0x1a] = -0x100000000;
    }
    param_2[0x10] = (long)plVar3;
    bVar1 = *(byte *)(param_6 + 0xc);
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    iStack_7c = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    FUN_0034fd48(&local_90);
    fVar4 = (float)((uint)bVar1 << 1);
    uStack_84 = 0xb01;
    local_80 = 0xa0;
    local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
    iStack_7c = (int)(fVar5 + fVar4);
    uStack_78 = CONCAT44(uStack_78._4_4_,(int)(fVar6 + fVar4));
    local_90 = CONCAT26(1,(undefined6)local_90);
    FUN_0038ba78(param_2[0x10],param_3,param_4,&local_90,0);
    bVar1 = *(byte *)(param_6 + 8);
  }
  if ((bVar1 >> 1 & 1) == 0) {
    param_2[0x11] = 0;
    bVar1 = *(byte *)(param_6 + 8);
  }
  else {
    plVar3 = (long *)FUN_00367b30(0xd8);
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 2) = 0;
      puVar2 = PTR_DAT_04bd07b8;
      plVar3[7] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      *plVar3 = (long)(puVar2 + 0x10);
      plVar3[1] = -1;
      FUN_0034f974(plVar3 + 8);
      FUN_0034f3dc(plVar3 + 0x11);
      plVar3[0x1a] = -0x100000000;
    }
    param_2[0x11] = (long)plVar3;
    bVar1 = *(byte *)(param_6 + 0xc);
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    iStack_7c = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    FUN_0034fd48(&local_90);
    fVar4 = (float)((uint)bVar1 << 1);
    uStack_84 = 0xb01;
    local_80 = 0xa0;
    local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
    iStack_7c = (int)(fVar5 + fVar4);
    uStack_78 = CONCAT44(uStack_78._4_4_,(int)(fVar6 + fVar4));
    local_90 = CONCAT26(1,(undefined6)local_90);
    FUN_0038ba78(param_2[0x11],param_3,param_4,&local_90,0);
    bVar1 = *(byte *)(param_6 + 8);
  }
  if ((bVar1 >> 2 & 1) == 0) {
    param_2[0x12] = 0;
  }
  else {
    plVar3 = (long *)FUN_00367b30(0xd8);
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 2) = 0;
      puVar2 = PTR_DAT_04bd07b8;
      plVar3[7] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      *plVar3 = (long)(puVar2 + 0x10);
      plVar3[1] = -1;
      FUN_0034f974(plVar3 + 8);
      FUN_0034f3dc(plVar3 + 0x11);
      plVar3[0x1a] = -0x100000000;
    }
    param_2[0x12] = (long)plVar3;
    bVar1 = *(byte *)(param_6 + 0xc);
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    iStack_7c = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    FUN_0034fd48(&local_90);
    fVar4 = (float)((uint)bVar1 << 1);
    uStack_84 = 0xb01;
    local_80 = 0xa0;
    local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
    iStack_7c = (int)(fVar5 + fVar4);
    uStack_78 = CONCAT44(uStack_78._4_4_,(int)(fVar6 + fVar4));
    local_90 = CONCAT26(1,(undefined6)local_90);
    FUN_0038ba78(param_2[0x12],param_3,param_4,&local_90,0);
  }
  return;
}

