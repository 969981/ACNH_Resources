
/* WARNING: Removing unreachable block (ram,0x03295a34) */
/* WARNING: Removing unreachable block (ram,0x03295a7c) */

void FUN_032959f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined *puStack_38;
  undefined1 auStack_18 [8];
  
  if (*(int *)(param_1 + 0xc4) == 2) {
    local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
    plVar3 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x18,8);
    puVar2 = PTR_DAT_04bc9130;
    plVar3[2] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = 0;
  }
  else {
    if (*(int *)(param_1 + 0xc4) != 1) goto LAB_03295ac0;
    local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
    plVar3 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x18,8);
    puVar2 = PTR_DAT_04bc9128;
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
  }
  plVar4 = *(long **)(param_1 + 0x238);
  *(long **)(param_1 + 0x238) = plVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
LAB_03295ac0:
  if (*(long *)(param_1 + 0x238) != 0) {
    local_40 = *(undefined **)(param_1 + 0xb8);
    FUN_032a3020(*(long *)(param_1 + 0x238),&local_40);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x238) + 8);
    lVar1 = (*(long **)(param_1 + 0x230))[1];
    (**(code **)(**(long **)(param_1 + 0x230) + 0x38))(auStack_50);
    if (*PTR_DAT_04c4b988 == '\0') {
      plVar3 = *(long **)(*(long *)(lVar1 + 0xf0) + 0x18);
    }
    else {
      local_40 = PTR_DAT_04bc8e68 + 0x10;
      puStack_38 = PTR_DAT_04c4b988;
      plVar3 = (long *)FUN_032cb8e0(auStack_18,&local_40,*(undefined8 *)(lVar1 + 0xf0));
    }
    uVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,local_48,1);
    FUN_032d1c90(lVar1,uVar6,uVar5);
  }
  return;
}

