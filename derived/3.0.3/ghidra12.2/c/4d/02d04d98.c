
void FUN_02d04d98(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [63];
  undefined1 local_4d;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb2230;
  if (param_2 < 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x927f8);
  *piVar1 = param_2;
  uVar4 = FUN_033bf4b4(*(undefined8 *)(*(long *)puVar3 + 0x30));
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(*(long *)puVar3 + 0x30);
    if (*(int *)(lVar5 + 0x70) == 3 && *(int *)(lVar5 + 0x6c) != 0) {
      local_4d = 0;
      local_90 = 0x40;
      local_98 = local_8c;
      local_8c[0] = 0;
      local_a0 = PTR_DAT_04bb2bc0 + 0x10;
      uVar6 = FUN_033bf650(lVar5,&local_a0,param_2);
      lVar5 = DAT_053f9928;
      if (((uVar6 & 1) != 0) && (DAT_053f9928 != 0)) {
        (**(code **)(local_a0 + 0x18))(&local_a0);
        local_44 = FUN_006bd550(local_98,0);
        lVar5 = FUN_0079e4d0(lVar5,&local_44);
        if (lVar5 != 0) {
          uVar7 = 3;
          goto LAB_02d04e94;
        }
      }
    }
    uVar7 = 2;
  }
  else {
    uVar7 = 0;
  }
LAB_02d04e94:
  iVar2 = *piVar1;
  *(undefined4 *)(param_1 + 0x927fc) = uVar7;
  *(undefined4 *)(param_1 + 0x1d394) = uVar7;
  *(undefined4 *)(param_1 + 0x1d398) = 3;
  *(undefined4 *)(param_1 + 0x1c4a4) = 0;
  *(int *)(param_1 + 0x1c4a8) = iVar2;
  if ((uVar4 & 1) == 0) {
    FUN_02cdfc60(param_1 + 0x92800,iVar2,1);
    iVar2 = *piVar1;
  }
  FUN_033c160c(*(undefined8 *)(*(long *)puVar3 + 0x30),param_1 + 0x928d8,iVar2);
  return;
}

