
void FUN_01596474(long param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_0390a734(param_1 + 0x10,1,0x21,param_2 << 2,param_3 << 2,1,1,1,0,1);
  *(long *)(param_1 + 0x3a8) = param_4[1];
  (**(code **)(*param_4 + 0x18))(param_4);
  (**(code **)(*param_4 + 0x18))(param_4);
  if (((char *)param_4[1] == "") || (*(char *)param_4[1] == '\0')) {
    plVar3 = (long *)(param_1 + 0x3b0);
  }
  else {
    plVar3 = (long *)(param_1 + 0x3a0);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
  lVar1 = plVar3[1];
  *(long *)(param_1 + 0xa0) = lVar1;
  local_38 = *(undefined4 *)(param_1 + 0x388);
  uStack_34 = *(undefined4 *)(param_1 + 0x38c);
  local_30 = *(undefined8 *)(param_1 + 0x390);
  uStack_28 = *(undefined8 *)(param_1 + 0x398);
  *(undefined4 *)(param_1 + 0x10) = local_38;
  *(undefined4 *)(param_1 + 0x14) = uStack_34;
  *(undefined8 *)(param_1 + 0x18) = local_30;
  *(undefined8 *)(param_1 + 0x20) = uStack_28;
  if ((*(byte *)(param_1 + 0x5e) >> 1 & 1) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = 0x11 < *(ushort *)(param_1 + 0xa8) && *(ushort *)(param_1 + 0xa8) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(param_1 + 0x60,&local_38,param_1 + 0x40,0,lVar1,bVar2,1);
  return;
}

