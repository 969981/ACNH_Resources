
uint FUN_0033c9b4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,byte param_8,undefined8 param_9)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_70 [2];
  
  lVar4 = (long)param_7;
  if (*(long *)(*(long *)(param_1 + 0x198) + (long)param_7 * 8) != 0) {
    if (*(long *)(param_1 + 0x1a18) == 0) {
      lVar3 = *(long *)(param_1 + 0x198);
      plVar2 = (long *)0x0;
    }
    else {
      local_70[1] = 0;
      lVar3 = *(long *)(param_1 + 0x198);
      plVar2 = local_70;
      local_70[0] = *(long *)(param_1 + 0x1a18);
    }
    FUN_003320e0(*(undefined8 *)(lVar3 + lVar4 * 8),param_2,plVar2);
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(*(long *)(param_1 + 0x198) + lVar4 * 8));
    *(undefined8 *)(*(long *)(param_1 + 0x198) + lVar4 * 8) = 0;
    FUN_0032c410("The vfx system deleted a registered binary. The resource id : %d.\n",param_7);
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x530,0x80);
  uVar1 = 0;
  if (lVar3 != 0) {
    FUN_00331884();
    uVar1 = FUN_003319d0(lVar3,*(undefined8 *)(param_1 + 0x1e0),param_2,param_3,param_4,param_5,
                         param_6,param_7,*(undefined8 *)(param_1 + 0x19e8),param_8 & 1,param_9);
    *(long *)(*(long *)(param_1 + 0x198) + lVar4 * 8) = lVar3;
  }
  return uVar1 & 1;
}

