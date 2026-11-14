
undefined8 FUN_01a50970(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar8;
  long lVar7;
  undefined *local_48;
  uint local_40;
  uint uStack_3c;
  uint local_34;
  
  uVar5 = FUN_01a4f798(param_1,param_2,param_4);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  iVar4 = FUN_0277d6c4(param_3);
  if ((iVar4 == 0xea79) && (DAT_0514f7f0 != 0)) {
    local_40 = *(uint *)(param_4 + 8);
    uStack_3c = *(uint *)(param_4 + 0xc);
    if ((local_40 < 0x120) && (uStack_3c < 0x100)) {
      lVar7 = (ulong)(uint)(((int)uStack_3c >> 1) * 0x90) + (ulong)(uint)((int)local_40 >> 1);
      if ((uint)lVar7 != 0xffffffff) {
        if (8 < (uint)lVar7 >> 0xb) {
          lVar7 = 0;
        }
        *(undefined1 *)(DAT_0514f7f0 + lVar7 + 0x2a58) = 0;
        local_40 = *(uint *)(param_4 + 8);
        uStack_3c = *(uint *)(param_4 + 0xc);
      }
    }
    local_48 = PTR_DAT_04bb2010 + 0x10;
    FUN_011dc8e4(&local_48);
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 == 0) {
LAB_01a50a80:
    plVar8 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    local_34 = uVar3;
    if (uVar3 == 0) {
      lVar7 = 0;
      goto LAB_01a50a90;
    }
    if (uVar3 == 0) goto LAB_01a50a80;
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar8 = plVar1 + uVar3;
    if (0x38 < uVar3) {
      plVar8 = plVar1;
    }
  }
  lVar7 = *plVar8;
LAB_01a50a90:
  local_48 = (undefined *)CONCAT44(local_48._4_4_,param_2);
  lVar2 = lVar7 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar2 = lVar7 + 200;
  }
  if (*(long *)(lVar2 + 8) == 0) {
    return 0;
  }
  uVar6 = FUN_012e5290(*(long *)(lVar2 + 8),param_3,param_4);
  return uVar6;
}

