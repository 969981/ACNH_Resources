
void FUN_036e20a4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ushort *puVar4;
  short sVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  undefined *local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  puVar1 = PTR_DAT_04bc3a48;
  if (**(char **)(param_2 + 8) != '\0') {
    local_35 = 0;
    local_40 = 8;
    puStack_48 = local_3c;
    local_3c[0] = 0;
    local_60 = 8;
    local_70 = PTR_DAT_04bb3768 + 0x10;
    local_55 = 0;
    local_5c[0] = 0;
    puStack_68 = local_5c;
    local_50 = local_70;
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
       (lVar8 = *(long *)(DAT_05ab7608 + 8), lVar8 == 0)) {
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
    FUN_0376b510(&local_50,uVar6);
    puVar4 = *(ushort **)puVar1;
    if (((puVar4 == (ushort *)0x0) || ((*puVar4 & 1) == 0)) || (DAT_05ab7608 == 0)) {
      uVar7 = (uint)*(ushort *)(param_1 + 0x2c);
      if ((*(ushort *)(param_1 + 0x28) & 0x80) != 0) {
        uVar7 = 0xffffffff;
      }
    }
    else {
      lVar8 = *(long *)(DAT_05ab7608 + 0x10);
      if ((*(long **)(lVar8 + 0x11b0) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar8 + 0x11b0), puVar2 == (undefined8 *)0x0)) {
        uVar7 = (uint)*(ushort *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        uVar7 = (uint)*(ushort *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar8 + 0x11b0) != 0)) &&
           (puVar2 = *(undefined8 **)(*(long *)(lVar8 + 0x11b0) + 8), puVar2 != (undefined8 *)0x0))
        {
          (**(code **)*puVar2)();
        }
      }
    }
    FUN_0376b510(&local_70,uVar7);
    FUN_02213cf0(&DAT_0545a400,&local_50,&local_50,&local_70);
    puVar4 = *(ushort **)puVar1;
    if (((puVar4 == (ushort *)0x0) || ((*puVar4 & 1) == 0)) || (DAT_05ab7608 == 0)) {
      if ((*(ushort *)(param_1 + 0x28) >> 7 & 1) != 0) {
        return;
      }
      sVar5 = *(short *)(param_1 + 0x2c);
    }
    else {
      lVar8 = *(long *)(DAT_05ab7608 + 0x10);
      if ((*(long **)(lVar8 + 0x11b0) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar8 + 0x11b0), puVar2 == (undefined8 *)0x0)) {
        sVar5 = *(short *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        sVar5 = *(short *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar8 + 0x11b0) != 0)) &&
           (puVar2 = *(undefined8 **)(*(long *)(lVar8 + 0x11b0) + 8), puVar2 != (undefined8 *)0x0))
        {
          (**(code **)*puVar2)();
        }
      }
    }
    if (sVar5 != -1) {
      FUN_02213cf0(&DAT_0545a400,&local_70,&local_50,&local_70);
    }
  }
  return;
}

