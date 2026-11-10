
void FUN_0033f1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
                 undefined8 param_10)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_00337640(&local_b0,param_6,param_7,param_8,param_4);
  local_50 = 0;
  uStack_48 = 0;
  puVar2 = (undefined8 *)FUN_00346e50(param_3,&local_50,0x60);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0032c400(0,0x8000);
    return;
  }
  puVar2[2] = local_a0;
  puVar2[3] = uStack_98;
  *puVar2 = local_b0;
  puVar2[1] = uStack_a8;
  puVar2[6] = local_80;
  puVar2[7] = uStack_78;
  puVar2[4] = local_90;
  puVar2[5] = uStack_88;
  puVar2[10] = local_60;
  puVar2[0xb] = uStack_58;
  puVar2[8] = local_70;
  puVar2[9] = uStack_68;
  cVar1 = *(char *)(param_5 + 0x7f);
  if (*(char *)(param_5 + 0x42) != -1) {
    FUN_00348cdc(param_1,(long)*(char *)(param_5 + 0x42),0,&local_50,0x60);
  }
  if (cVar1 != -1) {
    FUN_00348cdc(param_1,(int)cVar1,4,&local_50,0x60);
  }
  FUN_00346f6c(param_3);
  FUN_00347e74(param_1,4,1,param_9,*(undefined4 *)(param_8 + 0x78),0);
  if (*(int *)(param_6 + 8) == 1) {
    FUN_00347e74(param_1,4,1,param_10,*(undefined4 *)(param_8 + 0x78),0);
  }
  return;
}

