
void FUN_033fd3a0(long *param_1,undefined8 param_2,uint param_3)

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
  undefined8 *local_88 [4];
  undefined1 auStack_68 [8];
  
  if ((param_1 != (long *)0x0) &&
     (FUN_033fd270(local_90,param_2,param_3 & 1), puVar2 = PTR_DAT_04bb43c0, local_90[0] != 0)) {
    if (local_90[0] == 1) {
      __s = (void *)(**(code **)(*param_1 + 0x18))(param_1);
      memset(__s,0,0x754);
    }
    else {
      uVar7 = 0;
      do {
        (**(code **)(*param_1 + 0x10))(auStack_68,param_1,uVar7);
        lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_68);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_68), (uVar5 & 1) != 0))
            goto LAB_033fd470;
          }
          lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_033fd470:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
    }
  }
  return;
}

