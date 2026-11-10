
void FUN_0037f2e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_44;
  
  *param_1 = param_4;
  memset(param_1 + 1,0,0x210);
  lVar3 = FUN_0037c748(param_4,3);
  lVar4 = FUN_0037c748(*param_1,4);
  if (lVar3 == 0) {
    if (lVar4 != 0) goto LAB_0037f3b4;
    iVar1 = *(int *)(param_1 + 0x44);
  }
  else {
    param_1[1] = lVar3;
    FUN_0037f484(param_1,param_2,param_3,lVar3,param_5);
    if (lVar4 != 0) {
LAB_0037f3b4:
      param_1[0xb] = lVar4;
      FUN_0037f6d0(param_1,param_3,lVar4,param_5);
      lVar6 = **(long **)(param_5 + 0x30) + 0xc;
      FUN_0038ce00((*(long **)(param_5 + 0x30))[4],
                   lVar6 + (ulong)*(uint *)(lVar6 + (ulong)*(ushort *)(lVar4 + 4) * 4));
      uVar7 = FUN_0038ce60();
      FUN_0037f840(param_1,param_3,*(undefined8 *)(param_5 + 0x20),lVar3,lVar4);
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      goto LAB_0037f460;
    }
    local_44 = 1;
    lVar4 = FUN_0036abf8(*(undefined8 *)(param_5 + 0x20),param_3,0x4b53414d,1,&local_44);
    param_1[0x43] = lVar4;
    iVar1 = FUN_0038c040(*(undefined8 *)(lVar4 + 0x38),0x4b53414d,1,&local_44);
    *(int *)(param_1 + 0x44) = iVar1;
  }
  lVar6 = *(long *)(param_1[0x43] + 0x30);
  iVar2 = FUN_00386648();
  uVar7 = 0x3f800000;
  lVar4 = 0;
  *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(lVar6 + (long)(iVar2 * iVar1) * 4);
  uVar5 = *(undefined8 *)(param_5 + 0x20);
LAB_0037f460:
  FUN_0037f900(uVar7,param_1,param_3,uVar5,lVar3,lVar4);
  param_1[1] = 0;
  param_1[0xb] = 0;
  return;
}

