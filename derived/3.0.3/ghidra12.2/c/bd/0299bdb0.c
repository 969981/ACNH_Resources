
void FUN_0299bdb0(long *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 uStack_39;
  undefined1 local_38 [16];
  undefined1 *local_28;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_38._0_4_ = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      if (param_3 < 0x3c) {
        if (*param_1 != 0) {
          return;
        }
        local_38 = FUN_02642d30();
        uVar5 = local_38._8_8_ & 0xffffffff;
        if (uVar5 != 0xffffffff) {
          local_28 = &uStack_39;
          lVar3 = (*(code *)(&PTR_LAB_04a88330)[uVar5])(&local_28,local_38);
          if (lVar3 == 0) {
            return;
          }
          *param_1 = lVar3 + 0x98390;
          return;
        }
LAB_0299bfbc:
                    /* WARNING: Subroutine does not return */
        FUN_00d72dc0();
      }
      if (*param_2 != 0) {
        return;
      }
      local_38 = FUN_02642d30();
      uVar5 = local_38._8_8_ & 0xffffffff;
      if (uVar5 == 0xffffffff) goto LAB_0299bfbc;
      local_28 = &uStack_39;
      lVar3 = (*(code *)(&PTR_LAB_04a88330)[uVar5])(&local_28,local_38);
      if (lVar3 == 0) {
        return;
      }
      puVar7 = (undefined1 *)(lVar3 + 0x990e8);
      goto LAB_0299bfa8;
    }
  }
  if (param_3 < 0x3c) {
    if (*param_1 != 0) {
      return;
    }
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar3 = 0;
      if (lVar4 != 0) {
        lVar3 = lVar4 + 0x70;
      }
    }
    else if (puVar6 == (undefined8 *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
    *param_1 = (long)(&LAB_00117510 + lVar3);
    return;
  }
  if (*param_2 != 0) {
    return;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = lVar4 + 0x70;
    }
  }
  else if (puVar6 == (undefined8 *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if ((long *)puVar6[0x26] != (long *)0x0) {
      lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    }
  }
  puVar7 = &LAB_00118268 + lVar3;
LAB_0299bfa8:
  *param_2 = (long)puVar7;
  return;
}

