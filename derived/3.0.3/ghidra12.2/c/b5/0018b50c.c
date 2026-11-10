
undefined *** FUN_0018b50c(undefined ***param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code *pcVar9;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined ***local_30;
  undefined **ppuStack_28;
  
  FUN_0018b650(&local_48);
  ppuVar6 = ppuStack_28;
  pppuVar5 = local_30;
  pppuVar7 = (undefined ***)param_1[3];
  if (&local_48 != param_1) {
    pppuVar8 = param_1 + 1;
    uVar1 = *(undefined4 *)pppuVar8;
    uVar2 = *(undefined4 *)((long)param_1 + 0xc);
    *(undefined4 *)pppuVar8 = local_40;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
    uVar4 = *(undefined2 *)(param_1 + 2);
    local_40 = uVar1;
    uStack_3c = uVar2;
    *(undefined2 *)(param_1 + 2) = local_38;
    local_38 = uVar4;
    uVar3 = *(undefined1 *)((long)param_1 + 0x12);
    *(undefined2 *)((long)param_1 + 0x12) = local_36;
    local_36 = CONCAT11(*(undefined1 *)((long)param_1 + 0x13),uVar3);
    uVar3 = *(undefined1 *)((long)param_1 + 0x14);
    *(undefined1 *)((long)param_1 + 0x14) = local_34;
    local_34 = uVar3;
    uVar3 = *(undefined1 *)((long)param_1 + 0x15);
    *(undefined1 *)((long)param_1 + 0x15) = local_33;
    local_33 = uVar3;
    uVar3 = *(undefined1 *)((long)param_1 + 0x16);
    *(undefined1 *)((long)param_1 + 0x16) = local_32;
    local_32 = uVar3;
    uVar3 = *(undefined1 *)((long)param_1 + 0x17);
    *(undefined1 *)((long)param_1 + 0x17) = local_31;
    local_31 = uVar3;
    local_30 = pppuVar7;
    ppuStack_28 = param_1[4];
    param_1[3] = (undefined **)pppuVar5;
    param_1[4] = ppuVar6;
    if (pppuVar7 == pppuVar8) {
      local_30 = (undefined ***)&local_40;
      pppuVar7 = (undefined ***)&local_40;
    }
    local_30 = pppuVar7;
    if (pppuVar5 == (undefined ***)&local_40) {
      param_1[3] = (undefined **)pppuVar8;
    }
  }
  local_48 = &PTR_LAB_04a426b8;
  if ((pppuVar7 != (undefined ***)0x0) && (pppuVar7 != (undefined ***)&local_40)) {
    pcVar9 = *(code **)((long)pppuVar7 + -0x14);
    if (pcVar9 == (code *)0x0) {
      free((undefined8 *)((long)pppuVar7 + -0x14));
      return param_1;
    }
    (*pcVar9)();
  }
  return param_1;
}

