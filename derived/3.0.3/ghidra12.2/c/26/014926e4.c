
void FUN_014926e4(long param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_90;
  undefined4 local_88;
  float fStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte local_68;
  
  puVar1 = (undefined4 *)FUN_0251b3b0(param_4,1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
    fVar5 = 0.0;
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
    uVar3 = puVar1[2];
    fVar5 = (float)puVar1[1] + 5.0;
  }
  lVar2 = FUN_0146d638(0x5d);
  puVar1 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x150) + 0xf0))(lVar2 + 0x150);
  uVar6 = *puVar1;
  lVar2 = FUN_0146d638(0x5d);
  puVar1 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0xf0) + 0xf0))();
  local_68 = *param_4;
  local_7c = *param_3;
  uStack_6c = *puVar1;
  local_74 = *(undefined4 *)(param_3 + 1);
  if (7 < local_68) {
    local_68 = 0xff;
  }
  local_90 = param_2;
  local_88 = uVar4;
  fStack_84 = fVar5;
  local_80 = uVar3;
  local_70 = uVar6;
  FUN_014927e8(param_1 + 0x3d8,&local_90,param_5);
  return;
}

