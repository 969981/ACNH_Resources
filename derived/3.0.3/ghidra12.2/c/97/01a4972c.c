
uint FUN_01a4972c(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,**(undefined4 **)(param_1 + 8)), lVar4 != 0)) {
    lVar6 = *(long *)puVar1;
    if (*(long *)(lVar4 + 0x194b8) == 0) {
      lVar4 = *(long *)(lVar6 + 0x20) + 0x10d8;
LAB_01a4979c:
      puVar7 = *(undefined8 **)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x453) & 1) != 0) {
        if (((puVar7 != (undefined8 *)0x0) && ((long *)puVar7[0x26] != (long *)0x0)) &&
           (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 != 0)) goto LAB_01a497e0;
        goto LAB_01a49834;
      }
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) goto LAB_01a49834;
      lVar6 = lVar6 + 0x70;
LAB_01a497e0:
      if ((*(long **)(lVar6 + 0x1c2520) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x1c2520), puVar7 == (undefined8 *)0x0)) {
        uVar8 = *(undefined1 *)(*(long *)(lVar6 + 0x1c2508) + *(long *)(lVar6 + 0x1c2500) + 1);
      }
      else {
        uVar5 = (**(code **)*puVar7)();
        uVar8 = *(undefined1 *)(*(long *)(lVar6 + 0x1c2508) + *(long *)(lVar6 + 0x1c2500) + 1);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x1c2520) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1c2520) + 8), puVar7 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar7)();
        }
      }
    }
    else {
      lVar4 = lVar4 + 0x1a588;
      if (lVar6 != 0) goto LAB_01a4979c;
LAB_01a49834:
      uVar8 = 0;
    }
    puVar1 = PTR_DAT_04bb43c0;
    local_48 = 0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_50 = *param_2;
    uStack_4c = param_2[1];
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar1 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(param_2);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
          local_48 = lVar6;
        }
      }
    }
    iVar3 = FUN_01ad7260(&local_58);
    if (((iVar3 != 0) && (uVar5 = FUN_01ae6580(&local_58), (uVar5 & 1) != 0)) &&
       (iVar3 = FUN_01afe130(&local_58), iVar3 != 1)) {
      uVar2 = FUN_01a4b650(lVar4,param_2,uVar8);
      uVar2 = uVar2 ^ 1;
      goto LAB_01a4991c;
    }
  }
  uVar2 = 0;
LAB_01a4991c:
  return uVar2 & 1;
}

