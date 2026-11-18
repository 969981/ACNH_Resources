
/* WARNING: Removing unreachable block (ram,0x036f0ad4) */

void FUN_036f09c0(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((*(long *)(param_1 + 0xb0) != 0) && (*(long *)(*(long *)(param_1 + 0xb0) + 8) != 0)) {
    uVar1 = *(short *)(param_1 + 0x1fa) + 1;
    uVar6 = (uint)*(ushort *)(param_1 + 0x1f8);
    uVar7 = (uint)*(ushort *)(param_1 + 0x1f8);
    if (uVar7 != uVar1) {
      uVar8 = *(uint *)(param_1 + 0x1d8);
      do {
        uVar2 = uVar7 & 0xffff;
        if (((uVar8 <= uVar2 - uVar6) ||
            (puVar5 = *(undefined4 **)(*(long *)(param_1 + 0x1e0) + (long)(int)(uVar2 - uVar6) * 8),
            puVar5 == (undefined4 *)0x0)) && (puVar5 = &DAT_05ab8cb0, (DAT_05ab8cb8 & 1) == 0)) {
          iVar4 = __cxa_guard_acquire(&DAT_05ab8cb8,&DAT_05ab8cb0);
          if (iVar4 != 0) {
            DAT_05ab8cb0 = 0;
            __cxa_guard_release(&DAT_05ab8cb8);
          }
          puVar5 = &DAT_05ab8cb0;
        }
        (**(code **)*param_2)(param_2,puVar5);
        uVar6 = (uint)*(ushort *)(param_1 + 0x1f8);
        uVar9 = uVar2;
        if (uVar2 <= *(ushort *)(param_1 + 0x1fa)) {
          uVar9 = (uint)*(ushort *)(param_1 + 0x1fa);
        }
        uVar8 = *(uint *)(param_1 + 0x1d8);
        uVar7 = uVar2;
        do {
          while( true ) {
            if (uVar9 == uVar7) {
              uVar7 = uVar2 + 1;
              goto LAB_036f0a38;
            }
            uVar3 = (uVar7 + 1 & 0xffff) - uVar6;
            if (uVar3 < uVar8) break;
            uVar7 = uVar7 + 1;
          }
          uVar7 = uVar7 + 1;
        } while (*(long *)(*(long *)(param_1 + 0x1e0) + (long)(int)uVar3 * 8) == 0);
LAB_036f0a38:
      } while ((uint)uVar1 != (uVar7 & 0xffff));
    }
  }
  return;
}

