
void FUN_01fddb40(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_1f8 [4];
  long *local_1e8;
  undefined4 local_194;
  undefined1 local_190;
  undefined1 auStack_11c [204];
  undefined *local_50;
  char *pcStack_48;
  
  puVar3 = PTR_DAT_04bb4e28;
  local_1f8[0] = *(undefined4 *)(param_1[1] + 0x230);
  FUN_0372fdf0(*(undefined8 *)PTR_DAT_04bb4e28,local_1f8,*(undefined4 *)((long)param_1 + 0x123bc));
  FUN_01fdec80(param_1,0);
  if ((int)param_1[0x15f1] == 0) {
    (**(code **)(*param_1 + 0x38))(param_1,1,0,0);
  }
  else {
    FUN_01e63f1c(local_1f8);
    local_1f8[0] = 1;
    puVar5 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar1 = *puVar5 ^ *puVar5 << 0xb;
    uVar2 = puVar5[3];
    *puVar5 = puVar5[1];
    puVar5[1] = puVar5[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar5[2] = uVar2;
    puVar5[3] = uVar1;
    param_1[0x248b] = (long)param_1;
    param_1[0x248d] = 0;
    local_194 = 1;
    param_1[0x248c] = (long)&LAB_01fe3590;
    *(int *)(param_1 + 0x2498) = (int)((ulong)uVar1 * 0x15 >> 0x20) + 0x6e;
    local_1e8 = param_1 + 0x248a;
    if (*(int *)(param_1[1] + 0x750) != 3) {
      uVar1 = *(uint *)(*(long *)puVar3 + 0xe0);
      iVar4 = 0;
      if (uVar1 != 0) {
        lVar6 = 0;
        lVar8 = (long)(int)uVar1 << 3;
        lVar7 = *(long *)(*(long *)puVar3 + 0xe8);
        do {
          if (*(int *)(param_1[1] + 0x230) == *(int *)(*(long *)(lVar7 + lVar6 * 8) + 8)) {
            if ((uint)lVar6 < uVar1) {
              lVar6 = *(long *)(lVar7 + lVar6 * 8);
            }
            else {
              lVar6 = 0;
            }
            iVar4 = DAT_05abbc50;
            if (DAT_05abbc50 == *(int *)(lVar6 + 0xe4)) goto LAB_01fddce4;
            local_50 = PTR_DAT_04bb2020 + 0x10;
            pcStack_48 = "GetCookingRecipeToday";
            iVar4 = FUN_02758850(&local_50);
            if (iVar4 == 0) {
              if (*(int *)(lVar6 + 0xd8) == 0xd) {
                iVar4 = 0x20;
                goto LAB_01fddce4;
              }
              if (*(int *)(lVar6 + 0xd8) == 0xe) {
                iVar4 = 0x21;
                goto LAB_01fddce4;
              }
            }
            iVar4 = *(int *)(lVar6 + 0xe4);
            goto LAB_01fddce4;
          }
          lVar6 = lVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        iVar4 = 0;
      }
LAB_01fddce4:
      local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar4);
      FUN_01fe2dd0(param_1,&local_50);
      FUN_01fe32b0(param_1,auStack_11c,&local_50);
    }
    local_190 = 1;
    if ((int)param_1[0x1619] < *(int *)((long)param_1 + 0xb0cc)) {
      FUN_021920b0(param_1 + 0x1619,local_1f8);
    }
  }
  return;
}

