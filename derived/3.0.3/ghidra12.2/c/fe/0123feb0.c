
undefined8 FUN_0123feb0(undefined8 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  FUN_01233310();
  lVar2 = DAT_05150da0;
  if (DAT_05150d98 != '\0') {
    uVar7 = 0;
    do {
      uVar5 = FUN_0277d7b4(lVar2 + ((long)((ulong)uVar7 << 0x20) >> 0x1c) + 8,param_1);
      if ((uVar5 & 1) != 0) {
        if (param_2 != (undefined4 *)0x0) {
          puVar1 = (undefined2 *)(lVar2 + (long)(int)uVar7 * 0x10);
          *(undefined2 *)param_2 = *puVar1;
          *(undefined1 *)((long)param_2 + 2) = *(undefined1 *)(puVar1 + 1);
          *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)puVar1 + 3);
          param_2[1] = *(undefined4 *)(puVar1 + 2);
        }
        goto LAB_0123fff0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x5d);
  }
  FUN_0124c030(&local_58,param_1);
  iVar3 = FUN_0123db50(auStack_50,local_48);
  if ((iVar3 - 2U & 0xfffffff9) == 0) {
    uVar4 = FUN_0277d6c4(param_1);
    uVar6 = 0;
    switch(uVar4) {
    case 0xec6b:
    case 0xec6c:
    case 0xec6d:
    case 0xecbc:
    case 0xecbd:
    case 0xecbe:
    case 0xecbf:
      local_58 = 0x3739;
      break;
    case 0xec6e:
    case 0xec6f:
    case 0xec70:
      local_58 = 0x373a;
      break;
    case 0xec71:
    case 0xec72:
    case 0xec73:
      local_58 = 0x373c;
      break;
    default:
      goto switchD_0123ff8c_caseD_ec74;
    case 0xec78:
    case 0xec79:
    case 0xec7a:
      local_58 = 0x373b;
    }
    FUN_0277d4ac(&local_58);
    *param_2 = (undefined4)local_58;
    param_2[1] = local_58._4_4_;
LAB_0123fff0:
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
switchD_0123ff8c_caseD_ec74:
  return uVar6;
}

