
undefined8 FUN_022a8c58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined *local_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = 0;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar3 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar8 + 7);
  local_38 = FUN_017baf44();
  puVar1 = PTR_DAT_04bb2010;
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb6268 + 0x10;
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_50 = *(int *)(param_1 + 8) + -2;
  iStack_4c = *(int *)(param_1 + 0xc) + -2;
  FUN_01a5033c(auStack_60,&local_48,0,&local_58,0);
  puVar2 = PTR_DAT_04bbbc68;
  lVar7 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar7 == 0) || (*(long *)(lVar7 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(lVar7 + 0xb0) + 8) == 0)) ||
      ((*(long *)(lVar7 + 0x488) == 0 || (*(long *)(*(long *)(lVar7 + 0x488) + 8) == 0)))) ||
     ((*(long *)(lVar7 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) == 0)))) {
LAB_022a8de0:
    local_58 = puVar1 + 0x10;
    local_50 = *(undefined4 *)(param_1 + 8);
    iStack_4c = *(int *)(param_1 + 0xc) + -2;
    FUN_01a5033c(auStack_60,&local_48,0,&local_58,0);
    lVar7 = *(long *)puVar2;
    if ((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
       (((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)) &&
        ((*(long *)(lVar7 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)))))) {
      uVar4 = FUN_0277d6c4(auStack_60);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(auStack_78,auStack_60);
        uVar5 = FUN_0123d890(local_68,4);
        if (((uVar5 & 1) != 0) ||
           (iVar3 = FUN_0123db50(auStack_70,local_68), (iVar3 - 2U & 0xfffffff9) == 0))
        goto LAB_022a937c;
      }
    }
    local_58 = puVar1 + 0x10;
    local_50 = *(int *)(param_1 + 8) + 2;
    iStack_4c = *(int *)(param_1 + 0xc) + -2;
    FUN_01a5033c(auStack_60,&local_48,0,&local_58,0);
    lVar7 = *(long *)puVar2;
    if ((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
       (((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)) &&
        ((*(long *)(lVar7 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)))))) {
      uVar4 = FUN_0277d6c4(auStack_60);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(auStack_78,auStack_60);
        uVar5 = FUN_0123d890(local_68,4);
        if (((uVar5 & 1) != 0) ||
           (iVar3 = FUN_0123db50(auStack_70,local_68), (iVar3 - 2U & 0xfffffff9) == 0))
        goto LAB_022a937c;
      }
    }
    local_58 = puVar1 + 0x10;
    iStack_4c = *(undefined4 *)(param_1 + 0xc);
    local_50 = *(int *)(param_1 + 8) + -2;
    FUN_01a5033c(auStack_60,&local_48,0,&local_58,0);
    lVar7 = *(long *)puVar2;
    if ((((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
         ((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)))) &&
        (*(long *)(lVar7 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)) {
      uVar4 = FUN_0277d6c4(auStack_60);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(auStack_78,auStack_60);
        uVar5 = FUN_0123d890(local_68,4);
        if (((uVar5 & 1) != 0) ||
           (iVar3 = FUN_0123db50(auStack_70,local_68), (iVar3 - 2U & 0xfffffff9) == 0))
        goto LAB_022a937c;
      }
    }
    local_58 = puVar1 + 0x10;
    iStack_4c = *(undefined4 *)(param_1 + 0xc);
    local_50 = *(int *)(param_1 + 8) + 2;
    FUN_01a5033c(auStack_60,&local_48,0,&local_58,0);
    lVar7 = *(long *)puVar2;
    if ((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
       ((((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)) &&
         (*(long *)(lVar7 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)))) {
      uVar4 = FUN_0277d6c4(auStack_60);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(auStack_78,auStack_60);
        uVar5 = FUN_0123d890(local_68,4);
        if (((uVar5 & 1) != 0) ||
           (iVar3 = FUN_0123db50(auStack_70,local_68), (iVar3 - 2U & 0xfffffff9) == 0))
        goto LAB_022a937c;
      }
    }
    local_58 = puVar1 + 0x10;
    local_50 = *(int *)(param_1 + 8) + -2;
    iStack_4c = *(int *)(param_1 + 0xc) + 2;
    FUN_01a5033c(auStack_60,&local_48,0,&local_58,0);
    lVar7 = *(long *)puVar2;
    if ((((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
         ((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)))) &&
        (*(long *)(lVar7 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)) {
      uVar4 = FUN_0277d6c4(auStack_60);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(auStack_78,auStack_60);
        uVar5 = FUN_0123d890(local_68,4);
        if (((uVar5 & 1) != 0) ||
           (iVar3 = FUN_0123db50(auStack_70,local_68), (iVar3 - 2U & 0xfffffff9) == 0))
        goto LAB_022a937c;
      }
    }
    local_58 = puVar1 + 0x10;
    local_50 = *(undefined4 *)(param_1 + 8);
    iStack_4c = *(int *)(param_1 + 0xc) + 2;
    FUN_01a5033c(auStack_60,&local_48,0,&local_58,0);
    lVar7 = *(long *)puVar2;
    if ((((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
         ((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)))) &&
        (*(long *)(lVar7 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)) {
      uVar4 = FUN_0277d6c4(auStack_60);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(auStack_78,auStack_60);
        uVar5 = FUN_0123d890(local_68,4);
        if (((uVar5 & 1) != 0) ||
           (iVar3 = FUN_0123db50(auStack_70,local_68), (iVar3 - 2U & 0xfffffff9) == 0))
        goto LAB_022a937c;
      }
    }
    local_58 = puVar1 + 0x10;
    local_50 = *(int *)(param_1 + 8) + 2;
    iStack_4c = *(int *)(param_1 + 0xc) + 2;
    FUN_01a5033c(auStack_60,&local_48,0,&local_58,0);
    lVar7 = *(long *)puVar2;
    if (((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
        (((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)) &&
         (*(long *)(lVar7 + 0x2b0) != 0)))) && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)) {
      uVar4 = FUN_0277d6c4(auStack_60);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(auStack_78,auStack_60);
        uVar5 = FUN_0123d890(local_68,4);
        if (((uVar5 & 1) != 0) ||
           (iVar3 = FUN_0123db50(auStack_70,local_68), (iVar3 - 2U & 0xfffffff9) == 0))
        goto LAB_022a937c;
      }
    }
    uVar6 = 1;
  }
  else {
    uVar4 = FUN_0277d6c4(auStack_60);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_022a8de0;
    FUN_0124c030(auStack_78,auStack_60);
    uVar5 = FUN_0123d890(local_68,4);
    if (((uVar5 & 1) == 0) &&
       (iVar3 = FUN_0123db50(auStack_70,local_68), (iVar3 - 2U & 0xfffffff9) != 0))
    goto LAB_022a8de0;
LAB_022a937c:
    uVar6 = 0;
  }
  return uVar6;
}

