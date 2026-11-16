
void FUN_02662160(uint *param_1)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined *local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_5c = 0;
  uVar7 = FUN_02b67a30(&local_5c,*param_1);
  puVar4 = PTR_DAT_04bb46b0;
  if ((uVar7 & 1) == 0) {
    return;
  }
  uVar5 = *param_1;
  if (uVar5 < 10) {
    lVar9 = *(long *)PTR_DAT_04bb46b0;
    if (lVar9 == 0) {
      return;
    }
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar9 != 0) {
        lVar9 = lVar9 + 0x70;
        goto LAB_026621f0;
      }
    }
    else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
            (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0)) {
LAB_026621f0:
      lVar9 = lVar9 + (ulong)uVar5 * 0x10798;
      lVar12 = lVar9 + 0x118;
      if (*(long **)(lVar9 + 0x140) == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        puVar10 = (undefined8 *)**(long **)(lVar9 + 0x140);
        uVar7 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar7 = (**(code **)*puVar10)();
        }
      }
      pbVar1 = (byte *)(*(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120));
      uVar11 = (ulong)*pbVar1;
      if ((uVar11 < 0x23) && (bVar3 = pbVar1[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar11])) {
        uVar5 = *(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar3 & 0x1f) & 1;
      }
      else {
        uVar5 = 0;
      }
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x140) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x140) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
      if (uVar5 == 0) {
        lVar12 = 0;
      }
      goto LAB_02662224;
    }
  }
  lVar12 = 0;
LAB_02662224:
  lVar9 = *(long *)puVar4;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,local_5c);
  if (lVar9 != 0) {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar9 == 0) {
        return;
      }
      lVar9 = lVar9 + 0x70;
    }
    else {
      if (puVar10 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar10[0x26] == (long *)0x0) {
        return;
      }
      lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      if (lVar9 == 0) {
        return;
      }
    }
    if ((uint)local_80 < 10) {
      lVar2 = lVar9 + 0x1962d8 + ((ulong)local_80 & 0xffffffff) * 0x10d8;
      if (9 < (uint)local_80) {
        lVar2 = lVar9 + 0x1962d8;
      }
      if (lVar12 != 0) {
        if ((*(long *)(lVar12 + 0x28) == 0) ||
           (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x10),
           puVar10 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar10)();
          uVar5 = uVar5 ^ 1;
        }
        if ((*(long *)(lVar2 + 0x28) == 0) ||
           (puVar10 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x10), puVar10 == (undefined8 *)0x0
           )) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar10)();
          uVar6 = uVar6 ^ 1;
        }
        local_65 = 0;
        local_70 = 8;
        puStack_78 = local_6c;
        local_6c[0] = 0;
        local_80 = PTR_DAT_04bb3768 + 0x10;
        if ((*(long *)(lVar12 + 0x28) != 0) &&
           (plVar8 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar8 != (long *)0x0)) {
          local_58 = *(undefined8 *)(lVar12 + 8);
          uStack_50 = *(undefined8 *)(lVar12 + 0x10);
          local_48 = 0x13230;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
        }
        pbVar1 = (byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8));
        FUN_038d1270(&local_80,"-----");
        uVar7 = (ulong)*pbVar1;
        if (uVar7 < 0x23) {
          FUN_038d1270(&local_80,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar7 * 8 + 0xb0),
                       pbVar1[1]);
        }
        if ((*(long *)(lVar2 + 0x28) != 0) &&
           (plVar8 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar8 != (long *)0x0)) {
          local_58 = *(undefined8 *)(lVar2 + 8);
          uStack_50 = *(undefined8 *)(lVar2 + 0x10);
          local_48 = 0x12e8;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
        }
        lVar9 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8);
        FUN_027cf920(lVar9,&local_80);
        FUN_027cfb40(lVar9,&local_80);
        memset((void *)(lVar9 + 0x1d4),0,0x1108);
        FUN_027c9340((void *)(lVar9 + 0x1d4));
        if ((*(long *)(lVar12 + 0x28) != 0) &&
           (plVar8 = *(long **)(*(long *)(lVar12 + 0x28) + 0x20), plVar8 != (long *)0x0)) {
          local_58 = *(undefined8 *)(lVar12 + 8);
          uStack_50 = *(undefined8 *)(lVar12 + 0x10);
          local_48 = 0x13230;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
        }
        FUN_02698080(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8),param_1);
        if ((((uVar6 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar10)();
        }
        if ((((uVar5 & 1) == 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x18),
           puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)();
        }
      }
    }
  }
  return;
}

