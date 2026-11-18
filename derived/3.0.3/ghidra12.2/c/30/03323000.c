
void FUN_03323000(long *param_1,ulong param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  byte local_5c [4];
  byte local_58 [4];
  byte local_54 [4];
  
  puVar4 = PTR_DAT_04bc1118;
  lVar9 = *(long *)PTR_DAT_04bc1118;
  lVar8 = *(long *)(lVar9 + 0x20);
  iVar1 = *(int *)(lVar8 + 0xcf4);
  iVar2 = *(int *)(lVar8 + 0xcf8);
  uVar5 = (**(code **)(*param_1 + 0xd0))();
  if ((iVar1 != iVar2) && ((uVar5 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03323084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,0x2c9,0);
    return;
  }
  lVar8 = param_1[0x62];
  if ((lVar8 != 0) && ((*(char *)(lVar8 + 0x177c) != '\0' || (*(long *)(lVar8 + 0xdf8) != 0)))) {
    if ((param_3 & 1) != 0) {
      uVar5 = (**(code **)(*param_1 + 200))(param_1);
      lVar8 = param_1[0x62];
      if ((uVar5 & 1) != 0) {
        if ((param_2 & 1) == 0) {
          if (lVar8 == 0) {
            return;
          }
          if ((*(char *)(lVar8 + 0x177c) == '\0') && (*(long *)(lVar8 + 0xdf8) == 0)) {
            return;
          }
          uVar5 = FUN_03360dd0(lVar8);
          if ((uVar5 & 1) == 0) goto LAB_03323264;
          (**(code **)(*param_1 + 200))(param_1);
          lVar8 = param_1[0x62];
          uVar6 = 1;
        }
        else {
          if (lVar8 == 0) {
            return;
          }
          if ((*(char *)(lVar8 + 0x177c) == '\0') && (*(long *)(lVar8 + 0xdf8) == 0)) {
            return;
          }
          uVar5 = FUN_03360dd0(lVar8);
          if ((uVar5 & 1) == 0) {
LAB_03323264:
            FUN_03360e3c(lVar8);
            return;
          }
          (**(code **)(*param_1 + 200))(param_1);
          lVar8 = param_1[0x62];
          uVar6 = 0;
        }
        FUN_03360bc0(lVar8,uVar6);
        return;
      }
    }
    FUN_03360ed0(lVar8);
  }
  lVar8 = *(long *)(lVar9 + 0x20);
  if (*(int *)(lVar8 + 0x6e8) == *(int *)(*(long *)(lVar8 + 0x708) + 8) + -1 &&
      *(int *)(lVar8 + 0x6e8) == *(int *)(lVar8 + 0x6f0)) {
    return;
  }
  uVar5 = (**(code **)(*param_1 + 0x128))(param_1);
  bVar3 = param_3 & 1;
  if ((uVar5 & 1) == 0) {
    lVar8 = param_1[1];
    pbVar7 = local_5c;
    local_5c[0] = bVar3;
  }
  else {
    if ((param_2 & 1) == 0) {
      lVar8 = param_1[1];
      pbVar7 = local_58;
      uVar6 = 0xf;
      local_58[0] = bVar3;
      goto LAB_03323180;
    }
    lVar8 = param_1[1];
    pbVar7 = local_54;
    local_54[0] = bVar3;
  }
  uVar6 = 4;
LAB_03323180:
  FUN_032e4b30(lVar8,uVar6,pbVar7);
  lVar8 = param_1[0x62];
  if (lVar8 != 0) {
    if ((iVar1 != iVar2) && (*(char *)(lVar8 + 0x177c) != '\0' || *(long *)(lVar8 + 0xdf8) != 0)) {
      FUN_032e4b30(param_1[1],0x17,0);
    }
  }
  if (((param_3 & 1) != 0) && ((char)param_1[0x2be] == '\0')) {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  *(undefined4 *)((long)param_1 + 0x15ec) =
       *(undefined4 *)(*(long *)(*(long *)puVar4 + 0x20) + 0x6e8);
  return;
}

