
uint FUN_03ad4444(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  long lStack_38;
  
  uVar2 = (**(code **)(*param_1 + 0x218))();
  uVar3 = (**(code **)(*param_1 + 0xb8))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x1e0))(param_1);
  lVar7 = (uVar3 & 0xffffffff) * 0xc;
  lVar7 = ((lVar7 + 7U & 0x1ffffffff8) + lVar7 * (uVar2 & 0xffffffff) + 7 & 0xfffffffffffffff8) +
          (uVar4 & 0xffffffff) * 8 + ((uVar4 & 0xffffffff) * 0x48 + 0x58) * (uVar2 & 0xffffffff);
  local_50 = PTR_DAT_04bd1758 + 0x10;
  plVar6 = param_2;
  if (param_2 == (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
  }
  local_48 = (**(code **)(*plVar6 + 0x30))(plVar6,lVar7,8);
  local_40 = 0;
  uVar1 = 0;
  if (local_48 != 0) {
    *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 2;
    lStack_38 = lVar7;
    uVar1 = FUN_03ad4570(param_1,&local_50,param_2);
  }
  return uVar1 & 1;
}

