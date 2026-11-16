
void FUN_02856090(long param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint local_68;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb46b0;
  uVar5 = 0;
  uVar10 = 0;
  do {
    uVar3 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*param_2 & uVar3) != 0) {
      local_68 = 0;
      uVar6 = FUN_02b67a30(&local_68,uVar5);
      if ((uVar6 & 1) != 0) {
        local_64 = local_68;
        lVar8 = *(long *)puVar4;
        if (lVar8 != 0) {
          puVar9 = *(undefined8 **)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
            lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
            if (lVar8 != 0) {
              lVar8 = lVar8 + 0x70;
LAB_02856174:
              if (local_64 < 10) {
                lVar2 = lVar8 + 0x1962d8 + (ulong)local_64 * 0x10d8;
                if (9 < local_64) {
                  lVar2 = lVar8 + 0x1962d8;
                }
                if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
                   (puVar9 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar9 == (undefined8 *)0x0))
                {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (**(code **)*puVar9)();
                  uVar6 = uVar6 & 0xffffffff;
                }
                puVar1 = (uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
                local_64 = *puVar1;
                if (2 < local_64) {
                  local_64 = 0;
                }
                if ((int)local_64 < 2) {
                  if ((((uVar6 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
                     (puVar9 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8),
                     puVar9 != (undefined8 *)0x0)) {
                    (**(code **)*puVar9)();
                  }
                }
                else {
                  if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
                     (puVar9 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar9 == (undefined8 *)0x0)
                     ) {
                    uVar11 = puVar1[1];
                  }
                  else {
                    uVar7 = (**(code **)*puVar9)();
                    uVar11 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 4);
                    if ((((uVar7 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
                       (puVar9 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8),
                       puVar9 != (undefined8 *)0x0)) {
                      (**(code **)*puVar9)();
                    }
                  }
                  if ((((uVar6 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
                     (puVar9 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8),
                     puVar9 != (undefined8 *)0x0)) {
                    (**(code **)*puVar9)();
                  }
                  if (uVar11 != 2) {
                    uVar3 = 0;
                  }
                  uVar10 = uVar3 | uVar10;
                }
              }
            }
          }
          else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
                  (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 != 0))
          goto LAB_02856174;
        }
      }
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 10) {
      local_68 = uVar10;
      uVar5 = FUN_02855af0(&local_68);
      if (uVar5 != 0xffffffff) {
        *(undefined8 *)(param_1 + 0xfc) = 0;
        *(undefined8 *)(param_1 + 0x114) = 0;
        *(undefined8 *)(param_1 + 0x11c) = 0;
        *(undefined2 *)(param_1 + 0x11a) = 0x101;
        *(undefined1 *)(param_1 + 0x11d) = 0;
        *(undefined8 *)(param_1 + 0x124) = 0;
        *(undefined8 *)(param_1 + 300) = 0;
        *(undefined1 **)(param_1 + 0x120) = &LAB_01010000;
        *(undefined8 *)(param_1 + 0x104) = 0;
        *(undefined8 *)(param_1 + 0x10c) = 0;
        *(undefined1 *)(param_1 + 0x129) = 4;
        *(undefined2 *)(param_1 + 0x130) = 0;
        *(undefined1 *)(param_1 + 0x132) = 0;
        *(undefined1 *)(param_1 + 300) = 2;
        *(char *)(param_1 + 0x128) = (char)uVar5;
        *(undefined1 *)(param_1 + 0x12a) = 0;
        *(undefined1 *)(param_1 + 299) = 1;
        *param_2 = *param_2 & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
      }
      return;
    }
  } while( true );
}

