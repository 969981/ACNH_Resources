
byte FUN_016d3964(char *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_54 [7];
  undefined1 local_4d;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*param_1 == '\0') {
    return 0;
  }
  local_60 = local_54;
  local_4d = 0;
  local_58 = 8;
  local_54[0] = 0;
  local_68 = PTR_DAT_04bb3768 + 0x10;
  if (*(int *)(param_1 + 4) == -1) {
    return 0;
  }
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar5 == 0) {
      return 0;
    }
    lVar5 = lVar5 + 0x70;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar8[0x26] == (long *)0x0) {
      return 0;
    }
    lVar5 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    if (lVar5 == 0) {
      return 0;
    }
  }
  iVar2 = *(int *)(param_1 + 4);
  puVar1 = &LAB_002057b0 + lVar5;
  if (*param_1 != '\0') {
    puVar1 = (undefined1 *)(lVar5 + 0x20b9e8);
  }
  if ((*(long **)(puVar1 + (long)iVar2 * 0xc40 + 0x6f0) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(puVar1 + (long)iVar2 * 0xc40 + 0x6f0),
     puVar8 == (undefined8 *)0x0)) {
    FUN_02774cf0(*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6d8) +
                 *(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6d0),&local_68);
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    FUN_02774cf0(*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6d8) +
                 *(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6d0),&local_68);
    if ((((uVar6 & 1) != 0) && (*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6f0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(puVar1 + (long)iVar2 * 0xc40 + 0x6f0) + 8),
       puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  lVar5 = DAT_053f9928;
  if (DAT_053f9928 == 0) {
    return 0;
  }
  (**(code **)(local_68 + 0x18))(&local_68);
  uVar4 = FUN_006bd550(local_60,0);
  local_48 = CONCAT44(local_48._4_4_,uVar4);
  lVar5 = FUN_0079e4d0(lVar5,&local_48);
  if (lVar5 == 0) {
    return 0;
  }
  lVar5 = FUN_016c6a84(param_1);
  if (lVar5 == 0) {
    return 0;
  }
  lVar9 = *(long *)(lVar5 + 0x28);
  if (lVar9 == 0) {
    return *(byte *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8)) >> 2 & 1;
  }
  if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    lVar9 = *(long *)(lVar5 + 0x28);
    uVar6 = uVar6 & 0xffffffff;
    if (lVar9 == 0) goto LAB_016d3b70;
  }
  plVar7 = *(long **)(lVar9 + 0x20);
  if (plVar7 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar5 + 8);
    uStack_40 = *(undefined8 *)(lVar5 + 0x10);
    local_38 = 0x158c;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
  }
LAB_016d3b70:
  bVar3 = *(byte *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8)) >> 2 & 1;
  if ((uVar6 & 1) == 0) {
    return bVar3;
  }
  if (*(long *)(lVar5 + 0x28) == 0) {
    return bVar3;
  }
  puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18);
  if (puVar8 == (undefined8 *)0x0) {
    return bVar3;
  }
  (**(code **)*puVar8)();
  return bVar3;
}

