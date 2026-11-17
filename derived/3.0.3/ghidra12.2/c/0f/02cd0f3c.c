
void FUN_02cd0f3c(long *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  
  uVar5 = (**(code **)(*param_1 + 0x430))();
  if (((((uVar5 & 1) != 0) && (uVar5 = (**(code **)(*param_1 + 0x2f0))(param_1), (uVar5 & 1) != 0))
      && (lVar6 = (**(code **)(*param_1 + 0x278))(param_1), lVar6 != 0)) &&
     (param_2 < *(int *)(lVar6 + 0x3d4))) {
    iVar4 = *(int *)(lVar6 + 0x2e8);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = param_2 / iVar4;
    }
    iVar7 = *(int *)(lVar6 + 0x430) - *(int *)(lVar6 + 0x438);
    if ((*(byte *)(lVar6 + 1000) >> 1 & 1) != 0) {
      uVar2 = *(uint *)(lVar6 + 0x434);
      uVar1 = 0;
      if ((int)uVar2 < iVar7) {
        uVar1 = ~uVar2;
      }
      if (iVar7 < 0) {
        uVar1 = uVar2 + 1;
      }
      iVar7 = uVar1 + iVar7;
    }
    uVar1 = (param_2 - iVar3 * iVar4) + (iVar3 - iVar7) * iVar4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)(lVar6 + 0x208))) {
      if (uVar1 < *(uint *)(lVar6 + 0x208)) {
        puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x210) + (ulong)uVar1 * 8);
      }
      else {
        puVar8 = (undefined8 *)0x0;
      }
      if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4d98);
      }
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4d90);
        if ((uVar5 & 1) == 0) {
          puVar8 = (undefined8 *)0x0;
        }
      }
      FUN_02cc9040(param_1,puVar8,param_3 & 1,1);
      return;
    }
  }
  return;
}

