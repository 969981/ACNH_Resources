
undefined8 FUN_02b61840(uint param_1,undefined2 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_44;
  
  local_60 = (undefined *)CONCAT44(local_60._4_4_,param_1);
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 != 0) {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar9 == 0) {
        return 0;
      }
      lVar9 = lVar9 + 0x70;
    }
    else {
      if (puVar10 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar10[0x26] == (long *)0x0) {
        return 0;
      }
      lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      if (lVar9 == 0) {
        return 0;
      }
    }
    if ((uint)local_60 < 10) {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      lVar2 = lVar9 + 0x1962d8 + ((ulong)local_60 & 0xffffffff) * 0x10d8;
      if (9 < (uint)local_60) {
        lVar2 = lVar9 + 0x1962d8;
      }
      lVar9 = *(long *)(lVar2 + 0x28);
      if (lVar9 == 0) {
        uVar7 = 0;
      }
      else {
        if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          lVar9 = *(long *)(lVar2 + 0x28);
          uVar7 = uVar7 & 0xffffffff;
          if (lVar9 == 0) goto LAB_02b61968;
        }
        plVar8 = *(long **)(lVar9 + 0x20);
        if (plVar8 != (long *)0x0) {
          local_60 = *(undefined **)(lVar2 + 8);
          local_58 = *(undefined8 *)(lVar2 + 0x10);
          local_50 = 0x12e8;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_60);
        }
      }
LAB_02b61968:
      puVar10 = (undefined8 *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      *(undefined2 *)(puVar10 + 1) = uVar3;
      *(undefined2 *)((long)puVar10 + 10) = uVar4;
      *(undefined2 *)((long)puVar10 + 0xc) = uVar5;
      *puVar10 = 0x200000001;
      puVar6 = PTR_DAT_04bb5008;
      local_60 = PTR_DAT_04bc43f8 + 0x10;
      uVar1 = param_1;
      if (9 < param_1) {
        uVar1 = 0;
      }
      local_58 = CONCAT44(local_58._4_4_,(&DAT_05636e30)[(int)uVar1]);
      local_44 = param_1;
      FUN_02b3cb40(*(long *)PTR_DAT_04bb5008 + 0x26e8,&local_60,0x6622bd46);
      FUN_02b3acc0(*(long *)puVar6 + 0x26e8,param_1,0x6622bd46);
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
      return 1;
    }
  }
  return 0;
}

