
/* WARNING: Removing unreachable block (ram,0x02e1de98) */
/* WARNING: Removing unreachable block (ram,0x02e1def8) */

undefined8 * FUN_02e1ddac(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  
  uVar2 = *(uint *)(param_1 + 0x228);
  if (*(int *)(param_1 + 0x210) == -1) {
LAB_02e1de68:
    uVar5 = FUN_02e1f550(uVar2);
    if ((uVar5 & 1) == 0) {
      if (uVar2 - 0x2d < 2) {
        puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x90);
        if (((*PTR_DAT_04bc7610 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7610), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bc7608 = PTR_DAT_04bb7c30 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc7610);
        }
        if (puVar4 != (undefined8 *)0x0) {
          pcVar7 = *(code **)*puVar4;
          puVar6 = PTR_DAT_04bc7608;
          goto LAB_02e1df24;
        }
      }
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x88);
      if (((*PTR_DAT_04bc8628 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8628), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bc8620 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc8628);
      }
      if (puVar4 != (undefined8 *)0x0) {
        pcVar7 = *(code **)*puVar4;
        puVar6 = PTR_DAT_04bc8620;
        goto LAB_02e1df24;
      }
    }
    puVar4 = (undefined8 *)0x0;
  }
  else {
    if (uVar2 == 0xffffffff) {
LAB_02e1de0c:
      iVar3 = -1;
    }
    else {
      uVar1 = uVar2;
      if (0x81 < uVar2) {
        uVar1 = 0;
      }
      if ((&DAT_05693d00)[(int)uVar1] == -1) goto LAB_02e1de0c;
      uVar1 = uVar2;
      if (0x81 < uVar2) {
        uVar1 = 0;
      }
      iVar3 = (&DAT_05693d00)[(int)uVar1];
    }
    if (*(int *)(param_1 + 0x210) != iVar3) goto LAB_02e1de68;
    puVar4 = (undefined8 *)
             FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),
                          *(int *)(param_1 + 0x210),PTR_DAT_04bb32e0);
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (((*PTR_DAT_04bb7c40 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7c40), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb7c38 = PTR_DAT_04bb7c48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7c40);
    }
    pcVar7 = *(code **)*puVar4;
    puVar6 = PTR_DAT_04bb7c38;
LAB_02e1df24:
    uVar5 = (*pcVar7)(puVar4,puVar6);
    if ((uVar5 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}

