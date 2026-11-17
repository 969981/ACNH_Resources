
void FUN_02da3bf0(int param_1,long *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  void *__s;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int local_90 [2];
  undefined **local_88;
  undefined4 local_80;
  int local_68 [2];
  
  if (param_2 == (long *)0x0) {
    return;
  }
  local_68[0] = param_1;
  if (param_1 == 1) {
    local_90[0] = 2;
    local_88 = &PTR_FUN_04ac3700;
    local_80 = *param_3;
  }
  else {
    FUN_033fd270(local_90,param_3,1);
    if (local_90[0] == 0) {
      return;
    }
    if (local_90[0] == 1) {
      __s = (void *)(**(code **)(*param_2 + 0x18))(param_2);
      memset(__s,0,0x754);
      return;
    }
  }
  puVar2 = PTR_DAT_04bb43c0;
  uVar7 = 0;
  do {
    (**(code **)(*param_2 + 0x10))(local_68,param_2,uVar7);
    lVar4 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar1 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
      lVar4 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(local_68);
      if (*(long *)puVar2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
           (uVar5 = (*(code *)*local_88)(&local_88,local_68), (uVar5 & 1) != 0)) goto LAB_02da3cf0;
      }
      lVar4 = (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
    }
LAB_02da3cf0:
    uVar7 = uVar7 + 1;
    if (uVar7 == 15000) {
      return;
    }
  } while( true );
}

