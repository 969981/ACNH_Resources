
bool FUN_003dd8c4(long param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar3 = FUN_003dbc54(*(undefined8 *)(param_1 + 0x10));
  FUN_003dbca8(uVar3,param_4);
  puVar4 = (undefined8 *)FUN_003dbce4();
  if (puVar4 != (undefined8 *)0x0) {
    *param_2 = *puVar4;
    uVar5 = puVar4[3];
    uVar3 = puVar4[1];
    uVar1 = puVar4[2];
    *(undefined8 *)((long)param_2 + 0x1e) = *(undefined8 *)((long)puVar4 + 0x1e);
    param_2[2] = uVar1;
    param_2[3] = uVar5;
    param_2[1] = uVar3;
    uVar2 = *(undefined4 *)((long)puVar4 + 0x26);
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)((long)puVar4 + 0x2a);
    *param_3 = uVar2;
  }
  return puVar4 != (undefined8 *)0x0;
}

