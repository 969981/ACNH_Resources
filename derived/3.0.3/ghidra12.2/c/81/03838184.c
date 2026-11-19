
bool FUN_03838184(byte *param_1,undefined1 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined1 local_78;
  undefined1 local_77;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **ppuStack_58;
  undefined8 local_50;
  undefined **ppuStack_48;
  undefined8 local_40;
  undefined **ppuStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_03837a70(0,param_1,param_2);
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 1) goto LAB_038381dc;
joined_r0x038381b0:
    if (iVar2 == 2) goto LAB_03838210;
  }
  else {
    if (iVar2 != 1) goto joined_r0x038381b0;
LAB_038381dc:
    if (*(long **)(param_1 + 0x10) == (long *)0x0) {
      iVar2 = 1;
      goto LAB_038382b0;
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x150))();
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x158))();
    if ((uVar1 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 4);
      goto joined_r0x038381b0;
    }
LAB_03838210:
    param_1[4] = 3;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    local_77 = *param_2;
    uStack_68 = *(undefined8 *)(param_2 + 8);
    local_60 = *(undefined8 *)(param_2 + 0x10);
    local_70 = 0;
    local_78 = 0;
    ppuStack_58 = &PTR_LAB_048f9770;
    local_50 = *(undefined8 *)(param_2 + 0x20);
    ppuStack_48 = &PTR_LAB_048f9770;
    local_40 = *(undefined8 *)(param_2 + 0xb8);
    ppuStack_38 = &PTR_LAB_048f9770;
    local_30 = *(undefined8 *)(param_2 + 0x150);
    uStack_28 = 0;
    FUN_0383a0e0(DAT_05ae0928,&local_78,1);
    iVar2 = *(int *)(param_1 + 4);
  }
  if (iVar2 != 4) {
    if (iVar2 != 3) goto LAB_038382b0;
    param_1[4] = 4;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = *param_1 | 2;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x198))();
  iVar2 = 5;
  param_1[4] = 5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_038382b0:
  return iVar2 == 5;
}

