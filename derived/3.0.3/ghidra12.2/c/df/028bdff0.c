
/* WARNING: Removing unreachable block (ram,0x028be1e0) */
/* WARNING: Removing unreachable block (ram,0x028be20c) */

undefined8 FUN_028bdff0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ushort uVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  uint uVar14;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar13 = *(undefined4 **)(DAT_05574040 + 0x50);
  if (lVar6 == 0 || puVar13 == (undefined4 *)0x0) {
    return 0;
  }
  lVar11 = *(long *)(lVar6 + 0x60);
  if (lVar11 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      lVar11 = *(long *)(lVar6 + 0x60);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar11 == 0) goto LAB_028be0b0;
    }
    plVar9 = *(long **)(lVar11 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_78 = *(undefined8 *)(lVar6 + 0x40);
      uStack_70 = *(undefined8 *)(lVar6 + 0x48);
      local_68 = 0x100;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
    }
  }
LAB_028be0b0:
  puVar1 = (undefined4 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40));
  *puVar1 = 0xa0002;
  puVar1[1] = 0xa0028;
  puVar1[2] = 2;
  puVar4 = PTR_DAT_04bb21a8;
  *(undefined2 *)(puVar1 + 3) = 2;
  uVar10 = *(ushort *)puVar4;
  uVar3 = uVar10;
  if (uVar10 <= *(ushort *)((long)puVar1 + 0xe)) {
    uVar3 = *(ushort *)((long)puVar1 + 0xe);
  }
  *(ushort *)((long)puVar1 + 0xe) = uVar3;
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0x60) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
    uVar10 = *(ushort *)puVar4;
  }
  *puVar13 = 0xa0002;
  puVar13[1] = 0xa0028;
  puVar13[2] = 2;
  lVar6 = DAT_05574040;
  *(undefined2 *)(puVar13 + 3) = 2;
  if (uVar10 <= *(ushort *)((long)puVar13 + 0xe)) {
    uVar10 = *(ushort *)((long)puVar13 + 0xe);
  }
  *(ushort *)((long)puVar13 + 0xe) = uVar10;
  if (lVar6 == 0) {
    return 0;
  }
  FUN_02705554(&local_78,1,1);
  if (local_78._4_4_ != 8) {
    iVar5 = (int)local_78;
    uVar14 = local_78._4_4_;
    do {
      uVar2 = uVar14;
      if (7 < uVar14) {
        uVar2 = 0xffffffff;
      }
      puVar13 = (undefined4 *)FUN_026f9208(lVar6,uVar2);
      if (puVar13 == (undefined4 *)0x0) {
        return 0;
      }
      puVar13[2] = 2;
      *puVar13 = 0xa0002;
      puVar13[1] = 0xa0028;
      uVar10 = *(ushort *)puVar4;
      *(undefined2 *)(puVar13 + 3) = 2;
      if (uVar10 <= *(ushort *)((long)puVar13 + 0xe)) {
        uVar10 = *(ushort *)((long)puVar13 + 0xe);
      }
      *(ushort *)((long)puVar13 + 0xe) = uVar10;
      puVar13 = (undefined4 *)FUN_026f6c2c(lVar6,uVar2);
      if (puVar13 == (undefined4 *)0x0) {
        return 0;
      }
      *puVar13 = 0xa0002;
      puVar13[1] = 0xa0028;
      uVar10 = *(ushort *)puVar4;
      puVar13[2] = 2;
      *(undefined2 *)(puVar13 + 3) = 2;
      if (uVar10 <= *(ushort *)((long)puVar13 + 0xe)) {
        uVar10 = *(ushort *)((long)puVar13 + 0xe);
      }
      *(ushort *)((long)puVar13 + 0xe) = uVar10;
      if (DAT_05574040 == 0) {
        return 0;
      }
      puVar13 = (undefined4 *)FUN_026f9328(DAT_05574040,uVar2);
      if (puVar13 == (undefined4 *)0x0) {
        return 0;
      }
      puVar13[2] = 2;
      *puVar13 = 0xa0002;
      puVar13[1] = 0xa0028;
      uVar10 = *(ushort *)puVar4;
      *(undefined2 *)(puVar13 + 3) = 2;
      if (uVar10 <= *(ushort *)((long)puVar13 + 0xe)) {
        uVar10 = *(ushort *)((long)puVar13 + 0xe);
      }
      *(ushort *)((long)puVar13 + 0xe) = uVar10;
      lVar11 = DAT_05574040;
      if (uVar14 < 8) {
        if (DAT_05574040 == 0) {
          return 0;
        }
        (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
        if ((iVar5 == 0) && ((*(byte *)(lVar11 + 0x453) & 1) != 0)) {
          lVar11 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x10) + 0x130) + 0x18))();
        }
        else {
          lVar11 = (**(code **)(*(long *)**(undefined8 **)(lVar11 + 0x10) + 0x18))();
          lVar11 = lVar11 + 0x110;
        }
        if (uVar14 == 7) break;
        uVar7 = (ulong)uVar14;
        plVar9 = (long *)(lVar11 + (ulong)uVar14 * 0x48 + 0x1e3400);
        while ((6 < uVar7 || (plVar9[-1] == 0 && *plVar9 == 0))) {
          uVar7 = uVar7 + 1;
          plVar9 = plVar9 + 9;
          if (uVar7 == 7) goto LAB_028be154;
        }
        uVar14 = (int)uVar7 + 1;
      }
    } while (uVar14 != 8);
  }
LAB_028be154:
  lVar6 = DAT_05574040;
  if (DAT_05574040 == 0) {
    return 0;
  }
  FUN_02705554(&local_80,1,1);
  uVar14 = local_7c;
  while (uVar14 != 8) {
    uVar2 = uVar14;
    if (7 < uVar14) {
      uVar2 = 0xffffffff;
    }
    lVar11 = FUN_026f43ec(lVar6,uVar2);
    if (lVar11 == 0) {
      return 0;
    }
    if (DAT_05574040 == 0) {
      return 0;
    }
    puVar13 = (undefined4 *)FUN_026f3708(DAT_05574040,uVar2);
    if (puVar13 == (undefined4 *)0x0) {
      return 0;
    }
    lVar12 = *(long *)(lVar11 + 0x60);
    if (lVar12 == 0) {
      uVar7 = 0;
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        lVar12 = *(long *)(lVar11 + 0x60);
        uVar7 = uVar7 & 0xffffffff;
        if (lVar12 == 0) goto LAB_028be498;
      }
      plVar9 = *(long **)(lVar12 + 0x20);
      if (plVar9 != (long *)0x0) {
        local_78 = *(undefined8 *)(lVar11 + 0x40);
        uStack_70 = *(undefined8 *)(lVar11 + 0x48);
        local_68 = 0x100;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
      }
    }
LAB_028be498:
    puVar1 = (undefined4 *)(*(long *)(lVar11 + 0x48) + *(long *)(lVar11 + 0x40));
    *puVar1 = 0xa0002;
    puVar1[1] = 0xa0028;
    puVar1[2] = 2;
    *(undefined2 *)(puVar1 + 3) = 2;
    uVar10 = *(ushort *)puVar4;
    uVar3 = uVar10;
    if (uVar10 <= *(ushort *)((long)puVar1 + 0xe)) {
      uVar3 = *(ushort *)((long)puVar1 + 0xe);
    }
    *(ushort *)((long)puVar1 + 0xe) = uVar3;
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar11 + 0x60) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x60) + 0x18), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
      uVar10 = *(ushort *)puVar4;
    }
    *puVar13 = 0xa0002;
    puVar13[1] = 0xa0028;
    puVar13[2] = 2;
    *(undefined2 *)(puVar13 + 3) = 2;
    if (uVar10 <= *(ushort *)((long)puVar13 + 0xe)) {
      uVar10 = *(ushort *)((long)puVar13 + 0xe);
    }
    *(ushort *)((long)puVar13 + 0xe) = uVar10;
    lVar11 = DAT_05574040;
    if (uVar14 < 8) {
      if (DAT_05574040 == 0) goto LAB_028be238;
      (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
      if ((local_80 == 0) && ((*(byte *)(lVar11 + 0x453) & 1) != 0)) {
        lVar11 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x10) + 0x130) + 0x18))();
      }
      else {
        lVar11 = (**(code **)(*(long *)**(undefined8 **)(lVar11 + 0x10) + 0x18))();
        lVar11 = lVar11 + 0x110;
      }
      if (uVar14 == 7) break;
      uVar7 = (ulong)uVar14;
      plVar9 = (long *)(lVar11 + (ulong)uVar14 * 0x48 + 0x1e3400);
      while ((6 < uVar7 || (plVar9[-1] == 0 && *plVar9 == 0))) {
        uVar7 = uVar7 + 1;
        plVar9 = plVar9 + 9;
        if (uVar7 == 7) goto LAB_028be178;
      }
      uVar14 = (int)uVar7 + 1;
    }
  }
LAB_028be178:
  if (DAT_05574040 != 0) {
    if (*(int *)(DAT_05574040 + 0x114) == 1 && *(uint *)(DAT_05574040 + 0x110) < 8) {
      uVar7 = FUN_028beba8();
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      if (DAT_05574040 == 0) goto LAB_028be238;
    }
    if (*(int *)(DAT_05574040 + 0x11c) == 1 && *(uint *)(DAT_05574040 + 0x118) < 8) {
      uVar7 = FUN_028bed14();
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      if (DAT_05574040 == 0) goto LAB_028be238;
    }
    local_78 = CONCAT44(local_78._4_4_,1);
    if ((((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
         (local_78 = CONCAT44(local_78._4_4_,1),
         (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0 && *(int *)(DAT_05574040 + 0x124) == 1
         ) && *(uint *)(DAT_05574040 + 0x120) < 8)) && (uVar7 = FUN_028bee80(), (uVar7 & 1) != 0))
       && (uVar7 = FUN_028bef0c(), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
LAB_028be238:
  uVar7 = FUN_028bf09c();
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (((DAT_0537d558 != (long *)0x0) && (1 < *(byte *)(*DAT_0537d558 + 0x476))) &&
     (DAT_0537d558[2] != 0)) {
    FUN_01d4d9a0();
  }
  return 1;
}

