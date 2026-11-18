
void FUN_036e1d5c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  undefined *local_90;
  char *pcStack_88;
  undefined *local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  undefined *local_60;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  
  puVar1 = PTR_DAT_04bc3a48;
  local_45 = 0;
  local_50 = 8;
  puStack_58 = local_4c;
  local_4c[0] = 0;
  local_70 = 8;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  local_65 = 0;
  local_6c[0] = 0;
  puStack_78 = local_6c;
  local_60 = local_80;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar8 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar8 == 0)) {
    uVar6 = *(undefined2 *)(param_1 + 0x2a);
  }
  else if ((*(long **)(lVar8 + 0x60) == (long *)0x0) ||
          (puVar2 = (undefined8 *)**(long **)(lVar8 + 0x60), puVar2 == (undefined8 *)0x0)) {
    uVar6 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    uVar6 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar8 + 0x60) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar8 + 0x60) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  uVar3 = FUN_0376b510(&local_60,uVar6);
  puVar5 = *(ushort **)puVar1;
  if (((puVar5 == (ushort *)0x0) || ((*puVar5 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x2c);
    if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
      uVar7 = 0xffffffff;
    }
  }
  else {
    lVar8 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
    if ((*(long **)(lVar8 + 0x11b0) == (long *)0x0) ||
       (puVar2 = (undefined8 *)**(long **)(lVar8 + 0x11b0), puVar2 == (undefined8 *)0x0)) {
      uVar7 = (uint)*(ushort *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
    }
    else {
      uVar4 = (**(code **)*puVar2)();
      uVar7 = (uint)*(ushort *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x11b0) != 0)) &&
         (puVar2 = *(undefined8 **)(*(long *)(lVar8 + 0x11b0) + 8), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
    }
  }
  uVar4 = FUN_0376b510(&local_80,uVar7);
  if (*(int *)(param_1 + 0x18) != 2) {
    if ((uVar3 & 1) != 0) {
      FUN_036e20a4(param_1,&local_60);
    }
    if ((uVar4 & 1) != 0) {
      FUN_036e20a4(param_1,&local_80);
    }
  }
  local_90 = PTR_DAT_04bb2020 + 0x10;
  pcStack_88 = "OtgWithoutMakeup";
  FUN_02758bb8(&local_90,0);
  if ((*(int *)(param_1 + 0x14) != 0) &&
     ((puVar5 = *(ushort **)puVar1, puVar5 == (ushort *)0x0 || ((*puVar5 & 1) == 0)))) {
    if (*(int *)(param_1 + 0x18) != 2) {
      DAT_0545a5e4 = DAT_0545a5e4 | 1;
      FUN_02214fb0(&DAT_0545a400,&local_60,&local_80,0);
      DAT_0545a5e4 = DAT_0545a5e4 & 0xfe;
    }
    if (*(int *)(param_1 + 0x18) == 1) {
      FUN_03769190();
    }
    *(undefined4 *)(param_1 + 0x14) = 8;
  }
  return;
}

