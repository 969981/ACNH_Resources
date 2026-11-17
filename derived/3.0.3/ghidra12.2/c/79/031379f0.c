
void FUN_031379f0(long param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined4 local_5c;
  undefined4 local_58;
  int iStack_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined4 uStack_44;
  
  plVar6 = (long *)(param_1 + 0x70);
  uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x30);
    local_58 = 0xffffffff;
    if ((-1 < (int)uVar4) && ((int)uVar4 < (int)*(uint *)(param_1 + 0x18))) {
      if (uVar4 < *(uint *)(param_1 + 0x18)) {
        lVar3 = param_1 + 8;
        uVar1 = uVar4 + 1 & 3;
        if (2 < uVar4) {
          uVar4 = uVar4 + 1 & 0xfffffffc;
          do {
            uVar4 = uVar4 - 4;
            lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) + 8);
          } while (uVar4 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          lVar3 = *(long *)(lVar3 + 8);
        }
      }
      else {
        lVar3 = 0;
      }
      local_58 = 0xffffffff;
      if ((lVar3 != 0) && (lVar3 = lVar3 - *(int *)(param_1 + 0x1c), lVar3 != 0)) {
        local_58 = *(undefined4 *)(lVar3 + 0x270);
      }
    }
    local_50 = *(int *)(param_1 + 0x34);
    uVar4 = *(uint *)(param_1 + 0x2c);
    if (uVar4 == 0) {
      local_48 = 0;
      local_4c = 0;
    }
    else {
      iVar5 = 0;
      local_4c = 0;
      do {
        if ((*(uint *)(param_1 + 0x3c) >> (ulong)(local_4c & 0x1f) & 1) != 0) {
          if (iVar5 == param_3) goto LAB_03137b14;
          iVar5 = iVar5 + 1;
        }
        local_4c = local_4c + 1;
      } while (uVar4 != local_4c);
      local_4c = 0;
LAB_03137b14:
      iVar5 = 0;
      local_48 = 0;
      do {
        if ((*(uint *)(param_1 + 0x3c) >> (ulong)(local_48 & 0x1f) & 1) != 0) {
          if (iVar5 == local_50) goto LAB_03137b4c;
          iVar5 = iVar5 + 1;
        }
        local_48 = local_48 + 1;
      } while (uVar4 != local_48);
      local_48 = 0;
    }
LAB_03137b4c:
    local_5c = param_2;
    iStack_54 = param_3;
    uStack_44 = param_4;
    (**(code **)*plVar6)(plVar6,&local_5c);
  }
  return;
}

