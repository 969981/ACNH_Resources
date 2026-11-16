
void FUN_0284eea8(long param_1,undefined8 *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
  *param_2 = 0xfffe;
  FUN_0277d4ac(param_2);
  uVar2 = FUN_0284da58(param_1,param_3,0);
  if (uVar2 < 7) {
    local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar2);
    switch(uVar2) {
    default:
      lVar6 = param_1 + 8;
      break;
    case 1:
      lVar6 = param_1 + 0x44;
      break;
    case 2:
      lVar6 = param_1 + 0x80;
      break;
    case 3:
      lVar6 = param_1 + 0xc0;
      break;
    case 4:
      lVar6 = param_1 + 0xfc;
      break;
    case 5:
      lVar6 = param_1 + 0x134;
      break;
    case 6:
      lVar6 = param_1 + 0x16c;
    }
    if (*(char *)(lVar6 + 0x2f) != '\x02') goto LAB_0284ef60;
  }
  else {
LAB_0284ef60:
    if (((*(char *)(param_1 + 0xbc) == param_3) && (*(char *)(param_1 + 0xaf) == '\x02')) &&
       (uVar4 = FUN_0284cae0(param_1,0xc), (uVar4 & 1) == 0)) goto switchD_0284efa8_caseD_2;
  }
  switch(uVar2) {
  case 0:
    *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 0x3c);
    *(undefined1 *)((long)param_2 + 2) = *(undefined1 *)(param_1 + 0x3e);
    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x3f);
    *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_1 + 0x40);
    return;
  case 1:
    FUN_02847f9c(&local_58,param_1 + 0x44);
    break;
  case 2:
switchD_0284efa8_caseD_2:
    uVar4 = FUN_0284cae0(param_1,4);
    uVar7 = *(undefined2 *)(param_1 + 0xb4);
    uVar8 = *(undefined1 *)(param_1 + 0xb6);
    uVar9 = *(undefined1 *)(param_1 + 0xb7);
    uVar5 = *(undefined4 *)(param_1 + 0xb8);
    local_68 = uVar7;
    local_66 = uVar8;
    local_65 = uVar9;
    local_64 = uVar5;
    iVar3 = FUN_0277d6c4(&local_68);
    puVar1 = PTR_DAT_04bb43c0;
    if (((uVar4 & 1) != 0) && (iVar3 == 0x1095)) {
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_48 = 0;
      lVar6 = *(long *)PTR_DAT_04bb43c0;
      local_50 = uVar7;
      local_4e = uVar8;
      local_4d = uVar9;
      local_4c = uVar5;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(&local_68);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
            local_48 = lVar6;
          }
        }
      }
      FUN_01b06c00(&local_60,&local_58);
      uVar7 = local_60;
      uVar8 = local_5e;
      uVar9 = local_5d;
      uVar5 = local_5c;
    }
    *(undefined2 *)param_2 = uVar7;
    *(undefined1 *)((long)param_2 + 2) = uVar8;
    *(undefined1 *)((long)param_2 + 3) = uVar9;
    *(undefined4 *)((long)param_2 + 4) = uVar5;
    return;
  case 3:
    local_58 = (undefined *)0x9f1;
    FUN_0277d4ac(&local_58);
    break;
  default:
    goto switchD_0284efa8_default;
  }
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((long)param_2 + 4) = local_58._4_4_;
switchD_0284efa8_default:
  return;
}

