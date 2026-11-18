
void FUN_036db250(long param_1,undefined8 param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined1 local_54 [7];
  undefined1 local_4d;
  undefined *local_48;
  undefined2 local_40;
  uint local_34;
  
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  FUN_036db078(param_1,&local_68);
  local_48 = PTR_DAT_04bb7648 + 0x10;
  uVar4 = FUN_0376baa0(param_2);
  local_40 = (undefined2)uVar4;
  local_58 = 8;
  puStack_60 = local_54;
  local_4d = 0;
  local_54[0] = 0;
  local_68 = PTR_DAT_04bb3768 + 0x10;
  FUN_0376b510(&local_68,uVar4);
  lVar6 = FUN_0375f980(&local_48);
  if (lVar6 != 0) {
    if ((*(long **)(lVar6 + 0x1790) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x1790), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    uVar3 = *(ushort *)(*(long *)(lVar6 + 0x1778) + *(long *)(lVar6 + 6000) + 2);
    uVar1 = 0;
    if (uVar3 < 0x30) {
      uVar1 = uVar3;
    }
    *(ushort *)(param_1 + 2) = uVar1;
    local_34 = (uint)*(char *)(*(long *)(lVar6 + 0x1778) + *(long *)(lVar6 + 6000) + 4);
    uVar2 = local_34;
    if (3 < local_34) {
      uVar2 = 1;
    }
    *(uint *)(param_1 + 4) = uVar2;
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x1790) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1790) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  FUN_037476e0(param_1 + 0x20,&local_48,&local_68);
  *(undefined2 *)(param_1 + 0xc0) = 3;
  *(ushort *)(param_1 + 0xc0) = (ushort)(*param_3 << 4) | 3;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 2;
  }
  return;
}

