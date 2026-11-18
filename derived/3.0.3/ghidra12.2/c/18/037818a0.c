
/* WARNING: Removing unreachable block (ram,0x037819ac) */
/* WARNING: Removing unreachable block (ram,0x03781900) */
/* WARNING: Removing unreachable block (ram,0x03781a64) */
/* WARNING: Removing unreachable block (ram,0x03781be4) */

uint FUN_037818a0(uint *param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ushort uVar10;
  undefined **local_50;
  long local_48;
  undefined1 local_40;
  byte local_3f;
  uint local_34;
  
  uVar2 = *param_1;
  uVar3 = uVar2 & 0xe000;
  if (uVar3 == 0) {
    if ((DAT_05574040 == 0) ||
       (local_50 = (undefined **)CONCAT44(local_50._4_4_,1),
       ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) goto switchD_03781aac_default;
    uVar3 = (uVar2 & 0xffff) >> 3 & 0x3ff;
    lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    if (499 < uVar3) {
      return 0;
    }
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = lVar4 + (ulong)uVar3 * 0x2d48;
    if ((*(long **)(lVar4 + 0x4cc70) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x4cc70), puVar5 == (undefined8 *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      uVar6 = uVar6 & 0xffffffff;
    }
    puVar1 = (ushort *)(*(long *)(lVar4 + 0x4cc58) + *(long *)(lVar4 + 0x4cc50));
    uVar10 = puVar1[2];
    if (uVar10 != 0xffff && (*puVar1 & 1) == 0) {
      if (DAT_05574040 != 0) {
        local_50 = (undefined **)CONCAT44(local_50._4_4_,1);
        if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
           (lVar8 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
           uVar10 < 500 && lVar8 != 0)) {
          lVar8 = lVar8 + (ulong)uVar10 * 0x2d48;
          if ((*(long **)(lVar8 + 0x4e3a0) == (long *)0x0) ||
             (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x4e3a0), puVar5 == (undefined8 *)0x0)) {
            lVar9 = *(long *)(lVar8 + 0x4e380);
            lVar8 = *(long *)(lVar8 + 0x4e388);
            goto LAB_03781c78;
          }
          uVar7 = (**(code **)*puVar5)();
          uVar10 = *(ushort *)(*(long *)(lVar8 + 0x4e388) + *(long *)(lVar8 + 0x4e380));
          uVar3 = (uint)uVar10;
          if ((uVar7 & 1) != 0) {
            lVar8 = *(long *)(lVar8 + 0x4e3a0);
            goto joined_r0x03781ba4;
          }
          goto LAB_03781c7c;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x4cc70) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x4cc70) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
        return 0;
      }
      goto switchD_03781aac_default;
    }
    if ((*(long **)(lVar4 + 0x4e3a0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x4e3a0), puVar5 == (undefined8 *)0x0)) {
      lVar9 = *(long *)(lVar4 + 0x4e380);
      lVar8 = *(long *)(lVar4 + 0x4e388);
LAB_03781c78:
      uVar3 = (uint)*(ushort *)(lVar8 + lVar9);
    }
    else {
      uVar7 = (**(code **)*puVar5)();
      uVar10 = *(ushort *)(*(long *)(lVar4 + 0x4e388) + *(long *)(lVar4 + 0x4e380));
      uVar3 = (uint)uVar10;
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)(lVar4 + 0x4e3a0);
joined_r0x03781ba4:
        if (lVar8 != 0) {
          uVar3 = (uint)uVar10;
          if (*(undefined8 **)(lVar8 + 8) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(lVar8 + 8))();
          }
        }
      }
    }
LAB_03781c7c:
    uVar3 = uVar3 >> 2 & 1;
    if ((uVar6 & 1) == 0) {
      return uVar3;
    }
    lVar4 = *(long *)(lVar4 + 0x4cc70);
joined_r0x03781c88:
    if ((lVar4 != 0) && (*(undefined8 **)(lVar4 + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar4 + 8))();
    }
  }
  else {
    if (uVar3 == 0x2000) {
      local_34 = uVar2 >> 3 & 0x3ff;
      if (((local_34 < 7) && (local_34 != 5)) &&
         ((DAT_05574040 != 0 &&
          ((local_50 = (undefined **)CONCAT44(local_50._4_4_,1),
           ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0 &&
           (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
           lVar4 != 0)))))) {
        switch(local_34) {
        case 0:
          lVar4 = lVar4 + 0x390a0;
          break;
        case 1:
          lVar4 = lVar4 + 0x3a488;
          break;
        case 2:
          lVar4 = lVar4 + 0x3b870;
          break;
        case 3:
          lVar4 = lVar4 + 0x3cc58;
          break;
        case 4:
          lVar4 = lVar4 + 0x3e040;
          break;
        default:
          goto switchD_03781aac_default;
        }
        if ((*param_1 & 7) == 1) {
          if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
             (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
            return *(ushort *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) >> 3 & 1;
          }
          uVar6 = (**(code **)*puVar5)();
          uVar10 = *(ushort *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) >> 3;
        }
        else {
          if ((*param_1 & 7) != 0) goto switchD_03781aac_default;
          if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
             (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
            return *(ushort *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) >> 2 & 1;
          }
          uVar6 = (**(code **)*puVar5)();
          uVar10 = *(ushort *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8)) >> 2;
        }
        uVar3 = uVar10 & 1;
        if ((uVar6 & 1) == 0) {
          return uVar3;
        }
        lVar4 = *(long *)(lVar4 + 0x28);
        goto joined_r0x03781c88;
      }
    }
    else if (((uVar3 == 0xa000) && (DAT_05574040 != 0)) &&
            (local_50 = (undefined **)CONCAT44(local_50._4_4_,1),
            ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) {
      lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
      if (lVar4 == 0) {
        return 0;
      }
      if ((*(long **)(lVar4 + 0x36620) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x36620), puVar5 == (undefined8 *)0x0)) {
        local_34 = (uint)*(char *)(*(long *)(lVar4 + 0x36608) + *(long *)(lVar4 + 0x36600));
      }
      else {
        uVar6 = (**(code **)*puVar5)();
        local_34 = (uint)*(char *)(*(long *)(lVar4 + 0x36608) + *(long *)(lVar4 + 0x36600));
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x36620) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x36620) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
      }
      if (local_34 == 1) {
        if ((*(long **)(lVar4 + 0x36690) == (long *)0x0) ||
           (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x36690), puVar5 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar5)();
          uVar3 = uVar3 ^ 1;
        }
        uVar10 = *(ushort *)(*(long *)(lVar4 + 0x36678) + *(long *)(lVar4 + 0x36670)) & 4;
        if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x36690) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x36690) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
        goto LAB_03781e74;
      }
      if (local_34 == 2) {
        if ((*param_1 & 7) == 1) {
          local_48 = lVar4 + 0x37cb8;
          local_40 = 1;
          if (*(long **)(lVar4 + 0x37ce0) == (long *)0x0) {
            local_3f = 0;
          }
          else {
            puVar5 = (undefined8 *)**(long **)(lVar4 + 0x37ce0);
            local_3f = 0;
            if (puVar5 != (undefined8 *)0x0) {
              local_3f = (**(code **)*puVar5)();
            }
          }
          uVar10 = *(ushort *)(*(long *)(lVar4 + 0x37cc8) + *(long *)(lVar4 + 0x37cc0)) & 8;
        }
        else {
          if ((*param_1 & 7) != 0) goto switchD_03781aac_default;
          local_48 = lVar4 + 0x37cb8;
          local_40 = 1;
          if (*(long **)(lVar4 + 0x37ce0) == (long *)0x0) {
            local_3f = 0;
          }
          else {
            puVar5 = (undefined8 *)**(long **)(lVar4 + 0x37ce0);
            local_3f = 0;
            if (puVar5 != (undefined8 *)0x0) {
              local_3f = (**(code **)*puVar5)();
            }
          }
          uVar10 = *(ushort *)(*(long *)(lVar4 + 0x37cc8) + *(long *)(lVar4 + 0x37cc0)) & 4;
        }
        local_3f = local_3f & 1;
        local_50 = &PTR_FUN_04a554e8;
        FUN_02640184(&local_50);
LAB_03781e74:
        return (uint)(uVar10 != 0);
      }
    }
switchD_03781aac_default:
    uVar3 = 0;
  }
  return uVar3;
}

