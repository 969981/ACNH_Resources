
/* WARNING: Removing unreachable block (ram,0x02b22678) */
/* WARNING: Removing unreachable block (ram,0x02b22680) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02b22450(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint local_50;
  uint local_4c [4];
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) {
LAB_02b22514:
    uVar10 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) goto LAB_02b22514;
      lVar5 = lVar5 + 0x70;
    }
    else if (((puVar6 == (undefined8 *)0x0) || ((long *)puVar6[0x26] == (long *)0x0)) ||
            (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 == 0)) goto LAB_02b22514;
    if ((*(long **)(lVar5 + 0xe7290) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0xe7290), puVar6 == (undefined8 *)0x0)) {
      uVar10 = *(uint *)(*(long *)(lVar5 + 0xe7278) + *(long *)(lVar5 + 0xe7270));
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar10 = *(uint *)(*(long *)(lVar5 + 0xe7278) + *(long *)(lVar5 + 0xe7270));
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar5 + 0xe7290) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xe7290) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
  }
  uVar1 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  uVar10 = 0;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  do {
    local_4c[(int)uVar10] = uVar10;
    uVar10 = uVar10 + 1;
    uVar8 = 2;
  } while (uVar10 < 2);
  local_50 = 2;
  if (-1 < param_2) {
    uVar10 = 0;
    iVar7 = -1;
    local_4c[3] = uVar1;
    uStack_3c = uVar2;
    local_38 = uVar3;
    uStack_34 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
    do {
      if (0 < (int)uVar8) {
        uVar1 = local_4c[3] ^ local_4c[3] << 0xb;
        local_4c[3] = uStack_3c;
        uStack_3c = local_38;
        uVar2 = uVar1 >> 8 ^ uStack_34 >> 0x13 ^ uVar1 ^ uStack_34;
        local_38 = uStack_34;
        uVar9 = (ulong)uVar2 * (ulong)uVar8;
        uVar4 = uVar9 >> 0x20;
        uVar1 = local_50 - 1;
        if (1 < (uint)(uVar9 >> 0x20)) {
          uVar4 = 0;
        }
        if (1 < uVar1) {
          uVar1 = 0;
        }
        uVar3 = local_4c[uVar4];
        local_4c[uVar4] = local_4c[(int)uVar1];
        uVar1 = local_50 - 1;
        if (1 < uVar1) {
          uVar1 = 0;
        }
        local_4c[(int)uVar1] = uVar3;
        if (-1 < (int)uVar3) {
          uVar10 = uVar3;
        }
        uVar8 = local_50 - 1;
        local_50 = uVar8;
        uStack_34 = uVar2;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_2);
    if (uVar10 < 2) goto LAB_02b22694;
  }
  uVar10 = 0;
LAB_02b22694:
  *param_1 = *(undefined4 *)((long)&DAT_0417f96c + (ulong)uVar10 * 6);
  *(undefined2 *)(param_1 + 1) = (&DAT_0417f970)[(ulong)uVar10 * 3];
  return;
}

