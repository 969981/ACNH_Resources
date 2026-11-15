
void FUN_01f1db80(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 local_24;
  
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *param_1 = &PTR_LAB_04a5d130;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = &PTR_FUN_0498d548;
  param_1[5] = &DAT_048f9750;
  param_1[6] = 0;
  param_1[9] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[7] = &DAT_048f9750;
  param_1[8] = 0;
  param_1[0xb] = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[0xc] = 0x3bf800000;
  if ((*(byte *)(*DAT_0537d558 + 0x476) < 2) &&
     (lVar1 = FUN_021c9770(*(undefined4 *)(*(long *)(param_2 + 8) + 0x50c),1), lVar1 != 0)) {
    local_24 = *(undefined4 *)(lVar1 + 0x70);
  }
  else {
    local_24 = 0x16;
  }
  FUN_01e26a60(param_1,&local_24);
  return;
}

