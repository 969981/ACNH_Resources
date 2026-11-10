
void FUN_0037f840(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_4 == 0) {
    if (param_5 == 0) {
      iVar1 = *(int *)(param_1 + 0x220);
      goto LAB_0037f8d0;
    }
    uVar5 = 0x48535244;
    local_18 = 8;
    lVar3 = FUN_0036abf8(param_3,param_2,0x48535244,1,&local_18);
    *(long *)(param_1 + 0x218) = lVar3;
    puVar4 = &local_18;
  }
  else {
    uVar5 = 0x4b53414d;
    local_14 = 1;
    lVar3 = FUN_0036abf8(param_3,param_2,0x4b53414d,1,&local_14);
    *(long *)(param_1 + 0x218) = lVar3;
    puVar4 = &local_14;
  }
  iVar1 = FUN_0038c040(*(undefined8 *)(lVar3 + 0x38),uVar5,1,puVar4);
  *(int *)(param_1 + 0x220) = iVar1;
LAB_0037f8d0:
  lVar3 = *(long *)(*(long *)(param_1 + 0x218) + 0x30);
  iVar2 = FUN_00386648();
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(lVar3 + (long)(iVar2 * iVar1) * 4);
  return;
}

