
/* WARNING: Removing unreachable block (ram,0x0327dfac) */
/* WARNING: Removing unreachable block (ram,0x0327dfcc) */

void FUN_0327df30(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_0034fb74(&local_60);
  local_60 = CONCAT44(local_60._4_4_,0xa1);
  uVar2 = FUN_003490a4(param_4,&local_60);
  iVar3 = FUN_003490ac(param_4,&local_60);
  uVar6 = (ulong)iVar3;
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = ((param_2 + uVar6) - 1) / uVar6;
  }
  lVar7 = uVar1 * uVar6;
  if (*param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,lVar7,uVar2);
  }
  lVar8 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  if (lVar8 != 0) {
    plVar5 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,lVar8);
    (**(code **)(*plVar5 + 0x38))(plVar5,lVar8);
    uVar4 = *(undefined8 *)(param_1 + 0x130);
  }
  local_60 = CONCAT44((int)lVar7,(undefined4)local_60);
  *(long *)(param_1 + 0x128) = lVar7;
  local_58 = uVar4;
  local_50 = lVar7;
  FUN_003490c4(param_1,param_4,&local_60);
  *(undefined8 *)(param_1 + 0x120) = 0;
  return;
}

