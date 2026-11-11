
undefined8 FUN_004a0a90(long param_1,byte *param_2)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [104];
  undefined8 local_240;
  ulong local_238;
  undefined8 local_218;
  undefined8 *local_1b8;
  ulong local_188;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_150;
  long local_78 [2];
  ulong local_68;
  
  uVar1 = 0x230401b;
  if (*(char *)(param_1 + 6) != '\0') {
    uVar1 = 0x230001b;
  }
  uVar3 = FUN_00428440(param_2);
  if ((uVar3 & 0x1f) == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = FUN_00428440(param_2);
    uVar8 = (uint)((uVar3 & 0x1f) != 1) << 2;
  }
  FUN_00451ea0(auStack_2a8);
  FUN_004522c0(auStack_2a8,param_2,uVar8 | uVar1);
  FUN_00452230(auStack_2a8,param_1);
  local_240 = 0;
  if ((((*param_2 >> 3 & 1) != 0) &&
      (plVar4 = (long *)FUN_00426db0(param_2,8), plVar4 != (long *)0x0)) && (*plVar4 != 0)) {
    local_218 = FUN_0043a360(*plVar4,param_1 + 0x58);
    local_238 = local_238 | 8;
  }
  if ((((char)param_2[1] < '\0') &&
      (plVar4 = (long *)FUN_00426db0(param_2,0x8000), plVar4 != (long *)0x0)) &&
     (lVar10 = *plVar4, lVar10 != 0)) {
    uVar2 = *(ushort *)(lVar10 + 8);
    if (uVar2 != 0) {
      plVar4 = (long *)(param_1 + 0x58);
      local_1b8 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,(uint)uVar2 * 0x10 + 0x10,0);
      *local_1b8 = 0;
      local_1b8[1] = (ulong)uVar2;
      if (*(short *)(lVar10 + 8) != 0) {
        uVar3 = 0;
        puVar6 = (undefined8 *)(lVar10 + 0x18);
        puVar11 = local_1b8 + 3;
        do {
          uVar5 = FUN_0043a360(*puVar6,plVar4);
          *puVar11 = uVar5;
          puVar11[-1] = puVar6[-1];
          uVar3 = uVar3 + 1;
          puVar6 = puVar6 + 2;
          puVar11 = puVar11 + 2;
        } while (uVar3 < *(ushort *)(lVar10 + 8));
      }
      local_238 = local_238 | 0x8000;
    }
  }
  if ((((char)param_2[2] < '\0') &&
      (plVar4 = (long *)FUN_00426db0(param_2,0x800000), plVar4 != (long *)0x0)) &&
     ((*plVar4 != 0 &&
      ((*(short *)(*plVar4 + 4) != 0 || (uVar3 = FUN_00428440(param_2), (uVar3 & 0x1f) == 7)))))) {
    local_238 = local_238 | 0x800000;
    local_178 = 0;
  }
  if ((((*(char *)(param_1 + 6) == '\0') && ((param_2[1] >> 6 & 1) != 0)) &&
      (puVar6 = (undefined8 *)FUN_00426db0(param_2,0x4000), puVar6 != (undefined8 *)0x0)) &&
     (((int *)*puVar6 != (int *)0x0 && (iVar9 = *(int *)*puVar6, 0 < iVar9)))) {
    do {
      FUN_004525b0(auStack_2a8,0,0);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((*(char *)(param_1 + 4) != '\0') && ((param_2[2] >> 5 & 1) != 0)) {
    puVar7 = (ulong *)FUN_00426db0(param_2,0x200000);
    if (puVar7 == (ulong *)0x0) {
      local_188 = 0;
    }
    else {
      local_188 = *puVar7 & 0xffffffffffffff7f;
    }
    local_238 = local_238 | 0x200000;
  }
  if ((param_2[3] >> 4 & 1) != 0) {
    local_238 = local_238 | 0x10000000;
    local_150 = 0;
  }
  if (*(char *)(param_1 + 7) != '\0') {
    FUN_0044ed80(local_78,param_2,&DAT_04c15320);
    if ((local_68 & 1) != 0) {
      FUN_0043dd50(local_68 & 0xfffffffffffffffe);
    }
    if ((local_78[0] != 0) &&
       ((((param_2[3] >> 1 & 1) == 0 ||
         (plVar4 = (long *)FUN_00426db0(param_2,0x2000000), plVar4 == (long *)0x0)) ||
        (*plVar4 == 0)))) {
      local_238 = local_238 | 0x2000000;
      local_168 = 0;
    }
  }
  uVar5 = FUN_004535c0(auStack_2a8,param_1 + 0x58);
  FUN_00451fa0(auStack_2a8);
  return uVar5;
}

