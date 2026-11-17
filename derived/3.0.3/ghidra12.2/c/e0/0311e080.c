
void FUN_0311e080(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined *local_70;
  undefined4 local_68;
  
  puVar4 = PTR_DAT_04bc0cb8;
  iVar9 = 0;
  lVar1 = param_1 + 0x250;
  puVar2 = PTR_DAT_04bc0cb8 + 0x10;
  do {
    lVar5 = *(long *)(param_1 + 0x1068);
    plVar8 = *(long **)(lVar1 + (long)iVar9 * 0x1f8 + 8);
    if (lVar5 == 0) {
      if (plVar8 != (long *)0x0) {
        local_68 = 0x1f;
        local_70 = puVar2;
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
        (**(code **)(plVar8[3] + 0x208))(plVar8[1],0,0,lVar1 + (long)iVar9 * 0x1f8 + 0x1d8);
      }
      lVar5 = lVar1 + (long)iVar9 * 0x1f8;
      **(undefined1 **)(lVar5 + 0xd0) = 0;
      *(undefined1 *)(lVar5 + 0x160) = 0;
      if (((*(int *)(lVar5 + 0x170) != 1) && ((*(byte *)(lVar5 + 0x88) >> 1 & 1) != 0)) &&
         (*(int *)(lVar5 + 0x1b0) == -1)) {
        *(undefined4 *)(lVar5 + 0x1b0) = 1;
      }
    }
    else {
      if (plVar8 != (long *)0x0) {
        local_68 = 0x1f;
        local_70 = puVar4 + 0x10;
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
        (**(code **)(plVar8[3] + 0x208))(plVar8[1],0,0,lVar5 + 0x1bf38);
      }
      puVar6 = (uint *)(lVar1 + (long)iVar9 * 0x1f8 + 0x68);
      uVar3 = *puVar6;
      if (uVar3 != 0xffffffff) {
        if (uVar3 < 0x10e) {
          lVar5 = *(long *)(param_1 + 0x1068) + 8;
          lVar7 = lVar5 + (ulong)uVar3 * 0x1a8;
          if (*(int *)(lVar7 + 0x1a0) != 0) {
            lVar5 = lVar5 + (ulong)uVar3 * 0x1a8;
            **(undefined1 **)(lVar5 + 0x60) = 0;
            *(undefined1 *)(lVar5 + 0xf0) = 0;
            if (((*(int *)(lVar5 + 0x100) != 1) && ((*(byte *)(lVar5 + 0x18) >> 1 & 1) != 0)) &&
               (*(int *)(lVar5 + 0x140) == -1)) {
              *(undefined4 *)(lVar5 + 0x140) = 1;
            }
            *(undefined4 *)(lVar7 + 0x1a0) = 0;
          }
        }
        *puVar6 = 0xffffffff;
      }
    }
    lVar5 = (long)iVar9;
    iVar9 = iVar9 + 1;
    **(undefined1 **)(lVar1 + lVar5 * 0x1f8 + 0x18) = 0;
  } while (iVar9 != 7);
  return;
}

