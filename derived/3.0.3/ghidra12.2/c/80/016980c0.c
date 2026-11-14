
void FUN_016980c0(long param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined2 local_44;
  
  FUN_01b46be0(&local_78);
  uVar2 = *(uint *)(param_1 + 0x18);
  if (((*PTR_DAT_04bb8aa8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar4 != 0))
  {
    FUN_00dd5f80(&DAT_04f292c0);
    __cxa_guard_release(&DAT_04f292d0);
  }
  if (0 < (int)DAT_04f292c0) {
    uVar7 = 0;
    do {
      if (*(int *)(DAT_04f292c8 + uVar7 * 4) == 0x50) goto LAB_01698140;
      uVar7 = uVar7 + 1;
    } while (DAT_04f292c0 != uVar7);
  }
  uVar7 = 0;
LAB_01698140:
  nn::time::IsValidDate(uVar2 & 0xffff,uVar2 >> 0x10 & 0xff,uVar2 >> 0x18);
  local_58 = (undefined4)uVar7;
  uStack_54 = 10;
  local_4c = *param_3;
  uStack_48 = param_3[1];
  uStack_6c = uVar2 & 0xff000000 | (uVar2 >> 0x10 & 0xff) << 0x10 | uVar2 & 0xffff;
  local_44 = 0;
  local_70 = param_2;
  local_50 = param_4;
  lVar5 = (**(code **)(local_78 + 0x20))(&local_78,DAT_0532d280);
  plVar3 = DAT_0532d278;
  if (lVar5 != 0) {
    lVar6 = *DAT_0532d278;
    plVar1 = (long *)(*(int *)((long)DAT_0532d278 + 0x14) + lVar5);
    *DAT_0532d278 = (long)plVar1;
    *plVar1 = lVar6;
    plVar1[1] = (long)plVar3;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar1;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  }
  return;
}

