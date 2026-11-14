
/* WARNING: Removing unreachable block (ram,0x01c8a8e0) */

undefined8 FUN_01c8a820(int *param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  byte bVar13;
  long local_70;
  ulong uStack_68;
  
  if (*param_1 == 0) {
    return 0;
  }
  if ((**(char **)(*(long *)PTR_DAT_04bb21d0 + 0x2070) == '\0') ||
     (lVar12 = *(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88), 7 < *(byte *)(lVar12 + 0x225))) {
LAB_01c8a9b4:
    uVar8 = 0;
  }
  else {
    puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb21d8 + 0x3d0);
    if (((*PTR_DAT_04bc1448 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc1448), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc1440 = PTR_DAT_04bc1450 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc1448);
    }
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc1440);
      if ((uVar6 & 1) == 0) {
        puVar9 = (undefined8 *)0x0;
      }
    }
    local_70 = CONCAT44(local_70._4_4_,7);
    plVar10 = (long *)puVar9[8];
    (**(code **)(*plVar10 + 0x100))(plVar10);
    puVar4 = PTR_DAT_04bb5038;
    iVar5 = 0;
    plVar11 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
    do {
      bVar13 = *(byte *)(lVar12 + 0x225);
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      bVar3 = puVar4[iVar5];
      bVar2 = 0xff;
      if (bVar3 < 8) {
        bVar2 = bVar3;
      }
      if (bVar3 < 8 && bVar13 != bVar2) {
        plVar1 = (long *)(lVar12 + 0x18 + (ulong)bVar3 * 0x20);
        local_70 = *plVar1;
        if ((local_70 != 0) && ((char)plVar1[2] != -1)) {
          uStack_68 = (ulong)*(byte *)(plVar1 + 1);
          uVar6 = (**(code **)(*plVar11 + 0x100))(plVar11,&local_70);
          if ((uVar6 & 1) != 0) {
            local_70 = *plVar1;
            uStack_68 = (ulong)*(byte *)(plVar1 + 1);
            lVar7 = (**(code **)(*plVar10 + 0x120))(plVar10,&local_70);
            if (*(int *)(lVar7 + 4) != *param_1) goto LAB_01c8a9b4;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    uVar8 = 1;
  }
  return uVar8;
}

