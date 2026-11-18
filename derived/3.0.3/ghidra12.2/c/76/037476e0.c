
/* WARNING: Removing unreachable block (ram,0x03747750) */

void FUN_037476e0(undefined8 *param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 ***local_90;
  undefined8 ***pppuStack_88;
  undefined8 ***local_80;
  undefined8 **local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60 [4];
  undefined *local_40;
  ushort local_38;
  
  (**(code **)*param_1)();
  if (DAT_05aba420 != 0) {
    puVar8 = (ushort *)(param_2 + 8);
    *(ushort *)((long)param_1 + 10) = *puVar8;
    if (DAT_05574040 != 0) {
      uVar6 = *puVar8;
      local_a0 = CONCAT44(local_a0._4_4_,1);
      if (((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
          (lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
          uVar6 < 500)) && (lVar3 != 0)) {
        lVar3 = lVar3 + (ulong)uVar6 * 0x2d48;
        if (*(long **)(lVar3 + 0x4cc70) == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          puVar4 = (undefined8 *)**(long **)(lVar3 + 0x4cc70);
          uVar5 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            uVar5 = (**(code **)*puVar4)();
          }
        }
        *(undefined2 *)((long)param_1 + 0xc) =
             *(undefined2 *)(*(long *)(lVar3 + 0x4cc58) + *(long *)(lVar3 + 0x4cc50) + 4);
        puVar1 = (ushort *)(*(long *)(lVar3 + 0x4cc58) + *(long *)(lVar3 + 0x4cc50));
        uVar6 = 0x40;
        if (puVar1[2] != 0xffff && (*puVar1 & 1) == 0) {
          uVar6 = 0;
        }
        *(ushort *)(param_1 + 1) = uVar6 | *(ushort *)(param_1 + 1) & 0xffbf;
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x4cc70) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x4cc70) + 8), puVar4 != (undefined8 *)0x0))
        {
          (**(code **)*puVar4)();
        }
      }
    }
    local_40 = PTR_DAT_04bb7648 + 0x10;
    local_38 = *puVar8;
    lVar3 = FUN_0375f980(&local_40);
    if (lVar3 != 0) {
      if ((*(long **)(lVar3 + 0x60) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x60), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      puVar1 = (ushort *)(*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40));
      uVar7 = puVar1[2];
      uVar6 = puVar1[1];
      if (uVar7 != 0xffff && (*puVar1 & 1) == 0) {
        uVar6 = uVar7;
      }
      if (uVar6 == *puVar8) {
        uVar6 = uVar7;
        if (uVar7 != 0xffff && (*puVar1 & 1) == 0) {
          uVar6 = puVar1[1];
        }
        uVar7 = *(ushort *)(param_1 + 1) | 0x40;
      }
      else {
        uVar7 = *(ushort *)(param_1 + 1) & 0xffbf;
      }
      *(ushort *)((long)param_1 + 0xc) = uVar6;
      *(ushort *)(param_1 + 1) = uVar7;
      if ((*(long **)(lVar3 + 0x1758) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x1758), puVar4 == (undefined8 *)0x0)) {
        *(undefined2 *)((long)param_1 + 0xe) =
             *(undefined2 *)(*(long *)(lVar3 + 0x1740) + *(long *)(lVar3 + 0x1738) + 2);
      }
      else {
        uVar5 = (**(code **)*puVar4)();
        *(undefined2 *)((long)param_1 + 0xe) =
             *(undefined2 *)(*(long *)(lVar3 + 0x1740) + *(long *)(lVar3 + 0x1738) + 2);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x1758) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x1758) + 8), puVar4 != (undefined8 *)0x0))
        {
          (**(code **)*puVar4)();
        }
      }
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x60) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    local_a0 = 0;
    local_98 = (undefined8 *)0x0;
    local_80 = &local_78;
    local_78 = &local_70;
    local_90 = &local_80;
    local_70 = &local_68;
    local_68 = 0;
    if (local_60 != (undefined8 *)0x0) {
      local_a0 = 0x400000000;
      local_98 = local_60;
    }
    pppuStack_88 = local_90;
    uVar5 = FUN_03770770(puVar8,&local_a0);
    uVar6 = *(ushort *)(param_1 + 1);
    if ((uVar5 & 1) == 0) {
      uVar7 = uVar6 & 0xff7f;
    }
    else {
      *(ushort *)(param_1 + 1) = uVar6 | 0x80;
      uVar7 = uVar6 | 0xc0;
      if (*puVar8 != *(ushort *)*local_98) {
        uVar7 = uVar6 & 0xffbf | 0x80;
      }
    }
    *(ushort *)(param_1 + 1) = uVar7 | 8;
    if (0 < *(int *)(param_1 + 4)) {
      lVar3 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[5] + lVar3 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar3 = lVar3 + 1;
        *puVar4 = param_1[6];
        param_1[6] = puVar4;
      } while (lVar3 < *(int *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

