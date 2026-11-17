
undefined8 FUN_02b66c70(undefined4 param_1,short *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*param_2 == -1) {
    return 0;
  }
  if (((param_2[1] != -1) && (param_2[2] != -1)) && (param_2[8] != -2)) {
    local_48 = CONCAT44(local_48._4_4_,param_1);
    if (DAT_05574040 != 0) {
      puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar5 + 0x38))();
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = lVar2 + 0x70;
      }
      else {
        if (puVar5 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar5[0x26] == (long *)0x0) {
          return 0;
        }
        lVar2 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
        if (lVar2 == 0) {
          return 0;
        }
      }
      if ((uint)local_48 < 8) {
        lVar1 = lVar2 + 0x119228 + (local_48 & 0xffffffff) * 0xfa08;
        if (7 < (uint)local_48) {
          lVar1 = lVar2 + 0x119228;
        }
        lVar2 = *(long *)(lVar1 + 0x28);
        if (lVar2 == 0) {
          uVar3 = 0;
        }
        else {
          if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
            lVar2 = *(long *)(lVar1 + 0x28);
            uVar3 = uVar3 & 0xffffffff;
            if (lVar2 == 0) goto LAB_02b66dbc;
          }
          plVar4 = *(long **)(lVar2 + 0x20);
          if (plVar4 != (long *)0x0) {
            local_48 = *(ulong *)(lVar1 + 8);
            uStack_40 = *(undefined8 *)(lVar1 + 0x10);
            local_38 = 0x28a28;
            (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
          }
        }
LAB_02b66dbc:
        *(short *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 10) = *param_2;
        if ((*(long *)(lVar1 + 0x28) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
          local_48 = *(ulong *)(lVar1 + 8);
          uStack_40 = *(undefined8 *)(lVar1 + 0x10);
          local_38 = 0x28a28;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
        }
        *(short *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0xc) = param_2[1];
        if ((*(long *)(lVar1 + 0x28) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
          local_48 = *(ulong *)(lVar1 + 8);
          uStack_40 = *(undefined8 *)(lVar1 + 0x10);
          local_38 = 0x28a28;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
        }
        *(short *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0xe) = param_2[2];
        if ((*(long *)(lVar1 + 0x28) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
          local_48 = *(ulong *)(lVar1 + 8);
          uStack_40 = *(undefined8 *)(lVar1 + 0x10);
          local_38 = 0x28a28;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
        }
        lVar2 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
        *(short *)(lVar2 + 0x28a10) = param_2[8];
        *(char *)(lVar2 + 0x28a12) = (char)param_2[9];
        *(undefined1 *)(lVar2 + 0x28a13) = *(undefined1 *)((long)param_2 + 0x13);
        *(undefined4 *)(lVar2 + 0x28a14) = *(undefined4 *)(param_2 + 10);
        if ((*(long *)(lVar1 + 0x28) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
          local_48 = *(ulong *)(lVar1 + 8);
          uStack_40 = *(undefined8 *)(lVar1 + 0x10);
          local_38 = 0x28a28;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
        }
        lVar2 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
        *(byte *)(lVar2 + 0x28a04) = *(byte *)(lVar2 + 0x28a04) | 1;
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
        return 1;
      }
    }
  }
  return 0;
}

