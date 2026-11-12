
void FUN_00b92a60(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined **local_80;
  undefined8 uStack_78;
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_DAT_04bb43c0;
  if (param_1 != (long *)0x0) {
    local_80 = &PTR_FUN_0493b2b0;
    uVar7 = 0;
    uStack_78 = param_2;
    do {
      (**(code **)(*param_1 + 0x10))(auStack_48,param_1,uVar7);
      lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = 1 << (ulong)(uVar7 & 0x1f);
      if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
        lVar4 = *(long *)puVar2;
        uVar3 = FUN_0277d6c4(auStack_48);
        if (*(long *)puVar2 != 0) {
          lVar4 = *(long *)(lVar4 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
             (uVar5 = (*(code *)*local_80)(&local_80,auStack_48), (uVar5 & 1) != 0))
          goto LAB_00b92ad4;
        }
        lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar6 = (ulong)(uVar7 >> 5) * 4;
        *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
      }
LAB_00b92ad4:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 15000);
  }
  return;
}

