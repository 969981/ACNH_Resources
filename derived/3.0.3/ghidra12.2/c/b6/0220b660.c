
undefined8 FUN_0220b660(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *local_40;
  char *pcStack_38;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  uVar9 = *(undefined8 *)PTR_DAT_04bb4130;
  (**(code **)(*param_1 + 0x18))();
  uVar6 = FUN_006bd550(param_1[1],0);
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar6);
  lVar7 = FUN_0079e4d0(uVar9,&local_40);
  if (lVar7 == 0) {
    return 0;
  }
  if ((*(char *)param_1[1] == 'k') && (((char *)param_1[1])[1] == 'p')) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar7 = 0;
    while (*(char *)(param_1[1] + lVar7) != '\0') {
      lVar3 = param_1[1] + lVar7;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        break;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        if ((int)lVar7 != 1) {
          return 0;
        }
        goto LAB_0220b73c;
      }
      lVar7 = lVar7 + 3;
      if (lVar7 == 0x80001) {
        return 0;
      }
    }
    if ((int)lVar7 == 3) {
LAB_0220b73c:
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "HotelConstruction";
      local_40 = puVar1;
      uVar8 = FUN_0273f0a0(&local_40);
      if ((uVar8 & 1) == 0) {
        pcStack_38 = "HotelBuilt";
        local_40 = puVar1;
        uVar8 = FUN_0273f0a0(&local_40);
        if ((uVar8 & 1) != 0) {
          lVar3 = param_1[1];
          (**(code **)(*param_1 + 0x18))(param_1);
          lVar7 = 0;
          do {
            if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_0220b7e4;
            lVar4 = param_1[1] + lVar7;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar7 = lVar7 + 1;
              goto LAB_0220b7e4;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar7 = lVar7 + 2;
              goto LAB_0220b7e4;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          lVar7 = 0;
LAB_0220b7e4:
          uVar5 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
          uVar2 = (int)param_1[2] + ~uVar5;
          if (1 < (int)((int)param_1[2] - uVar5)) {
            uVar2 = 1;
          }
          if (0 < (int)uVar2) {
            memcpy((void *)(lVar3 + (ulong)uVar5),&DAT_040c3cf0,(ulong)uVar2);
            *(undefined1 *)(lVar3 + (ulong)uVar2 + (ulong)uVar5) = 0;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

