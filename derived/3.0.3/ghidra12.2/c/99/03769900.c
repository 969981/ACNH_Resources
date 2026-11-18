
/* WARNING: Removing unreachable block (ram,0x03769af4) */
/* WARNING: Removing unreachable block (ram,0x03769960) */
/* WARNING: Removing unreachable block (ram,0x03769a0c) */

ushort FUN_03769900(uint *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ushort uVar9;
  undefined **local_48;
  long local_40;
  undefined1 local_38;
  byte local_37;
  
  uVar1 = *param_1;
  uVar3 = uVar1 & 0xe000;
  if (uVar3 == 0) {
    if ((DAT_05574040 == 0) ||
       (local_48 = (undefined **)CONCAT44(local_48._4_4_,1),
       ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) goto switchD_03769b3c_default;
    uVar3 = (uVar1 & 0xffff) >> 3 & 0x3ff;
    lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    if (499 < uVar3) {
      return 0;
    }
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = lVar4 + (ulong)uVar3 * 0x2d48;
    lVar7 = lVar4 + 0x4e378;
    plVar8 = *(long **)(lVar4 + 0x4e3a0);
joined_r0x03769a64:
    if ((plVar8 == (long *)0x0) || ((undefined8 *)*plVar8 == (undefined8 *)0x0)) {
      return *(ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)) >> 2 & 1;
    }
    uVar6 = (*(code *)**(undefined8 **)*plVar8)();
    uVar9 = *(ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)) >> 2;
joined_r0x03769ce0:
    uVar9 = uVar9 & 1;
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  else {
    if (uVar3 == 0x2000) {
      uVar3 = uVar1 >> 3 & 0x3ff;
      if ((((uVar3 < 7) && (uVar3 != 5)) && (DAT_05574040 != 0)) &&
         ((local_48 = (undefined **)CONCAT44(local_48._4_4_,1),
          ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0 &&
          (lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
          lVar7 != 0)))) {
        switch(uVar3) {
        case 0:
          lVar7 = lVar7 + 0x390a0;
          break;
        case 1:
          lVar7 = lVar7 + 0x3a488;
          break;
        case 2:
          lVar7 = lVar7 + 0x3b870;
          break;
        case 3:
          lVar7 = lVar7 + 0x3cc58;
          break;
        case 4:
          lVar7 = lVar7 + 0x3e040;
          break;
        default:
          goto switchD_03769b3c_default;
        }
        if ((*param_1 & 7) == 1) {
          if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
             (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar5 == (undefined8 *)0x0)) {
            return *(ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)) >> 3 & 1;
          }
          uVar6 = (**(code **)*puVar5)();
          uVar9 = *(ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)) >> 3;
          goto joined_r0x03769ce0;
        }
        if ((*param_1 & 7) == 0) {
          plVar8 = *(long **)(lVar7 + 0x28);
          goto joined_r0x03769a64;
        }
      }
    }
    else if (((uVar3 == 0xa000) && (DAT_05574040 != 0)) &&
            ((local_48 = (undefined **)CONCAT44(local_48._4_4_,1),
             ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0 &&
             (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
             lVar4 != 0)))) {
      if ((*(long **)(lVar4 + 0x36620) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x36620), puVar5 == (undefined8 *)0x0)) {
        cVar2 = *(char *)(*(long *)(lVar4 + 0x36608) + *(long *)(lVar4 + 0x36600));
      }
      else {
        uVar6 = (**(code **)*puVar5)();
        cVar2 = *(char *)(*(long *)(lVar4 + 0x36608) + *(long *)(lVar4 + 0x36600));
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x36620) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x36620) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
      }
      if (cVar2 == '\x01') {
        if ((*(long **)(lVar4 + 0x36690) == (long *)0x0) ||
           (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x36690), puVar5 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar5)();
          uVar3 = uVar3 ^ 1;
        }
        uVar9 = *(ushort *)(*(long *)(lVar4 + 0x36678) + *(long *)(lVar4 + 0x36670)) & 4;
        if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x36690) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x36690) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
        goto LAB_03769d5c;
      }
      if (cVar2 == '\x02') {
        if ((*param_1 & 7) == 1) {
          local_40 = lVar4 + 0x37cb8;
          local_38 = 1;
          if (*(long **)(lVar4 + 0x37ce0) == (long *)0x0) {
            local_37 = 0;
          }
          else {
            puVar5 = (undefined8 *)**(long **)(lVar4 + 0x37ce0);
            local_37 = 0;
            if (puVar5 != (undefined8 *)0x0) {
              local_37 = (**(code **)*puVar5)();
            }
          }
          uVar9 = *(ushort *)(*(long *)(lVar4 + 0x37cc8) + *(long *)(lVar4 + 0x37cc0)) & 8;
        }
        else {
          if ((*param_1 & 7) != 0) goto switchD_03769b3c_default;
          local_40 = lVar4 + 0x37cb8;
          local_38 = 1;
          if (*(long **)(lVar4 + 0x37ce0) == (long *)0x0) {
            local_37 = 0;
          }
          else {
            puVar5 = (undefined8 *)**(long **)(lVar4 + 0x37ce0);
            local_37 = 0;
            if (puVar5 != (undefined8 *)0x0) {
              local_37 = (**(code **)*puVar5)();
            }
          }
          uVar9 = *(ushort *)(*(long *)(lVar4 + 0x37cc8) + *(long *)(lVar4 + 0x37cc0)) & 4;
        }
        local_37 = local_37 & 1;
        local_48 = &PTR_FUN_04a554e8;
        FUN_02640184(&local_48);
LAB_03769d5c:
        return (ushort)(uVar9 != 0);
      }
    }
switchD_03769b3c_default:
    uVar9 = 0;
  }
  return uVar9;
}

