
/* WARNING: Removing unreachable block (ram,0x02145a58) */

void FUN_02145940(long param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((char)param_2[3] != '\x03') {
    lVar4 = *(long *)(param_1 + 8);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    if ((uVar2 < *(ushort *)(lVar4 + 4)) ||
       ((uVar3 < *(ushort *)(lVar4 + 6) || *(ushort *)(lVar4 + 8) < uVar2) ||
        *(ushort *)(lVar4 + 10) < uVar3)) {
      FUN_035a4360(lVar4,uVar2,uVar3,0);
      return;
    }
    local_38 = 0;
    uVar5 = FUN_035aa010(uVar2,uVar3,*(undefined8 *)(param_1 + 0x10),0);
    uVar7 = (uint)uVar2;
    uVar6 = (uint)uVar3;
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_035a9d50(uVar7,uVar6,*(undefined8 *)(param_1 + 0x10));
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_035ab240(uVar7,uVar6,*(undefined8 *)(param_1 + 0x10),&local_38);
        if ((uVar5 & 1) != 0) {
          FUN_035a4360(*(undefined8 *)(param_1 + 8),uVar7,uVar6,local_38);
          return;
        }
        uVar5 = (**(code **)(param_1 + 0x48))(uVar7,uVar6,*(undefined8 *)(param_1 + 0x10));
        if ((uVar5 & 1) == 0) {
          FUN_02145b64(param_1,param_2);
          return;
        }
      }
      else if (((*(char *)(param_1 + 0x40) != '\0') && (*(int *)(param_1 + 0x28) <= (int)uVar7)) &&
              (((int)uVar7 <= *(int *)(param_1 + 0x38) &&
               ((*(int *)(param_1 + 0x2c) <= (int)uVar6 && ((int)uVar6 <= *(int *)(param_1 + 0x3c)))
               )))) {
        return;
      }
      FUN_035a4360(*(undefined8 *)(param_1 + 8),uVar7,uVar6,0);
    }
    else if ((((*(char *)(param_1 + 0x40) == '\0') || ((int)uVar7 < *(int *)(param_1 + 0x28))) ||
             (*(int *)(param_1 + 0x38) < (int)uVar7)) ||
            (((int)uVar6 < *(int *)(param_1 + 0x2c) || (*(int *)(param_1 + 0x3c) < (int)uVar6)))) {
      local_34 = 0;
      local_58 = &DAT_048f9750;
      local_50 = 0;
      puStack_48 = &DAT_048f9750;
      lVar4 = *(long *)(**(long **)(param_1 + 0x10) + 0xd0);
      local_40 = uVar7;
      uStack_3c = uVar6;
      if (lVar4 == 0) {
        local_50._4_4_ = 0;
        uVar5 = 0;
      }
      else {
        lVar1 = lVar4 + 0x130 + (ulong)*(uint *)(lVar4 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar4 + 0x198)) {
          lVar1 = lVar4 + 0x130;
        }
        FUN_012eb21c(lVar1,&puStack_48,&local_58);
        uVar5 = local_50 & 0xffffffff;
      }
      FUN_035a4bec(*(undefined8 *)(param_1 + 8),uVar5,local_50._4_4_);
    }
  }
  return;
}

