
void FUN_004e34a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_50;
  undefined8 local_48;
  long local_38;
  
  local_38 = FUN_004dc1c0(param_3,param_4);
  puVar3 = (undefined8 *)FUN_00426d40(local_38,0x10000);
  lVar6 = local_38;
  *puVar3 = 0;
  uVar4 = FUN_00428440(local_38);
  if ((lVar6 == 0) || ((uVar4 & 0x1f) != 8)) {
    uVar4 = FUN_00428440(lVar6);
    if (lVar6 == 0) {
      return;
    }
    if ((uVar4 & 0x1f) != 6) {
      return;
    }
    local_50 = 0;
    local_48 = -0x8000000000000000;
    FUN_004e3690(param_1,param_2,&local_50);
    if (0 < (int)local_48) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        lVar7 = *(long *)(local_50 + lVar5);
        iVar2 = FUN_00429050(&local_38);
        uVar4 = 0;
        if (local_38 != 0) {
          uVar4 = FUN_00428370();
        }
        if ((uVar4 & 1) == 0) {
          *(undefined4 *)(iVar2 + lVar7) = 0;
        }
        else {
          FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
          *(undefined4 *)(iVar2 + lVar7) = 0;
          FUN_0043dd50(uVar4 & 0xfffffffffffffffe);
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (lVar6 < (int)local_48);
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_00426e90(lVar6,1);
    if ((puVar3 != (undefined8 *)0x0) && ((int)((ulong)*puVar3 >> 8) != 0)) {
      return;
    }
    local_50 = 0;
    local_48 = -0x8000000000000000;
    FUN_004e3690(param_1,param_2,&local_50);
    if (0 < (int)local_48) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        lVar7 = *(long *)(local_50 + lVar5);
        iVar2 = FUN_00429050(&local_38);
        if (local_38 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00428370();
          if ((uVar4 & 1) != 0) {
            FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
          }
        }
        if (*(int *)(iVar2 + lVar7) != 0) {
          *(undefined4 *)(iVar2 + lVar7) = 0;
        }
        if ((uVar4 & 1) != 0) {
          FUN_0043dd50(uVar4 & 0xfffffffffffffffe);
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (lVar6 < (int)local_48);
    }
  }
  lVar6 = local_48;
  uVar1 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_50 != 0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_50,0x18,uVar1 & 0x3fffffff);
  }
  return;
}

