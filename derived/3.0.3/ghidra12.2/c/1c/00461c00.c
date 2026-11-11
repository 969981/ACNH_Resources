
undefined1 * FUN_00461c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar5 = (long *)(param_1 + 0x38);
  local_50 = param_2;
  uStack_48 = param_3;
  lVar2 = FUN_00463e60(plVar5,&local_50);
  if ((lVar2 == 0) ||
     (uVar4 = *(uint *)(lVar2 + 4) |
              ((int)lVar2 - (int)*(undefined8 *)(param_1 + 0x48)) * 0x20000000, (int)uVar4 < 0)) {
    puVar3 = (undefined1 *)FUN_00438810(0x28);
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0x8000000000000000;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0x8000000000000000;
    local_60 = puVar3;
    FUN_004622e0(plVar5,&local_50,&local_60);
    local_60 = (undefined1 *)0x0;
    local_58 = -0x8000000000000000;
    iVar1 = FUN_00461e80(param_1,&local_60,param_2,param_3);
    if (iVar1 < 0) {
      lVar2 = FUN_00463e60(plVar5,&local_50);
      if (lVar2 == 0) {
        uVar6 = 0;
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = *(uint *)(lVar2 + 4);
        uVar6 = ((int)lVar2 - (int)*(undefined8 *)(param_1 + 0x48)) * 0x20000000;
      }
      *(undefined8 *)(*plVar5 + (long)(int)(uVar4 | uVar6) * 0x18 + 0x10) = 0;
      puVar8 = (undefined1 *)0x0;
      puVar7 = puVar3;
      iVar1 = (int)local_58;
    }
    else {
      FUN_004620e0(puVar3,&local_60);
      puVar7 = (undefined1 *)0x0;
      puVar8 = puVar3;
      iVar1 = (int)local_58;
    }
    if (0 < iVar1) {
      plVar5 = (long *)(local_60 + (long)iVar1 * 0x38);
      do {
        plVar5 = plVar5 + -7;
        (**(code **)(*plVar5 + 8))(plVar5);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    lVar2 = local_58;
    uVar4 = local_58._4_4_;
    local_58 = (ulong)local_58._4_4_ << 0x20;
    if ((-1 < lVar2) && (local_60 != (undefined1 *)0x0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_60,0x38,uVar4 & 0x3fffffff);
    }
    if (puVar7 != (undefined1 *)0x0) {
      FUN_00462390(puVar7);
      FUN_00438870(puVar7,0x28);
    }
  }
  else {
    puVar8 = *(undefined1 **)(*plVar5 + (long)(int)uVar4 * 0x18 + 0x10);
  }
  return puVar8;
}

