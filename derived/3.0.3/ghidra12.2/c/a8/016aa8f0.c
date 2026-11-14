
void FUN_016aa8f0(void)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined8 uStack_19710;
  undefined8 uStack_19708;
  undefined8 uStack_19700;
  undefined **local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined **local_2f8;
  undefined **local_2d8;
  undefined **local_2b8;
  undefined1 *local_2b0;
  int local_2a8;
  undefined1 local_2a4 [255];
  undefined1 local_1a5;
  undefined8 *local_1a0;
  undefined4 local_198;
  uint local_18c;
  undefined **local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [255];
  undefined1 local_75;
  
  if (DAT_05574040 != 0) {
    puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar7 == 0) {
        return;
      }
      lVar7 = lVar7 + 0x70;
    }
    else {
      if (puVar10 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar10[0x26] == (long *)0x0) {
        return;
      }
      lVar7 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      if (lVar7 == 0) {
        return;
      }
    }
    iVar12 = 0;
    uVar16 = 0;
    do {
      lVar13 = lVar7 + 0x211c20 + (long)iVar12 * 0xcb0;
      if (*(long **)(lVar13 + 0x28) == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        puVar10 = (undefined8 *)**(long **)(lVar13 + 0x28);
        uVar8 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar8 = (**(code **)*puVar10)();
        }
      }
      lVar11 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
      uVar4 = *(uint *)(lVar11 + 0x158c);
      if ((*(byte *)(lVar11 + 0x1590) >> 1 & 1) == 0) {
        if (7 < uVar4) {
          uVar4 = 0xffffffff;
        }
        uVar14 = uVar4;
LAB_016aaa50:
        bVar15 = 0;
      }
      else {
        uVar14 = 0xffffffff;
        if (7 < uVar4) goto LAB_016aaa50;
        bVar15 = 1;
        uVar14 = uVar4;
      }
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
      bVar3 = (bool)(bVar15 ^ 1);
      if (uVar14 == 0xffffffff) {
        bVar3 = true;
      }
      if (!bVar3) {
        if ((*(long **)(lVar13 + 0x60) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar13 + 0x60), puVar10 == (undefined8 *)0x0)) {
          if ((*(byte *)(*(long *)(lVar13 + 0x48) + *(long *)(lVar13 + 0x40)) >> 1 & 1) == 0)
          goto LAB_016aaaf0;
LAB_016aab30:
          local_2a8 = 0x100;
          local_1a5 = 0;
          local_304 = 0;
          local_2f8 = &PTR_LAB_04a90d40;
          local_2d8 = &PTR_LAB_04a90d40;
          local_2a4[0] = 0;
          local_1a0 = (undefined8 *)0x0;
          local_198 = 0;
          local_18c = uVar16 | (uint)*(ushort *)(PTR_DAT_04bb4b48 + 2) << 0x10 | 0x18;
          local_310 = &PTR_LAB_04a90d68;
          local_2b8 = &PTR_LAB_048f9a70;
          uStack_19710 = CONCAT44(uStack_19710._4_4_,2);
          local_308 = 4;
          local_2b0 = local_2a4;
          memset(&uStack_19710,0,0x19400);
          local_178 = 0x100;
          local_75 = 0;
          local_174[0] = 0;
          local_188 = &PTR_LAB_048f9a70;
          local_180 = local_174;
          FUN_007d6ff0(&local_18c,&local_188);
          puVar5 = local_2b0;
          (*(code *)local_188[3])(&local_188);
          puVar6 = local_180;
          if (puVar5 != local_180) {
            (*(code *)local_188[3])(&local_188);
            lVar11 = 0;
            do {
              if (local_180[lVar11] == '\0') goto LAB_016aac80;
              if (local_180[lVar11 + 1] == '\0') {
                lVar11 = lVar11 + 1;
                goto LAB_016aac80;
              }
              if (local_180[lVar11 + 2] == '\0') {
                lVar11 = lVar11 + 2;
                goto LAB_016aac80;
              }
              lVar11 = lVar11 + 3;
            } while (lVar11 != 0x80001);
            lVar11 = 0;
LAB_016aac80:
            iVar2 = (int)lVar11;
            if (local_2a8 <= (int)lVar11) {
              iVar2 = local_2a8 + -1;
            }
            memcpy(puVar5,puVar6,(long)iVar2);
            puVar5[iVar2] = 0;
          }
          local_1a0 = &uStack_19710;
          local_198 = 0x19400;
          FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_310);
          lVar11 = *(long *)(lVar13 + 0x28);
          if (lVar11 != 0) goto LAB_016aaaf8;
LAB_016aace4:
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)*puVar10)();
          bVar15 = *(byte *)(*(long *)(lVar13 + 0x48) + *(long *)(lVar13 + 0x40));
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x60) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x60) + 8), puVar10 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar10)();
          }
          if ((bVar15 >> 1 & 1) != 0) goto LAB_016aab30;
LAB_016aaaf0:
          lVar11 = *(long *)(lVar13 + 0x28);
          if (lVar11 == 0) goto LAB_016aace4;
LAB_016aaaf8:
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar8 = 0;
            plVar9 = *(long **)(lVar11 + 0x20);
          }
          else {
            uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            uVar8 = uVar8 & 0xffffffff;
            if (*(long *)(lVar13 + 0x28) == 0) goto LAB_016aace8;
            plVar9 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20);
          }
          if (plVar9 != (long *)0x0) {
            uStack_19710 = *(undefined8 *)(lVar13 + 8);
            uStack_19708 = *(undefined8 *)(lVar13 + 0x10);
            uStack_19700 = 0x1594;
            (**(code **)(*plVar9 + 0x20))(plVar9,&uStack_19710);
          }
        }
LAB_016aace8:
        pvVar1 = (void *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
        memset(pvVar1,0,0x1594);
        *(undefined2 *)((long)pvVar1 + 2) = 0xffff;
        FUN_028f8bb0((long)pvVar1 + 4);
        *(undefined4 *)((long)pvVar1 + 0x1560) = 0;
        *(undefined8 *)((long)pvVar1 + 0x1568) = 0;
        *(undefined1 *)((long)pvVar1 + 0x1564) = 0;
        *(undefined8 *)((long)pvVar1 + 0x1570) = 0;
        *(undefined8 *)((long)pvVar1 + 0x1578) = 0;
        *(undefined8 *)((long)pvVar1 + 0x157e) = 0;
        *(undefined4 *)((long)pvVar1 + 0x1586) = 0x101;
        *(undefined1 *)((long)pvVar1 + 0x158a) = 0;
        *(undefined4 *)((long)pvVar1 + 0x158c) = 0;
        *(undefined1 *)((long)pvVar1 + 0x1590) = 0;
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x18),
           puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)();
        }
      }
      uVar16 = uVar16 + 1;
      iVar12 = iVar12 + 1;
    } while (uVar16 != 8);
    iVar12 = 0;
    uVar16 = 0;
    do {
      lVar13 = lVar7 + 0x20b9e8 + (long)iVar12 * 0xc40;
      if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar10 == (undefined8 *)0x0)) {
        if ((*(byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8)) >> 1 & 1) == 0)
        goto LAB_016aae54;
LAB_016aaea8:
        local_2a8 = 0x100;
        local_1a5 = 0;
        local_304 = 0;
        local_2f8 = &PTR_LAB_04a90d40;
        local_2d8 = &PTR_LAB_04a90d40;
        local_2a4[0] = 0;
        local_1a0 = (undefined8 *)0x0;
        local_198 = 0;
        local_18c = uVar16 | (uint)*(ushort *)(PTR_DAT_04bb4b48 + 2) << 0x10 | 8;
        local_310 = &PTR_LAB_04a90d68;
        local_2b8 = &PTR_LAB_048f9a70;
        uStack_19710 = CONCAT44(uStack_19710._4_4_,2);
        local_308 = 4;
        local_2b0 = local_2a4;
        memset(&uStack_19710,0,0x19400);
        local_178 = 0x100;
        local_75 = 0;
        local_174[0] = 0;
        local_188 = &PTR_LAB_048f9a70;
        local_180 = local_174;
        FUN_007d6ff0(&local_18c,&local_188);
        puVar5 = local_2b0;
        (*(code *)local_188[3])(&local_188);
        puVar6 = local_180;
        if (puVar5 != local_180) {
          (*(code *)local_188[3])(&local_188);
          lVar11 = 0;
          do {
            if (local_180[lVar11] == '\0') goto LAB_016ab000;
            if (local_180[lVar11 + 1] == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_016ab000;
            }
            if (local_180[lVar11 + 2] == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_016ab000;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_016ab000:
          iVar2 = (int)lVar11;
          if (local_2a8 <= (int)lVar11) {
            iVar2 = local_2a8 + -1;
          }
          memcpy(puVar5,puVar6,(long)iVar2);
          puVar5[iVar2] = 0;
        }
        local_1a0 = &uStack_19710;
        local_198 = 0x19400;
        FUN_0283e414(*(undefined8 *)PTR_DAT_04bb8460,&local_310);
        lVar11 = *(long *)(lVar13 + 0x28);
        if (lVar11 != 0) goto LAB_016aae5c;
LAB_016ab064:
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)*puVar10)();
        bVar15 = *(byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar10 != (undefined8 *)0x0))
        {
          (**(code **)*puVar10)();
        }
        if ((bVar15 >> 1 & 1) != 0) goto LAB_016aaea8;
LAB_016aae54:
        lVar11 = *(long *)(lVar13 + 0x28);
        if (lVar11 == 0) goto LAB_016ab064;
LAB_016aae5c:
        if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
          uVar8 = 0;
          plVar9 = *(long **)(lVar11 + 0x20);
        }
        else {
          uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          uVar8 = uVar8 & 0xffffffff;
          if (*(long *)(lVar13 + 0x28) == 0) goto LAB_016ab068;
          plVar9 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20);
        }
        if (plVar9 != (long *)0x0) {
          uStack_19710 = *(undefined8 *)(lVar13 + 8);
          uStack_19708 = *(undefined8 *)(lVar13 + 0x10);
          uStack_19700 = 0x158c;
          (**(code **)(*plVar9 + 0x20))(plVar9,&uStack_19710);
        }
      }
LAB_016ab068:
      pvVar1 = (void *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
      memset(pvVar1,0,0x158c);
      *(undefined2 *)((long)pvVar1 + 2) = 0xffff;
      FUN_028f8bb0((long)pvVar1 + 4);
      *(undefined4 *)((long)pvVar1 + 0x1560) = 0;
      *(undefined8 *)((long)pvVar1 + 0x1568) = 0;
      *(undefined1 *)((long)pvVar1 + 0x1564) = 0;
      *(undefined8 *)((long)pvVar1 + 0x1570) = 0;
      *(undefined8 *)((long)pvVar1 + 0x1578) = 0;
      *(undefined8 *)((long)pvVar1 + 0x157e) = 0;
      *(undefined4 *)((long)pvVar1 + 0x1586) = 0x101;
      *(undefined1 *)((long)pvVar1 + 0x158a) = 0;
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar10)();
      }
      uVar16 = uVar16 + 1;
      iVar12 = iVar12 + 1;
    } while (uVar16 != 8);
  }
  return;
}

