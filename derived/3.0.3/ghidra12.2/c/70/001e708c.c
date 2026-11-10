
int FUN_001e708c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long param_5
                )

{
  long lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 local_28;
  
  local_28 = 0;
  lVar6 = *(long *)(param_1 + 0xd0);
  if (lVar6 != 0) {
    lVar1 = 0;
    if (*(long *)(lVar6 + 0x10) != 0) {
      lVar1 = DAT_04bcbf58;
    }
    if (lVar1 != 0) {
      uVar3 = FUN_001e7190(*(undefined8 *)(lVar6 + 0x10),param_2,param_3,&local_28,param_5);
      uVar4 = FUN_001e2c34(param_1,uVar3);
      goto joined_r0x001e717c;
    }
  }
  uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x20))();
  uVar5 = nn::socket::InetHtonl(0);
  *(undefined4 *)(param_5 + 0xc) = uVar5;
  uVar2 = nn::socket::InetHtons(0);
  *(undefined2 *)(param_5 + 10) = uVar2;
  uVar4 = FUN_001e2c34(param_1,uVar3);
joined_r0x001e717c:
  if ((uVar4 & 1) != 0) {
    *param_4 = local_28;
  }
  return (uVar4 & 1) - 1;
}

