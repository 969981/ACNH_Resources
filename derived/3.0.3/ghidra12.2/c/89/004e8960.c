
void FUN_004e8960(undefined8 *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong local_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  ulong local_68;
  
  if ((param_1[1] == 0) || (uVar1 = FUN_00428440(), (uVar1 & 0x1f) != 8)) {
    uVar3 = 0;
    uVar4 = 0;
    local_88 = 0;
  }
  else {
    uVar4 = *param_1;
    uVar3 = param_1[1];
    local_88 = param_1[2];
    if ((local_88 & 1) != 0) {
      FUN_0043dd30(local_88 & 0xfffffffffffffffe);
      local_88 = param_1[2];
    }
  }
  if (0 < (int)param_3) {
    uVar1 = 0;
    do {
      local_70 = 0;
      local_68 = 0;
      local_80 = 0;
      lStack_78 = 0;
      (**(code **)(*(long *)(local_88 & 0xfffffffffffffffe) + 0x50))
                ((long *)(local_88 & 0xfffffffffffffffe),uVar4,uVar3,&local_80);
      uVar7 = local_68;
      lVar5 = lStack_78;
      if ((long)uVar1 < (long)(int)local_70) {
        lVar6 = local_80 + (long)local_70._4_4_ * (long)(int)uVar1;
        if ((local_68 & 1) != 0) {
          FUN_0043dd30(local_68 & 0xfffffffffffffffe);
          goto joined_r0x004e8aac;
        }
        if ((local_68 & 1) != 0) goto LAB_004e8ab0;
LAB_004e8a6c:
        if (lVar5 == 0) goto LAB_004e8abc;
LAB_004e8a70:
        uVar2 = FUN_00428440(lVar5);
        if ((uVar2 & 0x1f) == 5) {
          uVar2 = uVar7;
          if ((uVar7 & 1) != 0) {
            FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
          }
        }
        else {
          lVar5 = 0;
          lVar6 = 0;
          uVar2 = 0;
        }
      }
      else {
        uVar7 = 0;
        lVar5 = 0;
        lVar6 = 0;
joined_r0x004e8aac:
        if ((local_68 & 1) == 0) goto LAB_004e8a6c;
LAB_004e8ab0:
        FUN_0043dd50(local_68 & 0xfffffffffffffffe);
        if (lVar5 != 0) goto LAB_004e8a70;
LAB_004e8abc:
        lVar6 = 0;
        uVar2 = 0;
      }
      if ((uVar7 & 1) != 0) {
        FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
      }
      plVar8 = (long *)(uVar2 & 0xfffffffffffffffe);
      (**(code **)(*plVar8 + 0x30))((double)*(float *)(param_2 + uVar1 * 4),plVar8,lVar6,lVar5);
      if ((uVar2 & 1) != 0) {
        FUN_0043dd50(plVar8);
      }
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  if ((local_88 & 1) != 0) {
    FUN_0043dd50(local_88 & 0xfffffffffffffffe);
  }
  return;
}

