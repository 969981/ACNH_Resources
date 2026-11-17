
/* WARNING: Removing unreachable block (ram,0x02cb1a98) */

void FUN_02cb17e8(long param_1,byte *param_2,ulong param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort uVar8;
  byte bVar9;
  byte local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined *puStack_90;
  undefined **local_88;
  char *local_80;
  undefined8 *local_78;
  undefined1 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined2 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  
  local_88 = &PTR_LAB_048f9770;
  local_80 = "ETC_ChatBalloon";
  local_98 = &PTR_LAB_048f9770;
  puStack_90 = &DAT_040a789e;
  plVar2 = (long *)(param_1 + (ulong)*param_2 * 800 + 0x220);
  if (7 < *param_2) {
    plVar2 = (long *)(param_1 + 0x1b20);
  }
  FUN_006f50a0(plVar2,&local_88,&local_98,0);
  local_a0[0] = *param_2;
  if ((param_3 & 1) != 0) {
    local_9c = 8;
    uVar8 = (ushort)local_a0[0];
    if (7 < local_a0[0]) {
      uVar8 = 0xff;
    }
    uVar3 = (ulong)local_98 >> 0x30;
    local_88 = (undefined **)(CONCAT62(local_88._2_6_,uVar8) | 0x800);
    local_98 = (undefined **)CONCAT26((ushort)uVar3 & 0xff00,0xff0000000000);
    if (-1 < *(int *)(*(long *)PTR_DAT_04bc1328 + 0x20)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(*(long *)PTR_DAT_04bc1328 + 0x20),
                   &local_98,&local_88,2,0);
      local_a0[0] = *param_2;
    }
  }
  if (7 < local_a0[0]) {
    local_a0[0] = 0xff;
  }
  lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_a0,1);
  if (lVar6 != 0) {
    puStack_90 = (undefined *)(**(code **)(*plVar2 + 0x18))(plVar2);
    local_5c = 0;
    local_98 = &PTR_LAB_04952fa8;
    if ((*(long **)(lVar6 + 0x17bb0) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    bVar9 = *param_2;
    local_78 = &local_98;
    local_70 = 0;
    local_88 = (undefined **)(*(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90));
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_80 = (char *)CONCAT71(local_80._1_7_,bVar9);
    if ((*(long **)(lVar6 + 0x3278) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x3278), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    puVar1 = (undefined1 *)(*(long *)(lVar6 + 0x3260) + *(long *)(lVar6 + 0x3258));
    local_6e = *puVar1;
    local_6d = puVar1[1];
    local_6c = puVar1[2];
    local_6b = puVar1[3];
    local_6a = puVar1[4];
    local_69 = puVar1[5];
    local_68 = puVar1[6];
    local_67 = puVar1[7];
    local_66 = puVar1[8];
    local_64 = *(undefined2 *)(puVar1 + 10);
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x3278) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x3278) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    local_60 = 8;
    local_5c = 1;
    FUN_01d8382c(DAT_05373f28,&local_88);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x17bb0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  bVar9 = *param_2;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)((long)plVar2 + 0x2f4) = bVar9;
  *(undefined4 *)(plVar2 + 0x60) = 8;
  *(undefined4 *)(plVar2 + 0x5f) = 0x96;
  *(undefined4 *)((long)plVar2 + 0x2fc) = 0;
  *(uint *)((long)plVar2 + 0x30c) = *(uint *)((long)plVar2 + 0x30c) & 0xffffffdf | 1;
  return;
}

