
void FUN_030da16c(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *local_40;
  undefined4 local_38;
  
  puVar1 = *(undefined4 **)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x350) = *puVar1;
  *(undefined4 *)(param_1 + 0x354) = puVar1[1];
  *(undefined4 *)(param_1 + 0x358) = puVar1[2];
  *(undefined4 *)(param_1 + 0x35c) = puVar1[3];
  *(undefined4 *)(param_1 + 0x360) = puVar1[4];
  *(undefined4 *)(param_1 + 0x364) = puVar1[5];
  *(undefined4 *)(param_1 + 0x368) = puVar1[6];
  *(undefined4 *)(param_1 + 0x36c) = puVar1[7];
  *(undefined4 *)(param_1 + 0x370) = puVar1[8];
  *(undefined4 *)(param_1 + 0x374) = puVar1[9];
  *(undefined4 *)(param_1 + 0x378) = puVar1[10];
  *(undefined4 *)(param_1 + 0x37c) = puVar1[0xb];
  *(undefined4 *)(param_1 + 0x380) = puVar1[0xc];
  *(undefined4 *)(param_1 + 900) = puVar1[0xd];
  *(undefined4 *)(param_1 + 0x388) = puVar1[0xe];
  *(undefined4 *)(param_1 + 0x38c) = puVar1[0xf];
  *(undefined4 *)(param_1 + 0x390) = puVar1[0x10];
  *(undefined4 *)(param_1 + 0x394) = puVar1[0x11];
  uVar2 = *(undefined8 *)(puVar1 + 0x12);
  *(undefined4 *)(param_1 + 0x3a0) = puVar1[0x14];
  *(undefined8 *)(param_1 + 0x398) = uVar2;
  plVar3 = *(long **)(param_2 + 0x1d0);
  local_40 = PTR_DAT_04bc0cb8 + 0x10;
  local_38 = 0x29;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
  (**(code **)(plVar3[3] + 0x2b0))((undefined8 *)(param_1 + 0x3c4),plVar3[1]);
  *(undefined8 *)(param_1 + 0x3dc) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(param_1 + 0x3e4) = 4;
  FUN_03ebb160(param_1 + 0x308,1);
  return;
}

