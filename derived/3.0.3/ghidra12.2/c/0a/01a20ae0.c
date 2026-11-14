
void FUN_01a20ae0(void)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  uint local_84;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar2 == 0) {
        return;
      }
      lVar2 = lVar2 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar2 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar2 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar6 == (undefined8 *)0x0)) {
      local_84 = 0;
    }
    else {
      local_84 = (**(code **)*puVar6)();
    }
    uVar12 = 0;
    plVar14 = (long *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1e33b8);
    do {
      if (((plVar14[-1] != 0 || *plVar14 != 0) && (DAT_05574040 != 0)) &&
         (lVar3 = FUN_026eec4c(DAT_05574040,uVar12 & 0xffffffff), lVar3 != 0)) {
        lVar11 = lVar3 + 0x194b0;
        plVar10 = (long *)(lVar3 + 0x194b8);
        lVar7 = lVar11;
        if (*plVar10 == 0) {
          lVar7 = *(long *)(DAT_05574040 + 0x20);
        }
        if (*(long **)(lVar7 + 0x2d048) == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          puVar6 = (undefined8 *)**(long **)(lVar7 + 0x2d048);
          uVar4 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar4 = (**(code **)*puVar6)();
          }
        }
        local_78 = local_78 & 0xffffffff00000000;
        uVar1 = *(ushort *)(*(long *)(lVar7 + 0x2d030) + *(long *)(lVar7 + 0x2d028));
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x2d048) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x2d048) + 8), puVar6 != (undefined8 *)0x0))
        {
          (**(code **)*puVar6)();
        }
        if ((uVar1 & 1) != 0) {
          if (*plVar10 == 0) {
            lVar13 = *(long *)(DAT_05574040 + 0x20);
            lVar8 = *(long *)(lVar13 + 0xd0);
            if (lVar8 != 0) goto LAB_01a20c9c;
LAB_01a20cc0:
            uVar4 = 0;
            plVar9 = *(long **)(lVar7 + 0x2d0b8);
            if (plVar9 == (long *)0x0) goto LAB_01a20cf0;
LAB_01a20ccc:
            if ((undefined8 *)*plVar9 == (undefined8 *)0x0) goto LAB_01a20cf0;
            uVar5 = (*(code *)**(undefined8 **)*plVar9)();
            uVar5 = uVar5 & 0xffffffff;
            lVar8 = *(long *)(lVar13 + 0xd0);
          }
          else {
            lVar8 = *(long *)(lVar3 + 0x19580);
            lVar13 = lVar11;
            if (lVar8 == 0) goto LAB_01a20cc0;
LAB_01a20c9c:
            if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) goto LAB_01a20cc0;
            uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
            uVar4 = uVar4 & 0xffffffff;
            plVar9 = *(long **)(lVar7 + 0x2d0b8);
            if (plVar9 != (long *)0x0) goto LAB_01a20ccc;
LAB_01a20cf0:
            uVar5 = 0;
            lVar8 = *(long *)(lVar13 + 0xd0);
          }
          if ((lVar8 != 0) && (plVar9 = *(long **)(lVar8 + 0x20), plVar9 != (long *)0x0)) {
            local_78 = *(ulong *)(lVar13 + 0xb0);
            local_70 = *(undefined8 *)(lVar13 + 0xb8);
            local_68 = 0xb8;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
          }
          memcpy((void *)(*(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0)),
                 (void *)(*(long *)(lVar7 + 0x2d0a0) + *(long *)(lVar7 + 0x2d098)),0xb8);
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x2d0b8) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x2d0b8) + 8), puVar6 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar6)();
          }
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar13 + 0xd0) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0xd0) + 0x18),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
          if (*plVar10 == 0) {
            lVar11 = *(long *)(DAT_05574040 + 0x20);
            lVar3 = *(long *)(lVar11 + 0x108);
            if (lVar3 != 0) goto LAB_01a20d9c;
LAB_01a20dc0:
            uVar4 = 0;
            plVar10 = *(long **)(lVar7 + 0x2d0f0);
            if (plVar10 == (long *)0x0) goto LAB_01a20df0;
LAB_01a20dcc:
            if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_01a20df0;
            uVar5 = (*(code *)**(undefined8 **)*plVar10)();
            uVar5 = uVar5 & 0xffffffff;
            lVar3 = *(long *)(lVar11 + 0x108);
          }
          else {
            lVar3 = *(long *)(lVar3 + 0x195b8);
            if (lVar3 == 0) goto LAB_01a20dc0;
LAB_01a20d9c:
            if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) goto LAB_01a20dc0;
            uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
            uVar4 = uVar4 & 0xffffffff;
            plVar10 = *(long **)(lVar7 + 0x2d0f0);
            if (plVar10 != (long *)0x0) goto LAB_01a20dcc;
LAB_01a20df0:
            uVar5 = 0;
            lVar3 = *(long *)(lVar11 + 0x108);
          }
          if ((lVar3 != 0) && (plVar10 = *(long **)(lVar3 + 0x20), plVar10 != (long *)0x0)) {
            local_78 = *(ulong *)(lVar11 + 0xe8);
            local_70 = *(undefined8 *)(lVar11 + 0xf0);
            local_68 = 0xb8;
            (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
          }
          memcpy((void *)(*(long *)(lVar11 + 0xf0) + *(long *)(lVar11 + 0xe8)),
                 (void *)(*(long *)(lVar7 + 0x2d0d8) + *(long *)(lVar7 + 0x2d0d0)),0xb8);
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x2d0f0) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x2d0f0) + 8), puVar6 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar6)();
          }
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar11 + 0x108) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x108) + 0x18),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
          lVar3 = *(long *)(lVar7 + 0x2d080);
          if (lVar3 == 0) {
            *(ushort *)(*(long *)(lVar7 + 0x2d068) + *(long *)(lVar7 + 0x2d060)) =
                 *(ushort *)(*(long *)(lVar7 + 0x2d068) + *(long *)(lVar7 + 0x2d060)) & 0xfffe;
          }
          else {
            if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
              uVar4 = 0;
              plVar10 = *(long **)(lVar3 + 0x20);
joined_r0x01a20f08:
              if (plVar10 != (long *)0x0) {
                local_78 = *(ulong *)(lVar7 + 0x2d060);
                local_70 = *(undefined8 *)(lVar7 + 0x2d068);
                local_68 = 2;
                (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
              }
            }
            else {
              uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
              uVar4 = uVar4 & 0xffffffff;
              if (*(long *)(lVar7 + 0x2d080) != 0) {
                plVar10 = *(long **)(*(long *)(lVar7 + 0x2d080) + 0x20);
                goto joined_r0x01a20f08;
              }
            }
            *(ushort *)(*(long *)(lVar7 + 0x2d068) + *(long *)(lVar7 + 0x2d060)) =
                 *(ushort *)(*(long *)(lVar7 + 0x2d068) + *(long *)(lVar7 + 0x2d060)) & 0xfffe;
            if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x2d080) != 0)) &&
               (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x2d080) + 0x18),
               puVar6 != (undefined8 *)0x0)) {
              (**(code **)*puVar6)();
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
      plVar14 = plVar14 + 9;
    } while (uVar12 != 8);
    if ((((local_84 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return;
}

