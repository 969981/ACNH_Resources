
/* WARNING: Type propagation algorithm not settling */

long FUN_00286b00(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_78;
  ulong uStack_70;
  uint local_68;
  ulong local_60;
  uint local_58;
  
  lVar8 = *(long *)PTR_DAT_04bcdc50;
  uVar7 = param_2;
  if (param_2 < 9) {
    uVar7 = 8;
  }
  if (uVar7 < *(ulong *)(param_1 + 0x38)) {
    uVar3 = -param_3;
    if (-1 < (int)param_3) {
      uVar3 = param_3;
    }
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar7 = uVar7 + 7 & 0xfffffffffffffff8;
      if ((*(ushort *)(param_1 + 0xd0) & 1) == 0) {
        lVar6 = 0;
        iVar1 = *(int *)(param_1 + 0x88);
      }
      else {
        lVar6 = param_1 + 0x90;
        FUN_00290438(lVar6);
        iVar1 = *(int *)(param_1 + 0x88);
      }
      uVar3 = iVar1 * param_3;
      if ((int)uVar3 < 0) {
        uVar2 = -uVar3;
        if (uVar3 < 0xfffffffc) {
          lVar4 = FUN_00286fac(param_1,uVar7,uVar2);
          uVar3 = uVar2;
          uVar2 = local_58;
        }
        else {
          lVar4 = FUN_00286eec();
          uVar3 = uVar2;
          uVar2 = local_58;
        }
      }
      else if (uVar3 < 5) {
        lVar4 = FUN_00286c9c();
        uVar2 = local_58;
      }
      else {
        lVar4 = FUN_00286d90(param_1,uVar7,uVar3);
        uVar2 = local_58;
      }
      local_58 = uVar3;
      if (lVar4 == 0) {
        if ((lVar8 != 0) && (puVar5 = *(undefined8 **)(lVar8 + 8), puVar5 != (undefined8 *)0x0)) {
          local_78 = param_1;
          uStack_70 = param_2;
          local_68 = param_3;
          local_60 = uVar7;
          (**(code **)*puVar5)(puVar5,&local_78);
          uVar2 = local_58;
        }
        local_58 = uVar2;
        lVar8 = 0;
      }
      else {
        *(undefined2 *)(lVar4 + 0x10) = *(undefined2 *)(param_1 + 0xd2);
        lVar8 = lVar4 + (ulong)*(ushort *)(lVar4 + 0x12) + 0x20;
        local_58 = uVar2;
      }
      if (lVar6 == 0) {
        return lVar8;
      }
      FUN_00290440(lVar6);
      return lVar8;
    }
  }
  if ((lVar8 != 0) && (puVar5 = *(undefined8 **)(lVar8 + 8), puVar5 != (undefined8 *)0x0)) {
    local_78 = param_1;
    uStack_70 = param_2;
    local_68 = param_3;
    local_60 = uVar7;
    local_58 = param_3;
    (**(code **)*puVar5)(puVar5,&local_78);
  }
  return 0;
}

