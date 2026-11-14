
void FUN_01c138cc(long *param_1)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 *local_78;
  long local_70;
  undefined1 uStack_61;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_01c1398c:
    if (DAT_05574040 == 0) {
LAB_01c139e4:
      lVar5 = 0;
    }
    else {
      puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar7 = (**(code **)(*(long *)*puVar6 + 0x38))();
        lVar5 = 0;
        if (lVar7 != 0) {
          lVar5 = lVar7 + 0x70;
        }
      }
      else {
        if (puVar6 == (undefined8 *)0x0) goto LAB_01c139e4;
        lVar5 = 0;
        if ((long *)puVar6[0x26] != (long *)0x0) {
          lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
        }
      }
    }
    plVar10 = (long *)(lVar5 + 0xe7270);
    if (*(long **)(lVar5 + 0xe7290) != (long *)0x0) {
      puVar6 = (undefined8 *)**(long **)(lVar5 + 0xe7290);
joined_r0x01c13a00:
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
        goto LAB_01c13a1c;
      }
    }
  }
  else {
    local_60._0_4_ = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_01c1398c;
    local_60 = FUN_02642d30();
    uVar9 = local_60._8_8_ & 0xffffffff;
    if (uVar9 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    local_78 = &uStack_61;
    lVar5 = (*(code *)(&PTR_LAB_04a88330)[uVar9])(&local_78,local_60);
    plVar10 = (long *)(lVar5 + 0x98360);
    if (*(long **)(lVar5 + 0x98380) != (long *)0x0) {
      puVar6 = (undefined8 *)**(long **)(lVar5 + 0x98380);
      goto joined_r0x01c13a00;
    }
  }
  uVar4 = 1;
LAB_01c13a1c:
  local_70 = plVar10[1] + *plVar10 + 4;
  local_78 = (undefined1 *)CONCAT44(local_78._4_4_,10);
  (**(code **)(*param_1 + 0x38))(param_1);
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_38 = 1;
  local_34 = 0;
  local_60._0_8_ = PTR_DAT_04bc0cd8 + 0x10;
  local_60._8_8_ = 0;
  FUN_02906b00(local_60,param_1,&local_78);
  bVar2 = *(byte *)(plVar10[1] + *plVar10 + 0x18);
  uVar8 = 2;
  if (bVar2 < 4) {
    uVar8 = (uint)bVar2;
  }
  *(uint *)(param_1 + 0x1f) = uVar8;
  if ((((uVar4 & 1) == 0) && (plVar10[4] != 0)) &&
     (puVar6 = *(undefined8 **)(plVar10[4] + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

