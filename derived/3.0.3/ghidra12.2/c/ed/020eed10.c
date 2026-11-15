
void FUN_020eed10(undefined2 *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long local_58;
  long local_50;
  undefined8 uStack_48;
  
  bVar2 = *(byte *)(param_1 + 7);
  bVar3 = *(byte *)((long)param_1 + 0xf);
  if (*(char *)(param_1 + 8) == '\0') {
    if (9 < bVar2) {
      return;
    }
    if (7 < bVar3) {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar4 == 0) {
        return;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar9[0x26] == (long *)0x0) {
        return;
      }
      lVar4 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      if (lVar4 == 0) {
        return;
      }
    }
    lVar10 = lVar4 + (ulong)(uint)(int)(char)bVar2 * 0x10798 +
             ((long)(char)bVar3 & 0xffffffffU) * 0x700;
    lVar4 = lVar10 + 0x188;
    lVar11 = *(long *)(lVar10 + 0x1b0);
    if (lVar11 == 0) {
      uVar5 = 0;
LAB_020eeeec:
      lVar14 = *(long *)(lVar10 + 0x198) + *(long *)(lVar10 + 400);
LAB_020ef0cc:
      lVar10 = lVar14;
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        lVar11 = *(long *)(lVar10 + 0x1b0);
        uVar5 = uVar5 & 0xffffffff;
        if (lVar11 == 0) goto LAB_020eeeec;
      }
      plVar6 = *(long **)(lVar11 + 0x20);
      if (plVar6 == (long *)0x0) {
        lVar13 = *(long *)(lVar10 + 400);
        lVar14 = *(long *)(lVar10 + 0x198) + lVar13;
      }
      else {
        local_58 = *(long *)(lVar10 + 400);
        local_50 = *(long *)(lVar10 + 0x198);
        uStack_48 = 0x5f0;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
        lVar13 = *(long *)(lVar10 + 400);
        lVar14 = *(long *)(lVar10 + 0x198) + lVar13;
        lVar11 = *(long *)(lVar10 + 0x1b0);
        if (lVar11 == 0) goto LAB_020ef0cc;
      }
      plVar6 = *(long **)(lVar11 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_020ef0cc;
      local_50 = *(long *)(lVar10 + 0x198);
      uStack_48 = 0x5f0;
      local_58 = lVar13;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      lVar10 = *(long *)(lVar10 + 0x198) + *(long *)(lVar10 + 400);
    }
    *(undefined2 *)(lVar14 + 0x5e0) = *param_1;
    *(undefined1 *)(lVar14 + 0x5e2) = *(undefined1 *)(param_1 + 1);
    *(undefined2 *)(lVar14 + 0x5e4) = param_1[2];
    *(undefined1 *)(lVar14 + 0x5e6) = *(undefined1 *)(param_1 + 3);
    bVar2 = 0;
    if (*(byte *)((long)param_1 + 7) < 3) {
      bVar2 = *(byte *)((long)param_1 + 7);
    }
    *(byte *)(lVar14 + 0x5e7) = bVar2;
    uVar8 = 0;
    if (*(byte *)(param_1 + 4) < 3) {
      uVar8 = (uint)*(byte *)(param_1 + 4);
    }
    local_58 = CONCAT44(local_58._4_4_,uVar8);
    *(char *)(lVar14 + 0x5e8) = (char)uVar8;
    uVar7 = nn::time::IsValidDate
                      ((uint)(ushort)param_1[5],(uint)*(byte *)(param_1 + 6),
                       (uint)*(byte *)((long)param_1 + 0xd));
    if ((uVar7 & 1) != 0) {
      uVar7 = nn::time::IsValidDate
                        ((uint)(ushort)param_1[5],(uint)*(byte *)(param_1 + 6),
                         (uint)*(byte *)((long)param_1 + 0xd));
      uVar8 = (uint)(ushort)param_1[5];
      if ((uVar7 & 1) == 0) {
        uVar8 = 2000;
      }
      uVar7 = nn::time::IsValidDate
                        ((uint)(ushort)param_1[5],(uint)*(byte *)(param_1 + 6),
                         (uint)*(byte *)((long)param_1 + 0xd));
      uVar1 = (uint)*(byte *)(param_1 + 6);
      if ((uVar7 & 1) == 0) {
        uVar1 = 1;
      }
      uVar7 = nn::time::IsValidDate
                        ((uint)(ushort)param_1[5],(uint)*(byte *)(param_1 + 6),
                         (uint)*(byte *)((long)param_1 + 0xd));
      bVar2 = *(byte *)((long)param_1 + 0xd);
      if ((uVar7 & 1) == 0) {
        bVar2 = 1;
      }
      uVar7 = nn::time::IsValidDate(uVar8,uVar1,(uint)bVar2);
      if ((uVar7 & 1) != 0) {
        *(short *)(lVar10 + 0x5ea) = (short)uVar8;
        *(char *)(lVar10 + 0x5ec) = (char)uVar1;
        *(byte *)(lVar10 + 0x5ed) = bVar2;
      }
      goto joined_r0x020ef1b4;
    }
    puVar12 = (undefined4 *)(lVar10 + 0x5ea);
  }
  else {
    if (9 < bVar2) {
      return;
    }
    if ((char)bVar3 < '\0') {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar4 == 0) {
        return;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar9[0x26] == (long *)0x0) {
        return;
      }
      lVar4 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      if (lVar4 == 0) {
        return;
      }
    }
    lVar10 = lVar4 + (ulong)(uint)(int)(char)bVar2 * 0x10798 +
             ((long)(char)bVar3 & 0xffffffffU) * 0xa8;
    lVar4 = lVar10 + 0x39c0;
    lVar11 = *(long *)(lVar10 + 0x39e8);
    if (lVar11 == 0) {
      uVar5 = 0;
LAB_020eee8c:
      lVar14 = *(long *)(lVar10 + 0x39d0) + *(long *)(lVar10 + 0x39c8);
LAB_020eef44:
      lVar10 = lVar14;
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        lVar11 = *(long *)(lVar10 + 0x39e8);
        uVar5 = uVar5 & 0xffffffff;
        if (lVar11 == 0) goto LAB_020eee8c;
      }
      plVar6 = *(long **)(lVar11 + 0x20);
      if (plVar6 == (long *)0x0) {
        lVar13 = *(long *)(lVar10 + 0x39c8);
        lVar14 = *(long *)(lVar10 + 0x39d0) + lVar13;
      }
      else {
        local_58 = *(long *)(lVar10 + 0x39c8);
        local_50 = *(long *)(lVar10 + 0x39d0);
        uStack_48 = 0x158;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
        lVar13 = *(long *)(lVar10 + 0x39c8);
        lVar14 = *(long *)(lVar10 + 0x39d0) + lVar13;
        lVar11 = *(long *)(lVar10 + 0x39e8);
        if (lVar11 == 0) goto LAB_020eef44;
      }
      plVar6 = *(long **)(lVar11 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_020eef44;
      local_50 = *(long *)(lVar10 + 0x39d0);
      uStack_48 = 0x158;
      local_58 = lVar13;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      lVar10 = *(long *)(lVar10 + 0x39d0) + *(long *)(lVar10 + 0x39c8);
    }
    *(undefined2 *)(lVar14 + 0x13c) = *param_1;
    *(undefined1 *)(lVar14 + 0x13e) = *(undefined1 *)(param_1 + 1);
    *(undefined2 *)(lVar14 + 0x140) = param_1[2];
    *(undefined1 *)(lVar14 + 0x142) = *(undefined1 *)(param_1 + 3);
    bVar2 = 0;
    if (*(byte *)((long)param_1 + 7) < 3) {
      bVar2 = *(byte *)((long)param_1 + 7);
    }
    *(byte *)(lVar14 + 0x143) = bVar2;
    uVar8 = 0;
    if (*(byte *)(param_1 + 4) < 3) {
      uVar8 = (uint)*(byte *)(param_1 + 4);
    }
    local_58 = CONCAT44(local_58._4_4_,uVar8);
    *(char *)(lVar14 + 0x144) = (char)uVar8;
    uVar7 = nn::time::IsValidDate
                      ((uint)(ushort)param_1[5],(uint)*(byte *)(param_1 + 6),
                       (uint)*(byte *)((long)param_1 + 0xd));
    if ((uVar7 & 1) != 0) {
      uVar7 = nn::time::IsValidDate
                        ((uint)(ushort)param_1[5],(uint)*(byte *)(param_1 + 6),
                         (uint)*(byte *)((long)param_1 + 0xd));
      uVar8 = (uint)(ushort)param_1[5];
      if ((uVar7 & 1) == 0) {
        uVar8 = 2000;
      }
      uVar7 = nn::time::IsValidDate
                        ((uint)(ushort)param_1[5],(uint)*(byte *)(param_1 + 6),
                         (uint)*(byte *)((long)param_1 + 0xd));
      uVar1 = (uint)*(byte *)(param_1 + 6);
      if ((uVar7 & 1) == 0) {
        uVar1 = 1;
      }
      uVar7 = nn::time::IsValidDate
                        ((uint)(ushort)param_1[5],(uint)*(byte *)(param_1 + 6),
                         (uint)*(byte *)((long)param_1 + 0xd));
      bVar2 = *(byte *)((long)param_1 + 0xd);
      if ((uVar7 & 1) == 0) {
        bVar2 = 1;
      }
      uVar7 = nn::time::IsValidDate(uVar8,uVar1,(uint)bVar2);
      if ((uVar7 & 1) != 0) {
        *(short *)(lVar10 + 0x146) = (short)uVar8;
        *(char *)(lVar10 + 0x148) = (char)uVar1;
        *(byte *)(lVar10 + 0x149) = bVar2;
      }
      goto joined_r0x020ef1b4;
    }
    puVar12 = (undefined4 *)(lVar10 + 0x146);
  }
  *puVar12 = 0;
joined_r0x020ef1b4:
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

