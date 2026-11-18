
/* WARNING: Removing unreachable block (ram,0x03296038) */
/* WARNING: Removing unreachable block (ram,0x0329614c) */
/* WARNING: Removing unreachable block (ram,0x032961d4) */
/* WARNING: Removing unreachable block (ram,0x032960c0) */
/* WARNING: Removing unreachable block (ram,0x0329625c) */

void FUN_03295fdc(undefined *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined *puStack_88;
  undefined **local_80;
  undefined ***local_78;
  undefined **local_70;
  undefined *puStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined1 auStack_28 [8];
  
  switch(*(undefined4 *)(param_1 + 0xcc)) {
  case 1:
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    puVar1 = (undefined8 *)
             (**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                       ((long *)**(undefined8 **)(param_1 + 0xb8),0x1100,8);
    memset(puVar1 + 7,0,0x10c0);
    puVar5 = puVar1 + 6;
    *puVar5 = puVar1 + 0xb8;
    puVar1[0xb8] = puVar1 + 0x16a;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = puVar5;
    puVar1[5] = puVar5;
    if (puVar1 + 0x21c != (undefined8 *)0x0) {
      puVar1[3] = puVar1 + 0x21c;
      *(undefined4 *)((long)puVar1 + 0x14) = 3;
    }
    puVar1[0x21f] = 0;
    puVar4 = &DAT_04b18a20;
    break;
  case 2:
    local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
    puVar1 = (undefined8 *)
             (**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                       ((long *)**(undefined8 **)(param_1 + 0xb8),0x1108,8);
    memset(puVar1 + 7,0,0x10c0);
    puVar5 = puVar1 + 6;
    *puVar5 = puVar1 + 0xb8;
    puVar1[0xb8] = puVar1 + 0x16a;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = puVar5;
    puVar1[5] = puVar5;
    if (puVar1 + 0x21c != (undefined8 *)0x0) {
      puVar1[3] = puVar1 + 0x21c;
      *(undefined4 *)((long)puVar1 + 0x14) = 3;
    }
    puVar4 = &DAT_04b18a90;
    puVar1[0x21f] = 0;
    puVar1[0x220] = 0;
    break;
  case 3:
    local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
    puVar1 = (undefined8 *)
             (**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                       ((long *)**(undefined8 **)(param_1 + 0xb8),0x1100,8);
    memset(puVar1 + 7,0,0x10c0);
    puVar5 = puVar1 + 6;
    *puVar5 = puVar1 + 0xb8;
    puVar1[0xb8] = puVar1 + 0x16a;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = puVar5;
    puVar1[5] = puVar5;
    if (puVar1 + 0x21c != (undefined8 *)0x0) {
      puVar1[3] = puVar1 + 0x21c;
      *(undefined4 *)((long)puVar1 + 0x14) = 3;
    }
    puVar1[0x21f] = 0;
    puVar4 = &DAT_04b18b00;
    break;
  case 4:
    local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
    puVar1 = (undefined8 *)
             (**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                       ((long *)**(undefined8 **)(param_1 + 0xb8),0x1100,8);
    memset(puVar1 + 7,0,0x10c0);
    puVar5 = puVar1 + 6;
    *puVar5 = puVar1 + 0xb8;
    puVar1[0xb8] = puVar1 + 0x16a;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = puVar5;
    puVar1[5] = puVar5;
    if (puVar1 + 0x21c != (undefined8 *)0x0) {
      puVar1[3] = puVar1 + 0x21c;
      *(undefined4 *)((long)puVar1 + 0x14) = 3;
    }
    puVar1[0x21f] = 0;
    puVar4 = &DAT_04b18b70;
    break;
  case 5:
    local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
    puVar1 = (undefined8 *)
             (**(code **)(*(long *)**(undefined8 **)(param_1 + 0xb8) + 0x30))
                       ((long *)**(undefined8 **)(param_1 + 0xb8),0x1100,8);
    memset(puVar1 + 7,0,0x10c0);
    puVar5 = puVar1 + 6;
    *puVar5 = puVar1 + 0xb8;
    puVar1[0xb8] = puVar1 + 0x16a;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = puVar5;
    puVar1[5] = puVar5;
    if (puVar1 + 0x21c != (undefined8 *)0x0) {
      puVar1[3] = puVar1 + 0x21c;
      *(undefined4 *)((long)puVar1 + 0x14) = 3;
    }
    puVar1[0x21f] = 0;
    puVar4 = &DAT_04b18be0;
    break;
  default:
    goto switchD_0329601c_default;
  }
  *puVar1 = puVar4 + 0x10;
  plVar7 = *(long **)(param_1 + 0x248);
  *(undefined8 **)(param_1 + 0x248) = puVar1;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
switchD_0329601c_default:
  if (*(long *)(param_1 + 0x248) != 0) {
    local_70 = &PTR_LAB_04b18588;
    local_90 = *(undefined **)(param_1 + 0xb8);
    local_78 = &local_70;
    local_60 = &LAB_03296bd0;
    uStack_58 = 0;
    local_80 = &PTR_LAB_04b17778;
    puStack_88 = param_1;
    puStack_68 = param_1;
    FUN_0329c2b0(*(long *)(param_1 + 0x248),&local_90);
    if (local_78 != (undefined ***)0x0) {
      (*(code *)(*local_78)[1])();
    }
    plVar7 = *(long **)(param_1 + 0x240);
    lVar6 = *(long *)(param_1 + 0x248);
    lVar8 = plVar7[3];
    uVar9 = *(undefined8 *)(lVar6 + 8);
    (**(code **)(*plVar7 + 0x88))(auStack_50,plVar7);
    if (*PTR_DAT_04c4b988 == '\0') {
      plVar2 = *(long **)(*(long *)(lVar8 + 0xf0) + 0x18);
    }
    else {
      local_90 = PTR_DAT_04bc8e68 + 0x10;
      puStack_88 = PTR_DAT_04c4b988;
      plVar2 = (long *)FUN_032cb8e0(auStack_28,&local_90,*(undefined8 *)(lVar8 + 0xf0));
    }
    uVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,local_48,1);
    FUN_032d1c90(lVar8,uVar9,uVar3);
    FUN_0329de80(plVar7,lVar6);
  }
  return;
}

