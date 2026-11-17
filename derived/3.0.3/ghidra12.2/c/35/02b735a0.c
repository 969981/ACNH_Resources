
/* WARNING: Removing unreachable block (ram,0x02b736d0) */

void FUN_02b735a0(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined **local_60;
  undefined4 *puStack_58;
  
  lVar4 = DAT_05635578;
  uVar6 = (uint)*(ushort *)(DAT_05635578 + 0x15f0);
  uVar1 = *(short *)(DAT_05635578 + 0x15f2) + 1;
  if (*(ushort *)(DAT_05635578 + 0x15f0) != uVar1) {
    do {
      uVar2 = uVar6 & 0xffff;
      uVar6 = uVar2 - *(ushort *)(lVar4 + 0x15f0);
      if (((*(uint *)(lVar4 + 0x15d0) <= uVar6) ||
          (puVar8 = *(undefined4 **)(*(long *)(lVar4 + 0x15d8) + (long)(int)uVar6 * 8),
          puVar8 == (undefined4 *)0x0)) && (puVar8 = &DAT_05639ecc, (DAT_05639ed0 & 1) == 0)) {
        iVar5 = __cxa_guard_acquire(&DAT_05639ed0);
        if (iVar5 != 0) {
          DAT_05639ecc = 0;
          __cxa_guard_release(&DAT_05639ed0);
        }
        puVar8 = &DAT_05639ecc;
      }
      local_60 = &PTR_LAB_04aa50d0;
      puStack_58 = puVar8;
      (**(code **)*param_1)(param_1,&local_60);
      uVar7 = uVar2;
      if (uVar2 <= *(ushort *)(lVar4 + 0x15f2)) {
        uVar7 = (uint)*(ushort *)(lVar4 + 0x15f2);
      }
      uVar6 = uVar2;
      do {
        while( true ) {
          if (uVar7 == uVar6) {
            uVar6 = uVar2 + 1;
            goto LAB_02b73624;
          }
          uVar3 = (uVar6 + 1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x15f0);
          if (uVar3 < *(uint *)(lVar4 + 0x15d0)) break;
          uVar6 = uVar6 + 1;
        }
        uVar6 = uVar6 + 1;
      } while (*(long *)(*(long *)(lVar4 + 0x15d8) + (long)(int)uVar3 * 8) == 0);
LAB_02b73624:
    } while ((uint)uVar1 != (uVar6 & 0xffff));
  }
  return;
}

