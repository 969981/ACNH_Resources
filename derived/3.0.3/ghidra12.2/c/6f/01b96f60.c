
void FUN_01b96f60(long *param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  param_1[0xcc] = param_2;
  param_1[0xcd] = (long)param_3;
  *(undefined4 *)(param_1 + 0xd1) = 0xbf800000;
  *(undefined2 *)(param_1 + 0xce) = 0;
  *(undefined8 *)((long)param_1 + 0x674) = 0;
  *(undefined1 *)((long)param_1 + 0x672) = 0;
  *(int *)(param_1 + 0xd0) = (int)param_1[0xcb];
  *(int *)((long)param_1 + 0x684) = (int)param_1[0xcb];
  FUN_01b954c0(*(undefined4 *)((long)param_1 + 0x65c),param_1 + 0x41,param_1 + 0xd2,param_1 + 0x1a0)
  ;
  (**(code **)(*param_1 + 0x10))(param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  lVar3 = (**(code **)(*param_3 + 0x18))(param_3);
  lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
  if (((lVar4 != 0) && (uVar5 = (**(code **)(*param_3 + 0x20))(param_3), lVar3 != 0)) &&
     ((int)param_1[0x3d] < 9)) {
    uVar1 = (int)param_1[0x3d] + 1;
    *(uint *)(param_1 + 0x3d) = uVar1;
    plVar2 = param_1 + 1 + (ulong)uVar1 * 6;
    if (9 < uVar1) {
      plVar2 = param_1 + 1;
    }
    *plVar2 = lVar3;
    plVar2[1] = lVar4 + (uVar5 & 0xffffffff) * 2;
    plVar2[2] = (long)&PTR_FUN_048fc6e0;
  }
                    /* WARNING: Could not recover jumptable at 0x01b97070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

