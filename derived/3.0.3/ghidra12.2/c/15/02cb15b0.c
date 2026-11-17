
void FUN_02cb15b0(long param_1,byte *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_80;
  undefined8 uStack_78;
  long local_70;
  byte local_68;
  undefined1 *local_60;
  undefined1 local_58;
  undefined8 local_56;
  undefined1 local_4e;
  undefined2 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  byte local_24 [4];
  
  plVar1 = (long *)(param_1 + (ulong)*param_2 * 800 + 0x220);
  if (7 < *param_2) {
    plVar1 = (long *)(param_1 + 0x1b20);
  }
  if (((*(uint *)((long)plVar1 + 0x30c) & 1) != 0) && ((int)plVar1[0x60] == 7)) {
    *(uint *)((long)plVar1 + 0x30c) = *(uint *)((long)plVar1 + 0x30c) & 0xfffffff7;
    local_24[0] = *param_2;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar4 = FUN_025830c0(DAT_055021a0,local_24,1);
    if (lVar4 != 0) {
      local_4e = 0;
      local_56 = 0;
      local_44 = 0;
      local_4c = DAT_04cb6038;
      if ((*(long **)(lVar4 + 0x17bb0) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17bb0), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      local_70 = *(long *)(lVar4 + 0x17b98) + *(long *)(lVar4 + 0x17b90);
      uStack_78 = (**(code **)(*plVar1 + 0x18))(plVar1);
      local_68 = *param_2;
      local_58 = 0;
      local_80 = PTR_DAT_04bb8610 + 0x10;
      if (7 < local_68) {
        local_68 = 0xff;
      }
      if ((*(long **)(lVar4 + 0x3278) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x3278), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
        local_60 = (undefined1 *)&local_80;
      }
      else {
        local_60 = (undefined1 *)&local_80;
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x3260) + *(long *)(lVar4 + 0x3258));
      local_56 = *puVar5;
      local_4e = *(undefined1 *)(puVar5 + 1);
      local_4c = *(undefined2 *)((long)puVar5 + 10);
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x3278) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x3278) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      local_48 = 7;
      local_44 = 1;
      lVar6 = FUN_01d8382c(DAT_05373f28,&local_70);
      plVar1[99] = lVar6;
      if (lVar6 != 0) {
        *(ushort *)(lVar6 + 0x100) = *(ushort *)(lVar6 + 0x100) | 0x20;
      }
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x17bb0) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17bb0) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
  return;
}

