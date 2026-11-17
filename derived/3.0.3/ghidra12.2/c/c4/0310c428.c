
void FUN_0310c428(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined *local_40;
  undefined4 local_38;
  
  lVar5 = *(long *)(param_1 + 0x210);
  if (lVar5 != 0) {
    if (*(long **)(param_1 + 0x278) != (long *)0x0) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x278) + 0x40))();
      local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar3);
      if (0x11 < uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(lVar5 + 0x230);
      puVar2 = puVar1 + (uint)(&DAT_056d3580)[(int)uVar3];
      if (0x25 < (uint)(&DAT_056d3580)[(int)uVar3]) {
        puVar2 = puVar1;
      }
      plVar6 = (long *)*puVar2;
      if (plVar6 != (long *)0x0) {
        FUN_03b137d0(param_1 + 0x228,param_2,0);
        *(undefined4 *)(param_1 + 0x240) = 0;
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x1f;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
        (**(code **)(plVar6[3] + 0x208))(plVar6[1],0,0,param_1 + 0x228);
      }
    }
    if ((*(long *)(param_1 + 0x210) != 0) && (*(long **)(param_1 + 0x278) != (long *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x220);
      uVar3 = (**(code **)(**(long **)(param_1 + 0x278) + 0x40))();
      local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar3);
      if (lVar5 != 0) {
        if (0x11 < uVar3) {
          uVar3 = 0;
        }
        uVar3 = *(uint *)((long)&DAT_056d3610 + (long)(int)uVar3 * 4);
        puVar1 = (undefined8 *)(lVar5 + 0x210);
        puVar2 = puVar1 + uVar3;
        if (0x21 < uVar3) {
          puVar2 = puVar1;
        }
        plVar6 = (long *)*puVar2;
        if (plVar6 != (long *)0x0) {
          FUN_03b137d0(param_1 + 0x248,param_2,0);
          *(undefined4 *)(param_1 + 0x260) = 0;
          local_40 = PTR_DAT_04bc0cb8 + 0x10;
          local_38 = 0x1f;
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
          (**(code **)(plVar6[3] + 0x208))(plVar6[1],0,0,param_1 + 0x248);
        }
      }
    }
  }
  if ((*(long **)(param_1 + 0x418) != (long *)0x0) &&
     (uVar4 = (**(code **)(**(long **)(param_1 + 0x418) + 0x10))(), (uVar4 & 1) != 0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x418))(*(undefined8 **)(param_1 + 0x418),param_2);
  }
  return;
}

