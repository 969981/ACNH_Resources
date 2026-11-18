
/* WARNING: Removing unreachable block (ram,0x03295bf0) */
/* WARNING: Removing unreachable block (ram,0x03295cd4) */
/* WARNING: Removing unreachable block (ram,0x03295d84) */
/* WARNING: Removing unreachable block (ram,0x03295e1c) */
/* WARNING: Removing unreachable block (ram,0x03295e70) */
/* WARNING: Removing unreachable block (ram,0x03295dd0) */
/* WARNING: Removing unreachable block (ram,0x03295d28) */
/* WARNING: Removing unreachable block (ram,0x03295c80) */
/* WARNING: Removing unreachable block (ram,0x03295c34) */

void FUN_03295b70(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_80;
  undefined ***local_78;
  undefined **local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined1 auStack_28 [8];
  
  plVar1 = *(long **)(param_1 + 0xd0);
  if (plVar1 != (long *)0x0) {
    *(long **)(param_1 + 0x240) = plVar1;
    *(undefined1 *)(param_1 + 0xa9e) = 0;
    goto LAB_03295eac;
  }
  *(undefined1 *)(param_1 + 0xa9e) = 1;
  switch(*(undefined4 *)(param_1 + 200)) {
  case 1:
    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x70,8);
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = (long)&PTR_LAB_04b18730;
    puVar3 = PTR_DAT_04bc91a0;
    goto LAB_03295e98;
  case 2:
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x70,8);
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[8] = 0;
    plVar1[9] = 0;
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[6] = 0;
    plVar1[7] = (long)&PTR_LAB_04b18730;
    plVar1[0xc] = 0;
    plVar1[0xd] = 0;
    ppuVar4 = (undefined **)(PTR_DAT_04bc9140 + 0x10);
    goto LAB_03295d08;
  case 3:
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x70,8);
    ppuVar4 = &PTR_LAB_04b18430;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[8] = 0;
    plVar1[9] = 0;
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[6] = 0;
    plVar1[7] = (long)&PTR_LAB_04b18730;
    plVar1[0xc] = 0;
    plVar1[0xd] = 0;
LAB_03295d08:
    *plVar1 = (long)ppuVar4;
    plVar1[1] = 0;
    goto LAB_03295ea8;
  case 4:
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x78,8);
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[8] = 0;
    plVar1[9] = 0;
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[6] = 0;
    plVar1[7] = (long)&PTR_LAB_04b18730;
    puVar3 = PTR_DAT_04bc9148 + 0x10;
    plVar1[0xe] = 0;
    plVar1[0xc] = 0;
    plVar1[0xd] = 0;
    *plVar1 = (long)puVar3;
    plVar1[1] = 0;
    goto LAB_03295ea8;
  case 5:
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x70,8);
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = (long)&PTR_LAB_04b18730;
    plVar1[8] = 0;
    plVar1[9] = 0;
    puVar3 = PTR_DAT_04bc9150;
    break;
  case 6:
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x70,8);
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = (long)&PTR_LAB_04b18730;
    plVar1[8] = 0;
    plVar1[9] = 0;
    puVar3 = PTR_DAT_04bc9158;
    break;
  case 7:
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x70,8);
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = (long)&PTR_LAB_04b18730;
    plVar1[8] = 0;
    plVar1[9] = 0;
    puVar3 = PTR_DAT_04bc9160;
    break;
  case 8:
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x70,8);
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = (long)&PTR_LAB_04b18730;
    puVar3 = PTR_DAT_04bc91a8;
LAB_03295e98:
    plVar1[8] = 0;
    goto LAB_03295ea0;
  default:
    local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                               ((long *)**(undefined8 **)(param_1 + 0xb8),0x70,8);
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = (long)&PTR_LAB_04b18730;
    plVar1[8] = 0;
    plVar1[9] = 0;
    puVar3 = PTR_DAT_04bc9138;
  }
  plVar1[0xc] = 0;
LAB_03295ea0:
  *plVar1 = (long)(puVar3 + 0x10);
  plVar1[1] = 0;
  plVar1[0xd] = 0;
LAB_03295ea8:
  *(long **)(param_1 + 0x240) = plVar1;
LAB_03295eac:
  FUN_0329d990(plVar1,*(undefined8 *)(param_1 + 0xb8),param_1);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x240) + 0x18);
  lVar6 = (*(long **)(param_1 + 0x230))[1];
  (**(code **)(**(long **)(param_1 + 0x230) + 0x40))(auStack_50);
  if (*PTR_DAT_04c4b988 == '\0') {
    plVar1 = *(long **)(*(long *)(lVar6 + 0xf0) + 0x18);
  }
  else {
    local_80 = (undefined **)(PTR_DAT_04bc8e68 + 0x10);
    local_78 = (undefined ***)PTR_DAT_04c4b988;
    plVar1 = (long *)FUN_032cb8e0(auStack_28,&local_80,*(undefined8 *)(lVar6 + 0xf0));
  }
  uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,local_48,1);
  FUN_032d1c90(lVar6,uVar5,uVar2);
  FUN_0329dca0(*(undefined8 *)(param_1 + 0x240),*(undefined8 *)(param_1 + 0xb8));
  lVar6 = *(long *)(param_1 + 0x240);
  ppuVar4 = &PTR_LAB_04b18500;
  local_78 = &local_70;
  local_60 = &LAB_03296a80;
  uStack_58 = 0;
  local_70 = &PTR_LAB_04b18500;
  plVar1 = *(long **)(lVar6 + 0x40);
  local_80 = &PTR_LAB_04b18730;
  lStack_68 = param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    if (local_78 == (undefined ***)0x0) {
      *(undefined8 *)(lVar6 + 0x40) = 0;
      return;
    }
    ppuVar4 = *local_78;
  }
  uVar5 = (*(code *)ppuVar4[3])(local_78,lVar6 + 0x48);
  *(undefined8 *)(lVar6 + 0x40) = uVar5;
  if (local_78 != (undefined ***)0x0) {
    (*(code *)(*local_78)[1])();
  }
  return;
}

