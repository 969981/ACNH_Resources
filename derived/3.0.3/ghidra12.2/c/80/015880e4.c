
void FUN_015880e4(long param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar7 = (undefined4 *)(param_1 + 0x10);
  uVar1 = *puVar7;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  FUN_0390a734(puVar7,1,0x21,param_2,param_3,1,1,1,0,1);
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar5 = param_4[1];
  bVar6 = false;
  *puVar7 = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(long *)(param_1 + 0xa0) = lVar5;
  if ((*(byte *)(param_1 + 0x5e) >> 1 & 1) != 0) {
    bVar6 = 0x11 < *(ushort *)(param_1 + 0xa8) && *(ushort *)(param_1 + 0xa8) - 0x59 < 0xffffffd6;
  }
  local_68 = uVar1;
  uStack_64 = uVar2;
  local_60 = uVar3;
  uStack_58 = uVar4;
  FUN_038fd3e0(param_1 + 0x60,&local_68,param_1 + 0x40,0,lVar5,bVar6,1);
  return;
}

