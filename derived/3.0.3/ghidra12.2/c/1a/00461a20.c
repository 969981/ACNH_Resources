
undefined1 * FUN_00461a20(long param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 *local_38;
  
  plVar6 = (long *)(param_1 + 0x18);
  local_50 = param_2;
  lVar2 = FUN_00463cc0(plVar6,&local_50);
  if ((lVar2 == 0) ||
     (uVar5 = (ulong)*(uint *)(lVar2 + 4) | (lVar2 - *(long *)(param_1 + 0x28)) * 0x20000000,
     (int)uVar5 < 0)) {
    puVar3 = (undefined1 *)FUN_00438810(0x28);
    *puVar3 = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0x8000000000000000;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0x8000000000000000;
    local_50 = param_2;
    local_38 = puVar3;
    FUN_00461dd0(plVar6,&local_50,&local_38);
    local_50 = (undefined1 *)0x0;
    local_48 = -0x8000000000000000;
    iVar1 = FUN_00461e80(param_1,&local_50,param_2,param_2);
    if (iVar1 < 0) {
      local_38 = param_2;
      lVar2 = FUN_00463cc0(plVar6,&local_38);
      if (lVar2 == 0) {
        uVar7 = 0;
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = *(uint *)(lVar2 + 4);
        uVar7 = ((int)lVar2 - (int)*(undefined8 *)(param_1 + 0x28)) * 0x20000000;
      }
      *(undefined8 *)(*plVar6 + ((long)((ulong)(uVar4 | uVar7) << 0x20) >> 0x1c) + 8) = 0;
      puVar9 = (undefined1 *)0x0;
      puVar8 = puVar3;
      iVar1 = (int)local_48;
    }
    else {
      FUN_004620e0(puVar3,&local_50);
      puVar8 = (undefined1 *)0x0;
      puVar9 = puVar3;
      iVar1 = (int)local_48;
    }
    if (0 < iVar1) {
      plVar6 = (long *)(local_50 + (long)iVar1 * 0x38);
      do {
        plVar6 = plVar6 + -7;
        (**(code **)(*plVar6 + 8))(plVar6);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    lVar2 = local_48;
    uVar4 = local_48._4_4_;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    if ((-1 < lVar2) && (local_50 != (undefined1 *)0x0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_50,0x38,uVar4 & 0x3fffffff);
    }
    if (puVar8 != (undefined1 *)0x0) {
      FUN_00462390(puVar8);
      FUN_00438870(puVar8,0x28);
    }
  }
  else {
    puVar9 = *(undefined1 **)(*plVar6 + ((long)(uVar5 << 0x20) >> 0x1c) + 8);
  }
  return puVar9;
}

