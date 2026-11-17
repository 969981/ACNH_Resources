
long FUN_031c7a10(byte *param_1,uint param_2,uint *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  byte local_60 [4];
  uint local_5c;
  ulong local_58;
  long lStack_50;
  undefined8 local_48;
  
  local_5c = *param_3;
  if (((local_5c == DAT_05717400) || (local_60[0] = *param_1, 7 < local_60[0])) ||
     (lVar1 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_60,1), lVar1 == 0)) {
    return 0xffffffff;
  }
  lVar8 = lVar1 + 0x194b0;
  if (*(long *)(lVar1 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    lVar1 = *(long *)(lVar8 + 0x1170);
    if (lVar1 != 0) goto LAB_031c7a90;
LAB_031c7af0:
    uVar7 = *param_3;
    uVar2 = 0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x1a620);
    if (lVar1 == 0) goto LAB_031c7af0;
LAB_031c7a90:
    if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
      uVar7 = *param_3;
      uVar2 = 0;
LAB_031c7b04:
      plVar3 = *(long **)(lVar1 + 0x20);
      if (plVar3 != (long *)0x0) {
        local_58 = *(ulong *)(lVar8 + 0x1150);
        lStack_50 = *(long *)(lVar8 + 0x1158);
        local_48 = 0x208;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
      lVar1 = *(long *)(lVar8 + 0x1170);
      uVar2 = uVar2 & 0xffffffff;
      uVar7 = *param_3;
      if (lVar1 != 0) goto LAB_031c7b04;
    }
  }
  uVar5 = *(ulong *)(lVar8 + 0x1150);
  lVar6 = *(long *)(lVar8 + 0x1158);
  lVar1 = lVar6 + uVar5;
  if (uVar7 == *(byte *)(lVar1 + 0x100)) {
    lVar1 = 0;
  }
  else {
    uVar7 = *param_3;
    if ((*(long *)(lVar8 + 0x1170) != 0) &&
       (plVar3 = *(long **)(*(long *)(lVar8 + 0x1170) + 0x20), plVar3 != (long *)0x0)) {
      local_48 = 0x208;
      local_58 = uVar5;
      lStack_50 = lVar6;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
      uVar5 = *(ulong *)(lVar8 + 0x1150);
      lVar6 = *(long *)(lVar8 + 0x1158);
      lVar1 = lVar6 + uVar5;
    }
    if (uVar7 == *(byte *)(lVar1 + 0x101)) {
      lVar1 = 1;
    }
    else {
      uVar7 = *param_3;
      if ((*(long *)(lVar8 + 0x1170) != 0) &&
         (plVar3 = *(long **)(*(long *)(lVar8 + 0x1170) + 0x20), plVar3 != (long *)0x0)) {
        local_48 = 0x208;
        local_58 = uVar5;
        lStack_50 = lVar6;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
        uVar5 = *(ulong *)(lVar8 + 0x1150);
        lVar6 = *(long *)(lVar8 + 0x1158);
        lVar1 = lVar6 + uVar5;
      }
      if (uVar7 == *(byte *)(lVar1 + 0x102)) {
        lVar1 = 2;
      }
      else {
        uVar7 = *param_3;
        lVar1 = lVar8 + 0x1148;
        FUN_02640280(lVar1,0x208);
        uVar5 = *(ulong *)(lVar8 + 0x1150);
        lVar6 = *(long *)(lVar8 + 0x1158);
        if (uVar7 == *(byte *)(lVar6 + uVar5 + 0x103)) {
          lVar1 = 3;
        }
        else {
          uVar7 = *param_3;
          FUN_02640280(lVar1,0x208);
          uVar5 = *(ulong *)(lVar8 + 0x1150);
          lVar6 = *(long *)(lVar8 + 0x1158);
          if (uVar7 == *(byte *)(lVar6 + uVar5 + 0x104)) {
            lVar1 = 4;
          }
          else {
            uVar7 = *param_3;
            FUN_02640280(lVar1,0x208);
            uVar5 = *(ulong *)(lVar8 + 0x1150);
            lVar6 = *(long *)(lVar8 + 0x1158);
            if (uVar7 == *(byte *)(lVar6 + uVar5 + 0x105)) {
              lVar1 = 5;
            }
            else {
              uVar7 = *param_3;
              FUN_02640280(lVar1,0x208);
              uVar5 = *(ulong *)(lVar8 + 0x1150);
              lVar6 = *(long *)(lVar8 + 0x1158);
              if (uVar7 == *(byte *)(lVar6 + uVar5 + 0x106)) {
                lVar1 = 6;
              }
              else {
                uVar7 = *param_3;
                FUN_02640280(lVar1,0x208);
                uVar5 = *(ulong *)(lVar8 + 0x1150);
                lVar6 = *(long *)(lVar8 + 0x1158);
                if (uVar7 != *(byte *)(lVar6 + uVar5 + 0x107)) {
                  lVar1 = 0xffffffff;
                  lVar6 = *(long *)(lVar8 + 0x1170);
                  goto joined_r0x031c7df4;
                }
                lVar1 = 7;
              }
            }
          }
        }
      }
    }
  }
  if ((*(long *)(lVar8 + 0x1170) != 0) &&
     (plVar3 = *(long **)(*(long *)(lVar8 + 0x1170) + 0x20), plVar3 != (long *)0x0)) {
    local_48 = 0x208;
    local_58 = uVar5;
    lStack_50 = lVar6;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
    uVar5 = *(ulong *)(lVar8 + 0x1150);
    lVar6 = *(long *)(lVar8 + 0x1158);
  }
  local_58 = local_58 & 0xffffffff00000000;
  *(undefined1 *)(lVar6 + uVar5 + lVar1 + 0x100) = 0;
  lVar6 = *(long *)(lVar8 + 0x1170);
joined_r0x031c7df4:
  if ((lVar6 != 0) && (plVar3 = *(long **)(lVar6 + 0x20), plVar3 != (long *)0x0)) {
    local_58 = *(ulong *)(lVar8 + 0x1150);
    lStack_50 = *(long *)(lVar8 + 0x1158);
    local_48 = 0x208;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  }
  if (param_2 < 8) {
    *(char *)(*(long *)(lVar8 + 0x1158) + *(long *)(lVar8 + 0x1150) + (ulong)param_2 + 0x100) =
         (char)*param_3;
  }
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar8 + 0x1170) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x1170) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return lVar1;
}

