
undefined8 FUN_001f7468(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_58 [16];
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar8 = *(long *)(lVar3 + 0x18);
  if (lVar8 == lVar4) {
    *(undefined1 *)(param_1 + 8) = 1;
switchD_001f74f8_caseD_0:
    FUN_0018d610(&local_48);
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28);
    lVar3 = lVar4 + 1;
    uVar5 = *(undefined1 *)(lVar2 + lVar4);
    *(long *)(param_1 + 0x18) = lVar3;
    switch(uVar5) {
    case 0:
      goto switchD_001f74f8_caseD_0;
    case 1:
      if ((ulong)(lVar8 - lVar3) < 8) {
        uVar7 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar7 = *(undefined8 *)(lVar2 + lVar3);
        *(long *)(param_1 + 0x18) = lVar4 + 9;
      }
      FUN_0018d878(&local_48,uVar7);
      break;
    case 2:
      if ((ulong)(lVar8 - lVar3) < 8) {
        uVar7 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar7 = *(undefined8 *)(lVar2 + lVar3);
        *(long *)(param_1 + 0x18) = lVar4 + 9;
      }
      FUN_0018d8c0(uVar7,&local_48);
      break;
    case 3:
      FUN_0019761c(param_1,local_58);
      FUN_0018d8d0(&local_48,local_58[0]);
      break;
    case 4:
      local_40[0] = 0;
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      local_30 = local_40;
      uStack_28 = 0x10;
      local_48 = puVar1;
      uVar6 = FUN_001f719c(param_1,&local_48);
      if ((uVar6 & 1) == 0) {
        local_48 = puVar1;
        FUN_0018b1a0(&local_48);
        return 0;
      }
      FUN_0018d8e0(local_58,&local_48);
      FUN_0018dbbc(param_2,local_58);
      FUN_0018d854(local_58);
      local_48 = puVar1;
      FUN_0018b1a0(&local_48);
      return 1;
    case 5:
      FUN_00186524(local_58);
      lVar3 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar3 + 0x18) - lVar4) < 8) {
        local_48 = (undefined *)0x0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        local_48 = *(undefined **)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) + lVar4);
        *(long *)(param_1 + 0x18) = lVar4 + 8;
      }
      FUN_001865b0(local_58,&local_48);
      FUN_0018daa0(&local_48,local_58);
      break;
    case 6:
      if ((ulong)(lVar8 - lVar3) < 8) {
        uVar7 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar7 = *(undefined8 *)(lVar2 + lVar3);
        *(long *)(param_1 + 0x18) = lVar4 + 9;
      }
      FUN_0018d888(&local_48,uVar7);
      break;
    default:
      return 1;
    }
  }
  FUN_0018dbbc(param_2,&local_48);
  FUN_0018d854(&local_48);
  return 1;
}

